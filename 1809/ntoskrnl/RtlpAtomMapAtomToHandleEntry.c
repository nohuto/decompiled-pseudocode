/*
 * XREFs of RtlpAtomMapAtomToHandleEntry @ 0x1405F6614
 * Callers:
 *     RtlLookupAtomInAtomTable @ 0x1405F6280 (RtlLookupAtomInAtomTable.c)
 *     RtlpHashStringToAtom @ 0x1405F64C0 (RtlpHashStringToAtom.c)
 *     RtlQueryAtomInAtomTable @ 0x1405F6840 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1406AE4F0 (RtlDeleteAtomFromAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1406B8F10 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExfUnblockPushLock @ 0x1401B75B0 (ExfUnblockPushLock.c)
 *     ExMapHandleToPointer @ 0x1405F66A0 (ExMapHandleToPointer.c)
 */

unsigned __int64 __fastcall RtlpAtomMapAtomToHandleEntry(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (volatile signed __int64 *)ExMapHandleToPointer(*(_QWORD *)(a1 + 16), (unsigned int)(4 * a2));
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    v6 = (*(__int64 *)v4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
    _InterlockedExchangeAdd64(v4, 1uLL);
    _InterlockedOr(v8, 0);
    if ( *(_QWORD *)(v5 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(v5 + 48), 0LL);
  }
  else
  {
    v6 = 0LL;
  }
  KeLeaveCriticalRegion();
  return v6;
}
