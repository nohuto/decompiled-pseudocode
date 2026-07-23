/*
 * XREFs of MmGetPhysicalAddress @ 0x1401211A0
 * Callers:
 *     PopGetNextTable @ 0x1401442D0 (PopGetNextTable.c)
 *     PoSetHiberRange @ 0x1401448D0 (PoSetHiberRange.c)
 *     BgpFwLibraryEnable @ 0x14016F8E0 (BgpFwLibraryEnable.c)
 *     HvlEnlightenProcessor @ 0x140178780 (HvlEnlightenProcessor.c)
 *     HvlpTryConfigureInterface @ 0x14017C468 (HvlpTryConfigureInterface.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x140271924 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     HvlpSetupCachedHypercallPages @ 0x14027303C (HvlpSetupCachedHypercallPages.c)
 *     HvlpSetupSchedulerAssist @ 0x1402730EC (HvlpSetupSchedulerAssist.c)
 *     HvlpPhase0Enlightenments @ 0x1402792F8 (HvlpPhase0Enlightenments.c)
 *     HvlpGetSecurePageList @ 0x14027A590 (HvlpGetSecurePageList.c)
 *     HvlpSetupPageListIteration @ 0x14027A744 (HvlpSetupPageListIteration.c)
 *     HvlSetupLiveDumpBuffer @ 0x14027A8F4 (HvlSetupLiveDumpBuffer.c)
 *     VslFinalizeLiveDumpInSk @ 0x14027B118 (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x14027B228 (VslFinishStartSecureProcessor.c)
 *     VslpAddLiveDumpBufferChunk @ 0x14027C4FC (VslpAddLiveDumpBufferChunk.c)
 *     IoFreeDumpRange @ 0x140280020 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x1402804A0 (IoSetDumpRange.c)
 *     IopWriteTriageDumpToFirmware @ 0x1402827AC (IopWriteTriageDumpToFirmware.c)
 *     PnprCopyReservedMapping @ 0x14028A170 (PnprCopyReservedMapping.c)
 *     PnprRecopyAddress @ 0x14028A804 (PnprRecopyAddress.c)
 *     MiDbgCopyMemory @ 0x1402BA940 (MiDbgCopyMemory.c)
 *     MmStoreLogCorruptionFixed @ 0x1402C4608 (MmStoreLogCorruptionFixed.c)
 *     RtlMarkHiberPhase @ 0x1402FAF30 (RtlMarkHiberPhase.c)
 *     SmEtwLogStoreCorruption @ 0x140307124 (SmEtwLogStoreCorruption.c)
 *     SmPrepareForFatalHeapCorruption @ 0x1403093BC (SmPrepareForFatalHeapCorruption.c)
 *     SmPrepareForFatalPageError @ 0x1403094CC (SmPrepareForFatalPageError.c)
 *     PopWriteHiberPages @ 0x14056AC48 (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x14056B5F4 (PopRequestWrite.c)
 *     PopBuildMemoryImageHeader @ 0x14056C820 (PopBuildMemoryImageHeader.c)
 *     PopHiberReadChecksums @ 0x14057DDB8 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x14057E27C (PopRequestRead.c)
 *     HvlInitializeProcessor @ 0x14072AFA8 (HvlInitializeProcessor.c)
 *     VslStartSecureProcessor @ 0x14081A074 (VslStartSecureProcessor.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x1408211A4 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     ViAllocateMapRegisterFile @ 0x14092D790 (ViAllocateMapRegisterFile.c)
 *     BgpFwLibraryInitialize @ 0x14095095C (BgpFwLibraryInitialize.c)
 *     sub_140990E9C @ 0x140990E9C (sub_140990E9C.c)
 *     VslBindNtIum @ 0x1409F54C4 (VslBindNtIum.c)
 *     VslpIumPhase0Initialize @ 0x1409F5600 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MiGetPhysicalAddress @ 0x1401211C8 (MiGetPhysicalAddress.c)
 */

PHYSICAL_ADDRESS __stdcall MmGetPhysicalAddress(PVOID BaseAddress)
{
  int PhysicalAddress; // eax
  char v3; // [rsp+38h] [rbp+10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  PhysicalAddress = MiGetPhysicalAddress(BaseAddress, &v4, &v3);
  return (PHYSICAL_ADDRESS)(v4 & -(__int64)(PhysicalAddress != 0));
}
