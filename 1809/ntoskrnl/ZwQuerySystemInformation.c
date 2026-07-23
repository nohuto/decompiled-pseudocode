/*
 * XREFs of ZwQuerySystemInformation @ 0x1401B89B0
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x1400E2F00 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     ExpInitExpCheckTestSigningInfo @ 0x14016A070 (ExpInitExpCheckTestSigningInfo.c)
 *     HvlpProcessIommu @ 0x140278384 (HvlpProcessIommu.c)
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140302600 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreTerminateWorker @ 0x140307940 (SmKmStoreTerminateWorker.c)
 *     PopGetHwConfigurationSignature @ 0x14056CF24 (PopGetHwConfigurationSignature.c)
 *     ExpHwidBiosIfGetFirmwareTable @ 0x1405881AC (ExpHwidBiosIfGetFirmwareTable.c)
 *     PfpPrivSourceEnum @ 0x1405B2B60 (PfpPrivSourceEnum.c)
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 *     ExpCloudbookHardwareLockedProvider @ 0x1406A8930 (ExpCloudbookHardwareLockedProvider.c)
 *     PspDetectComplusILImage @ 0x1406BC1FC (PspDetectComplusILImage.c)
 *     SiGetSystemDeviceName @ 0x1406C0264 (SiGetSystemDeviceName.c)
 *     PopAllocateHiberContext @ 0x1406E07D4 (PopAllocateHiberContext.c)
 *     RtlCreateHeap @ 0x14070C1C0 (RtlCreateHeap.c)
 *     BiGetNtPartitionPath @ 0x140712FE4 (BiGetNtPartitionPath.c)
 *     BiGetFirmwareType @ 0x140714FAC (BiGetFirmwareType.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x140715FC4 (BiGetCurrentBootEntryIdentifier.c)
 *     SiQuerySystemInformationString @ 0x1407160FC (SiQuerySystemInformationString.c)
 *     RtlQueryModuleInformation @ 0x140717610 (RtlQueryModuleInformation.c)
 *     AslEnvGetProcessWowInfo @ 0x1407235C4 (AslEnvGetProcessWowInfo.c)
 *     KsepGetLoadedModulesList @ 0x14072995C (KsepGetLoadedModulesList.c)
 *     PoInitHiberServices @ 0x140746E80 (PoInitHiberServices.c)
 *     RtlSystemTimeToLocalTime @ 0x14075FE10 (RtlSystemTimeToLocalTime.c)
 *     PiIsHVCIEnabled @ 0x140764B80 (PiIsHVCIEnabled.c)
 *     SepInitQuerySigningPolicyExt @ 0x140764CE0 (SepInitQuerySigningPolicyExt.c)
 *     PnpGetStableSystemBootTime @ 0x140828F80 (PnpGetStableSystemBootTime.c)
 *     PopCheckTestsigningEnabled @ 0x1408670E4 (PopCheckTestsigningEnabled.c)
 *     RtlLocalTimeToSystemTime @ 0x140891770 (RtlLocalTimeToSystemTime.c)
 *     EtwpLogMemInfoWs @ 0x1408B92AC (EtwpLogMemInfoWs.c)
 *     ExpCloudbookHardwareIDProvider @ 0x1408D01A0 (ExpCloudbookHardwareIDProvider.c)
 *     ExpFindDiskSignature @ 0x1408D1AE0 (ExpFindDiskSignature.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x1408E723C (SdbpCheckMatchingRegistryEntry.c)
 *     HdlspAddLogEntry @ 0x14094CAE0 (HdlspAddLogEntry.c)
 *     MiInitializeCacheFlushing @ 0x1409BD02C (MiInitializeCacheFlushing.c)
 *     Phase1InitializationIoReady @ 0x1409C5788 (Phase1InitializationIoReady.c)
 *     SeCodeIntegrityInitializePolicy @ 0x1409DD0B4 (SeCodeIntegrityInitializePolicy.c)
 *     PopInitPlatformSettings @ 0x1409DDD88 (PopInitPlatformSettings.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQuerySystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&SystemInformationClass);
}
