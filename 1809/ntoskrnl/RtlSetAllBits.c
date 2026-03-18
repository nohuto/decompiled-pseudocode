/*
 * XREFs of RtlSetAllBits @ 0x14002BDF0
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x14002ADD0 (MiBuildMdlForMappedFileFault.c)
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x1400E2E60 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     MiExtendPagingFileMaximum @ 0x1402B78D0 (MiExtendPagingFileMaximum.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1403026A8 (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     PopSaveHiberContext @ 0x14056A060 (PopSaveHiberContext.c)
 *     MiCaptureImageExceptionValues @ 0x140682CE4 (MiCaptureImageExceptionValues.c)
 *     PopAllocateHiberContext @ 0x1406DF554 (PopAllocateHiberContext.c)
 *     CmpMountPreloadedHives @ 0x140735800 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x140735B50 (CmpLoadHiveThread.c)
 *     MiCreatePagefile @ 0x14074CB40 (MiCreatePagefile.c)
 *     PnprMmAddRange @ 0x14083594C (PnprMmAddRange.c)
 *     MiPrepareToHotPatchImage @ 0x140857368 (MiPrepareToHotPatchImage.c)
 *     SmcStoreResize @ 0x1408AF61C (SmcStoreResize.c)
 *     VfThunkInit @ 0x1409B7A1C (VfThunkInit.c)
 *     MiInitializeDriverPtes @ 0x1409B8AAC (MiInitializeDriverPtes.c)
 *     MiCreateSlabEntriesFromLoaderSlab @ 0x1409F744C (MiCreateSlabEntriesFromLoaderSlab.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlSetAllBits(PRTL_BITMAP BitMapHeader)
{
  unsigned int *Buffer; // r8
  unsigned __int64 v2; // rdx

  Buffer = BitMapHeader->Buffer;
  v2 = (unsigned __int64)(4 * (((BitMapHeader->SizeOfBitMap & 0x1F) != 0) + (BitMapHeader->SizeOfBitMap >> 5))) >> 2;
  if ( v2 )
  {
    if ( ((unsigned __int8)Buffer & 4) != 0 )
    {
      *Buffer = -1;
      if ( !--v2 )
        return;
      ++Buffer;
    }
    memset(Buffer, 0xFFu, 8 * (v2 >> 1));
    if ( (v2 & 1) != 0 )
      Buffer[v2 - 1] = -1;
  }
}
