/*
 * XREFs of ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C00CB1D8
 * Callers:
 *     bAddFlEntry @ 0x1C0080280 (bAddFlEntry.c)
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C00C3A08 (-CleanUpEUDC@@YAXXZ.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C00C3C74 (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     bAddAllFlEntry @ 0x1C00C6838 (bAddAllFlEntry.c)
 *     bUnloadEudcFont @ 0x1C00CB0C4 (bUnloadEudcFont.c)
 *     ?bSetupDefaultFlEntry@@YAHXZ @ 0x1C027B91C (-bSetupDefaultFlEntry@@YAHXZ.c)
 * Callees:
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C007F36C (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     cCapString @ 0x1C007FB68 (cCapString.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C00CB410 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 */

__int64 __fastcall PFTOBJ::bUnloadEUDCFont(struct _FONTHASH **this, unsigned __int16 *a2)
{
  unsigned int v2; // edi
  __int64 v4; // rbx
  unsigned int v5; // ebx
  WCHAR *v6; // rax
  const unsigned __int16 *v7; // rsi
  struct PFF *v8; // rax
  struct _FONTHASH **v10; // [rsp+60h] [rbp+8h] BYREF
  struct PFF **v11; // [rsp+70h] [rbp+18h] BYREF

  v10 = this;
  v2 = 0;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  v5 = v4 + 1;
  if ( v5 > 0x1388000 )
    return 0LL;
  v6 = (WCHAR *)AllocFreeTmpBuffer(2 * v5);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  cCapString(v6, a2, v5);
  v10 = gpPFTPublic;
  GreAcquireSemaphore(ghsemPublicPFT);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
  v8 = PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&v10, v7, v5, 1, 0LL, 0, &v11, 1);
  if ( v8 )
  {
    v2 = PFTOBJ::bUnloadWorkhorse((PFTOBJ *)&v10, v8, v11, 0);
  }
  else
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
  }
  FreeTmpBuffer(v7);
  return v2;
}
