/*
 * XREFs of IopVerifierExAllocatePool_0 @ 0x1400884F4
 * Callers:
 *     IoDeleteDevice @ 0x1400B3E60 (IoDeleteDevice.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400BB0E0 (IopBuildDeviceIoControlRequest.c)
 *     IoAllocateWorkItem @ 0x140123040 (IoAllocateWorkItem.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140127260 (IopBuildAsynchronousFsdRequest.c)
 *     IoQueryFullDriverPath @ 0x140181760 (IoQueryFullDriverPath.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x140299B90 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     IopGetRegistryValue @ 0x14069A450 (IopGetRegistryValue.c)
 *     NtFlushBuffersFileEx @ 0x1406CC660 (NtFlushBuffersFileEx.c)
 *     IopGetRegistryKeyInformation @ 0x1406FDDB8 (IopGetRegistryKeyInformation.c)
 *     IopLoadDriver @ 0x140709120 (IopLoadDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x140709878 (IopGetDriverNameFromKeyNode.c)
 *     IopBuildFullDriverPath @ 0x14070D600 (IopBuildFullDriverPath.c)
 *     IopQueryRegistryKeySystemPath @ 0x14070D890 (IopQueryRegistryKeySystemPath.c)
 *     IoCreateSystemThread @ 0x14071B550 (IoCreateSystemThread.c)
 *     IopCreateArcName @ 0x1407369D8 (IopCreateArcName.c)
 *     IoCreateDriver @ 0x140754B70 (IoCreateDriver.c)
 *     IopInitializeBootLogging @ 0x140853F14 (IopInitializeBootLogging.c)
 *     IopRaiseHardError @ 0x140854400 (IopRaiseHardError.c)
 *     IopSafebootDriverLoad @ 0x140854720 (IopSafebootDriverLoad.c)
 *     IopSendMessageToTrackService @ 0x1408548B4 (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140854B90 (IopSetEaOrQuotaInformationFile.c)
 *     IopCreateArcNamesCd @ 0x1409F51F8 (IopCreateArcNamesCd.c)
 *     IopCreateArcNames @ 0x1409F5418 (IopCreateArcNames.c)
 *     IopGetBootDiskInformationLite @ 0x1409F9DC4 (IopGetBootDiskInformationLite.c)
 *     IopInitializeBuiltinDriver @ 0x140A111C8 (IopInitializeBuiltinDriver.c)
 *     IopCreateUmdfDirectory @ 0x140A1CCAC (IopCreateUmdfDirectory.c)
 *     IopStoreArcInformation @ 0x140A1F3E8 (IopStoreArcInformation.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x1400377B0 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall IopVerifierExAllocatePool_0(POOL_TYPE a1, SIZE_T a2)
{
  if ( ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithTagPriority(a1, a2, 0x20206F49u, (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    return ExAllocatePoolWithTag(a1, a2, 0x20206F49u);
}
