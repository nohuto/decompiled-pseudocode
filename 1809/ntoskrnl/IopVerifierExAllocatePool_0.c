/*
 * XREFs of IopVerifierExAllocatePool_0 @ 0x1400DD83C
 * Callers:
 *     IoAllocateWorkItem @ 0x1400DD7F0 (IoAllocateWorkItem.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400DDCD0 (IopBuildDeviceIoControlRequest.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1400E05F0 (IopBuildAsynchronousFsdRequest.c)
 *     IoQueryFullDriverPath @ 0x140191940 (IoQueryFullDriverPath.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x140284748 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopParseDevice @ 0x14063CD00 (IopParseDevice.c)
 *     NtFlushBuffersFileEx @ 0x14065C7C0 (NtFlushBuffersFileEx.c)
 *     IopLoadDriver @ 0x14067FA54 (IopLoadDriver.c)
 *     IopQueryRegistryKeySystemPath @ 0x140680164 (IopQueryRegistryKeySystemPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x140680360 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x1406804F4 (IopGetRegistryValue.c)
 *     IopBuildFullDriverPath @ 0x14068063C (IopBuildFullDriverPath.c)
 *     IopGetRegistryKeyInformation @ 0x1406F337C (IopGetRegistryKeyInformation.c)
 *     IoCreateSystemThread @ 0x1406FF1A0 (IoCreateSystemThread.c)
 *     IopCreateArcName @ 0x14070B428 (IopCreateArcName.c)
 *     IoCreateDriver @ 0x14073A0B0 (IoCreateDriver.c)
 *     IopInitializeBootLogging @ 0x14081A034 (IopInitializeBootLogging.c)
 *     IopRaiseHardError @ 0x14081A4F0 (IopRaiseHardError.c)
 *     IopSafebootDriverLoad @ 0x14081A7F0 (IopSafebootDriverLoad.c)
 *     IopSendMessageToTrackService @ 0x14081A974 (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14081AC5C (IopSetEaOrQuotaInformationFile.c)
 *     IopGetBootDiskInformationLite @ 0x1409BDED8 (IopGetBootDiskInformationLite.c)
 *     IopInitializeBuiltinDriver @ 0x1409CBA80 (IopInitializeBuiltinDriver.c)
 *     IopCreateArcNames @ 0x1409D6694 (IopCreateArcNames.c)
 *     IopCreateArcNamesCd @ 0x1409D6910 (IopCreateArcNamesCd.c)
 *     IopCreateUmdfDirectory @ 0x1409D9F10 (IopCreateUmdfDirectory.c)
 *     IopStoreArcInformation @ 0x1409DC2D4 (IopStoreArcInformation.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x1400FD810 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall IopVerifierExAllocatePool_0(POOL_TYPE a1, SIZE_T a2)
{
  if ( ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithTagPriority(a1, a2, 0x20206F49u, (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    return ExAllocatePoolWithTag(a1, a2, 0x20206F49u);
}
