/*
 * XREFs of BgpFwFreeMemory @ 0x140178B9C
 * Callers:
 *     BgpFwQueryBootGraphicsInformation @ 0x1401791B8 (BgpFwQueryBootGraphicsInformation.c)
 *     RaspFreeMemory @ 0x140183CC4 (RaspFreeMemory.c)
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
 *     BgpFoInitialize @ 0x140A402C8 (BgpFoInitialize.c)
 *     FopReadMappingTable @ 0x140A404F0 (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x140A406C4 (FopValidateFontNameTable.c)
 *     FopReadCmapTable @ 0x140A4083C (FopReadCmapTable.c)
 *     FopReadNamingTable @ 0x140A40B98 (FopReadNamingTable.c)
 *     BgpBcInitializeCriticalMode @ 0x140A40E74 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14006AF70 (MmUnmapLockedPages.c)
 *     RtlClearBits @ 0x1400CF210 (RtlClearBits.c)
 *     MmFreePagesFromMdl @ 0x1400DD350 (MmFreePagesFromMdl.c)
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
    v10 = v1 - qword_140467E60 - 8;
    RtlClearBits(&stru_140467E70, v10, *(_DWORD *)(v1 + 8));
    if ( v10 < dword_140467E68 )
      dword_140467E68 = v10;
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
