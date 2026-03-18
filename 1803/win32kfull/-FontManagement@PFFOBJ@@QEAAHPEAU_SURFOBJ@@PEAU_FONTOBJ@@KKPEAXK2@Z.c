/*
 * XREFs of ?FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C0290480
 * Callers:
 *     NtGdiGetETM @ 0x1C0118830 (NtGdiGetETM.c)
 *     ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x1C0119CDC (-GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C0081670 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0081724 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PFFOBJ::FontManagement(
        PFFOBJ *this,
        struct _SURFOBJ *a2,
        struct _FONTOBJ *a3,
        unsigned int a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        void *a8)
{
  unsigned int v8; // edi
  __int64 (__fastcall *v12)(struct _SURFOBJ *, struct _FONTOBJ *, _QWORD, _QWORD, void *, unsigned int, void *); // rbx
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-98h] BYREF

  v8 = 0;
  v12 = *(__int64 (__fastcall **)(struct _SURFOBJ *, struct _FONTOBJ *, _QWORD, _QWORD, void *, unsigned int, void *))(*(_QWORD *)(*(_QWORD *)this + 88LL) + 3056LL);
  if ( gpepCSRSS )
  {
    ATTACHOBJ::ATTACHOBJ(&ApcState, (unsigned __int64)this);
    if ( v12 )
      v8 = v12(a2, a3, a4, a5, a6, a7, a8);
    ATTACHOBJ::~ATTACHOBJ(&ApcState);
  }
  return v8;
}
