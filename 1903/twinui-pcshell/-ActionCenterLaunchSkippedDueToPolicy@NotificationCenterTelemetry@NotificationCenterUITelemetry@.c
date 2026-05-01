/*
 * XREFs of ?ActionCenterLaunchSkippedDueToPolicy@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x18017543C
 * Callers:
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x180050BE8 (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Show@CControlCenterExperienceManager@@AEAAJXZ @ 0x18017B6B4 (-Show@CControlCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 */

void NotificationCenterUITelemetry::NotificationCenterTelemetry::ActionCenterLaunchSkippedDueToPolicy(void)
{
  const struct _TlgProvider_t *v0; // rcx
  const struct _TlgProvider_t *v1; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  __int64 v4; // [rsp+40h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-38h] BYREF
  __int64 *v6; // [rsp+68h] [rbp-18h]
  int v7; // [rsp+70h] [rbp-10h]
  int v8; // [rsp+74h] [rbp-Ch]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180599CA0;
    qword_180599CA0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599CB8 = (struct _TlgProvider_t *)&`NotificationCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CA0, qword_180599CB8);
    InitOnceComplete(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, qword_180599CA0);
  }
  v0 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v0 > 5u )
  {
    if ( TlgKeywordOn(v0, 0x200000000000uLL) )
    {
      v8 = 0;
      v6 = &v4;
      v4 = 50331648LL;
      v7 = 8;
      TlgWrite(v1, &unk_1804BD7E4, 0LL, 0LL, 3u, &pData);
    }
  }
}
