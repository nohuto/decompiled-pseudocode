/*
 * XREFs of ?CortanaExperienceManager_PreLaunch_LaunchRequired@CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@QEAAXXZ @ 0x180151A08
 * Callers:
 *     ?Prelaunch@CortanaSharedExperienceManager@@UEAAJE@Z @ 0x1801537A0 (-Prelaunch@CortanaSharedExperienceManager@@UEAAJE@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch::CortanaExperienceManager_PreLaunch_LaunchRequired(
        CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch *this)
{
  const struct _TlgProvider_t *v2; // rcx
  WINBOOL v3; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v4; // [rsp+38h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-38h] BYREF

  v4 = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &v3, (LPVOID *)&v4) && v3 )
  {
    v4 = qword_18050F960;
    qword_18050F960[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F978 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F960, qword_18050F978);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_18050F960);
  }
  v2 = (const struct _TlgProvider_t *)v4[1];
  if ( *(_DWORD *)v2 > 4u )
    TlgWrite(v2, &unk_18044E424, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 2u, &pData);
}
