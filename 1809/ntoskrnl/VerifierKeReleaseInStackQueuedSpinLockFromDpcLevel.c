/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140939FB0
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon @ 0x140939FF0 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon.c)
 *     VfDeadlockReleaseResource @ 0x14093C260 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel(ULONG_PTR BugCheckParameter3)
{
  VfDeadlockReleaseResource(*(_DWORD *)(BugCheckParameter3 + 8) & 0xFFFFFFFC);
  return VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon(BugCheckParameter3);
}
