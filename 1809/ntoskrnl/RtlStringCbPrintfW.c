/*
 * XREFs of RtlStringCbPrintfW @ 0x1400161B0
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140326154 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     PopDiagTracePowerRequestCreate @ 0x14058928C (PopDiagTracePowerRequestCreate.c)
 *     WmipInsertStaticNames @ 0x14059D964 (WmipInsertStaticNames.c)
 *     EtwpRealtimeCreateLogfile @ 0x1405C0F90 (EtwpRealtimeCreateLogfile.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1405C6050 (EtwpGetSecurityDescriptorByGuid.c)
 *     IopGetLegacyVetoListDrivers @ 0x1405C8B80 (IopGetLegacyVetoListDrivers.c)
 *     ExProcessorCounterSetCallback @ 0x1405CD7B0 (ExProcessorCounterSetCallback.c)
 *     WmipPrepareWnodeSI @ 0x140612888 (WmipPrepareWnodeSI.c)
 *     PfSnOpenVolumesForPrefetch @ 0x14065DC4C (PfSnOpenVolumesForPrefetch.c)
 *     PfSnGetPrefetchInstructions @ 0x140668818 (PfSnGetPrefetchInstructions.c)
 *     MiDriverLoadSucceeded @ 0x140681BE4 (MiDriverLoadSucceeded.c)
 *     EtwpCreateNtFileName @ 0x14069A324 (EtwpCreateNtFileName.c)
 *     EtwpExpandFileName @ 0x14069AF68 (EtwpExpandFileName.c)
 *     WmipSecurityMethod @ 0x1406AAA80 (WmipSecurityMethod.c)
 *     EtwpGenerateFileName @ 0x1406CF53C (EtwpGenerateFileName.c)
 *     PfSnOperationProcess @ 0x1406CF864 (PfSnOperationProcess.c)
 *     PiNormalizeDeviceText @ 0x1406FDD40 (PiNormalizeDeviceText.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1406FE934 (PiBuildDeviceNodeInstancePath.c)
 *     PnpUnloadAttachedDriver @ 0x140708914 (PnpUnloadAttachedDriver.c)
 *     PipMakeGloballyUniqueId @ 0x14070BEF0 (PipMakeGloballyUniqueId.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x14071D910 (IoWMIDeviceObjectToInstanceName.c)
 *     EtwpEnableAutoLoggerProvider @ 0x1407239F8 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140724014 (EtwpGetAutoLoggerProviderFilter.c)
 *     CmpCreatePerfKeys @ 0x140732E0C (CmpCreatePerfKeys.c)
 *     SepReadAndPopulateCapes @ 0x140737078 (SepReadAndPopulateCapes.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x1407412E0 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpEnumerateAutologgerPath @ 0x140741C28 (EtwpEnumerateAutologgerPath.c)
 *     PpmWmiRegisterInfo @ 0x140757BF4 (PpmWmiRegisterInfo.c)
 *     SepSetSystemPaths @ 0x140759F10 (SepSetSystemPaths.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1408276B0 (PipServiceInstanceToDeviceInstance.c)
 *     KiSynchCounterSetCallback @ 0x1408434D0 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x1408435E0 (KiSynchNumaCounterSetCallback.c)
 *     PfpSourceGetPrefetchSupport @ 0x140864E60 (PfpSourceGetPrefetchSupport.c)
 *     PopDirectedDripsDiagCreateBlockerEntryBoolean @ 0x14087B6B8 (PopDirectedDripsDiagCreateBlockerEntryBoolean.c)
 *     PopDirectedDripsDiagCreateBlockerEntryULong @ 0x14087B724 (PopDirectedDripsDiagCreateBlockerEntryULong.c)
 *     WmipIncludeStaticNames @ 0x1408B3738 (WmipIncludeStaticNames.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1408BA5D0 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1408BA7A0 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1408BB254 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1408BB660 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1408BBB1C (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x1408C09CC (EtwpGetAutoLoggerEventNameFilter.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x1408C0F10 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     sub_1408DB060 @ 0x1408DB060 (sub_1408DB060.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x1408EF520 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     BiGetPhysicalDriveName @ 0x1408F192C (BiGetPhysicalDriveName.c)
 *     SiGetEfiSystemDevice @ 0x1408F52B8 (SiGetEfiSystemDevice.c)
 *     IopInitializeBootDrivers @ 0x1409CB0BC (IopInitializeBootDrivers.c)
 *     CreateSystemRootLink @ 0x1409DA774 (CreateSystemRootLink.c)
 *     MfgInitSystem @ 0x1409DF10C (MfgInitSystem.c)
 *     PoFxRegisterDebugger @ 0x1409DF33C (PoFxRegisterDebugger.c)
 *     VhdiGetVolumeNumber @ 0x1409F9328 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x1409F9480 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x1409F9D4C (RamdiskStart.c)
 * Callees:
 *     _vsnwprintf @ 0x140194C20 (_vsnwprintf.c)
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
