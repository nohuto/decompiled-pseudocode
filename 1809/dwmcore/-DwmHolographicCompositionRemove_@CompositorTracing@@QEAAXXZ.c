/*
 * XREFs of ?DwmHolographicCompositionRemove_@CompositorTracing@@QEAAXXZ @ 0x18020AA58
 * Callers:
 *     ?RemoveHolographicComposition@CHolographicManager@@QEAAXPEAVCHolographicComposition@@@Z @ 0x18020B7D0 (-RemoveHolographicComposition@CHolographicManager@@QEAAXPEAVCHolographicComposition@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800785C4 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

void __fastcall CompositorTracing::DwmHolographicCompositionRemove_(CompositorTracing *this)
{
  const struct _TlgProvider_t *v1; // rcx
  const struct _TlgProvider_t *v2; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v1 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<CompositorTracing>::get(
                                                    (__int64)this,
                                                    (void (__cdecl *)())lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_)
                                      + 1);
  if ( *(_DWORD *)v1 > 4u )
  {
    if ( TlgKeywordOn(v1, 0x400000000000uLL) )
      TlgWrite(v2, &unk_1802B8EDF, 0LL, 0LL, 2u, &pData);
  }
}
