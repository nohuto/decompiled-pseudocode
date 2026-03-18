/*
 * XREFs of ?HolographicClientCreated_@CompositorTracing@@QEAAXXZ @ 0x180241AE4
 * Callers:
 *     ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ @ 0x180241754 (-EnsureHolographicClient@CHolographicManager@@AEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800D5ED0 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

void __fastcall CompositorTracing::HolographicClientCreated_(CompositorTracing *this)
{
  const struct _TlgProvider_t *v1; // rcx
  const struct _TlgProvider_t *v2; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v1 = (const struct _TlgProvider_t *)wil::details::static_lazy<CompositorTracing>::get(
                                        (__int64)this,
                                        (void (__cdecl *)())lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v1 > 4u )
  {
    if ( TlgKeywordOn(v1, 0x400000000000uLL) )
      TlgWrite(v2, &unk_1802E0C96, 0LL, 0LL, 2u, &pData);
  }
}
