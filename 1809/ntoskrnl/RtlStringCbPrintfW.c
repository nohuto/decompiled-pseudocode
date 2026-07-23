/*
 * XREFs of RtlStringCbPrintfW @ 0x1400161B0
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140326344 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     PopDiagTracePowerRequestCreate @ 0x14058A28C (PopDiagTracePowerRequestCreate.c)
 *     WmipInsertStaticNames @ 0x14059E964 (WmipInsertStaticNames.c)
 *     EtwpRealtimeCreateLogfile @ 0x1405C1F90 (EtwpRealtimeCreateLogfile.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1405C7050 (EtwpGetSecurityDescriptorByGuid.c)
 *     IopGetLegacyVetoListDrivers @ 0x1405C9B80 (IopGetLegacyVetoListDrivers.c)
 *     ExProcessorCounterSetCallback @ 0x1405CE7B0 (ExProcessorCounterSetCallback.c)
 *     WmipPrepareWnodeSI @ 0x140613888 (WmipPrepareWnodeSI.c)
 *     PfSnOpenVolumesForPrefetch @ 0x14065EE0C (PfSnOpenVolumesForPrefetch.c)
 *     PfSnGetPrefetchInstructions @ 0x1406699D8 (PfSnGetPrefetchInstructions.c)
 *     MiDriverLoadSucceeded @ 0x140682DA4 (MiDriverLoadSucceeded.c)
 *     EtwpCreateNtFileName @ 0x14069B4E4 (EtwpCreateNtFileName.c)
 *     EtwpExpandFileName @ 0x14069C128 (EtwpExpandFileName.c)
 *     WmipSecurityMethod @ 0x1406ABD20 (WmipSecurityMethod.c)
 *     EtwpGenerateFileName @ 0x1406D07DC (EtwpGenerateFileName.c)
 *     PfSnOperationProcess @ 0x1406D0B04 (PfSnOperationProcess.c)
 *     PiNormalizeDeviceText @ 0x1406FEFE0 (PiNormalizeDeviceText.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1406FFBD4 (PiBuildDeviceNodeInstancePath.c)
 *     PnpUnloadAttachedDriver @ 0x140709BB4 (PnpUnloadAttachedDriver.c)
 *     PipMakeGloballyUniqueId @ 0x14070D190 (PipMakeGloballyUniqueId.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x14071EBB0 (IoWMIDeviceObjectToInstanceName.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140724C98 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x1407252B4 (EtwpGetAutoLoggerProviderFilter.c)
 *     CmpCreatePerfKeys @ 0x140733FFC (CmpCreatePerfKeys.c)
 *     SepReadAndPopulateCapes @ 0x140738268 (SepReadAndPopulateCapes.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x1407424D0 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpEnumerateAutologgerPath @ 0x140742E18 (EtwpEnumerateAutologgerPath.c)
 *     PpmWmiRegisterInfo @ 0x140758DE4 (PpmWmiRegisterInfo.c)
 *     SepSetSystemPaths @ 0x14075B100 (SepSetSystemPaths.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1408288B0 (PipServiceInstanceToDeviceInstance.c)
 *     KiSynchCounterSetCallback @ 0x140844730 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x140844840 (KiSynchNumaCounterSetCallback.c)
 *     PfpSourceGetPrefetchSupport @ 0x1408660C0 (PfpSourceGetPrefetchSupport.c)
 *     PopDirectedDripsDiagCreateBlockerEntryBoolean @ 0x14087C918 (PopDirectedDripsDiagCreateBlockerEntryBoolean.c)
 *     PopDirectedDripsDiagCreateBlockerEntryULong @ 0x14087C984 (PopDirectedDripsDiagCreateBlockerEntryULong.c)
 *     WmipIncludeStaticNames @ 0x1408B4998 (WmipIncludeStaticNames.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1408BB890 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1408BBA60 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1408BC514 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1408BC920 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1408BCDDC (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x1408C1C8C (EtwpGetAutoLoggerEventNameFilter.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x1408C21D0 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     sub_1408DC320 @ 0x1408DC320 (sub_1408DC320.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x1408F07E0 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     BiGetPhysicalDriveName @ 0x1408F2BEC (BiGetPhysicalDriveName.c)
 *     SiGetEfiSystemDevice @ 0x1408F6578 (SiGetEfiSystemDevice.c)
 *     IopInitializeBootDrivers @ 0x1409CC0BC (IopInitializeBootDrivers.c)
 *     CreateSystemRootLink @ 0x1409DB774 (CreateSystemRootLink.c)
 *     MfgInitSystem @ 0x1409E010C (MfgInitSystem.c)
 *     PoFxRegisterDebugger @ 0x1409E033C (PoFxRegisterDebugger.c)
 *     VhdiGetVolumeNumber @ 0x1409FA328 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x1409FA480 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x1409FAD4C (RamdiskStart.c)
 * Callees:
 *     _vsnwprintf @ 0x140194D60 (_vsnwprintf.c)
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
