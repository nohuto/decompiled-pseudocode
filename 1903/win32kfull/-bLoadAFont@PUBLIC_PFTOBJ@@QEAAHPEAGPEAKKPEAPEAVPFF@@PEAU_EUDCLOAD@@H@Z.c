/*
 * XREFs of ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C004A19C
 * Callers:
 *     bAddFlEntry @ 0x1C004A7E0 (bAddFlEntry.c)
 *     FinishStockFontInit @ 0x1C00E6D90 (FinishStockFontInit.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C00E9540 (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     bAddAllFlEntry @ 0x1C00E9794 (bAddAllFlEntry.c)
 *     ?bSetupDefaultFlEntry@@YAHXZ @ 0x1C0291C8C (-bSetupDefaultFlEntry@@YAHXZ.c)
 *     GreEudcLoadLinkW @ 0x1C0292078 (GreEudcLoadLinkW.c)
 *     bInitOneStockFontInternal @ 0x1C0382640 (bInitOneStockFontInternal.c)
 *     bInitSystemFont @ 0x1C03841F0 (bInitSystemFont.c)
 * Callees:
 *     cCapString @ 0x1C004C288 (cCapString.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C004C338 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::bLoadAFont(
        PUBLIC_PFTOBJ *this,
        unsigned __int16 *a2,
        unsigned int *a3,
        unsigned int a4,
        struct PFF **a5,
        struct _EUDCLOAD *a6,
        int a7)
{
  __int64 v7; // rbx
  unsigned int v12; // ebx
  __int64 v13; // rax
  unsigned __int16 *v14; // rdi
  unsigned int Fonts; // ebx
  size_t v17; // [rsp+28h] [rbp-60h]

  v7 = -1LL;
  do
    ++v7;
  while ( a2[v7] );
  v12 = v7 + 1;
  if ( v12 > 0x1388000 )
    return 0LL;
  v13 = AllocFreeTmpBuffer(2 * v12);
  v14 = (unsigned __int16 *)v13;
  if ( !v13 )
    return 0LL;
  cCapString(v13, a2, v12);
  LODWORD(v17) = 0;
  Fonts = PUBLIC_PFTOBJ::bLoadFonts(this, v14, v12, 1u, 0LL, v17, a3, a4, a5, 0, 0, a6, a7, 0);
  FreeTmpBuffer(v14);
  return Fonts;
}
