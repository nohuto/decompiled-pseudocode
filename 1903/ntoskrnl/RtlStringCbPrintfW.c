/*
 * XREFs of RtlStringCbPrintfW @ 0x1400040E8
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14034793C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x1405B2190 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1405C5658 (EtwpGetSecurityDescriptorByGuid.c)
 *     IopGetLegacyVetoListDrivers @ 0x1405C6194 (IopGetLegacyVetoListDrivers.c)
 *     ExProcessorCounterSetCallback @ 0x1405C8BC0 (ExProcessorCounterSetCallback.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1406269A0 (PfSnOpenVolumesForPrefetch.c)
 *     WmipInsertStaticNames @ 0x140668FE4 (WmipInsertStaticNames.c)
 *     PopDiagTracePowerRequestCreate @ 0x14069F53C (PopDiagTracePowerRequestCreate.c)
 *     PfSnGetPrefetchInstructions @ 0x1406B4288 (PfSnGetPrefetchInstructions.c)
 *     EtwpRealtimeCreateLogfile @ 0x1406B7D7C (EtwpRealtimeCreateLogfile.c)
 *     EtwpCreateNtFileName @ 0x1406B9078 (EtwpCreateNtFileName.c)
 *     EtwpExpandFileName @ 0x1406B9A58 (EtwpExpandFileName.c)
 *     EtwpGenerateFileName @ 0x1406BA198 (EtwpGenerateFileName.c)
 *     WmipSecurityMethod @ 0x1406CF680 (WmipSecurityMethod.c)
 *     PfSnOperationProcess @ 0x1406E6B68 (PfSnOperationProcess.c)
 *     PfpSourceGetPrefetchSupport @ 0x1406F72D4 (PfpSourceGetPrefetchSupport.c)
 *     PiNormalizeDeviceText @ 0x1406FE3AC (PiNormalizeDeviceText.c)
 *     MiDriverLoadSucceeded @ 0x14070E4FC (MiDriverLoadSucceeded.c)
 *     WmipPrepareWnodeSI @ 0x140711A20 (WmipPrepareWnodeSI.c)
 *     PiBuildDeviceNodeInstancePath @ 0x14071A83C (PiBuildDeviceNodeInstancePath.c)
 *     PnpUnloadAttachedDriver @ 0x1407306D8 (PnpUnloadAttachedDriver.c)
 *     PipMakeGloballyUniqueId @ 0x140737660 (PipMakeGloballyUniqueId.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x140746080 (IoWMIDeviceObjectToInstanceName.c)
 *     EtwpEnableAutoLoggerProvider @ 0x1407486C4 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140748D14 (EtwpGetAutoLoggerProviderFilter.c)
 *     CmpCreatePerfKeys @ 0x14075E3E0 (CmpCreatePerfKeys.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x14076B008 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpEnumerateAutologgerPath @ 0x14076D7A4 (EtwpEnumerateAutologgerPath.c)
 *     PpmWmiRegisterInfo @ 0x14077D694 (PpmWmiRegisterInfo.c)
 *     SepSetSystemPaths @ 0x140780E34 (SepSetSystemPaths.c)
 *     SepReadAndPopulateCapes @ 0x14078500C (SepReadAndPopulateCapes.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140861A70 (PipServiceInstanceToDeviceInstance.c)
 *     KiSynchCounterSetCallback @ 0x14087EF50 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x14087F070 (KiSynchNumaCounterSetCallback.c)
 *     PopDirectedDripsDiagCreateBlockerEntryBoolean @ 0x1408B7C38 (PopDirectedDripsDiagCreateBlockerEntryBoolean.c)
 *     PopDirectedDripsDiagCreateBlockerEntryULong @ 0x1408B7CA4 (PopDirectedDripsDiagCreateBlockerEntryULong.c)
 *     WmipIncludeStaticNames @ 0x1408F0C1C (WmipIncludeStaticNames.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1408F7108 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1408F72F0 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1408F7DE8 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1408F8214 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1408F8708 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x1408FDBD4 (EtwpGetAutoLoggerEventNameFilter.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x1408FE130 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     sub_140918E00 @ 0x140918E00 (sub_140918E00.c)
 *     BiGetPhysicalDriveName @ 0x14092F5BC (BiGetPhysicalDriveName.c)
 *     SiGetEfiSystemDevice @ 0x140932F2C (SiGetEfiSystemDevice.c)
 *     VhdInitialize @ 0x140A0F6E8 (VhdInitialize.c)
 *     CreateSystemRootLink @ 0x140A1D990 (CreateSystemRootLink.c)
 *     MfgInitSystem @ 0x140A22314 (MfgInitSystem.c)
 *     PoFxRegisterDebugger @ 0x140A22614 (PoFxRegisterDebugger.c)
 *     VhdiGetVolumeNumber @ 0x140A3EEAC (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140A3F040 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x140A3F940 (RamdiskStart.c)
 * Callees:
 *     _vsnwprintf @ 0x14019F320 (_vsnwprintf.c)
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
