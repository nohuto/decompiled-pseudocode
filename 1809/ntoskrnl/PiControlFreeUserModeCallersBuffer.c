/*
 * XREFs of PiControlFreeUserModeCallersBuffer @ 0x140006AF0
 * Callers:
 *     PiControlGetPropertyData @ 0x1405874A0 (PiControlGetPropertyData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x140595154 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x14059530C (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMCapturePropertyInputData @ 0x1405979C0 (PiCMCapturePropertyInputData.c)
 *     PiCMReleasePropertyInputData @ 0x140597C80 (PiCMReleasePropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140597CE0 (PiControlGetDeviceInterfaceEnabled.c)
 *     NtPlugPlayControl @ 0x140597E10 (NtPlugPlayControl.c)
 *     PiControlGetSetDeviceStatus @ 0x14059BD40 (PiControlGetSetDeviceStatus.c)
 *     PiCMReleaseObjectInputData @ 0x14059D6AC (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x14059D6DC (PiCMCaptureObjectInputData.c)
 *     PiCMGetDeviceInterfaceList @ 0x14059F68C (PiCMGetDeviceInterfaceList.c)
 *     PiCMCaptureInterfaceListInputData @ 0x14059F850 (PiCMCaptureInterfaceListInputData.c)
 *     PiCMReleaseRegistryInputData @ 0x1406A7204 (PiCMReleaseRegistryInputData.c)
 *     PiCMCaptureRegistryInputData @ 0x1406A72C0 (PiCMCaptureRegistryInputData.c)
 *     PiCMGetDeviceIdList @ 0x1406BB694 (PiCMGetDeviceIdList.c)
 *     PiCMCaptureDeviceListInputData @ 0x1406BBA78 (PiCMCaptureDeviceListInputData.c)
 *     PiControlGetDeviceDepth @ 0x1406C8930 (PiControlGetDeviceDepth.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1406D5104 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x1406D5794 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiControlGetRelatedDevice @ 0x1406F8710 (PiControlGetRelatedDevice.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x14083604C (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x1408364D8 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiCMCreateDevice @ 0x1408367D4 (PiCMCreateDevice.c)
 *     PiCMRegisterDeviceInterface @ 0x140838A50 (PiCMRegisterDeviceInterface.c)
 *     PiControlQueryAndRemoveDevice @ 0x14083BC20 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x14083BD80 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x14083BFA0 (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x14083C0E0 (PiControlStartDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall PiControlFreeUserModeCallersBuffer(char a1, void *a2)
{
  if ( a1 )
  {
    if ( a2 )
      ExFreePoolWithTag(a2, 0);
  }
}
