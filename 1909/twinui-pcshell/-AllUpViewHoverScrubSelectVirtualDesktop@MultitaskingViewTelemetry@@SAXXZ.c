/*
 * XREFs of ?AllUpViewHoverScrubSelectVirtualDesktop@MultitaskingViewTelemetry@@SAXXZ @ 0x1803A0E18
 * Callers:
 *     ?v_OnPointerMove@CVirtualDesktopContainerElement@@MEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1803A2A20 (-v_OnPointerMove@CVirtualDesktopContainerElement@@MEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x18011EF44 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x18011F2C4 (--2@YAPEAX_KPEAX@Z.c)
 */

void MultitaskingViewTelemetry::AllUpViewHoverScrubSelectVirtualDesktop(void)
{
  __int64 v0; // rcx
  wil::TraceLoggingProvider *v1; // rax
  _QWORD *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-48h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-38h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &unk_1805C2098;
    v1 = (wil::TraceLoggingProvider *)operator new(v0, &unk_1805C2098);
    wil::TraceLoggingProvider::TraceLoggingProvider(v1);
    *v2 = &ImmersiveIconsLogging::`vftable';
    v2[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_1805C2098, qword_1805C20B0);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_1805C2098);
  }
  v3 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v3 > 5u )
  {
    if ( TlgKeywordOn(v3, 0x400000000000uLL) )
      TlgWrite(v4, &unk_18050479A, 0LL, 0LL, 2u, &pData);
  }
}
