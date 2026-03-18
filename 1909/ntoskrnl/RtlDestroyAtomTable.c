/*
 * XREFs of RtlDestroyAtomTable @ 0x1406C5E60
 * Callers:
 *     RtlDereferenceAtomTable @ 0x14011FCBC (RtlDereferenceAtomTable.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlpLockAtomTable @ 0x1405EC474 (RtlpLockAtomTable.c)
 *     ExpFreeHandleTable @ 0x14068622C (ExpFreeHandleTable.c)
 *     ExpRemoveHandleTable @ 0x1406863D4 (ExpRemoveHandleTable.c)
 *     RtlpFreeAtom @ 0x1406C607C (RtlpFreeAtom.c)
 */

NTSTATUS __stdcall RtlDestroyAtomTable(PRTL_ATOM_TABLE AtomTable)
{
  unsigned int v2; // ebp
  _RTL_ATOM_TABLE_ENTRY **i; // r14
  _RTL_ATOM_TABLE_ENTRY *v4; // rsi
  _RTL_ATOM_TABLE_ENTRY *v5; // r15
  _HANDLE_TABLE *ExHandleTable; // rbx
  _RTL_ATOM_TABLE_REFERENCE *p_Reference; // r12
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v10; // rax

  if ( _InterlockedExchangeAdd(&AtomTable->ReferenceCount, 0xFFFFFFFF) != 1 )
    return 0;
  if ( RtlpLockAtomTable(AtomTable) )
  {
    v2 = 0;
    for ( i = AtomTable->Buckets; v2 < AtomTable->NumberOfBuckets; ++v2 )
    {
      v4 = *i;
      *i++ = 0LL;
      while ( 1 )
      {
        v5 = v4;
        if ( !v4 )
          break;
        v4 = v4->HashLink;
        p_Reference = &v5->Reference;
        v5->HashLink = 0LL;
        while ( 1 )
        {
          Flink = p_Reference->LowBoxList.Flink;
          if ( (_RTL_ATOM_TABLE_REFERENCE *)p_Reference->LowBoxList.Flink == p_Reference )
            break;
          if ( (_RTL_ATOM_TABLE_REFERENCE *)Flink->Blink != p_Reference
            || (v10 = Flink->Flink, Flink->Flink->Blink != Flink) )
          {
            __fastfail(3u);
          }
          p_Reference->LowBoxList.Flink = v10;
          v10->Blink = &p_Reference->LowBoxList;
          RtlpFreeAtom(Flink);
        }
        RtlpFreeAtom(v5);
      }
    }
    AtomTable->Signature = 0;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AtomTable->PushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&AtomTable->PushLock);
    KeAbPostRelease((ULONG_PTR)&AtomTable->PushLock);
    KeLeaveCriticalRegion();
    ExHandleTable = AtomTable->ExHandleTable;
    ExpRemoveHandleTable((__int64)ExHandleTable);
    ExpFreeHandleTable(ExHandleTable);
    memset(AtomTable, 0, sizeof(struct _RTL_ATOM_TABLE));
    RtlpFreeAtom(AtomTable);
    return 0;
  }
  return -1073741811;
}
