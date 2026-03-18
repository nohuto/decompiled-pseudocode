/*
 * XREFs of RtlpAtomMapAtomToHandleEntry @ 0x1405EC8B0
 * Callers:
 *     RtlLookupAtomInAtomTable @ 0x1405EC260 (RtlLookupAtomInAtomTable.c)
 *     RtlpHashStringToAtom @ 0x1405EC4C0 (RtlpHashStringToAtom.c)
 *     RtlQueryAtomInAtomTable @ 0x1405EC620 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1406C5F90 (RtlDeleteAtomFromAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1406DD9E0 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExfUnblockPushLock @ 0x1401C0870 (ExfUnblockPushLock.c)
 *     ExpLookupHandleTableEntry @ 0x1405FBAD0 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1406A5224 (ExpBlockOnLockedHandleEntry.c)
 */

unsigned __int64 __fastcall RtlpAtomMapAtomToHandleEntry(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rdi
  signed __int64 *v5; // rbx
  signed __int64 v6; // r8
  __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = *(_QWORD *)(a1 + 16);
  if ( (_BYTE)a2
    && (v5 = (signed __int64 *)ExpLookupHandleTableEntry(*(_QWORD *)(a1 + 16), (unsigned int)(4 * a2))) != 0LL )
  {
    do
    {
      while ( 1 )
      {
        _m_prefetchw(v5);
        v6 = *v5;
        if ( (*v5 & 1) != 0 )
          break;
        if ( !v6 )
          goto LABEL_9;
        ExpBlockOnLockedHandleEntry(v4, v5, v6);
      }
    }
    while ( v6 != _InterlockedCompareExchange64(v5, v6 - 1, v6) );
    v7 = *(_QWORD *)(a1 + 16);
    v8 = (*v5 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
    _InterlockedExchangeAdd64(v5, 1uLL);
    _InterlockedOr(v10, 0);
    if ( *(_QWORD *)(v7 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(v7 + 48), 0LL);
    KeLeaveCriticalRegion();
    return v8;
  }
  else
  {
LABEL_9:
    KeLeaveCriticalRegion();
    return 0LL;
  }
}
