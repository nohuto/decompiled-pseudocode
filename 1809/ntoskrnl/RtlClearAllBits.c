/*
 * XREFs of RtlClearAllBits @ 0x14000FA60
 * Callers:
 *     HvStoreModifiedData @ 0x1405A7438 (HvStoreModifiedData.c)
 *     CmCheckRegistry @ 0x1405A848C (CmCheckRegistry.c)
 *     HvResetDirtyData @ 0x1405A86E4 (HvResetDirtyData.c)
 *     MiInitializePrivateFixupBitmap @ 0x1405A8B60 (MiInitializePrivateFixupBitmap.c)
 *     MiCopyToCfgBitMap @ 0x1405F2A10 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1405F3130 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     SepAddLuidToIndexEntry @ 0x14064EFAC (SepAddLuidToIndexEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x14065C240 (SepGetLowBoxNumberEntry.c)
 *     MiCaptureImageExceptionValues @ 0x140682CC4 (MiCaptureImageExceptionValues.c)
 *     PopAllocateHiberContext @ 0x1406DF534 (PopAllocateHiberContext.c)
 *     MiSessionCreateInternal @ 0x140715C68 (MiSessionCreateInternal.c)
 *     SepInitializeLowBoxNumberTable @ 0x14071E908 (SepInitializeLowBoxNumberTable.c)
 *     MmStoreRegister @ 0x14074BD2C (MmStoreRegister.c)
 *     HvpPerformLogFileRecovery @ 0x1407F7B60 (HvpPerformLogFileRecovery.c)
 *     MiPrepareToHotPatchImage @ 0x140857348 (MiPrepareToHotPatchImage.c)
 *     MiExpandPartitionIds @ 0x140860168 (MiExpandPartitionIds.c)
 *     SmcStoreResize @ 0x1408AF5FC (SmcStoreResize.c)
 *     EtwpUpdateStackTracing @ 0x1408B70D0 (EtwpUpdateStackTracing.c)
 *     ViAllocateContiguousMemory @ 0x14092C590 (ViAllocateContiguousMemory.c)
 *     BgpFwInitializeReservePool @ 0x140950508 (BgpFwInitializeReservePool.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 */

void __stdcall RtlClearAllBits(PRTL_BITMAP BitMapHeader)
{
  memset(BitMapHeader->Buffer, 0, 4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}
