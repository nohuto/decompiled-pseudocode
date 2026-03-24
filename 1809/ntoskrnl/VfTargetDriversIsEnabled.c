/*
 * XREFs of VfTargetDriversIsEnabled @ 0x140934AD4
 * Callers:
 *     PipDmgGetDriverDmarCompatLevel @ 0x140709004 (PipDmgGetDriverDmarCompatLevel.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x1409308A0 (ViIrpCheckKernelAddressForIrp.c)
 *     VfPendingShouldForce @ 0x140933994 (VfPendingShouldForce.c)
 *     VfCheckUserHandle @ 0x14093901C (VfCheckUserHandle.c)
 *     ViWdBeforeCallDriver @ 0x14093E7A0 (ViWdBeforeCallDriver.c)
 *     VerifierExInitializeLookasideListEx @ 0x14093EC00 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x14093ED50 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x14093EE70 (VerifierExInitializePagedLookasideList.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x1409349E8 (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall VfTargetDriversIsEnabled(unsigned __int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !VfSafeMode && ViTargetInitialized )
    LOBYTE(v1) = VfTargetDriversGetVerifierData(a1) != 0;
  return v1;
}
