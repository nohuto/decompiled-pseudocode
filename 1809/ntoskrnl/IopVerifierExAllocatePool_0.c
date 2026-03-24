/*
 * XREFs of IopVerifierExAllocatePool_0 @ 0x1400DD85C
 * Callers:
 *     IoAllocateWorkItem @ 0x1400DD810 (IoAllocateWorkItem.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400DDCF0 (IopBuildDeviceIoControlRequest.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1400E0610 (IopBuildAsynchronousFsdRequest.c)
 *     IoQueryFullDriverPath @ 0x140191960 (IoQueryFullDriverPath.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x140284848 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopParseDevice @ 0x14063CCE0 (IopParseDevice.c)
 *     NtFlushBuffersFileEx @ 0x14065C7A0 (NtFlushBuffersFileEx.c)
 *     IopLoadDriver @ 0x14067FA34 (IopLoadDriver.c)
 *     IopQueryRegistryKeySystemPath @ 0x140680144 (IopQueryRegistryKeySystemPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x140680340 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x1406804D4 (IopGetRegistryValue.c)
 *     IopBuildFullDriverPath @ 0x14068061C (IopBuildFullDriverPath.c)
 *     IopGetRegistryKeyInformation @ 0x1406F335C (IopGetRegistryKeyInformation.c)
 *     IoCreateSystemThread @ 0x1406FF180 (IoCreateSystemThread.c)
 *     IopCreateArcName @ 0x14070B408 (IopCreateArcName.c)
 *     IoCreateDriver @ 0x14073A090 (IoCreateDriver.c)
 *     IopInitializeBootLogging @ 0x14081A014 (IopInitializeBootLogging.c)
 *     IopRaiseHardError @ 0x14081A4D0 (IopRaiseHardError.c)
 *     IopSafebootDriverLoad @ 0x14081A7D0 (IopSafebootDriverLoad.c)
 *     IopSendMessageToTrackService @ 0x14081A954 (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14081AC3C (IopSetEaOrQuotaInformationFile.c)
 *     IopGetBootDiskInformationLite @ 0x1409BDED8 (IopGetBootDiskInformationLite.c)
 *     IopInitializeBuiltinDriver @ 0x1409CBA80 (IopInitializeBuiltinDriver.c)
 *     IopCreateArcNames @ 0x1409D6694 (IopCreateArcNames.c)
 *     IopCreateArcNamesCd @ 0x1409D6910 (IopCreateArcNamesCd.c)
 *     IopCreateUmdfDirectory @ 0x1409D9F10 (IopCreateUmdfDirectory.c)
 *     IopStoreArcInformation @ 0x1409DC2D4 (IopStoreArcInformation.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x1400FD830 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall IopVerifierExAllocatePool_0(POOL_TYPE a1, SIZE_T a2)
{
  if ( ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithTagPriority(a1, a2, 0x20206F49u, (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    return ExAllocatePoolWithTag(a1, a2, 0x20206F49u);
}
