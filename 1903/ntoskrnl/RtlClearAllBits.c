/*
 * XREFs of RtlClearAllBits @ 0x140098850
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x14061957C (SepAddLuidToIndexEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x14061E218 (SepGetLowBoxNumberEntry.c)
 *     HvResetDirtyData @ 0x14065C7B8 (HvResetDirtyData.c)
 *     MiInitializePrivateFixupBitmap @ 0x14065CC50 (MiInitializePrivateFixupBitmap.c)
 *     CmCheckRegistry @ 0x14065CD7C (CmCheckRegistry.c)
 *     HvStoreModifiedData @ 0x14065D6F0 (HvStoreModifiedData.c)
 *     MiCaptureImageExceptionValues @ 0x14071041C (MiCaptureImageExceptionValues.c)
 *     PopAllocateHiberContext @ 0x140726928 (PopAllocateHiberContext.c)
 *     MiSessionCreateInternal @ 0x14074050C (MiSessionCreateInternal.c)
 *     SepInitializeLowBoxNumberTable @ 0x14074768C (SepInitializeLowBoxNumberTable.c)
 *     MmStoreRegister @ 0x140770384 (MmStoreRegister.c)
 *     HvpPerformLogFileRecovery @ 0x140830814 (HvpPerformLogFileRecovery.c)
 *     MiPrepareToHotPatchImage @ 0x140890CDC (MiPrepareToHotPatchImage.c)
 *     MiExpandPartitionIds @ 0x14089C5A8 (MiExpandPartitionIds.c)
 *     SmcStoreResize @ 0x1408EC64C (SmcStoreResize.c)
 *     EtwpUpdateStackTracing @ 0x1408F3A74 (EtwpUpdateStackTracing.c)
 *     ViAllocateContiguousMemory @ 0x14096AE00 (ViAllocateContiguousMemory.c)
 *     BgpFwInitializeReservePool @ 0x140990558 (BgpFwInitializeReservePool.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void __stdcall RtlClearAllBits(PRTL_BITMAP BitMapHeader)
{
  memset(BitMapHeader->Buffer, 0, 4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}
