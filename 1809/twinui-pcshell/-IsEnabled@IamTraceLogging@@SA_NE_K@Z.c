/*
 * XREFs of ?IsEnabled@IamTraceLogging@@SA_NE_K@Z @ 0x1800EFC18
 * Callers:
 *     ??$PendingActivation@AEBQEAUHWND__@@@IamTraceLogging@@SAXAEBQEAUHWND__@@@Z @ 0x1800E951C (--$PendingActivation@AEBQEAUHWND__@@@IamTraceLogging@@SAXAEBQEAUHWND__@@@Z.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18007209C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ?Create@CAppManagerTelemetry@@IEAAXXZ @ 0x1800ECD44 (-Create@CAppManagerTelemetry@@IEAAXXZ.c)
 */

char __fastcall IamTraceLogging::IsEnabled(char a1)
{
  WINBOOL v2; // [rsp+30h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v3; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(v2) = a1;
  v3 = 0LL;
  if ( InitOnceBeginInitialize(&`IamTraceLogging::Instance'::`2'::wrapper, 0, &v2, (LPVOID *)&v3) && v2 )
  {
    v3 = (wil::TraceLoggingProvider *)qword_18050F758;
    qword_18050F758[0] = &IamTraceLogging::`vftable';
    atexit(lambda_119a121fb38785c27806b92be2d82d86_::_lambda_invoker_cdecl_);
    CAppManagerTelemetry::Create((CAppManagerTelemetry *)qword_18050F758);
    InitOnceComplete(&`IamTraceLogging::Instance'::`2'::wrapper, 0, qword_18050F758);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v3, 0);
}
