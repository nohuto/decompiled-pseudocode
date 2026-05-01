/*
 * XREFs of ?ReturnedToLock@EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801893CC
 * Callers:
 *     ?ReturnFocus@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801891DC (-ReturnFocus@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity::ReturnedToLock(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity *this)
{
  const struct _TlgProvider_t *v2; // rcx
  WINBOOL v3; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v4; // [rsp+38h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-38h] BYREF

  v4 = 0LL;
  if ( InitOnceBeginInitialize(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, &v3, (LPVOID *)&v4) && v3 )
  {
    v4 = qword_180599CA0;
    qword_180599CA0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599CB8 = (struct _TlgProvider_t *)&`NotificationCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CA0, qword_180599CB8);
    InitOnceComplete(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, qword_180599CA0);
  }
  v2 = (const struct _TlgProvider_t *)v4[1];
  if ( *(_DWORD *)v2 > 5u )
    TlgWrite(v2, &unk_1804BF55F, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 2u, &pData);
}
