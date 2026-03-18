/*
 * XREFs of RtlStringCbPrintfW @ 0x1400161B0
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140326054 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     PopDiagTracePowerRequestCreate @ 0x14058928C (PopDiagTracePowerRequestCreate.c)
 *     WmipInsertStaticNames @ 0x14059D964 (WmipInsertStaticNames.c)
 *     EtwpRealtimeCreateLogfile @ 0x1405C0F90 (EtwpRealtimeCreateLogfile.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1405C6050 (EtwpGetSecurityDescriptorByGuid.c)
 *     IopGetLegacyVetoListDrivers @ 0x1405C8B80 (IopGetLegacyVetoListDrivers.c)
 *     ExProcessorCounterSetCallback @ 0x1405CD7B0 (ExProcessorCounterSetCallback.c)
 *     WmipPrepareWnodeSI @ 0x140612888 (WmipPrepareWnodeSI.c)
 *     PfSnOpenVolumesForPrefetch @ 0x14065DC6C (PfSnOpenVolumesForPrefetch.c)
 *     PfSnGetPrefetchInstructions @ 0x140668838 (PfSnGetPrefetchInstructions.c)
 *     MiDriverLoadSucceeded @ 0x140681C04 (MiDriverLoadSucceeded.c)
 *     EtwpCreateNtFileName @ 0x14069A344 (EtwpCreateNtFileName.c)
 *     EtwpExpandFileName @ 0x14069AF88 (EtwpExpandFileName.c)
 *     WmipSecurityMethod @ 0x1406AAAA0 (WmipSecurityMethod.c)
 *     EtwpGenerateFileName @ 0x1406CF55C (EtwpGenerateFileName.c)
 *     PfSnOperationProcess @ 0x1406CF884 (PfSnOperationProcess.c)
 *     PiNormalizeDeviceText @ 0x1406FDD60 (PiNormalizeDeviceText.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1406FE954 (PiBuildDeviceNodeInstancePath.c)
 *     PnpUnloadAttachedDriver @ 0x140708934 (PnpUnloadAttachedDriver.c)
 *     PipMakeGloballyUniqueId @ 0x14070BF10 (PipMakeGloballyUniqueId.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x14071D930 (IoWMIDeviceObjectToInstanceName.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140723A18 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140724034 (EtwpGetAutoLoggerProviderFilter.c)
 *     CmpCreatePerfKeys @ 0x140732E2C (CmpCreatePerfKeys.c)
 *     SepReadAndPopulateCapes @ 0x140737098 (SepReadAndPopulateCapes.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x140741300 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpEnumerateAutologgerPath @ 0x140741C48 (EtwpEnumerateAutologgerPath.c)
 *     PpmWmiRegisterInfo @ 0x140757C14 (PpmWmiRegisterInfo.c)
 *     SepSetSystemPaths @ 0x140759F30 (SepSetSystemPaths.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1408276D0 (PipServiceInstanceToDeviceInstance.c)
 *     KiSynchCounterSetCallback @ 0x1408434F0 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x140843600 (KiSynchNumaCounterSetCallback.c)
 *     PfpSourceGetPrefetchSupport @ 0x140864E80 (PfpSourceGetPrefetchSupport.c)
 *     PopDirectedDripsDiagCreateBlockerEntryBoolean @ 0x14087B6D8 (PopDirectedDripsDiagCreateBlockerEntryBoolean.c)
 *     PopDirectedDripsDiagCreateBlockerEntryULong @ 0x14087B744 (PopDirectedDripsDiagCreateBlockerEntryULong.c)
 *     WmipIncludeStaticNames @ 0x1408B3758 (WmipIncludeStaticNames.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1408BA5F0 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1408BA7C0 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1408BB274 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1408BB680 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1408BBB3C (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x1408C09EC (EtwpGetAutoLoggerEventNameFilter.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x1408C0F30 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     sub_1408DB080 @ 0x1408DB080 (sub_1408DB080.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x1408EF540 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     BiGetPhysicalDriveName @ 0x1408F194C (BiGetPhysicalDriveName.c)
 *     SiGetEfiSystemDevice @ 0x1408F52D8 (SiGetEfiSystemDevice.c)
 *     IopInitializeBootDrivers @ 0x1409CB0BC (IopInitializeBootDrivers.c)
 *     CreateSystemRootLink @ 0x1409DA774 (CreateSystemRootLink.c)
 *     MfgInitSystem @ 0x1409DF10C (MfgInitSystem.c)
 *     PoFxRegisterDebugger @ 0x1409DF33C (PoFxRegisterDebugger.c)
 *     VhdiGetVolumeNumber @ 0x1409F9318 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x1409F9470 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x1409F9D3C (RamdiskStart.c)
 * Callees:
 *     _vsnwprintf @ 0x140194C00 (_vsnwprintf.c)
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  NTSTATUS v5; // esi
  unsigned __int64 v6; // rbx
  int v7; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = cbDest >> 1;
  v5 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v5 = -1073741811;
  if ( v5 < 0 )
  {
    if ( v3 )
      *pszDest = 0;
  }
  else
  {
    v6 = v3 - 1;
    v5 = 0;
    v7 = vsnwprintf(pszDest, v3 - 1, pszFormat, Args);
    if ( v7 < 0 )
      goto LABEL_9;
    if ( v7 == v6 )
    {
      pszDest[v6] = 0;
      return v5;
    }
    if ( v7 > v6 )
    {
LABEL_9:
      pszDest[v6] = 0;
      return -2147483643;
    }
  }
  return v5;
}
