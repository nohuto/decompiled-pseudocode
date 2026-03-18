/*
 * XREFs of RtlClearAllBits @ 0x14008D950
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x14061B08C (SepAddLuidToIndexEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x14061FD34 (SepGetLowBoxNumberEntry.c)
 *     HvStoreModifiedData @ 0x140641468 (HvStoreModifiedData.c)
 *     CmCheckRegistry @ 0x140641AD8 (CmCheckRegistry.c)
 *     HvResetDirtyData @ 0x140641CB4 (HvResetDirtyData.c)
 *     MiInitializePrivateFixupBitmap @ 0x140642140 (MiInitializePrivateFixupBitmap.c)
 *     MiCaptureImageExceptionValues @ 0x1407121FC (MiCaptureImageExceptionValues.c)
 *     PopAllocateHiberContext @ 0x1407287C8 (PopAllocateHiberContext.c)
 *     MiSessionCreateInternal @ 0x14074240C (MiSessionCreateInternal.c)
 *     SepInitializeLowBoxNumberTable @ 0x14074958C (SepInitializeLowBoxNumberTable.c)
 *     MmStoreRegister @ 0x140773968 (MmStoreRegister.c)
 *     HvpPerformLogFileRecovery @ 0x140830684 (HvpPerformLogFileRecovery.c)
 *     MiPrepareToHotPatchImage @ 0x1408904FC (MiPrepareToHotPatchImage.c)
 *     MiExpandPartitionIds @ 0x14089BDC8 (MiExpandPartitionIds.c)
 *     SmcStoreResize @ 0x1408EBF54 (SmcStoreResize.c)
 *     EtwpUpdateStackTracing @ 0x1408F33E4 (EtwpUpdateStackTracing.c)
 *     ViAllocateContiguousMemory @ 0x14096AE00 (ViAllocateContiguousMemory.c)
 *     BgpFwInitializeReservePool @ 0x140990558 (BgpFwInitializeReservePool.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __stdcall RtlClearAllBits(PRTL_BITMAP BitMapHeader)
{
  memset(BitMapHeader->Buffer, 0, 4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}
