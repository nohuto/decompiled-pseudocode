/*
 * XREFs of BgpFwAllocateMemory @ 0x1401793D0
 * Callers:
 *     BgpFwQueryBootGraphicsInformation @ 0x1401791B8 (BgpFwQueryBootGraphicsInformation.c)
 *     BgpRasPrintGlyph @ 0x14018355C (BgpRasPrintGlyph.c)
 *     RaspAllocateMemory @ 0x1401851B4 (RaspAllocateMemory.c)
 *     BcpGetProgressMessages @ 0x140190054 (BcpGetProgressMessages.c)
 *     BgpTxtGetRegionContext @ 0x14098F908 (BgpTxtGetRegionContext.c)
 *     BgpFwLibraryInitialize @ 0x14098F9A8 (BgpFwLibraryInitialize.c)
 *     BgpTxtCreateRegion @ 0x140990088 (BgpTxtCreateRegion.c)
 *     BgpGxRectangleCreate @ 0x14099026C (BgpGxRectangleCreate.c)
 *     ResFwpPageInBackground @ 0x1409903F4 (ResFwpPageInBackground.c)
 *     TxtpAddCacheEntry @ 0x14099158C (TxtpAddCacheEntry.c)
 *     BgpConsoleInitialize @ 0x1409917A0 (BgpConsoleInitialize.c)
 *     BgpDisplayCharacterGetContext @ 0x1409919C4 (BgpDisplayCharacterGetContext.c)
 *     BgpFoInitialize @ 0x140A402C8 (BgpFoInitialize.c)
 *     FopInitializeFonts @ 0x140A403C4 (FopInitializeFonts.c)
 *     FopReadMappingTable @ 0x140A404F0 (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x140A406C4 (FopValidateFontNameTable.c)
 *     FopReadCmapTable @ 0x140A4083C (FopReadCmapTable.c)
 *     FopReadNamingTable @ 0x140A40B98 (FopReadNamingTable.c)
 *     BgpBcInitializeCriticalMode @ 0x140A40E74 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14002FE40 (MmMapLockedPagesSpecifyCache.c)
 *     ExFreeHeapPool @ 0x140064E50 (ExFreeHeapPool.c)
 *     MmAllocatePagesForMdlEx @ 0x1400DC9B0 (MmAllocatePagesForMdlEx.c)
 *     MiFreePagesFromMdl @ 0x1400DDE94 (MiFreePagesFromMdl.c)
 *     BgpFwReserveAllocate @ 0x140179554 (BgpFwReserveAllocate.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BgpFwAllocateMemory(unsigned __int64 a1)
{
  int v1; // ebp
  char *v2; // rdi
  ULONG_PTR v3; // rbx
  ULONG v4; // r14d
  __int64 v5; // r15
  SIZE_T v6; // rsi
  char *PoolWithTag; // rax
  __int64 v8; // rcx
  char *v9; // rax
  PMDL PagesForMdl; // rax

  if ( !a1 )
    return 0LL;
  if ( (dword_14042C010 & 0x800) == 0 )
  {
    v1 = dword_14042C010 & 0x8000;
    v2 = 0LL;
    v3 = 0LL;
    v4 = v1 != 0 ? 1262634818 : 1263093570;
    v5 = v1 != 0 ? 48LL : 32LL;
    v6 = v5 + a1;
    if ( v5 + a1 >= a1 && v6 < 0xFFFFEFFF )
    {
      if ( v6 < 0x1000 )
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v5 + a1, v4);
LABEL_7:
        if ( !PoolWithTag )
          goto LABEL_20;
        v2 = &PoolWithTag[v5];
        if ( v1 )
        {
          v8 = qword_14042C0E0;
          v9 = v2 - 40;
          if ( *(__int64 **)(qword_14042C0E0 + 8) != &qword_14042C0E0 )
            __fastfail(3u);
          *(_QWORD *)v9 = qword_14042C0E0;
          *((_QWORD *)v9 + 1) = &qword_14042C0E0;
          *(_QWORD *)(v8 + 8) = v9;
          qword_14042C0E0 = (__int64)(v2 - 40);
        }
        *((_DWORD *)v2 - 6) = v4;
        *((_QWORD *)v2 - 2) = v6;
        *((_QWORD *)v2 - 1) = v3;
        if ( !v2 )
        {
LABEL_20:
          if ( v3 )
          {
            MiFreePagesFromMdl(v3, 0);
            ExFreeHeapPool(v3);
          }
        }
        return (__int64)v2;
      }
      v6 = (v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, v6, MmCached, 5u);
      v3 = (ULONG_PTR)PagesForMdl;
      if ( PagesForMdl )
      {
        if ( (PagesForMdl->MdlFlags & 5) != 0 )
          PoolWithTag = (char *)PagesForMdl->MappedSystemVa;
        else
          PoolWithTag = (char *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000010u);
        goto LABEL_7;
      }
    }
    return (__int64)v2;
  }
  return BgpFwReserveAllocate();
}
