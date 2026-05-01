/*
 * XREFs of ??$UnregisteredComponentFromCRSFreeList@AEAI@CUITelemetry@@SAXAEAI@Z @ 0x1803A4364
 * Callers:
 *     ?UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJI@Z @ 0x1803A7DA0 (-UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VCUITelemetry@@@details@wil@@QEAAPEAVCUITelemetry@@P6AXXZ@Z @ 0x1803A8670 (-get@-$static_lazy@VCUITelemetry@@@details@wil@@QEAAPEAVCUITelemetry@@P6AXXZ@Z.c)
 */

int __fastcall CUITelemetry::UnregisteredComponentFromCRSFreeList<unsigned int &>(__int64 a1)
{
  __int64 v2; // rax
  const struct _TlgProvider_t *v3; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  __int64 v6; // [rsp+50h] [rbp-28h]
  int v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+5Ch] [rbp-1Ch]

  v2 = wil::details::static_lazy<CUITelemetry>::get(
         a1,
         lambda_118efc2810da81fa517ffdfff2ec5234_::_lambda_invoker_cdecl_);
  v3 = *(const struct _TlgProvider_t **)(v2 + 8);
  if ( *(_DWORD *)v3 > 5u )
  {
    v8 = 0;
    v6 = a1;
    v7 = 4;
    LODWORD(v2) = TlgWrite(v3, &unk_18046A1B9, 0LL, 0LL, 3u, &pData);
  }
  return v2;
}
