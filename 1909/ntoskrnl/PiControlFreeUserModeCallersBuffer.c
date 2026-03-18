/*
 * XREFs of PiControlFreeUserModeCallersBuffer @ 0x140002850
 * Callers:
 *     PiCMCapturePropertyInputData @ 0x1405BD190 (PiCMCapturePropertyInputData.c)
 *     PiCMReleasePropertyInputData @ 0x1405BD450 (PiCMReleasePropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1405BD9C0 (PiControlGetDeviceInterfaceEnabled.c)
 *     NtPlugPlayControl @ 0x1405BDBA0 (NtPlugPlayControl.c)
 *     PiCMGetDeviceInterfaceList @ 0x1406272E8 (PiCMGetDeviceInterfaceList.c)
 *     PiCMCaptureInterfaceListInputData @ 0x140629EEC (PiCMCaptureInterfaceListInputData.c)
 *     PiControlGetRelatedDevice @ 0x14066FB40 (PiControlGetRelatedDevice.c)
 *     PiControlGetSetDeviceStatus @ 0x14066FE60 (PiControlGetSetDeviceStatus.c)
 *     PiControlGetPropertyData @ 0x140671A60 (PiControlGetPropertyData.c)
 *     PiCMReleaseRegistryInputData @ 0x1406CD204 (PiCMReleaseRegistryInputData.c)
 *     PiCMCaptureRegistryInputData @ 0x1406CD2B8 (PiCMCaptureRegistryInputData.c)
 *     PiCMReleaseObjectInputData @ 0x1406CF518 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406CF74C (PiCMCaptureObjectInputData.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x1406D300C (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1406D31CC (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMGetDeviceIdList @ 0x1406E0798 (PiCMGetDeviceIdList.c)
 *     PiCMCaptureDeviceListInputData @ 0x1406E0B9C (PiCMCaptureDeviceListInputData.c)
 *     PiControlGetDeviceDepth @ 0x1406EAD00 (PiControlGetDeviceDepth.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1406F7980 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x1406F8044 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140870108 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x140870594 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiCMCreateDevice @ 0x140870890 (PiCMCreateDevice.c)
 *     PiCMRegisterDeviceInterface @ 0x140872D30 (PiCMRegisterDeviceInterface.c)
 *     PiControlQueryAndRemoveDevice @ 0x140876460 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x1408765C0 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x1408767E0 (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x140876930 (PiControlStartDevice.c)
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
