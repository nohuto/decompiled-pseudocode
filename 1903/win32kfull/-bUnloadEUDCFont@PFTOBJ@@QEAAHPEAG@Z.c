/*
 * XREFs of ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C0049D28
 * Callers:
 *     bUnloadEudcFont @ 0x1C0049C14 (bUnloadEudcFont.c)
 *     bAddFlEntry @ 0x1C004A7E0 (bAddFlEntry.c)
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C00E92D4 (-CleanUpEUDC@@YAXXZ.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C00E9540 (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     bAddAllFlEntry @ 0x1C00E9794 (bAddAllFlEntry.c)
 *     ?bSetupDefaultFlEntry@@YAHXZ @ 0x1C0291C8C (-bSetupDefaultFlEntry@@YAHXZ.c)
 * Callees:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C0049F60 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     cCapString @ 0x1C004C288 (cCapString.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C004CB54 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 */

__int64 __fastcall PFTOBJ::bUnloadEUDCFont(struct _FONTHASH **this, unsigned __int16 *a2)
{
  unsigned int v2; // edi
  __int64 v4; // rbx
  unsigned int v5; // ebx
  __int64 v6; // rax
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
  v6 = AllocFreeTmpBuffer(2 * v5);
  v7 = (const unsigned __int16 *)v6;
  if ( !v6 )
    return 0LL;
  cCapString(v6, a2, v5);
  v10 = gpPFTPublic;
  GreAcquireSemaphore(ghsemPublicPFT);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
  v8 = PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&v10, v7, v5, 1u, 0LL, 0, &v11, 1);
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
