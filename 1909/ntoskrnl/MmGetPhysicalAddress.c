/*
 * XREFs of MmGetPhysicalAddress @ 0x140124C70
 * Callers:
 *     MiAllocateContiguousMemory @ 0x1400F5D4C (MiAllocateContiguousMemory.c)
 *     PopGetNextTable @ 0x14015F5B0 (PopGetNextTable.c)
 *     PoSetHiberRange @ 0x14015FEC0 (PoSetHiberRange.c)
 *     BgpFwLibraryEnable @ 0x1401796D0 (BgpFwLibraryEnable.c)
 *     HvlEnlightenProcessor @ 0x1401825E4 (HvlEnlightenProcessor.c)
 *     HvlpTryConfigureInterface @ 0x14019CD08 (HvlpTryConfigureInterface.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x14028539C (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpAcquireHypercallPage @ 0x14028558C (HvlpAcquireHypercallPage.c)
 *     HvlpSetupCachedHypercallPages @ 0x140286AC0 (HvlpSetupCachedHypercallPages.c)
 *     HvlpSetupSchedulerAssist @ 0x140286B70 (HvlpSetupSchedulerAssist.c)
 *     HvlpPhase0Enlightenments @ 0x14028D198 (HvlpPhase0Enlightenments.c)
 *     HvlpGetSecurePageList @ 0x14028E4E0 (HvlpGetSecurePageList.c)
 *     HvlpSetupPageListIteration @ 0x14028E650 (HvlpSetupPageListIteration.c)
 *     HvlSetupLiveDumpBuffer @ 0x14028E80C (HvlSetupLiveDumpBuffer.c)
 *     VslFinalizeLiveDumpInSk @ 0x14028F174 (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x14028F284 (VslFinishStartSecureProcessor.c)
 *     VslpAddLiveDumpBufferChunk @ 0x1402908EC (VslpAddLiveDumpBufferChunk.c)
 *     IoFreeDumpRange @ 0x140294D10 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x140295270 (IoSetDumpRange.c)
 *     IopWriteTriageDumpToFirmware @ 0x14029778C (IopWriteTriageDumpToFirmware.c)
 *     PnprCopyReservedMapping @ 0x1402A0054 (PnprCopyReservedMapping.c)
 *     PnprRecopyAddress @ 0x1402A0700 (PnprRecopyAddress.c)
 *     MiDbgCopyMemory @ 0x1402D0648 (MiDbgCopyMemory.c)
 *     MmStoreLogCorruptionFixed @ 0x1402DE3C0 (MmStoreLogCorruptionFixed.c)
 *     SmEtwLogStoreCorruption @ 0x140324408 (SmEtwLogStoreCorruption.c)
 *     SmPrepareForFatalHeapCorruption @ 0x140326668 (SmPrepareForFatalHeapCorruption.c)
 *     SmPrepareForFatalPageError @ 0x140326770 (SmPrepareForFatalPageError.c)
 *     PopRequestWrite @ 0x14059A114 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x14059A8E8 (PopWriteHiberPages.c)
 *     PopBuildMemoryImageHeader @ 0x14059B148 (PopBuildMemoryImageHeader.c)
 *     PopHiberReadChecksums @ 0x1405ACC4C (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x1405AD11C (PopRequestRead.c)
 *     HvlInitializeProcessor @ 0x14074E770 (HvlInitializeProcessor.c)
 *     VslStartSecureProcessor @ 0x14085260C (VslStartSecureProcessor.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140859714 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     ViAllocateMapRegisterFile @ 0x14096B000 (ViAllocateMapRegisterFile.c)
 *     BgpFwLibraryInitialize @ 0x14098F9A8 (BgpFwLibraryInitialize.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 *     VslBindNtIum @ 0x140A397A4 (VslBindNtIum.c)
 *     VslpIumPhase0Initialize @ 0x140A398F0 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MiGetPhysicalAddress @ 0x140124CA0 (MiGetPhysicalAddress.c)
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
