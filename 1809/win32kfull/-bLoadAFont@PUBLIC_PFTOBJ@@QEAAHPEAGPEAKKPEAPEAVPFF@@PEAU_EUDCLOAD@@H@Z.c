/*
 * XREFs of ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C007D340
 * Callers:
 *     bAddFlEntry @ 0x1C0080280 (bAddFlEntry.c)
 *     FinishStockFontInit @ 0x1C00C1820 (FinishStockFontInit.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C00C3C74 (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     bAddAllFlEntry @ 0x1C00C6838 (bAddAllFlEntry.c)
 *     ?bSetupDefaultFlEntry@@YAHXZ @ 0x1C027B91C (-bSetupDefaultFlEntry@@YAHXZ.c)
 *     GreEudcLoadLinkW @ 0x1C027BD1C (GreEudcLoadLinkW.c)
 *     bInitOneStockFontInternal @ 0x1C036D5FC (bInitOneStockFontInternal.c)
 *     bInitSystemFont @ 0x1C036F190 (bInitSystemFont.c)
 * Callees:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C007EB54 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     cCapString @ 0x1C007FB68 (cCapString.c)
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
  __int64 v14; // r9
  unsigned __int16 *v15; // rdi
  unsigned int Fonts; // ebx
  size_t v18; // [rsp+28h] [rbp-60h]

  v7 = -1LL;
  do
    ++v7;
  while ( a2[v7] );
  v12 = v7 + 1;
  if ( v12 > 0x1388000 )
    return 0LL;
  v13 = AllocFreeTmpBuffer(2 * v12);
  v15 = (unsigned __int16 *)v13;
  if ( !v13 )
    return 0LL;
  cCapString(v13, a2, v12, v14);
  LODWORD(v18) = 0;
  Fonts = PUBLIC_PFTOBJ::bLoadFonts(this, v15, v12, 1u, 0LL, v18, a3, a4, a5, 0, 0, a6, a7, 0);
  FreeTmpBuffer(v15);
  return Fonts;
}
