/*
 * XREFs of ?LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1C00CEF80
 * Callers:
 *     _lambda_89bfae273395b2af9988bd05c6831f4c_::operator() @ 0x1C00BECD0 (_lambda_89bfae273395b2af9988bd05c6831f4c_--operator().c)
 *     GreMakeFontDir @ 0x1C0289210 (GreMakeFontDir.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C0290084 (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0081724 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ?Initialize@ATTACHOBJ@@QEAAXPEAVPDEVOBJ@@@Z @ 0x1C0081758 (-Initialize@ATTACHOBJ@@QEAAXPEAVPDEVOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::LoadFontFile(
        PDEVOBJ *this,
        unsigned int a2,
        unsigned __int64 *a3,
        void **a4,
        unsigned int *a5,
        struct tagDESIGNVECTOR *a6,
        unsigned int a7,
        unsigned int a8)
{
  __int64 v8; // rdi
  __int64 (__fastcall *v12)(_QWORD, unsigned __int64 *, void **, unsigned int *, struct tagDESIGNVECTOR *, unsigned int, unsigned int); // rbx
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-98h] BYREF
  __int64 v15; // [rsp+78h] [rbp-60h]
  int v16; // [rsp+80h] [rbp-58h]
  char v17; // [rsp+84h] [rbp-54h]

  v8 = 0LL;
  v12 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, void **, unsigned int *, struct tagDESIGNVECTOR *, unsigned int, unsigned int))(*(_QWORD *)this + 3040LL);
  if ( gpepCSRSS )
  {
    v15 = 0LL;
    v16 = 0;
    v17 = 0;
    ATTACHOBJ::Initialize(&ApcState, this);
    v8 = v12(a2, a3, a4, a5, a6, a7, a8);
    ATTACHOBJ::~ATTACHOBJ(&ApcState);
  }
  return v8;
}
