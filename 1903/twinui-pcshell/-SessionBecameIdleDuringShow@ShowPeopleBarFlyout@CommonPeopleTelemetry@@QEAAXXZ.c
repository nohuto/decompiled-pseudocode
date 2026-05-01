/*
 * XREFs of ?SessionBecameIdleDuringShow@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAXXZ @ 0x180190B20
 * Callers:
 *     ?OnMessage@CPeopleBarFlyoutExperienceManager@@UEAAJI_K_J@Z @ 0x18018FFA0 (-OnMessage@CPeopleBarFlyoutExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VCommonPeopleTelemetryLogging@@@details@wil@@QEAAPEAVCommonPeopleTelemetryLogging@@P6AXXZ@Z @ 0x180191B44 (-get@-$static_lazy@VCommonPeopleTelemetryLogging@@@details@wil@@QEAAPEAVCommonPeopleTelemetryLog.c)
 */

void __fastcall CommonPeopleTelemetry::ShowPeopleBarFlyout::SessionBecameIdleDuringShow(
        CommonPeopleTelemetry::ShowPeopleBarFlyout *this)
{
  const struct _TlgProvider_t *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<CommonPeopleTelemetryLogging>::get(
                                           this,
                                           lambda_d2dfcefe90c696f2f984ba2092e12d6b_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v2 > 5u )
  {
    if ( TlgKeywordOn(v2, 0x400000000000uLL) )
      TlgWrite(v3, &unk_1804C0537, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 2u, &pData);
  }
}
