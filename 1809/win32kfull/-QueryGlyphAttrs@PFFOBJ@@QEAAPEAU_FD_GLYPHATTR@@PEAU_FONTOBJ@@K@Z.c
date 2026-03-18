/*
 * XREFs of ?QueryGlyphAttrs@PFFOBJ@@QEAAPEAU_FD_GLYPHATTR@@PEAU_FONTOBJ@@K@Z @ 0x1C02A4228
 * Callers:
 *     FONTOBJ_pQueryGlyphAttrs @ 0x1C02779D0 (FONTOBJ_pQueryGlyphAttrs.c)
 * Callees:
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0084130 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C008415C (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

struct _FD_GLYPHATTR *__fastcall PFFOBJ::QueryGlyphAttrs(PFFOBJ *this, struct _FONTOBJ *a2, unsigned int a3)
{
  __int64 (__fastcall *v5)(struct _FONTOBJ *, _QWORD); // rbx
  __int64 v6; // rdi
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  v5 = *(__int64 (__fastcall **)(struct _FONTOBJ *, _QWORD))(*(_QWORD *)(*(_QWORD *)this + 88LL) + 3376LL);
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v8, this);
  v6 = 0LL;
  if ( v5 )
    v6 = v5(a2, a3);
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v8);
  return (struct _FD_GLYPHATTR *)v6;
}
