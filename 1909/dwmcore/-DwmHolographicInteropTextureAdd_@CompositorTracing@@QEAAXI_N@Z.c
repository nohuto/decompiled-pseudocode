/*
 * XREFs of ?DwmHolographicInteropTextureAdd_@CompositorTracing@@QEAAXI_N@Z @ 0x18023FD08
 * Callers:
 *     ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x18023F840 (-AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800D6290 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

void __fastcall CompositorTracing::DwmHolographicInteropTextureAdd_(CompositorTracing *this, int a2, char a3)
{
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  UINT32 cData; // r9d
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  int *v7; // [rsp+50h] [rbp-38h]
  UINT32 v8; // [rsp+58h] [rbp-30h]
  int v9; // [rsp+5Ch] [rbp-2Ch]
  char *v10; // [rsp+60h] [rbp-28h]
  int v11; // [rsp+68h] [rbp-20h]
  int v12; // [rsp+6Ch] [rbp-1Ch]
  int v13; // [rsp+98h] [rbp+10h] BYREF
  char v14; // [rsp+A0h] [rbp+18h] BYREF

  v14 = a3;
  v13 = a2;
  v3 = (const struct _TlgProvider_t *)wil::details::static_lazy<CompositorTracing>::get(
                                        (__int64)this,
                                        (void (__cdecl *)())lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v3 > 4u )
  {
    if ( TlgKeywordOn(v3, 0x400000000000uLL) )
    {
      v9 = 0;
      v12 = 0;
      v7 = &v13;
      v10 = &v14;
      v8 = cData;
      v11 = 1;
      TlgWrite(v4, &unk_1802DEFE4, 0LL, 0LL, cData, &pData);
    }
  }
}
