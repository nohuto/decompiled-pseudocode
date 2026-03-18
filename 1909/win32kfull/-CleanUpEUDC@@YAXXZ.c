/*
 * XREFs of ?CleanUpEUDC@@YAXXZ @ 0x1C011C934
 * Callers:
 *     GdiMultiUserFontCleanup @ 0x1C011D2D0 (GdiMultiUserFontCleanup.c)
 * Callees:
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C008E6D4 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     bUnloadEudcFont @ 0x1C008EB48 (bUnloadEudcFont.c)
 *     GreEnableEUDC @ 0x1C011CCCC (GreEnableEUDC.c)
 */

void CleanUpEUDC(void)
{
  char v0; // al
  struct _FONTHASH **v1; // rcx
  unsigned int v2; // edi
  char *v3; // rbx

  if ( !gpPFTPublic || (v0 = 1, !ghsemPublicPFT) )
    v0 = 0;
  dword_1C032A7BC |= 2u;
  if ( v0 )
    GreEnableEUDC(0LL);
  if ( qword_1C0329FE8 )
  {
    Win32FreePool(qword_1C0329FE8);
    qword_1C0329FE8 = 0LL;
  }
  if ( qword_1C032C038 )
  {
    Win32FreePool(qword_1C032C038);
    qword_1C032C038 = 0LL;
  }
  if ( bFinallyInitializeFontAssocDefault )
  {
    v2 = 0;
    v3 = (char *)&unk_1C032424C;
    do
    {
      if ( *((_DWORD *)v3 - 31) && *(_WORD *)v3 && *(_QWORD *)(v3 + 524) )
        bUnloadEudcFont(&qword_1C0324458[83 * v2]);
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
