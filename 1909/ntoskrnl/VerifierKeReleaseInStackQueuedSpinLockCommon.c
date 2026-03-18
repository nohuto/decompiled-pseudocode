/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x1409784A0
 * Callers:
 *     VerifierKeReleaseInStackQueuedSpinLock @ 0x140978460 (VerifierKeReleaseInStackQueuedSpinLock.c)
 *     VerifierKeReleaseInStackQueuedSpinLockNoReboot @ 0x1409786A0 (VerifierKeReleaseInStackQueuedSpinLockNoReboot.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
 *     ViKeIrqlLogCommon @ 0x1409794DC (ViKeIrqlLogCommon.c)
 *     ViKeLowerIrqlSanityChecks @ 0x140979548 (ViKeLowerIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeReleaseInStackQueuedSpinLockCommon(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG_PTR v2; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // rbx

  v2 = BugCheckParameter3;
  CurrentIrql = KeGetCurrentIrql();
  if ( (MmVerifierData & 2) != 0 && CurrentIrql < 2u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x32uLL, CurrentIrql, BugCheckParameter3, 0LL);
  LOBYTE(a2) = *(_BYTE *)(v2 + 16);
  LOBYTE(BugCheckParameter3) = CurrentIrql;
  v4 = ViKeLowerIrqlSanityChecks(BugCheckParameter3, a2);
  ((void (__fastcall *)(ULONG_PTR))pXdvKeReleaseInStackQueuedSpinLock)(v2);
  return ViKeIrqlLogCommon(v4, 1LL);
}
