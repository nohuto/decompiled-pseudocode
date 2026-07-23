/*
 * XREFs of RtlClearAllBits @ 0x14000FA60
 * Callers:
 *     HvStoreModifiedData @ 0x1405A8438 (HvStoreModifiedData.c)
 *     CmCheckRegistry @ 0x1405A948C (CmCheckRegistry.c)
 *     HvResetDirtyData @ 0x1405A96E4 (HvResetDirtyData.c)
 *     MiInitializePrivateFixupBitmap @ 0x1405A9B60 (MiInitializePrivateFixupBitmap.c)
 *     MiCopyToCfgBitMap @ 0x1405F3A10 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1405F4130 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     SepAddLuidToIndexEntry @ 0x14065016C (SepAddLuidToIndexEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x14065D400 (SepGetLowBoxNumberEntry.c)
 *     MiCaptureImageExceptionValues @ 0x140683E84 (MiCaptureImageExceptionValues.c)
 *     PopAllocateHiberContext @ 0x1406E07D4 (PopAllocateHiberContext.c)
 *     MiSessionCreateInternal @ 0x140716F08 (MiSessionCreateInternal.c)
 *     SepInitializeLowBoxNumberTable @ 0x14071FBA8 (SepInitializeLowBoxNumberTable.c)
 *     MmStoreRegister @ 0x14074CF1C (MmStoreRegister.c)
 *     HvpPerformLogFileRecovery @ 0x1407F8D60 (HvpPerformLogFileRecovery.c)
 *     MiPrepareToHotPatchImage @ 0x1408585A8 (MiPrepareToHotPatchImage.c)
 *     MiExpandPartitionIds @ 0x1408613C8 (MiExpandPartitionIds.c)
 *     SmcStoreResize @ 0x1408B085C (SmcStoreResize.c)
 *     EtwpUpdateStackTracing @ 0x1408B8390 (EtwpUpdateStackTracing.c)
 *     ViAllocateContiguousMemory @ 0x14092D590 (ViAllocateContiguousMemory.c)
 *     BgpFwInitializeReservePool @ 0x140951508 (BgpFwInitializeReservePool.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 */

void __stdcall RtlClearAllBits(PRTL_BITMAP BitMapHeader)
{
  memset(BitMapHeader->Buffer, 0, 4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}
