/*
 * XREFs of BgpFwFreeMemory @ 0x14016ECEC
 * Callers:
 *     BgpFwQueryBootGraphicsInformation @ 0x14016F2C0 (BgpFwQueryBootGraphicsInformation.c)
 *     RaspFreeMemory @ 0x14017AB5C (RaspFreeMemory.c)
 *     ResFwFreeContext @ 0x14094E218 (ResFwFreeContext.c)
 *     ResFwpPageOutBackground @ 0x14094E460 (ResFwpPageOutBackground.c)
 *     AnFwDisplayFade @ 0x14094EBA8 (AnFwDisplayFade.c)
 *     BgpGxRectangleDestroy @ 0x14094F21C (BgpGxRectangleDestroy.c)
 *     BgpFwLibraryInitialize @ 0x14094F95C (BgpFwLibraryInitialize.c)
 *     BgpTxtCreateRegion @ 0x14095003C (BgpTxtCreateRegion.c)
 *     ResFwBackgroundTransition @ 0x140950360 (ResFwBackgroundTransition.c)
 *     ResFwpPageInBackground @ 0x1409503A4 (ResFwpPageInBackground.c)
 *     AnFwpDisableProgressTimer @ 0x140950440 (AnFwpDisableProgressTimer.c)
 *     BgpFwLibraryDestroy @ 0x140950E4C (BgpFwLibraryDestroy.c)
 *     BgConsoleDestroyInterface @ 0x140950E9C (BgConsoleDestroyInterface.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140950EF8 (BgpDisplayCharacterDestroyContext.c)
 *     BgpFwLibraryDisable @ 0x140950F24 (BgpFwLibraryDisable.c)
 *     BgpTxtDestroyRegion @ 0x14095101C (BgpTxtDestroyRegion.c)
 *     BgpFoDestroy @ 0x1409510F8 (BgpFoDestroy.c)
 *     FopFreeFontData @ 0x1409511C0 (FopFreeFontData.c)
 *     FopFreeMappingTable @ 0x140951234 (FopFreeMappingTable.c)
 *     AnFwDisplayProgressIndicator @ 0x14095129C (AnFwDisplayProgressIndicator.c)
 *     TxtpAddCacheEntry @ 0x140951524 (TxtpAddCacheEntry.c)
 *     BgpConsoleInitialize @ 0x140951730 (BgpConsoleInitialize.c)
 *     BgpDisplayCharacterGetContext @ 0x140951948 (BgpDisplayCharacterGetContext.c)
 *     BgpFoInitialize @ 0x1409FA898 (BgpFoInitialize.c)
 *     FopReadMappingTable @ 0x1409FAABC (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x1409FAC8C (FopValidateFontNameTable.c)
 *     FopReadCmapTable @ 0x1409FAE20 (FopReadCmapTable.c)
 *     FopReadNamingTable @ 0x1409FB154 (FopReadNamingTable.c)
 *     BgpBcInitializeCriticalMode @ 0x1409FB420 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     RtlClearBits @ 0x140017890 (RtlClearBits.c)
 *     MiFreePagesFromMdl @ 0x14002A000 (MiFreePagesFromMdl.c)
 *     MmUnmapLockedPages @ 0x140033F00 (MmUnmapLockedPages.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall BgpFwFreeMemory(__int64 a1)
{
  __int64 v1; // rax
  ULONG v2; // r8d
  __int64 v3; // rdx
  __int64 v4; // r9
  _QWORD *v5; // r10
  __int64 v6; // rdx
  struct _MDL *v7; // rcx
  ULONG v8; // edx
  struct _MDL *v9; // rbx
  ULONG v10; // ebx

  v1 = a1 - 24;
  v2 = *(_DWORD *)(a1 - 24);
  if ( v2 == 1262700354 )
  {
    v10 = v1 - qword_14043C618 - 8;
    RtlClearBits(&BitMapHeader, v10, *(_DWORD *)(v1 + 8));
    if ( v10 < HintIndex )
      HintIndex = v10;
  }
  else
  {
    if ( v2 == 1262634818 )
    {
      v3 = a1 - 40;
      v4 = *(_QWORD *)(a1 - 40);
      if ( *(_QWORD *)(v4 + 8) != a1 - 40 || (v5 = *(_QWORD **)(v3 + 8), *v5 != v3) )
        __fastfail(3u);
      *v5 = v4;
      v6 = 48LL;
      *(_QWORD *)(v4 + 8) = v5;
    }
    else
    {
      v6 = 32LL;
    }
    v7 = (struct _MDL *)(a1 - v6);
    if ( *(_QWORD *)(v1 + 8) >= 0x1000uLL )
    {
      v9 = *(struct _MDL **)(v1 + 16);
      MmUnmapLockedPages(v7, v9);
      MiFreePagesFromMdl((ULONG_PTR)v9, 0);
      v8 = 0;
      v7 = v9;
    }
    else
    {
      v8 = v2;
    }
    ExFreePoolWithTag(v7, v8);
  }
}
