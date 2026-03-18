/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockForDpc @ 0x140939EF0
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcCommon @ 0x140939F30 (VerifierKeReleaseInStackQueuedSpinLockForDpcCommon.c)
 *     VfDeadlockReleaseResource @ 0x14093C260 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseInStackQueuedSpinLockForDpc(ULONG_PTR BugCheckParameter3)
{
  VfDeadlockReleaseResource(*(_DWORD *)(BugCheckParameter3 + 8) & 0xFFFFFFFC);
  return VerifierKeReleaseInStackQueuedSpinLockForDpcCommon(BugCheckParameter3);
}
