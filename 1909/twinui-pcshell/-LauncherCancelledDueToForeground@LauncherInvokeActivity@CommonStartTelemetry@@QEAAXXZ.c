/*
 * XREFs of ?LauncherCancelledDueToForeground@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ @ 0x18031B494
 * Callers:
 *     ?HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x18007D030 (-HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 *     ?OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18031BB80 (-OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience.c)
 *     ?OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ @ 0x18031C508 (-OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

void __fastcall CommonStartTelemetry::LauncherInvokeActivity::LauncherCancelledDueToForeground(
        CommonStartTelemetry::LauncherInvokeActivity *this)
{
  const struct _TlgProvider_t *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  WINBOOL v4; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v5; // [rsp+38h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-38h] BYREF

  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &v4, (LPVOID *)&v5) && v4 )
  {
    v5 = &qword_1805C23C8;
    qword_1805C23C8 = &ShellScreenClippingLogging::`vftable';
    qword_1805C23E0 = (struct _TlgProvider_t *)&`LauncherTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805C23C8, qword_1805C23E0);
    InitOnceComplete(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &qword_1805C23C8);
  }
  v2 = (const struct _TlgProvider_t *)v5[1];
  if ( *(_DWORD *)v2 > 5u )
  {
    if ( TlgKeywordOn(v2, 0x400000000000uLL) )
      TlgWrite(v3, &unk_1804FEACF, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 2u, &pData);
  }
}
