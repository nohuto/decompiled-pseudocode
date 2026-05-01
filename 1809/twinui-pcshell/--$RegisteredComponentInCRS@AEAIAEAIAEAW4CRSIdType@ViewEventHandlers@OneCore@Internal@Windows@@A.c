/*
 * XREFs of ??$RegisteredComponentInCRS@AEAIAEAIAEAW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@AEAIAEAI@CUITelemetry@@SAXAEAI0AEAW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@00@Z @ 0x1803A4100
 * Callers:
 *     ?RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJAEAUComponentInfo@12345@I@Z @ 0x1803A7214 (-RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VCUITelemetry@@@details@wil@@QEAAPEAVCUITelemetry@@P6AXXZ@Z @ 0x1803A8670 (-get@-$static_lazy@VCUITelemetry@@@details@wil@@QEAAPEAVCUITelemetry@@P6AXXZ@Z.c)
 */

int __fastcall CUITelemetry::RegisteredComponentInCRS<unsigned int &,unsigned int &,enum Windows::Internal::OneCore::ViewEventHandlers::CRSIdType &,unsigned int &,unsigned int &>(
        __int64 a1,
        __int64 a2,
        int *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v9; // rax
  const struct _TlgProvider_t *v10; // rcx
  int v12; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-31h] BYREF
  __int64 v14; // [rsp+68h] [rbp-11h]
  __int64 v15; // [rsp+70h] [rbp-9h]
  __int64 v16; // [rsp+78h] [rbp-1h]
  __int64 v17; // [rsp+80h] [rbp+7h]
  int *v18; // [rsp+88h] [rbp+Fh]
  __int64 v19; // [rsp+90h] [rbp+17h]
  __int64 v20; // [rsp+98h] [rbp+1Fh]
  __int64 v21; // [rsp+A0h] [rbp+27h]
  __int64 v22; // [rsp+A8h] [rbp+2Fh]
  __int64 v23; // [rsp+B0h] [rbp+37h]

  v9 = wil::details::static_lazy<CUITelemetry>::get(
         a1,
         lambda_118efc2810da81fa517ffdfff2ec5234_::_lambda_invoker_cdecl_);
  v10 = *(const struct _TlgProvider_t **)(v9 + 8);
  if ( *(_DWORD *)v10 > 5u )
  {
    v12 = *a3;
    v18 = &v12;
    v22 = a5;
    v14 = a1;
    v15 = 4LL;
    v16 = a2;
    v17 = 4LL;
    v19 = 4LL;
    v20 = a4;
    v21 = 4LL;
    v23 = 4LL;
    LODWORD(v9) = TlgWrite(v10, &unk_18046A090, 0LL, 0LL, 7u, &pData);
  }
  return v9;
}
