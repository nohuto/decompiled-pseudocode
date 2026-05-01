/*
 * XREFs of ?IsEnabled@DesktopPositionerTelemetry@@SA_NE_K@Z @ 0x1803A26A8
 * Callers:
 *     ??$InitializePositionCloak@AEAPEAUIApplicationView@@@DesktopPositionerTelemetry@@SAXAEAPEAUIApplicationView@@@Z @ 0x18039F448 (--$InitializePositionCloak@AEAPEAUIApplicationView@@@DesktopPositionerTelemetry@@SAXAEAPEAUIAppl.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x180049718 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ?Create@DesktopPositionerTelemetry@@IEAAXXZ @ 0x180394C78 (-Create@DesktopPositionerTelemetry@@IEAAXXZ.c)
 */

char __fastcall DesktopPositionerTelemetry::IsEnabled(char a1)
{
  WINBOOL v2; // [rsp+30h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v3; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(v2) = a1;
  v3 = 0LL;
  if ( InitOnceBeginInitialize(&`DesktopPositionerTelemetry::Instance'::`2'::wrapper, 0, &v2, (LPVOID *)&v3) && v2 )
  {
    v3 = (wil::TraceLoggingProvider *)qword_18059A650;
    qword_18059A650[0] = &IamTraceLogging::`vftable';
    atexit(lambda_b3732bec005be52ff747cf12f24aa814_::_lambda_invoker_cdecl_);
    DesktopPositionerTelemetry::Create((DesktopPositionerTelemetry *)qword_18059A650);
    InitOnceComplete(&`DesktopPositionerTelemetry::Instance'::`2'::wrapper, 0, qword_18059A650);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v3, 0);
}
