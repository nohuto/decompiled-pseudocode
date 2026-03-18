/*
 * XREFs of MmGetPhysicalAddress @ 0x140123FF0
 * Callers:
 *     MiAllocateContiguousMemory @ 0x140117C2C (MiAllocateContiguousMemory.c)
 *     PopGetNextTable @ 0x14015EF10 (PopGetNextTable.c)
 *     PoSetHiberRange @ 0x14015F820 (PoSetHiberRange.c)
 *     BgpFwLibraryEnable @ 0x140178FE0 (BgpFwLibraryEnable.c)
 *     HvlEnlightenProcessor @ 0x140181EF4 (HvlEnlightenProcessor.c)
 *     HvlpTryConfigureInterface @ 0x14019C588 (HvlpTryConfigureInterface.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x14028563C (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpSetupCachedHypercallPages @ 0x140286D60 (HvlpSetupCachedHypercallPages.c)
 *     HvlpSetupSchedulerAssist @ 0x140286E10 (HvlpSetupSchedulerAssist.c)
 *     HvlpPhase0Enlightenments @ 0x14028D438 (HvlpPhase0Enlightenments.c)
 *     HvlpGetSecurePageList @ 0x14028E780 (HvlpGetSecurePageList.c)
 *     HvlpSetupPageListIteration @ 0x14028E8F0 (HvlpSetupPageListIteration.c)
 *     HvlSetupLiveDumpBuffer @ 0x14028EAAC (HvlSetupLiveDumpBuffer.c)
 *     VslFinalizeLiveDumpInSk @ 0x14028F414 (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x14028F524 (VslFinishStartSecureProcessor.c)
 *     VslpAddLiveDumpBufferChunk @ 0x140290B8C (VslpAddLiveDumpBufferChunk.c)
 *     IoFreeDumpRange @ 0x140294FB0 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x140295510 (IoSetDumpRange.c)
 *     IopWriteTriageDumpToFirmware @ 0x140297A2C (IopWriteTriageDumpToFirmware.c)
 *     PnprCopyReservedMapping @ 0x1402A02F4 (PnprCopyReservedMapping.c)
 *     PnprRecopyAddress @ 0x1402A09A0 (PnprRecopyAddress.c)
 *     MiDbgCopyMemory @ 0x1402D08E8 (MiDbgCopyMemory.c)
 *     MmStoreLogCorruptionFixed @ 0x1402DE660 (MmStoreLogCorruptionFixed.c)
 *     SmEtwLogStoreCorruption @ 0x1403249B8 (SmEtwLogStoreCorruption.c)
 *     SmPrepareForFatalHeapCorruption @ 0x140326C18 (SmPrepareForFatalHeapCorruption.c)
 *     SmPrepareForFatalPageError @ 0x140326D20 (SmPrepareForFatalPageError.c)
 *     PopRequestWrite @ 0x14059A134 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x14059A908 (PopWriteHiberPages.c)
 *     PopBuildMemoryImageHeader @ 0x14059B168 (PopBuildMemoryImageHeader.c)
 *     PopHiberReadChecksums @ 0x1405ACC6C (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x1405AD13C (PopRequestRead.c)
 *     HvlInitializeProcessor @ 0x14074DCE0 (HvlInitializeProcessor.c)
 *     VslStartSecureProcessor @ 0x140852F0C (VslStartSecureProcessor.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14085A014 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     ViAllocateMapRegisterFile @ 0x14096B000 (ViAllocateMapRegisterFile.c)
 *     BgpFwLibraryInitialize @ 0x14098F9A8 (BgpFwLibraryInitialize.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 *     VslBindNtIum @ 0x140A399D4 (VslBindNtIum.c)
 *     VslpIumPhase0Initialize @ 0x140A39B20 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MiGetPhysicalAddress @ 0x140124020 (MiGetPhysicalAddress.c)
 */

PHYSICAL_ADDRESS __stdcall MmGetPhysicalAddress(PVOID BaseAddress)
{
  int PhysicalAddress; // eax
  char v3; // [rsp+38h] [rbp+10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  PhysicalAddress = MiGetPhysicalAddress(BaseAddress, &v4, &v3);
  return (PHYSICAL_ADDRESS)(v4 & -(__int64)(PhysicalAddress != 0));
}
