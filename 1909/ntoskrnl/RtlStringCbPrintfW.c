/*
 * XREFs of RtlStringCbPrintfW @ 0x140004178
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14034739C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x1405B256C (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1405C5B58 (EtwpGetSecurityDescriptorByGuid.c)
 *     IopGetLegacyVetoListDrivers @ 0x1405C6694 (IopGetLegacyVetoListDrivers.c)
 *     ExProcessorCounterSetCallback @ 0x1405C90C0 (ExProcessorCounterSetCallback.c)
 *     PfSnOpenVolumesForPrefetch @ 0x14062A850 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnGetPrefetchInstructions @ 0x1406715CC (PfSnGetPrefetchInstructions.c)
 *     PopDiagTracePowerRequestCreate @ 0x140673170 (PopDiagTracePowerRequestCreate.c)
 *     WmipInsertStaticNames @ 0x140696404 (WmipInsertStaticNames.c)
 *     EtwpRealtimeCreateLogfile @ 0x1406AD46C (EtwpRealtimeCreateLogfile.c)
 *     EtwpCreateNtFileName @ 0x1406AE808 (EtwpCreateNtFileName.c)
 *     EtwpExpandFileName @ 0x1406AF148 (EtwpExpandFileName.c)
 *     EtwpGenerateFileName @ 0x1406AF750 (EtwpGenerateFileName.c)
 *     WmipSecurityMethod @ 0x1406CE8F0 (WmipSecurityMethod.c)
 *     PfSnOperationProcess @ 0x1406F09C4 (PfSnOperationProcess.c)
 *     PfpSourceGetPrefetchSupport @ 0x1406F9094 (PfpSourceGetPrefetchSupport.c)
 *     PiNormalizeDeviceText @ 0x14070018C (PiNormalizeDeviceText.c)
 *     MiDriverLoadSucceeded @ 0x1407102DC (MiDriverLoadSucceeded.c)
 *     WmipPrepareWnodeSI @ 0x140713800 (WmipPrepareWnodeSI.c)
 *     PiBuildDeviceNodeInstancePath @ 0x14071C62C (PiBuildDeviceNodeInstancePath.c)
 *     PnpUnloadAttachedDriver @ 0x140732938 (PnpUnloadAttachedDriver.c)
 *     PipMakeGloballyUniqueId @ 0x1407398BC (PipMakeGloballyUniqueId.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x140747F80 (IoWMIDeviceObjectToInstanceName.c)
 *     EtwpEnableAutoLoggerProvider @ 0x14074B208 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x14074B858 (EtwpGetAutoLoggerProviderFilter.c)
 *     CmpCreatePerfKeys @ 0x140762CE0 (CmpCreatePerfKeys.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x14076DE5C (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407705F8 (EtwpEnumerateAutologgerPath.c)
 *     PpmWmiRegisterInfo @ 0x1407800B4 (PpmWmiRegisterInfo.c)
 *     SepSetSystemPaths @ 0x140783194 (SepSetSystemPaths.c)
 *     SepReadAndPopulateCapes @ 0x14078736C (SepReadAndPopulateCapes.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140861170 (PipServiceInstanceToDeviceInstance.c)
 *     KiSynchCounterSetCallback @ 0x14087E650 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x14087E770 (KiSynchNumaCounterSetCallback.c)
 *     PopDirectedDripsDiagCreateBlockerEntryBoolean @ 0x1408B7508 (PopDirectedDripsDiagCreateBlockerEntryBoolean.c)
 *     PopDirectedDripsDiagCreateBlockerEntryULong @ 0x1408B7574 (PopDirectedDripsDiagCreateBlockerEntryULong.c)
 *     WmipIncludeStaticNames @ 0x1408F052C (WmipIncludeStaticNames.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1408F6A78 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1408F6C60 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1408F7758 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1408F7BF8 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1408F80EC (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x1408FD52C (EtwpGetAutoLoggerEventNameFilter.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x1408FDA88 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     sub_140918860 @ 0x140918860 (sub_140918860.c)
 *     BiGetPhysicalDriveName @ 0x14092F030 (BiGetPhysicalDriveName.c)
 *     SiGetEfiSystemDevice @ 0x1409329A0 (SiGetEfiSystemDevice.c)
 *     VhdInitialize @ 0x140A0FE80 (VhdInitialize.c)
 *     CreateSystemRootLink @ 0x140A1DB6C (CreateSystemRootLink.c)
 *     MfgInitSystem @ 0x140A223F4 (MfgInitSystem.c)
 *     PoFxRegisterDebugger @ 0x140A226F4 (PoFxRegisterDebugger.c)
 *     VhdiGetVolumeNumber @ 0x140A3EC7C (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140A3EE10 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x140A3F710 (RamdiskStart.c)
 * Callees:
 *     _vsnwprintf @ 0x14019FA40 (_vsnwprintf.c)
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
