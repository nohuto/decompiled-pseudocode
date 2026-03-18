/*
 * XREFs of ?CleanUpEUDC@@YAXXZ @ 0x1C00E92D4
 * Callers:
 *     GdiMultiUserFontCleanup @ 0x1C00E8960 (GdiMultiUserFontCleanup.c)
 * Callees:
 *     bUnloadEudcFont @ 0x1C0049C14 (bUnloadEudcFont.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C0049D28 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     GreEnableEUDC @ 0x1C00E966C (GreEnableEUDC.c)
 */

void CleanUpEUDC(void)
{
  char v0; // al
  struct _FONTHASH **v1; // rcx
  unsigned int v2; // edi
  char *v3; // rbx

  if ( !gpPFTPublic || (v0 = 1, !ghsemPublicPFT) )
    v0 = 0;
  dword_1C032C7CC |= 2u;
  if ( v0 )
    GreEnableEUDC(0LL);
  if ( qword_1C032BFE8 )
  {
    Win32FreePool(qword_1C032BFE8);
    qword_1C032BFE8 = 0LL;
  }
  if ( qword_1C032E048 )
  {
    Win32FreePool(qword_1C032E048);
    qword_1C032E048 = 0LL;
  }
  if ( bFinallyInitializeFontAssocDefault )
  {
    v2 = 0;
    v3 = (char *)&unk_1C032624C;
    do
    {
      if ( *((_DWORD *)v3 - 31) && *(_WORD *)v3 && *(_QWORD *)(v3 + 524) )
        bUnloadEudcFont(&qword_1C0326458[83 * v2]);
      ++v2;
      v3 += 664;
    }
    while ( v2 < 7 );
  }
  v1 = (struct _FONTHASH **)pFontAssocSubs;
  if ( pFontAssocSubs )
  {
    Win32FreePool(pFontAssocSubs);
    pFontAssocSubs = 0LL;
  }
  if ( gbSystemDBCSFontEnabled )
    PFTOBJ::bUnloadEUDCFont(v1, &gawcSystemDBCSFontPath);
}
