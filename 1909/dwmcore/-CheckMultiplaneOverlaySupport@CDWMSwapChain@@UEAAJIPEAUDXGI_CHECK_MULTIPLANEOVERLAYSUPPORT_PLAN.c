/*
 * XREFs of ?CheckMultiplaneOverlaySupport@CDWMSwapChain@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@PEA_N1@Z @ 0x1801627A0
 * Callers:
 *     <none>
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18006402C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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
    memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
    pExceptionRecord.ExceptionCode = v9;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v9, 0x44Fu, 0LL);
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
