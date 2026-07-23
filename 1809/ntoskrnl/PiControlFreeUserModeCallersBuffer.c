/*
 * XREFs of PiControlFreeUserModeCallersBuffer @ 0x140006AF0
 * Callers:
 *     PiControlGetPropertyData @ 0x1405884A0 (PiControlGetPropertyData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x140596154 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x14059630C (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMCapturePropertyInputData @ 0x1405989C0 (PiCMCapturePropertyInputData.c)
 *     PiCMReleasePropertyInputData @ 0x140598C80 (PiCMReleasePropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140598CE0 (PiControlGetDeviceInterfaceEnabled.c)
 *     NtPlugPlayControl @ 0x140598E10 (NtPlugPlayControl.c)
 *     PiControlGetSetDeviceStatus @ 0x14059CD40 (PiControlGetSetDeviceStatus.c)
 *     PiCMReleaseObjectInputData @ 0x14059E6AC (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x14059E6DC (PiCMCaptureObjectInputData.c)
 *     PiCMGetDeviceInterfaceList @ 0x1405A068C (PiCMGetDeviceInterfaceList.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1405A0850 (PiCMCaptureInterfaceListInputData.c)
 *     PiCMReleaseRegistryInputData @ 0x1406A8484 (PiCMReleaseRegistryInputData.c)
 *     PiCMCaptureRegistryInputData @ 0x1406A8540 (PiCMCaptureRegistryInputData.c)
 *     PiCMGetDeviceIdList @ 0x1406BC914 (PiCMGetDeviceIdList.c)
 *     PiCMCaptureDeviceListInputData @ 0x1406BCCF8 (PiCMCaptureDeviceListInputData.c)
 *     PiControlGetDeviceDepth @ 0x1406C9BB0 (PiControlGetDeviceDepth.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1406D6384 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x1406D6A14 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiControlGetRelatedDevice @ 0x1406F9990 (PiControlGetRelatedDevice.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x14083728C (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x140837718 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiCMCreateDevice @ 0x140837A14 (PiCMCreateDevice.c)
 *     PiCMRegisterDeviceInterface @ 0x140839C90 (PiCMRegisterDeviceInterface.c)
 *     PiControlQueryAndRemoveDevice @ 0x14083CE60 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x14083CFC0 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x14083D1E0 (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x14083D320 (PiControlStartDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall PiControlFreeUserModeCallersBuffer(char a1, void *a2)
{
  if ( a1 )
  {
    if ( a2 )
      ExFreePoolWithTag(a2, 0);
  }
}
