/*
 * XREFs of ?CheckMultiplaneOverlaySupport@CDWMSwapChain@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@PEA_N1@Z @ 0x180203D50
 * Callers:
 *     <none>
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180038C28 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::CheckMultiplaneOverlaySupport(
        CDWMSwapChain *this,
        __int64 a2,
        struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a3,
        bool *a4,
        bool *a5)
{
  __int64 v5; // rcx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // ebx
  bool v10; // zf
  int v12; // [rsp+30h] [rbp-91h] BYREF
  int v13; // [rsp+34h] [rbp-8Dh] BYREF
  unsigned int v14; // [rsp+38h] [rbp-89h] BYREF
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+40h] [rbp-81h] BYREF

  v5 = *((_QWORD *)this + 53);
  v12 = 0;
  v13 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *, int *, int *))(*(_QWORD *)v5 + 176LL))(
         v5,
         a2,
         a3,
         &v12,
         &v13);
  v14 = v7;
  v9 = v7;
  if ( v7 == -2005270527 || v7 == -2147024809 )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = v9;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v9, 0x41Bu);
  }
  else
  {
    v10 = v13 == 0;
    *a4 = v12 != 0;
    *a5 = !v10;
  }
  TranslateDXGIorD3DErrorInContext(v9, 0, &v14);
  return v14;
}
