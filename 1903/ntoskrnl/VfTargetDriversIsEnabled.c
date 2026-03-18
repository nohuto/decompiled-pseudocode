/*
 * XREFs of VfTargetDriversIsEnabled @ 0x1409740A8
 * Callers:
 *     PipDmgGetDriverDmarCompatLevel @ 0x140775FD0 (PipDmgGetDriverDmarCompatLevel.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x14096F128 (ViIrpCheckKernelAddressForIrp.c)
 *     VfPendingShouldForce @ 0x140972FD4 (VfPendingShouldForce.c)
 *     VfCheckUserHandle @ 0x140977664 (VfCheckUserHandle.c)
 *     ViWdBeforeCallDriver @ 0x14097E034 (ViWdBeforeCallDriver.c)
 *     VerifierExInitializeLookasideListEx @ 0x14097E490 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x14097E5E0 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x14097E700 (VerifierExInitializePagedLookasideList.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140973FBC (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall VfTargetDriversIsEnabled(unsigned __int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !VfSafeMode && ViTargetInitialized )
    LOBYTE(v1) = VfTargetDriversGetVerifierData(a1) != 0;
  return v1;
}
