/*
 * XREFs of ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C028BE54
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C00855CC (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x1C028BFB0 (-vRestartbRealizeFont@@YAXPEAVRFONT@@@Z.c)
 * Callees:
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1C0080A4C (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C00868EC (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::vDestroyFont(struct _FONTOBJ **this, int a2)
{
  __int64 *pvProducer; // rax
  SIZE sizLogResPpi; // rbx
  __int64 *v6; // [rsp+30h] [rbp+8h] BYREF
  SIZE v7; // [rsp+40h] [rbp+18h] BYREF

  pvProducer = (__int64 *)(*this)[1].pvProducer;
  sizLogResPpi = (*this)[1].sizLogResPpi;
  v7 = sizLogResPpi;
  v6 = pvProducer;
  PFEOBJ::vFreepfdg(&v6);
  if ( a2 )
  {
    if ( *(_QWORD *)(*(_QWORD *)&sizLogResPpi + 3032LL) )
      PDEVOBJ::DestroyFont((PDEVOBJ *)&v7, *this);
  }
}
