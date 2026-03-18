/*
 * XREFs of IopVerifierExAllocatePool_0 @ 0x1400897F4
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x14009AF50 (IopBuildDeviceIoControlRequest.c)
 *     IoDeleteDevice @ 0x1400F0E80 (IoDeleteDevice.c)
 *     IoAllocateWorkItem @ 0x140124150 (IoAllocateWorkItem.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140127C80 (IopBuildAsynchronousFsdRequest.c)
 *     IoQueryFullDriverPath @ 0x140181E50 (IoQueryFullDriverPath.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1402998F0 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 *     NtFlushBuffersFileEx @ 0x1406CB490 (NtFlushBuffersFileEx.c)
 *     IopGetRegistryValue @ 0x1406DA724 (IopGetRegistryValue.c)
 *     IopGetRegistryKeyInformation @ 0x1406FFB98 (IopGetRegistryKeyInformation.c)
 *     IopLoadDriver @ 0x14070AF00 (IopLoadDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x14070B658 (IopGetDriverNameFromKeyNode.c)
 *     IopBuildFullDriverPath @ 0x14070F3E0 (IopBuildFullDriverPath.c)
 *     IopQueryRegistryKeySystemPath @ 0x14070F670 (IopQueryRegistryKeySystemPath.c)
 *     IoCreateSystemThread @ 0x14071D340 (IoCreateSystemThread.c)
 *     IopCreateArcName @ 0x140738C38 (IopCreateArcName.c)
 *     IoCreateDriver @ 0x140755600 (IoCreateDriver.c)
 *     IopInitializeBootLogging @ 0x140853614 (IopInitializeBootLogging.c)
 *     IopRaiseHardError @ 0x140853B00 (IopRaiseHardError.c)
 *     IopSafebootDriverLoad @ 0x140853E20 (IopSafebootDriverLoad.c)
 *     IopSendMessageToTrackService @ 0x140853FB4 (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140854290 (IopSetEaOrQuotaInformationFile.c)
 *     IopCreateArcNamesCd @ 0x1409F5108 (IopCreateArcNamesCd.c)
 *     IopCreateArcNames @ 0x1409F5328 (IopCreateArcNames.c)
 *     IopGetBootDiskInformationLite @ 0x1409F9CD4 (IopGetBootDiskInformationLite.c)
 *     IopInitializeBuiltinDriver @ 0x140A11960 (IopInitializeBuiltinDriver.c)
 *     IopCreateUmdfDirectory @ 0x140A1CE88 (IopCreateUmdfDirectory.c)
 *     IopStoreArcInformation @ 0x140A1F5C8 (IopStoreArcInformation.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140037BB0 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall IopVerifierExAllocatePool_0(POOL_TYPE a1, SIZE_T a2)
{
  if ( ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithTagPriority(a1, a2, 0x20206F49u, (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    return ExAllocatePoolWithTag(a1, a2, 0x20206F49u);
}
