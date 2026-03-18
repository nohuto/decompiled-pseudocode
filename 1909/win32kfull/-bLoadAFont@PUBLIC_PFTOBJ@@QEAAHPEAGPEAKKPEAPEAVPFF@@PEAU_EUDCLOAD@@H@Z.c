/*
 * XREFs of ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C008F56C
 * Callers:
 *     bAddFlEntry @ 0x1C008ED30 (bAddFlEntry.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C011CBA0 (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     bAddAllFlEntry @ 0x1C011CDF4 (bAddAllFlEntry.c)
 *     FinishStockFontInit @ 0x1C0140790 (FinishStockFontInit.c)
 *     ?bSetupDefaultFlEntry@@YAHXZ @ 0x1C029165C (-bSetupDefaultFlEntry@@YAHXZ.c)
 *     GreEudcLoadLinkW @ 0x1C0291A48 (GreEudcLoadLinkW.c)
 *     bInitOneStockFontInternal @ 0x1C03807D8 (bInitOneStockFontInternal.c)
 *     bInitSystemFont @ 0x1C0381200 (bInitSystemFont.c)
 * Callees:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C0092F60 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     cCapString @ 0x1C0093C18 (cCapString.c)
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
