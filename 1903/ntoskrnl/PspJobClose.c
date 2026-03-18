/*
 * XREFs of PspJobClose @ 0x1406E0DB0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     PspHardDereferenceSiloWorker @ 0x140306C74 (PspHardDereferenceSiloWorker.c)
 *     PspUnlockJob @ 0x140611910 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x140611950 (PspLockJobExclusive.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x140615754 (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1406E0F14 (PspTerminateAllProcessesInJobHierarchy.c)
 */

void __fastcall PspJobClose(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  char v4; // di
  struct _KTHREAD *CurrentThread; // rsi
  void *v7; // rdi

  v4 = 1;
  if ( a4 <= 1 )
  {
    CurrentThread = KeGetCurrentThread();
    _InterlockedOr((volatile signed __int32 *)(a2 + 1304), 1u);
    PspLockJobExclusive(a2, (__int64)CurrentThread);
    if ( (*(_DWORD *)(a2 + 256) & 0x2000) != 0 )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a2 + 1304), 0x1Du)
        || (*(_DWORD *)(a2 + 1304) & 0x40000000) == 0 )
      {
        v4 = 0;
      }
      PspUnlockJob(a2, (__int64)CurrentThread);
      PspTerminateAllProcessesInJobHierarchy((PRKEVENT)a2);
      PspLockJobExclusive(a2, (__int64)CurrentThread);
      if ( v4 )
        PspHardDereferenceSiloWorker(a2);
    }
    ExAcquirePushLockExclusiveEx(a2 + 1032, 0LL);
    v7 = *(void **)(a2 + 456);
    *(_QWORD *)(a2 + 456) = 0LL;
    PspUnlockJobMemoryLimitsExclusive(a2, 0LL, 0LL);
    PspUnlockJob(a2, (__int64)CurrentThread);
    if ( v7 )
      ObfDereferenceObjectWithTag(v7, 0x624A7350u);
  }
}
