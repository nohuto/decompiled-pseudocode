/*
 * XREFs of ZwQuerySystemInformation @ 0x1401C1310
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x1400D6EF0 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     HvlpProcessIommu @ 0x1401711CC (HvlpProcessIommu.c)
 *     RtlpInitializeNonVolatileFlush @ 0x14018AD0C (RtlpInitializeNonVolatileFlush.c)
 *     ExpInitExpCheckTestSigningInfo @ 0x14019E1E0 (ExpInitExpCheckTestSigningInfo.c)
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14031FCE0 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreTerminateWorker @ 0x140324C10 (SmKmStoreTerminateWorker.c)
 *     PopGetHwConfigurationSignature @ 0x14059BAA8 (PopGetHwConfigurationSignature.c)
 *     PfpPrivSourceEnum @ 0x140638B3C (PfpPrivSourceEnum.c)
 *     SPCall2ServerInternal @ 0x14064A46C (SPCall2ServerInternal.c)
 *     ExpCloudbookHardwareLockedProvider @ 0x1406D1E00 (ExpCloudbookHardwareLockedProvider.c)
 *     PspDetectComplusILImage @ 0x1406DCF40 (PspDetectComplusILImage.c)
 *     SiGetSystemDeviceName @ 0x1406E2DD4 (SiGetSystemDeviceName.c)
 *     RtlCreateHeap @ 0x1406E7930 (RtlCreateHeap.c)
 *     ExpHwidBiosIfGetFirmwareTable @ 0x1406F1544 (ExpHwidBiosIfGetFirmwareTable.c)
 *     EtwTiLogDriverObjectLoad @ 0x14070AE88 (EtwTiLogDriverObjectLoad.c)
 *     PopAllocateHiberContext @ 0x1407287C8 (PopAllocateHiberContext.c)
 *     BiGetFirmwareType @ 0x14073FFF0 (BiGetFirmwareType.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x140741538 (BiGetCurrentBootEntryIdentifier.c)
 *     SiQuerySystemInformationString @ 0x140741680 (SiQuerySystemInformationString.c)
 *     RtlQueryModuleInformation @ 0x140742B20 (RtlQueryModuleInformation.c)
 *     AslEnvGetProcessWowInfo @ 0x14074CE44 (AslEnvGetProcessWowInfo.c)
 *     PoInitHiberServices @ 0x140759AFC (PoInitHiberServices.c)
 *     KsepGetLoadedModulesList @ 0x14075DF7C (KsepGetLoadedModulesList.c)
 *     RtlSystemTimeToLocalTime @ 0x140786960 (RtlSystemTimeToLocalTime.c)
 *     SepInitQuerySigningPolicyExt @ 0x14078C4D0 (SepInitQuerySigningPolicyExt.c)
 *     PnpGetStableSystemBootTime @ 0x14086185C (PnpGetStableSystemBootTime.c)
 *     PiIsHVCIEnabled @ 0x140862638 (PiIsHVCIEnabled.c)
 *     PopCheckTestsigningEnabled @ 0x1408A1C18 (PopCheckTestsigningEnabled.c)
 *     RtlLocalTimeToSystemTime @ 0x1408CE0F0 (RtlLocalTimeToSystemTime.c)
 *     EtwpLogMemInfoWs @ 0x1408F4460 (EtwpLogMemInfoWs.c)
 *     ExpCloudbookHardwareIDProvider @ 0x14090BF90 (ExpCloudbookHardwareIDProvider.c)
 *     ExpFindDiskSignature @ 0x14090DA84 (ExpFindDiskSignature.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x1409220BC (SdbpCheckMatchingRegistryEntry.c)
 *     HdlspAddLogEntry @ 0x14098BAE0 (HdlspAddLogEntry.c)
 *     MiInitializeCacheFlushing @ 0x1409F1F7C (MiInitializeCacheFlushing.c)
 *     SepInitializeDebugOptions @ 0x140A09900 (SepInitializeDebugOptions.c)
 *     PopInitPlatformSettings @ 0x140A2006C (PopInitPlatformSettings.c)
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
