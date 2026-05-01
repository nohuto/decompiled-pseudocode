/*
 * XREFs of ?ExperienceManager_RegisteredWithLightDismiss@QuickConnectTelemetry@@SAXXZ @ 0x1801A19A8
 * Callers:
 *     ?OnClientWindowReadyForPresentationChanged@CQuickConnectExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1801A24D0 (-OnClientWindowReadyForPresentationChanged@CQuickConnectExperienceManager@@AEAAJPEAUIClientWindo.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvider@@P6AXXZ@Z @ 0x1801A6190 (-get@-$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvid.c)
 */

void __fastcall QuickConnectTelemetry::ExperienceManager_RegisteredWithLightDismiss(__int64 a1)
{
  const struct _TlgProvider_t *v1; // rcx
  const struct _TlgProvider_t *v2; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<QuickConnectLoggingProvider>::get(
                                           a1,
                                           lambda_f050a8947b8d1270f7eda0e498aa88e8_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v1 > 5u )
  {
    if ( TlgKeywordOn(v1, 0x200000000000uLL) )
      TlgWrite(v2, &unk_1804C1EAB, 0LL, 0LL, 2u, &pData);
  }
}
