/*
 * XREFs of ?FallbackTelemetryCallback@ErrorHandlingHelpers@wil@@SAX_NAEBUFailureInfo@2@@Z @ 0x18007EE20
 * Callers:
 *     <none>
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::ErrorHandlingHelpers::FallbackTelemetryCallback(char a1, const struct wil::FailureInfo *a2)
{
  __int64 v4; // rdx
  WINBOOL v5; // [rsp+40h] [rbp+18h] BYREF
  _QWORD *v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`wil::ErrorHandlingHelpers::Instance'::`2'::wrapper, 0, &v5, (LPVOID *)&v6) && v5 )
  {
    v6 = qword_1805C2930;
    qword_1805C2930[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2948 = (struct _TlgProvider_t *)&`wil::ErrorHandlingHelpers::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_8d5ca15cf69e69dee1fdb0dcddeb1e66_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2930, qword_1805C2948);
    InitOnceComplete(&`wil::ErrorHandlingHelpers::Instance'::`2'::wrapper, 0, qword_1805C2930);
  }
  LOBYTE(v4) = a1;
  (*(void (__fastcall **)(_QWORD *, __int64, const struct wil::FailureInfo *))(*v6 + 16LL))(v6, v4, a2);
}
