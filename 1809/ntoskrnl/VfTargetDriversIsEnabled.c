/*
 * XREFs of VfTargetDriversIsEnabled @ 0x140935AD4
 * Callers:
 *     PipDmgGetDriverDmarCompatLevel @ 0x14070A2A4 (PipDmgGetDriverDmarCompatLevel.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x1409318A0 (ViIrpCheckKernelAddressForIrp.c)
 *     VfPendingShouldForce @ 0x140934994 (VfPendingShouldForce.c)
 *     VfCheckUserHandle @ 0x14093A01C (VfCheckUserHandle.c)
 *     ViWdBeforeCallDriver @ 0x14093F7A0 (ViWdBeforeCallDriver.c)
 *     VerifierExInitializeLookasideListEx @ 0x14093FC00 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x14093FD50 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x14093FE70 (VerifierExInitializePagedLookasideList.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x1409359E8 (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall VfTargetDriversIsEnabled(unsigned __int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !VfSafeMode && ViTargetInitialized )
    LOBYTE(v1) = VfTargetDriversGetVerifierData(a1) != 0;
  return v1;
}
