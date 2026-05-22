/*
 * XREFs of ?MPCSixDofProcessor_HomeEventUpdate_@ISMTracing@@QEAAXKK@Z @ 0x180130A48
 * Callers:
 *     ??$MPCSixDofProcessor_HomeEventUpdate@KAEBI@ISMTracing@@SAX$$QEAKAEBI@Z @ 0x18012E584 (--$MPCSixDofProcessor_HomeEventUpdate@KAEBI@ISMTracing@@SAX$$QEAKAEBI@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 */

void __fastcall ISMTracing::MPCSixDofProcessor_HomeEventUpdate_(ISMTracing *this, int a2, int a3)
{
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  int *v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  int *v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]
  int v14; // [rsp+B8h] [rbp+6Fh] BYREF
  int v15; // [rsp+C0h] [rbp+77h] BYREF

  v15 = a3;
  v14 = a2;
  v3 = (const struct _TlgProvider_t *)wil::details::static_lazy<ISMTracing>::get(
                                        (__int64)this,
                                        lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v3 > 4u )
  {
    if ( TlgKeywordOn(v3, 0x400000000001uLL) )
    {
      v6 = 50331648LL;
      v8 = &v6;
      v10 = &v14;
      v12 = &v15;
      v9 = 8LL;
      v11 = v5;
      v13 = v5;
      TlgWrite(v4, &unk_1801A0A4D, 0LL, 0LL, 5u, &pData);
    }
  }
}
