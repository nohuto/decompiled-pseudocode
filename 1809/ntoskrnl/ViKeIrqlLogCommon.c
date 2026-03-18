/*
 * XREFs of ViKeIrqlLogCommon @ 0x14093AEAC
 * Callers:
 *     VerifierKeReleaseQueuedSpinLock @ 0x1409325D0 (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierKeLowerIrql @ 0x140939CC0 (VerifierKeLowerIrql.c)
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x140939E70 (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 *     VerifierKeReleaseSpinLock @ 0x14093A230 (VerifierKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLock @ 0x14093A3A0 (VerifierPortKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLockNoXdv @ 0x14093AA60 (VerifierPortKeReleaseSpinLockNoXdv.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x14093B048 (ViKeRaiseIrqlSanityChecks.c)
 *     VerifierExReleaseFastMutex @ 0x1409421D0 (VerifierExReleaseFastMutex.c)
 *     ViExAcquireFastMutexCommon @ 0x140942644 (ViExAcquireFastMutexCommon.c)
 *     ViExTryToAcquireFastMutexCommon @ 0x1409427A8 (ViExTryToAcquireFastMutexCommon.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1400CCC90 (RtlCaptureStackBackTrace.c)
 */

void __fastcall ViKeIrqlLogCommon(__int64 a1, ULONG a2)
{
  PVOID *v2; // r8
  USHORT v4; // ax

  if ( a1 )
  {
    v2 = (PVOID *)(a1 + 16);
    *(_QWORD *)a1 = KeGetCurrentThread();
    *(_DWORD *)(a1 + 12) = MEMORY[0xFFFFF78000000320];
    if ( (VfOptionFlags & 0x40) != 0 )
    {
      *v2 = 0LL;
    }
    else
    {
      v4 = RtlCaptureStackBackTrace(a2, 5u, v2, 0LL);
      if ( v4 < 5u )
        *(_QWORD *)(a1 + 8LL * v4 + 16) = 0LL;
    }
  }
}
