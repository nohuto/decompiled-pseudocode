/*
 * XREFs of ?IsEnabled@DesktopPositionerTelemetry@@SA_NE_K@Z @ 0x18033D638
 * Callers:
 *     ??$InitializePositionCloak@AEAPEAUIApplicationView@@@DesktopPositionerTelemetry@@SAXAEAPEAUIApplicationView@@@Z @ 0x18033A43C (--$InitializePositionCloak@AEAPEAUIApplicationView@@@DesktopPositionerTelemetry@@SAXAEAPEAUIAppl.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18007209C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ?Create@DesktopPositionerTelemetry@@IEAAXXZ @ 0x18033466C (-Create@DesktopPositionerTelemetry@@IEAAXXZ.c)
 */

char __fastcall DesktopPositionerTelemetry::IsEnabled(char a1)
{
  WINBOOL v2; // [rsp+30h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v3; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(v2) = a1;
  v3 = 0LL;
  if ( InitOnceBeginInitialize(&`DesktopPositionerTelemetry::Instance'::`2'::wrapper, 0, &v2, (LPVOID *)&v3) && v2 )
  {
    v3 = (wil::TraceLoggingProvider *)qword_1805101D0;
    qword_1805101D0[0] = &IamTraceLogging::`vftable';
    atexit(lambda_b3732bec005be52ff747cf12f24aa814_::_lambda_invoker_cdecl_);
    DesktopPositionerTelemetry::Create((DesktopPositionerTelemetry *)qword_1805101D0);
    InitOnceComplete(&`DesktopPositionerTelemetry::Instance'::`2'::wrapper, 0, qword_1805101D0);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v3, 0);
}
