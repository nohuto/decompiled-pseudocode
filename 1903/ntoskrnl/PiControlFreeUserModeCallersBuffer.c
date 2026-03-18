/*
 * XREFs of PiControlFreeUserModeCallersBuffer @ 0x140002850
 * Callers:
 *     PiCMCapturePropertyInputData @ 0x1405BCDB0 (PiCMCapturePropertyInputData.c)
 *     PiCMReleasePropertyInputData @ 0x1405BD070 (PiCMReleasePropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1405BD5E0 (PiControlGetDeviceInterfaceEnabled.c)
 *     NtPlugPlayControl @ 0x1405BD7C0 (NtPlugPlayControl.c)
 *     PiCMGetDeviceInterfaceList @ 0x140623438 (PiCMGetDeviceInterfaceList.c)
 *     PiCMCaptureInterfaceListInputData @ 0x14062603C (PiCMCaptureInterfaceListInputData.c)
 *     PiControlGetPropertyData @ 0x1406A02E0 (PiControlGetPropertyData.c)
 *     PiControlGetRelatedDevice @ 0x1406A2660 (PiControlGetRelatedDevice.c)
 *     PiControlGetSetDeviceStatus @ 0x1406A2980 (PiControlGetSetDeviceStatus.c)
 *     PiControlGetDeviceDepth @ 0x1406A3390 (PiControlGetDeviceDepth.c)
 *     PiCMReleaseRegistryInputData @ 0x1406CE464 (PiCMReleaseRegistryInputData.c)
 *     PiCMCaptureRegistryInputData @ 0x1406CE518 (PiCMCaptureRegistryInputData.c)
 *     PiCMReleaseObjectInputData @ 0x1406D02A8 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406D04DC (PiCMCaptureObjectInputData.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x1406D3D1C (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1406D3EDC (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMGetDeviceIdList @ 0x1406DF488 (PiCMGetDeviceIdList.c)
 *     PiCMCaptureDeviceListInputData @ 0x1406DF88C (PiCMCaptureDeviceListInputData.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1406F5BC0 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x1406F6284 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140870A08 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x140870E94 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiCMCreateDevice @ 0x140871190 (PiCMCreateDevice.c)
 *     PiCMRegisterDeviceInterface @ 0x140873630 (PiCMRegisterDeviceInterface.c)
 *     PiControlQueryAndRemoveDevice @ 0x140876D60 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x140876EC0 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x1408770E0 (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x140877230 (PiControlStartDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PiControlFreeUserModeCallersBuffer(char a1, void *a2)
{
  if ( a1 )
  {
    if ( a2 )
      ExFreePoolWithTag(a2, 0);
  }
}
