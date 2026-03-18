/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x140939E70
 * Callers:
 *     VerifierKeReleaseInStackQueuedSpinLock @ 0x140939E30 (VerifierKeReleaseInStackQueuedSpinLock.c)
 *     VerifierKeReleaseInStackQueuedSpinLockNoReboot @ 0x14093A070 (VerifierKeReleaseInStackQueuedSpinLockNoReboot.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x14092FD84 (VerifierBugCheckIfAppropriate.c)
 *     ViKeIrqlLogCommon @ 0x14093AEAC (ViKeIrqlLogCommon.c)
 *     ViKeLowerIrqlSanityChecks @ 0x14093AF18 (ViKeLowerIrqlSanityChecks.c)
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
