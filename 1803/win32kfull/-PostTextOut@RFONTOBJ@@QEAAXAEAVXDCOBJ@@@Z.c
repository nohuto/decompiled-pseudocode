/*
 * XREFs of ?PostTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0004744
 * Callers:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C00024CC (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::PostTextOut(RFONTOBJ *this, struct XDCOBJ *a2)
{
  int v3; // eax
  __int64 i; // rdx
  int v5; // eax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 40LL);
  if ( (v3 & 0x80u) != 0 && (v3 & 0x8000) == 0 && !*(_DWORD *)(*(_QWORD *)this + 76LL) )
  {
    v6 = ghsemPrintKView;
    GreAcquireSemaphore(ghsemPrintKView);
    for ( i = gpPrintKViewList; i; i = *(_QWORD *)(i + 32) )
    {
      if ( *(_QWORD *)i == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 80LL) )
      {
        v5 = *(_DWORD *)(i + 12);
        if ( v5 )
          *(_DWORD *)(i + 12) = v5 - 1;
      }
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v6);
  }
}
