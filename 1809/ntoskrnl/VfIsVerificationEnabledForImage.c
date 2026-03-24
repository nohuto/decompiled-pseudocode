/*
 * XREFs of VfIsVerificationEnabledForImage @ 0x140309A10
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x14084838C (KsepPatchDriverImportsTable.c)
 * Callees:
 *     ViIsDriverSuspectForVerifier @ 0x14092169C (ViIsDriverSuspectForVerifier.c)
 *     VfDriverLock @ 0x1409216E0 (VfDriverLock.c)
 *     VfDriverUnlock @ 0x140928154 (VfDriverUnlock.c)
 */

__int64 __fastcall VfIsVerificationEnabledForImage(__int64 a1)
{
  VfDriverLock();
  LODWORD(a1) = ViIsDriverSuspectForVerifier(a1);
  VfDriverUnlock();
  return (unsigned int)a1;
}
