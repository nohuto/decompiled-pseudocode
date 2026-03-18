/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockForDpc @ 0x140978520
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcCommon @ 0x140978560 (VerifierKeReleaseInStackQueuedSpinLockForDpcCommon.c)
 *     VfDeadlockReleaseResource @ 0x14097B688 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseInStackQueuedSpinLockForDpc(ULONG_PTR BugCheckParameter3)
{
  VfDeadlockReleaseResource(*(_DWORD *)(BugCheckParameter3 + 8) & 0xFFFFFFFC);
  return VerifierKeReleaseInStackQueuedSpinLockForDpcCommon(BugCheckParameter3);
}
