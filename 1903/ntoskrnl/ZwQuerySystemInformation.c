/*
 * XREFs of ZwQuerySystemInformation @ 0x1401C0790
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x140107270 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     HvlpProcessIommu @ 0x140170ADC (HvlpProcessIommu.c)
 *     RtlpInitializeNonVolatileFlush @ 0x14018A37C (RtlpInitializeNonVolatileFlush.c)
 *     ExpInitExpCheckTestSigningInfo @ 0x14019DAC0 (ExpInitExpCheckTestSigningInfo.c)
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140320290 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreTerminateWorker @ 0x1403251C0 (SmKmStoreTerminateWorker.c)
 *     PopGetHwConfigurationSignature @ 0x14059BAC8 (PopGetHwConfigurationSignature.c)
 *     PfpPrivSourceEnum @ 0x1406358EC (PfpPrivSourceEnum.c)
 *     SPCall2ServerInternal @ 0x1406844FC (SPCall2ServerInternal.c)
 *     ExpCloudbookHardwareLockedProvider @ 0x1406D2AA0 (ExpCloudbookHardwareLockedProvider.c)
 *     PspDetectComplusILImage @ 0x1406DC2B8 (PspDetectComplusILImage.c)
 *     SiGetSystemDeviceName @ 0x1406E1754 (SiGetSystemDeviceName.c)
 *     RtlCreateHeap @ 0x1406E6750 (RtlCreateHeap.c)
 *     ExpHwidBiosIfGetFirmwareTable @ 0x1406EF934 (ExpHwidBiosIfGetFirmwareTable.c)
 *     EtwTiLogDriverObjectLoad @ 0x1407090A8 (EtwTiLogDriverObjectLoad.c)
 *     PopAllocateHiberContext @ 0x140726928 (PopAllocateHiberContext.c)
 *     BiGetFirmwareType @ 0x14073E0F0 (BiGetFirmwareType.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x14073F638 (BiGetCurrentBootEntryIdentifier.c)
 *     SiQuerySystemInformationString @ 0x14073F780 (SiQuerySystemInformationString.c)
 *     RtlQueryModuleInformation @ 0x140740C20 (RtlQueryModuleInformation.c)
 *     PoInitHiberServices @ 0x14074B26C (PoInitHiberServices.c)
 *     AslEnvGetProcessWowInfo @ 0x14074C3B4 (AslEnvGetProcessWowInfo.c)
 *     KsepGetLoadedModulesList @ 0x1407596EC (KsepGetLoadedModulesList.c)
 *     RtlSystemTimeToLocalTime @ 0x140784600 (RtlSystemTimeToLocalTime.c)
 *     SepInitQuerySigningPolicyExt @ 0x14078A070 (SepInitQuerySigningPolicyExt.c)
 *     PnpGetStableSystemBootTime @ 0x14086215C (PnpGetStableSystemBootTime.c)
 *     PiIsHVCIEnabled @ 0x140862F38 (PiIsHVCIEnabled.c)
 *     PopCheckTestsigningEnabled @ 0x1408A23D8 (PopCheckTestsigningEnabled.c)
 *     RtlLocalTimeToSystemTime @ 0x1408CE810 (RtlLocalTimeToSystemTime.c)
 *     EtwpLogMemInfoWs @ 0x1408F4AF0 (EtwpLogMemInfoWs.c)
 *     ExpCloudbookHardwareIDProvider @ 0x14090C530 (ExpCloudbookHardwareIDProvider.c)
 *     ExpFindDiskSignature @ 0x14090E024 (ExpFindDiskSignature.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14092265C (SdbpCheckMatchingRegistryEntry.c)
 *     HdlspAddLogEntry @ 0x14098BAE0 (HdlspAddLogEntry.c)
 *     MiInitializeCacheFlushing @ 0x1409F206C (MiInitializeCacheFlushing.c)
 *     SepInitializeDebugOptions @ 0x140A093D4 (SepInitializeDebugOptions.c)
 *     PopInitPlatformSettings @ 0x140A1FE8C (PopInitPlatformSettings.c)
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
