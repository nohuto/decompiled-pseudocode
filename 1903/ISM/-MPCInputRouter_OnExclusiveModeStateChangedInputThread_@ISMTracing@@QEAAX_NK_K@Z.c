/*
 * XREFs of ?MPCInputRouter_OnExclusiveModeStateChangedInputThread_@ISMTracing@@QEAAX_NK_K@Z @ 0x180054F24
 * Callers:
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x1800556A0 (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180014870 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 */

void __fastcall ISMTracing::MPCInputRouter_OnExclusiveModeStateChangedInputThread_(
        ISMTracing *this,
        char a2,
        int a3,
        __int64 a4)
{
  __int64 v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  int v6; // edx
  const struct _TlgProvider_t *v7; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-9h] BYREF
  char *v9; // [rsp+58h] [rbp+17h]
  int v10; // [rsp+60h] [rbp+1Fh]
  int v11; // [rsp+64h] [rbp+23h]
  int *v12; // [rsp+68h] [rbp+27h]
  int v13; // [rsp+70h] [rbp+2Fh]
  int v14; // [rsp+74h] [rbp+33h]
  __int64 *v15; // [rsp+78h] [rbp+37h]
  int v16; // [rsp+80h] [rbp+3Fh]
  int v17; // [rsp+84h] [rbp+43h]
  char v18; // [rsp+B0h] [rbp+6Fh] BYREF
  int v19; // [rsp+B8h] [rbp+77h] BYREF
  __int64 v20; // [rsp+C0h] [rbp+7Fh] BYREF

  v20 = a4;
  v19 = a3;
  v18 = a2;
  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v5 = (const struct _TlgProvider_t *)wil::details::static_lazy<ISMTracing>::get(
                                          v4,
                                          lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v5 > 4u )
    {
      if ( TlgKeywordOn(v5, 1uLL) )
      {
        v11 = 0;
        v14 = 0;
        v17 = 0;
        v9 = &v18;
        v12 = &v19;
        v15 = &v20;
        v10 = v6;
        v13 = 4;
        v16 = 8;
        TlgWrite(v7, &unk_18019A6D7, 0LL, 0LL, 5u, &pData);
      }
    }
  }
}
