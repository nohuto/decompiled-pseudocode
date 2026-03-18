/*
 * XREFs of ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C00CED98
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C00F2E58 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     ?iOpenGLExtEscapeHelper@@YAXPEAX@Z @ 0x1C0247F40 (-iOpenGLExtEscapeHelper@@YAXPEAX@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0247F88 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?MulEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C0273200 (-MulEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     GreNamedEscape @ 0x1C0277088 (GreNamedEscape.c)
 * Callees:
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0081724 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ?Initialize@ATTACHOBJ@@QEAAXPEAVPDEVOBJ@@@Z @ 0x1C0081758 (-Initialize@ATTACHOBJ@@QEAAXPEAVPDEVOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::Escape(
        PDEVOBJ *this,
        struct _SURFOBJ *a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        void *a7)
{
  unsigned int v7; // edi
  __int64 (__fastcall *v11)(struct _SURFOBJ *, _QWORD, _QWORD, void *, unsigned int, void *); // rbx
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-98h] BYREF
  __int64 v14; // [rsp+78h] [rbp-60h]
  int v15; // [rsp+80h] [rbp-58h]
  char v16; // [rsp+84h] [rbp-54h]

  v7 = 0;
  v11 = *(__int64 (__fastcall **)(struct _SURFOBJ *, _QWORD, _QWORD, void *, unsigned int, void *))(*(_QWORD *)this
                                                                                                  + 2872LL);
  if ( gpepCSRSS )
  {
    v14 = 0LL;
    v15 = 0;
    v16 = 0;
    ATTACHOBJ::Initialize(&ApcState, this);
    v7 = v11(a2, a3, a4, a5, a6, a7);
    ATTACHOBJ::~ATTACHOBJ(&ApcState);
  }
  return v7;
}
