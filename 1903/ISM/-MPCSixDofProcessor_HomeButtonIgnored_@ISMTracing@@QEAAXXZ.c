/*
 * XREFs of ?MPCSixDofProcessor_HomeButtonIgnored_@ISMTracing@@QEAAXXZ @ 0x1801307A8
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180036FB0 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 */

void __fastcall ISMTracing::MPCSixDofProcessor_HomeButtonIgnored_(ISMTracing *this)
{
  const struct _TlgProvider_t *v1; // rcx
  const struct _TlgProvider_t *v2; // rcx
  __int64 v3; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  v1 = (const struct _TlgProvider_t *)wil::details::static_lazy<ISMTracing>::get(
                                        (__int64)this,
                                        lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v1 > 4u )
  {
    if ( TlgKeywordOn(v1, 0x400000000001uLL) )
    {
      v7 = 0;
      v5 = &v3;
      v3 = 50331648LL;
      v6 = 8;
      TlgWrite(v2, &unk_1801A0AA6, 0LL, 0LL, 3u, &pData);
    }
  }
}
