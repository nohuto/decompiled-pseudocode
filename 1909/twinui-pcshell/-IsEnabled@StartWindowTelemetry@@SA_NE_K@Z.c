/*
 * XREFs of ?IsEnabled@StartWindowTelemetry@@SA_NE_K@Z @ 0x1800762B4
 * Callers:
 *     ?BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x180045D2C (-BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x18031BED0 (-OnMessage@XamlLauncherState@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18007641C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?Create@StartWindowTelemetry@@IEAAXXZ @ 0x18007661C (-Create@StartWindowTelemetry@@IEAAXXZ.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

bool __fastcall StartWindowTelemetry::IsEnabled(char a1)
{
  unsigned __int64 v1; // r8
  WINBOOL v3; // [rsp+30h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v4; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(v3) = a1;
  v4 = 0LL;
  if ( InitOnceBeginInitialize(&`StartWindowTelemetry::Instance'::`2'::wrapper, 0, &v3, (LPVOID *)&v4) && v3 )
  {
    v4 = (wil::TraceLoggingProvider *)qword_1805C23F8;
    qword_1805C23F8[0] = &IamTraceLogging::`vftable';
    atexit(lambda_7be3e90a96589580164e7896806c54b3_::_lambda_invoker_cdecl_);
    StartWindowTelemetry::Create((StartWindowTelemetry *)qword_1805C23F8);
    InitOnceComplete(&`StartWindowTelemetry::Instance'::`2'::wrapper, 0, qword_1805C23F8);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v4, 0, v1);
}
