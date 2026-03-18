/*
 * XREFs of ?CleanUpEUDC@@YAXXZ @ 0x1C004F844
 * Callers:
 *     GdiMultiUserFontCleanup @ 0x1C004EBA0 (GdiMultiUserFontCleanup.c)
 * Callees:
 *     GreEnableEUDC @ 0x1C004FB8C (GreEnableEUDC.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C00C8894 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     bUnloadEudcFont @ 0x1C00CAC68 (bUnloadEudcFont.c)
 */

void CleanUpEUDC(void)
{
  char v0; // al
  PFTOBJ *v1; // rcx
  unsigned int v2; // edi
  char *v3; // rbx

  if ( !gpPFTPublic || (v0 = 1, !ghsemPublicPFT) )
    v0 = 0;
  dword_1C0327114 |= 2u;
  if ( v0 )
    GreEnableEUDC(0LL);
  if ( qword_1C0326928 )
  {
    Win32FreePool(qword_1C0326928);
    qword_1C0326928 = 0LL;
  }
  if ( qword_1C032AE80 )
  {
    Win32FreePool(qword_1C032AE80);
    qword_1C032AE80 = 0LL;
  }
  if ( bFinallyInitializeFontAssocDefault )
  {
    v2 = 0;
    v3 = (char *)&unk_1C03209FC;
    do
    {
      if ( *((_DWORD *)v3 - 31) && *(_WORD *)v3 && *(_QWORD *)(v3 + 524) )
        bUnloadEudcFont((char *)&unk_1C0320C08 + 664 * v2);
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
