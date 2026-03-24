/*
 * XREFs of ZwQuerySystemInformation @ 0x1401B8850
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x1400E2E80 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     ExpInitExpCheckTestSigningInfo @ 0x140169F70 (ExpInitExpCheckTestSigningInfo.c)
 *     HvlpProcessIommu @ 0x140278194 (HvlpProcessIommu.c)
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140302410 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreTerminateWorker @ 0x140307750 (SmKmStoreTerminateWorker.c)
 *     PopGetHwConfigurationSignature @ 0x14056BF24 (PopGetHwConfigurationSignature.c)
 *     ExpHwidBiosIfGetFirmwareTable @ 0x1405871AC (ExpHwidBiosIfGetFirmwareTable.c)
 *     PfpPrivSourceEnum @ 0x1405B1B60 (PfpPrivSourceEnum.c)
 *     sub_140685840 @ 0x140685840 (sub_140685840.c)
 *     ExpCloudbookHardwareLockedProvider @ 0x1406A7690 (ExpCloudbookHardwareLockedProvider.c)
 *     PspDetectComplusILImage @ 0x1406BAF5C (PspDetectComplusILImage.c)
 *     SiGetSystemDeviceName @ 0x1406BEFC4 (SiGetSystemDeviceName.c)
 *     PopAllocateHiberContext @ 0x1406DF534 (PopAllocateHiberContext.c)
 *     RtlCreateHeap @ 0x14070AF20 (RtlCreateHeap.c)
 *     BiGetNtPartitionPath @ 0x140711D44 (BiGetNtPartitionPath.c)
 *     BiGetFirmwareType @ 0x140713D0C (BiGetFirmwareType.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x140714D24 (BiGetCurrentBootEntryIdentifier.c)
 *     SiQuerySystemInformationString @ 0x140714E5C (SiQuerySystemInformationString.c)
 *     RtlQueryModuleInformation @ 0x140716370 (RtlQueryModuleInformation.c)
 *     AslEnvGetProcessWowInfo @ 0x140722324 (AslEnvGetProcessWowInfo.c)
 *     KsepGetLoadedModulesList @ 0x14072876C (KsepGetLoadedModulesList.c)
 *     PoInitHiberServices @ 0x140745C90 (PoInitHiberServices.c)
 *     RtlSystemTimeToLocalTime @ 0x14075EC20 (RtlSystemTimeToLocalTime.c)
 *     PiIsHVCIEnabled @ 0x140763990 (PiIsHVCIEnabled.c)
 *     SepInitQuerySigningPolicyExt @ 0x140763AF0 (SepInitQuerySigningPolicyExt.c)
 *     PnpGetStableSystemBootTime @ 0x140827D80 (PnpGetStableSystemBootTime.c)
 *     PopCheckTestsigningEnabled @ 0x140865E84 (PopCheckTestsigningEnabled.c)
 *     RtlLocalTimeToSystemTime @ 0x140890510 (RtlLocalTimeToSystemTime.c)
 *     EtwpLogMemInfoWs @ 0x1408B7FEC (EtwpLogMemInfoWs.c)
 *     ExpCloudbookHardwareIDProvider @ 0x1408CEEE0 (ExpCloudbookHardwareIDProvider.c)
 *     ExpFindDiskSignature @ 0x1408D0820 (ExpFindDiskSignature.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x1408E5F7C (SdbpCheckMatchingRegistryEntry.c)
 *     HdlspAddLogEntry @ 0x14094BAE0 (HdlspAddLogEntry.c)
 *     MiInitializeCacheFlushing @ 0x1409BC02C (MiInitializeCacheFlushing.c)
 *     Phase1InitializationIoReady @ 0x1409C4788 (Phase1InitializationIoReady.c)
 *     SeCodeIntegrityInitializePolicy @ 0x1409DC0B4 (SeCodeIntegrityInitializePolicy.c)
 *     PopInitPlatformSettings @ 0x1409DCD88 (PopInitPlatformSettings.c)
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
  return KiServiceInternal(*(_QWORD *)&SystemInformationClass, SystemInformation, *(_QWORD *)&SystemInformationLength);
}
