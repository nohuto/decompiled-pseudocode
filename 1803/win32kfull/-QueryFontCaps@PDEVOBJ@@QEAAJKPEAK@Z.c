/*
 * XREFs of ?QueryFontCaps@PDEVOBJ@@QEAAJKPEAK@Z @ 0x1C02905EC
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0085C94 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::QueryFontCaps(PDEVOBJ *this, __int64 a2, unsigned int *a3)
{
  return (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)this + 3032LL))(2LL, a3);
}
