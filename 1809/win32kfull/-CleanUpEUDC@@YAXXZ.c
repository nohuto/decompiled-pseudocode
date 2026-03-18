/*
 * XREFs of ?CleanUpEUDC@@YAXXZ @ 0x1C00C3A08
 * Callers:
 *     GdiMultiUserFontCleanup @ 0x1C00C2C50 (GdiMultiUserFontCleanup.c)
 * Callees:
 *     GreEnableEUDC @ 0x1C00C3D7C (GreEnableEUDC.c)
 *     bUnloadEudcFont @ 0x1C00CB0C4 (bUnloadEudcFont.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C00CB1D8 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 */

void CleanUpEUDC(void)
{
  char v0; // al
  PFTOBJ *v1; // rcx
  unsigned int v2; // edi
  char *v3; // rbx

  if ( !gpPFTPublic || (v0 = 1, !ghsemPublicPFT) )
    v0 = 0;
  dword_1C03177D4 |= 2u;
  if ( v0 )
    GreEnableEUDC(0LL);
  if ( qword_1C0316FC8 )
  {
    Win32FreePool(qword_1C0316FC8);
    qword_1C0316FC8 = 0LL;
  }
  if ( qword_1C0319AD8 )
  {
    Win32FreePool(qword_1C0319AD8);
    qword_1C0319AD8 = 0LL;
  }
  if ( bFinallyInitializeFontAssocDefault )
  {
    v2 = 0;
    v3 = (char *)&unk_1C031121C;
    do
    {
      if ( *((_DWORD *)v3 - 31) && *(_WORD *)v3 && *(_QWORD *)(v3 + 524) )
        bUnloadEudcFont((char *)&unk_1C0311428 + 664 * v2);
      ++v2;
      v3 += 664;
    }
    while ( v2 < 7 );
  }
  v1 = pFontAssocSubs;
  if ( pFontAssocSubs )
  {
    Win32FreePool(pFontAssocSubs);
    pFontAssocSubs = 0LL;
  }
  if ( gbSystemDBCSFontEnabled )
    PFTOBJ::bUnloadEUDCFont(v1, &gawcSystemDBCSFontPath);
}
