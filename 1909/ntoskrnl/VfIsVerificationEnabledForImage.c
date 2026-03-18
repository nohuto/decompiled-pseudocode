/*
 * XREFs of VfIsVerificationEnabledForImage @ 0x140326FD8
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x140882F4C (KsepPatchDriverImportsTable.c)
 * Callees:
 *     VfDriverLock @ 0x14096043C (VfDriverLock.c)
 *     ViIsDriverSuspectForVerifier @ 0x140964A78 (ViIsDriverSuspectForVerifier.c)
 *     VfDriverUnlock @ 0x140966674 (VfDriverUnlock.c)
 */

__int64 __fastcall VfIsVerificationEnabledForImage(__int64 a1)
{
  VfDriverLock();
  LODWORD(a1) = ViIsDriverSuspectForVerifier(a1);
  VfDriverUnlock();
  return (unsigned int)a1;
}
