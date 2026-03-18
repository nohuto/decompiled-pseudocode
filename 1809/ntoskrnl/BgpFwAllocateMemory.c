/*
 * XREFs of BgpFwAllocateMemory @ 0x14016F4B8
 * Callers:
 *     BgpFwQueryBootGraphicsInformation @ 0x14016F2A0 (BgpFwQueryBootGraphicsInformation.c)
 *     BgpRasPrintGlyph @ 0x14017A1B4 (BgpRasPrintGlyph.c)
 *     RaspAllocateMemory @ 0x14017C044 (RaspAllocateMemory.c)
 *     BcpGetProgressMessages @ 0x1401867B8 (BcpGetProgressMessages.c)
 *     BgpTxtGetRegionContext @ 0x14094F8BC (BgpTxtGetRegionContext.c)
 *     BgpFwLibraryInitialize @ 0x14094F95C (BgpFwLibraryInitialize.c)
 *     BgpTxtCreateRegion @ 0x14095003C (BgpTxtCreateRegion.c)
 *     BgpGxRectangleCreate @ 0x14095021C (BgpGxRectangleCreate.c)
 *     ResFwpPageInBackground @ 0x1409503A4 (ResFwpPageInBackground.c)
 *     TxtpAddCacheEntry @ 0x140951524 (TxtpAddCacheEntry.c)
 *     BgpConsoleInitialize @ 0x140951730 (BgpConsoleInitialize.c)
 *     BgpDisplayCharacterGetContext @ 0x140951948 (BgpDisplayCharacterGetContext.c)
 *     BgpFoInitialize @ 0x1409FA888 (BgpFoInitialize.c)
 *     FopInitializeFonts @ 0x1409FA984 (FopInitializeFonts.c)
 *     FopReadMappingTable @ 0x1409FAAAC (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x1409FAC7C (FopValidateFontNameTable.c)
 *     FopReadCmapTable @ 0x1409FAE10 (FopReadCmapTable.c)
 *     FopReadNamingTable @ 0x1409FB144 (FopReadNamingTable.c)
 *     BgpBcInitializeCriticalMode @ 0x1409FB410 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     MmAllocatePagesForMdlEx @ 0x140010EE0 (MmAllocatePagesForMdlEx.c)
 *     MiFreePagesFromMdl @ 0x14002A000 (MiFreePagesFromMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     BgpFwReserveAllocate @ 0x14016F644 (BgpFwReserveAllocate.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BgpFwAllocateMemory(unsigned __int64 a1)
{
  int v1; // ebp
  char *v2; // rdi
  PMDL v3; // rbx
  ULONG v4; // r14d
  __int64 v5; // r15
  SIZE_T v6; // rsi
  char *PoolWithTag; // rax
  __int64 v8; // rcx
  char *v9; // rax
  PMDL PagesForMdl; // rax

  if ( !a1 )
    return 0LL;
  if ( (dword_140405AD0 & 0x800) == 0 )
  {
    v1 = dword_140405AD0 & 0x8000;
    v2 = 0LL;
    v3 = 0LL;
    v4 = v1 != 0 ? 1262634818 : 1263093570;
    v5 = v1 != 0 ? 48LL : 32LL;
    if ( v5 + a1 >= a1 )
    {
      v6 = v5 + a1;
      if ( v5 + a1 < 0xFFFFEFFF )
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
            v8 = qword_140405BA0;
            v9 = v2 - 40;
            if ( *(__int64 **)(qword_140405BA0 + 8) != &qword_140405BA0 )
              __fastfail(3u);
            *(_QWORD *)v9 = qword_140405BA0;
            *((_QWORD *)v9 + 1) = &qword_140405BA0;
            *(_QWORD *)(v8 + 8) = v9;
            qword_140405BA0 = (__int64)(v2 - 40);
          }
          *((_DWORD *)v2 - 6) = v4;
          *((_QWORD *)v2 - 2) = v6;
          *((_QWORD *)v2 - 1) = v3;
          if ( !v2 )
          {
LABEL_20:
            if ( v3 )
            {
              MiFreePagesFromMdl((ULONG_PTR)v3, 0);
              ExFreePoolWithTag(v3, 0);
            }
          }
          return (__int64)v2;
        }
        v6 = (v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, v6, MmCached, 5u);
        v3 = PagesForMdl;
        if ( PagesForMdl )
        {
          if ( (PagesForMdl->MdlFlags & 5) != 0 )
            PoolWithTag = (char *)PagesForMdl->MappedSystemVa;
          else
            PoolWithTag = (char *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000010u);
          goto LABEL_7;
        }
      }
    }
    return (__int64)v2;
  }
  return BgpFwReserveAllocate();
}
