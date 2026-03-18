/*
 * XREFs of ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C008E6D4
 * Callers:
 *     bUnloadEudcFont @ 0x1C008EB48 (bUnloadEudcFont.c)
 *     bAddFlEntry @ 0x1C008ED30 (bAddFlEntry.c)
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C011C934 (-CleanUpEUDC@@YAXXZ.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C011CBA0 (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     bAddAllFlEntry @ 0x1C011CDF4 (bAddAllFlEntry.c)
 *     ?bSetupDefaultFlEntry@@YAHXZ @ 0x1C029165C (-bSetupDefaultFlEntry@@YAHXZ.c)
 * Callees:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C008E90C (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C009377C (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     cCapString @ 0x1C0093C18 (cCapString.c)
 */

__int64 __fastcall PFTOBJ::bUnloadEUDCFont(struct _FONTHASH **this, unsigned __int16 *a2)
{
  unsigned int v2; // edi
  __int64 v4; // rbx
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // r9
  const unsigned __int16 *v8; // rsi
  struct PFF *v9; // rax
  struct _FONTHASH **v11; // [rsp+60h] [rbp+8h] BYREF
  struct PFF **v12; // [rsp+70h] [rbp+18h] BYREF

  v11 = this;
  v2 = 0;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  v5 = v4 + 1;
  if ( v5 > 0x1388000 )
    return 0LL;
  v6 = AllocFreeTmpBuffer(2 * v5);
  v8 = (const unsigned __int16 *)v6;
  if ( !v6 )
    return 0LL;
  cCapString(v6, a2, v5, v7);
  v11 = gpPFTPublic;
  GreAcquireSemaphore(ghsemPublicPFT);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
  v9 = PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&v11, v8, v5, 1u, 0LL, 0, &v12, 1);
  if ( v9 )
  {
    v2 = PFTOBJ::bUnloadWorkhorse((PFTOBJ *)&v11, v9, v12, 0);
  }
  else
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
  }
  FreeTmpBuffer(v8);
  return v2;
}
