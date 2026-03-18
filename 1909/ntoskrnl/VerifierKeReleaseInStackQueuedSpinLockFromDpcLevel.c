/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1409785E0
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon @ 0x140978620 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon.c)
 *     VfDeadlockReleaseResource @ 0x14097B688 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel(ULONG_PTR BugCheckParameter3)
{
  VfDeadlockReleaseResource(*(_DWORD *)(BugCheckParameter3 + 8) & 0xFFFFFFFC);
  return VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon(BugCheckParameter3);
}
