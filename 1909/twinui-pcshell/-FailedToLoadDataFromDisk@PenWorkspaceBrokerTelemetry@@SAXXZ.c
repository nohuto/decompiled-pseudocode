/*
 * XREFs of ?FailedToLoadDataFromDisk@PenWorkspaceBrokerTelemetry@@SAXXZ @ 0x1801FF89C
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x18011E19C (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VPenWorkspaceBrokerLogging@@@details@wil@@QEAAPEAVPenWorkspaceBrokerLogging@@P6AXXZ@Z @ 0x180203148 (-get@-$static_lazy@VPenWorkspaceBrokerLogging@@@details@wil@@QEAAPEAVPenWorkspaceBrokerLogging@@.c)
 */

void __fastcall PenWorkspaceBrokerTelemetry::FailedToLoadDataFromDisk(__int64 a1)
{
  const struct _TlgProvider_t *v1; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<PenWorkspaceBrokerLogging>::get(
                                           a1,
                                           lambda_70bc263229c7881e4aa0a680059fb776_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v1 > 5u )
    TlgWrite(v1, &unk_1804EED77, 0LL, 0LL, 2u, &pData);
}
