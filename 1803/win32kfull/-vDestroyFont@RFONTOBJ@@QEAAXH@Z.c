/*
 * XREFs of ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C0278498
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0085C94 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x1C02785F0 (-vRestartbRealizeFont@@YAXPEAVRFONT@@@Z.c)
 * Callees:
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C00CCD0C (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1C00CE28C (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 */

void __fastcall RFONTOBJ::vDestroyFont(struct _FONTOBJ **this, int a2)
{
  __int64 *v4; // rax
  ULONG_PTR iTTUniq; // rbx
  __int64 *v6; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = *(__int64 **)&(*this)[1].ulStyleSize;
  iTTUniq = (*this)[1].iTTUniq;
  v7 = iTTUniq;
  v6 = v4;
  PFEOBJ::vFreepfdg(&v6);
  if ( a2 )
  {
    if ( *(_QWORD *)(iTTUniq + 3024) )
      PDEVOBJ::DestroyFont((PDEVOBJ *)&v7, *this);
  }
}
