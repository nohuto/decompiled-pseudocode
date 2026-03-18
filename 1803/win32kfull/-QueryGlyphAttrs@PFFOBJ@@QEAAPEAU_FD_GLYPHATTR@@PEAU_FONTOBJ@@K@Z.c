/*
 * XREFs of ?QueryGlyphAttrs@PFFOBJ@@QEAAPEAU_FD_GLYPHATTR@@PEAU_FONTOBJ@@K@Z @ 0x1C0290614
 * Callers:
 *     FONTOBJ_pQueryGlyphAttrs @ 0x1C0263DF0 (FONTOBJ_pQueryGlyphAttrs.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C0081670 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0081724 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

struct _FD_GLYPHATTR *__fastcall PFFOBJ::QueryGlyphAttrs(PFFOBJ *this, struct _FONTOBJ *a2, unsigned int a3)
{
  __int64 (__fastcall *v5)(struct _FONTOBJ *, _QWORD); // rbx
  __int64 v6; // rbx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-78h] BYREF

  v5 = *(__int64 (__fastcall **)(struct _FONTOBJ *, _QWORD))(*(_QWORD *)(*(_QWORD *)this + 88LL) + 3368LL);
  if ( gpepCSRSS )
  {
    ATTACHOBJ::ATTACHOBJ(&ApcState, (unsigned __int64)this);
    if ( v5 )
    {
      v6 = v5(a2, a3);
      ATTACHOBJ::~ATTACHOBJ(&ApcState);
      return (struct _FD_GLYPHATTR *)v6;
    }
    ATTACHOBJ::~ATTACHOBJ(&ApcState);
  }
  return 0LL;
}
