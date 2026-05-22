/*
 * XREFs of ?MPCHolographicInputManager_InputDisableFlagsChanged_@ISMTracing@@QEAAXAEB_N0@Z @ 0x180081DF4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_7bb679a9323d805fac01dd20cc91ea96__void_::_Do_call @ 0x1800843E0 (std--_Func_impl_no_alloc__lambda_7bb679a9323d805fac01dd20cc91ea96__void_--_Do_call.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180014870 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_InputDisableFlagsChanged_(
        ISMTracing *this,
        const bool *a2,
        const bool *a3)
{
  __int64 v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  int v7; // edx
  const struct _TlgProvider_t *v8; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  const bool *v10; // [rsp+50h] [rbp-38h]
  int v11; // [rsp+58h] [rbp-30h]
  int v12; // [rsp+5Ch] [rbp-2Ch]
  const bool *v13; // [rsp+60h] [rbp-28h]
  int v14; // [rsp+68h] [rbp-20h]
  int v15; // [rsp+6Ch] [rbp-1Ch]

  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v6 = (const struct _TlgProvider_t *)wil::details::static_lazy<ISMTracing>::get(
                                          v5,
                                          lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v6 > 4u )
    {
      if ( TlgKeywordOn(v6, 1uLL) )
      {
        v12 = 0;
        v15 = 0;
        v10 = a2;
        v11 = v7;
        v13 = a3;
        v14 = v7;
        TlgWrite(v8, &unk_18019B926, 0LL, 0LL, 4u, &pData);
      }
    }
  }
}
