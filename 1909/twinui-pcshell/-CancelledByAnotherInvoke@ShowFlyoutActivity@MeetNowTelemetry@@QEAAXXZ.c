/*
 * XREFs of ?CancelledByAnotherInvoke@ShowFlyoutActivity@MeetNowTelemetry@@QEAAXXZ @ 0x180097A50
 * Callers:
 *     ?ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_N@Z @ 0x18009A668 (-ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_N@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Provider@MeetNowTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180099CAC (-Provider@MeetNowTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 */

void __fastcall MeetNowTelemetry::ShowFlyoutActivity::CancelledByAnotherInvoke(
        MeetNowTelemetry::ShowFlyoutActivity *this)
{
  const struct _TlgProvider_t *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  __int64 v4; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  v2 = MeetNowTelemetryLogging::Provider();
  if ( *(_DWORD *)v2 > 5u )
  {
    if ( TlgKeywordOn(v2, 0x400000000000uLL) )
    {
      v8 = 0;
      v6 = &v4;
      v4 = 50331648LL;
      v7 = 8;
      TlgWrite(v3, &unk_1804EAEFC, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 3u, &pData);
    }
  }
}
