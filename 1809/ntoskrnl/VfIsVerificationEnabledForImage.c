/*
 * XREFs of VfIsVerificationEnabledForImage @ 0x140309C00
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x1408495EC (KsepPatchDriverImportsTable.c)
 * Callees:
 *     ViIsDriverSuspectForVerifier @ 0x14092269C (ViIsDriverSuspectForVerifier.c)
 *     VfDriverLock @ 0x1409226E0 (VfDriverLock.c)
 *     VfDriverUnlock @ 0x140929154 (VfDriverUnlock.c)
 */

__int64 __fastcall VfIsVerificationEnabledForImage(__int64 a1)
{
  VfDriverLock();
  LODWORD(a1) = ViIsDriverSuspectForVerifier(a1);
  VfDriverUnlock();
  return (unsigned int)a1;
}
