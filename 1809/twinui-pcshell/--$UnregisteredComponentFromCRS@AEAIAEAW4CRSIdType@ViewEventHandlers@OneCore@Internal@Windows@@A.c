/*
 * XREFs of ??$UnregisteredComponentFromCRS@AEAIAEAW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@AEAIAEAI@CUITelemetry@@SAXAEAIAEAW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@00@Z @ 0x1803A4288
 * Callers:
 *     ?UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJI@Z @ 0x1803A7DA0 (-UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA.c)
 *     ?UnregisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJUtagHostIdentifier@2345@I@Z @ 0x1803A7F94 (-UnregisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windo.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VCUITelemetry@@@details@wil@@QEAAPEAVCUITelemetry@@P6AXXZ@Z @ 0x1803A8670 (-get@-$static_lazy@VCUITelemetry@@@details@wil@@QEAAPEAVCUITelemetry@@P6AXXZ@Z.c)
 */

int __fastcall CUITelemetry::UnregisteredComponentFromCRS<unsigned int &,enum Windows::Internal::OneCore::ViewEventHandlers::CRSIdType &,unsigned int &,unsigned int &>(
        __int64 a1,
        int *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v8; // rax
  const struct _TlgProvider_t *v9; // rcx
  int v11; // [rsp+38h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  __int64 v13; // [rsp+68h] [rbp+7h]
  __int64 v14; // [rsp+70h] [rbp+Fh]
  int *v15; // [rsp+78h] [rbp+17h]
  __int64 v16; // [rsp+80h] [rbp+1Fh]
  __int64 v17; // [rsp+88h] [rbp+27h]
  __int64 v18; // [rsp+90h] [rbp+2Fh]
  __int64 v19; // [rsp+98h] [rbp+37h]
  __int64 v20; // [rsp+A0h] [rbp+3Fh]

  v8 = wil::details::static_lazy<CUITelemetry>::get(
         a1,
         lambda_118efc2810da81fa517ffdfff2ec5234_::_lambda_invoker_cdecl_);
  v9 = *(const struct _TlgProvider_t **)(v8 + 8);
  if ( *(_DWORD *)v9 > 5u )
  {
    v11 = *a2;
    v15 = &v11;
    v13 = a1;
    v14 = 4LL;
    v16 = 4LL;
    v17 = a3;
    v18 = 4LL;
    v19 = a4;
    v20 = 4LL;
    LODWORD(v8) = TlgWrite(v9, &unk_18046A0ED, 0LL, 0LL, 6u, &pData);
  }
  return v8;
}
