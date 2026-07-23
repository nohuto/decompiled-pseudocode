/*
 * XREFs of BgpFwFreeMemory @ 0x1401784AC
 * Callers:
 *     BgpFwQueryBootGraphicsInformation @ 0x140178AC8 (BgpFwQueryBootGraphicsInformation.c)
 *     RaspFreeMemory @ 0x140183714 (RaspFreeMemory.c)
 *     ResFwFreeContext @ 0x14098E218 (ResFwFreeContext.c)
 *     ResFwpPageOutBackground @ 0x14098E460 (ResFwpPageOutBackground.c)
 *     AnFwDisplayFade @ 0x14098EBD8 (AnFwDisplayFade.c)
 *     BgpGxRectangleDestroy @ 0x14098F254 (BgpGxRectangleDestroy.c)
 *     BgpFwLibraryInitialize @ 0x14098F9A8 (BgpFwLibraryInitialize.c)
 *     BgpTxtCreateRegion @ 0x140990088 (BgpTxtCreateRegion.c)
 *     ResFwBackgroundTransition @ 0x1409903B0 (ResFwBackgroundTransition.c)
 *     ResFwpPageInBackground @ 0x1409903F4 (ResFwpPageInBackground.c)
 *     AnFwpDisableProgressTimer @ 0x140990490 (AnFwpDisableProgressTimer.c)
 *     BgpFwLibraryDestroy @ 0x140990EAC (BgpFwLibraryDestroy.c)
 *     BgConsoleDestroyInterface @ 0x140990EFC (BgConsoleDestroyInterface.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140990F58 (BgpDisplayCharacterDestroyContext.c)
 *     BgpFwLibraryDisable @ 0x140990F84 (BgpFwLibraryDisable.c)
 *     BgpTxtDestroyRegion @ 0x14099107C (BgpTxtDestroyRegion.c)
 *     BgpFoDestroy @ 0x140991158 (BgpFoDestroy.c)
 *     FopFreeFontData @ 0x140991220 (FopFreeFontData.c)
 *     FopFreeMappingTable @ 0x140991294 (FopFreeMappingTable.c)
 *     AnFwDisplayProgressIndicator @ 0x1409912FC (AnFwDisplayProgressIndicator.c)
 *     BgpConsoleInitialize @ 0x1409917A0 (BgpConsoleInitialize.c)
 *     BgpDisplayCharacterGetContext @ 0x1409919C4 (BgpDisplayCharacterGetContext.c)
 *     TxtpDestroyCacheEntry @ 0x1409948F8 (TxtpDestroyCacheEntry.c)
 *     BgpFoInitialize @ 0x140A404F8 (BgpFoInitialize.c)
 *     FopReadMappingTable @ 0x140A40720 (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x140A408F4 (FopValidateFontNameTable.c)
 *     FopReadCmapTable @ 0x140A40A6C (FopReadCmapTable.c)
 *     FopReadNamingTable @ 0x140A40DC8 (FopReadNamingTable.c)
 *     BgpBcInitializeCriticalMode @ 0x140A410A4 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14006AD00 (MmUnmapLockedPages.c)
 *     RtlClearBits @ 0x140091EF0 (RtlClearBits.c)
 *     MmFreePagesFromMdl @ 0x1400EFC40 (MmFreePagesFromMdl.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
    v10 = v1 - qword_140468130 - 8;
    RtlClearBits(&stru_140468140, v10, *(_DWORD *)(v1 + 8));
    if ( v10 < dword_140468138 )
      dword_140468138 = v10;
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
      MmFreePagesFromMdl(v9);
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
