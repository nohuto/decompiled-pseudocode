/*
 * XREFs of MmGetPhysicalAddress @ 0x1401210B0
 * Callers:
 *     PopGetNextTable @ 0x1401441B0 (PopGetNextTable.c)
 *     PoSetHiberRange @ 0x1401447B0 (PoSetHiberRange.c)
 *     BgpFwLibraryEnable @ 0x14016F7C0 (BgpFwLibraryEnable.c)
 *     HvlEnlightenProcessor @ 0x140178660 (HvlEnlightenProcessor.c)
 *     HvlpTryConfigureInterface @ 0x14017C348 (HvlpTryConfigureInterface.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x140271634 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpAcquireHypercallPage @ 0x140271764 (HvlpAcquireHypercallPage.c)
 *     HvlpSetupCachedHypercallPages @ 0x140272D4C (HvlpSetupCachedHypercallPages.c)
 *     HvlpSetupSchedulerAssist @ 0x140272DFC (HvlpSetupSchedulerAssist.c)
 *     HvlpPhase0Enlightenments @ 0x140279008 (HvlpPhase0Enlightenments.c)
 *     HvlpGetSecurePageList @ 0x14027A2A0 (HvlpGetSecurePageList.c)
 *     HvlpSetupPageListIteration @ 0x14027A454 (HvlpSetupPageListIteration.c)
 *     HvlSetupLiveDumpBuffer @ 0x14027A604 (HvlSetupLiveDumpBuffer.c)
 *     VslFinalizeLiveDumpInSk @ 0x14027AE28 (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x14027AF38 (VslFinishStartSecureProcessor.c)
 *     VslpAddLiveDumpBufferChunk @ 0x14027C20C (VslpAddLiveDumpBufferChunk.c)
 *     IoFreeDumpRange @ 0x14027FD30 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x1402801B0 (IoSetDumpRange.c)
 *     IopWriteTriageDumpToFirmware @ 0x1402824BC (IopWriteTriageDumpToFirmware.c)
 *     PnprCopyReservedMapping @ 0x140289E80 (PnprCopyReservedMapping.c)
 *     PnprRecopyAddress @ 0x14028A514 (PnprRecopyAddress.c)
 *     MiDbgCopyMemory @ 0x1402BA650 (MiDbgCopyMemory.c)
 *     MmStoreLogCorruptionFixed @ 0x1402C4318 (MmStoreLogCorruptionFixed.c)
 *     RtlMarkHiberPhase @ 0x1402FAC40 (RtlMarkHiberPhase.c)
 *     SmEtwLogStoreCorruption @ 0x140306E34 (SmEtwLogStoreCorruption.c)
 *     SmPrepareForFatalHeapCorruption @ 0x1403090CC (SmPrepareForFatalHeapCorruption.c)
 *     SmPrepareForFatalPageError @ 0x1403091DC (SmPrepareForFatalPageError.c)
 *     PopWriteHiberPages @ 0x140569C48 (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x14056A5F4 (PopRequestWrite.c)
 *     PopBuildMemoryImageHeader @ 0x14056B820 (PopBuildMemoryImageHeader.c)
 *     PopHiberReadChecksums @ 0x14057CDB8 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x14057D27C (PopRequestRead.c)
 *     HvlInitializeProcessor @ 0x140729DD8 (HvlInitializeProcessor.c)
 *     VslStartSecureProcessor @ 0x140818E94 (VslStartSecureProcessor.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14081FFC4 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     ViAllocateMapRegisterFile @ 0x14092C790 (ViAllocateMapRegisterFile.c)
 *     BgpFwLibraryInitialize @ 0x14094F95C (BgpFwLibraryInitialize.c)
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 *     VslBindNtIum @ 0x1409F44BC (VslBindNtIum.c)
 *     VslpIumPhase0Initialize @ 0x1409F45F8 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MiGetPhysicalAddress @ 0x1401210D8 (MiGetPhysicalAddress.c)
 */

PHYSICAL_ADDRESS __stdcall MmGetPhysicalAddress(PVOID BaseAddress)
{
  int PhysicalAddress; // eax
  char v3; // [rsp+38h] [rbp+10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  PhysicalAddress = MiGetPhysicalAddress(BaseAddress, &v4, &v3);
  return (PHYSICAL_ADDRESS)(v4 & -(__int64)(PhysicalAddress != 0));
}
