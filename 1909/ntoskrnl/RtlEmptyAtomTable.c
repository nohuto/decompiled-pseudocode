/*
 * XREFs of RtlEmptyAtomTable @ 0x1408D10F0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     RtlpLockAtomTable @ 0x1405EC474 (RtlpLockAtomTable.c)
 *     RtlpFreeAtom @ 0x1406C607C (RtlpFreeAtom.c)
 *     RtlpFreeHandleForAtom @ 0x1406C60AC (RtlpFreeHandleForAtom.c)
 */

NTSTATUS __stdcall RtlEmptyAtomTable(PRTL_ATOM_TABLE AtomTable, BOOLEAN DeletePinned)
{
  unsigned int v5; // ebp
  _RTL_ATOM_TABLE_ENTRY **i; // r15
  __int64 *v7; // rsi
  __int64 v8; // rdx
  _QWORD **v9; // r14
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rbx

  if ( !RtlpLockAtomTable(AtomTable) )
    return -1073741811;
  v5 = 0;
  for ( i = AtomTable->Buckets; v5 < AtomTable->NumberOfBuckets; ++v5 )
  {
    v7 = (__int64 *)i++;
    while ( 1 )
    {
      v12 = *v7;
      if ( !*v7 )
        break;
      if ( DeletePinned || (*(_BYTE *)(v12 + 38) & 1) == 0 )
      {
        v8 = *v7;
        *v7 = *(_QWORD *)v12;
        *(_QWORD *)v12 = 0LL;
        RtlpFreeHandleForAtom((__int64)AtomTable, v8);
        v9 = (_QWORD **)(v12 + 16);
        while ( 1 )
        {
          v10 = *v9;
          if ( *v9 == v9 )
            break;
          if ( (_QWORD **)v10[1] != v9 || (v11 = (_QWORD *)*v10, *(_QWORD **)(*v10 + 8LL) != v10) )
            __fastfail(3u);
          *v9 = v11;
          v11[1] = v9;
          RtlpFreeAtom((__int64)v10);
        }
        RtlpFreeAtom(v12);
      }
      else
      {
        v7 = (__int64 *)*v7;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AtomTable->PushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AtomTable->PushLock);
  KeAbPostRelease((ULONG_PTR)&AtomTable->PushLock);
  KeLeaveCriticalRegion();
  return 0;
}
