/*
 * XREFs of ?pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z @ 0x1C0007BE4
 * Callers:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C00076A8 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0065250 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 */

void __fastcall SURFACE::pdcoAA(SURFACE *this, struct XDCOBJ *a2)
{
  __int64 ThreadWin32Thread; // rax

  *((_QWORD *)this + 13) = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    *(_QWORD *)(ThreadWin32Thread + 304) = a2;
}
