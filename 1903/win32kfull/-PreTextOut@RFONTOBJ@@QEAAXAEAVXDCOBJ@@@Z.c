/*
 * XREFs of ?PreTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0007C40
 * Callers:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C00076A8 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::PreTextOut(RFONTOBJ *this, struct XDCOBJ *a2)
{
  int v3; // eax
  __int64 i; // rdx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 40LL);
  if ( (v3 & 0x80u) != 0 && (v3 & 0x8000) == 0 && !*(_DWORD *)(*(_QWORD *)this + 92LL) )
  {
    v5 = ghsemPrintKView;
    GreAcquireSemaphore();
    for ( i = gpPrintKViewList; i; i = *(_QWORD *)(i + 32) )
    {
      if ( *(_QWORD *)i == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 128LL) + 80LL) )
        ++*(_DWORD *)(i + 12);
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v5);
  }
}
