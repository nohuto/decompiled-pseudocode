/*
 * XREFs of ?OemAppLoaded_@PenWorkspaceBrokerTelemetry@@QEAAXPEBG@Z @ 0x1801E2324
 * Callers:
 *     ??$OemAppLoaded@AEAPEBG@PenWorkspaceBrokerTelemetry@@SAXAEAPEBG@Z @ 0x1801DED2C (--$OemAppLoaded@AEAPEBG@PenWorkspaceBrokerTelemetry@@SAXAEAPEBG@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x18004974C (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VPenWorkspaceBrokerLogging@@@details@wil@@QEAAPEAVPenWorkspaceBrokerLogging@@P6AXXZ@Z @ 0x1801E3F08 (-get@-$static_lazy@VPenWorkspaceBrokerLogging@@@details@wil@@QEAAPEAVPenWorkspaceBrokerLogging@@.c)
 */

void __fastcall PenWorkspaceBrokerTelemetry::OemAppLoaded_(
        PenWorkspaceBrokerTelemetry *this,
        const unsigned __int16 *a2)
{
  __int64 v3; // rax
  const struct _TlgProvider_t *v4; // rbx
  const unsigned __int16 *v5; // rdx
  const WCHAR *v6; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-28h] BYREF

  v3 = wil::details::static_lazy<PenWorkspaceBrokerLogging>::get(
         this,
         lambda_70bc263229c7881e4aa0a680059fb776_::_lambda_invoker_cdecl_);
  v4 = *(const struct _TlgProvider_t **)(v3 + 8);
  if ( *(_DWORD *)v4 > 5u )
  {
    if ( TlgKeywordOn(*(TraceLoggingHProvider *)(v3 + 8), 0x400000000000uLL) )
    {
      v6 = SQM::CensorAppID(a2, v5);
      TlgCreateWsz(&pDesc, v6);
      TlgWrite(v4, &unk_1804C8B7A, 0LL, 0LL, 3u, &pData);
    }
  }
}
