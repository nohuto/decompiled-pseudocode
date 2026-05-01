/*
 * XREFs of ??$PendingActivation@AEBQEAUHWND__@@@IamTraceLogging@@SAXAEBQEAUHWND__@@@Z @ 0x18010BC7C
 * Callers:
 *     _lambda_bb299bb733d931796faa9380238be063_::operator() @ 0x18010EE98 (_lambda_bb299bb733d931796faa9380238be063_--operator().c)
 * Callees:
 *     atexit @ 0x18008753C (atexit.c)
 *     ?Create@CAppManagerTelemetry@@IEAAXXZ @ 0x180110154 (-Create@CAppManagerTelemetry@@IEAAXXZ.c)
 *     ?IsEnabled@IamTraceLogging@@SA_NE_K@Z @ 0x180114474 (-IsEnabled@IamTraceLogging@@SA_NE_K@Z.c)
 *     ?PendingActivation_@IamTraceLogging@@QEAAXPEAUHWND__@@@Z @ 0x180115530 (-PendingActivation_@IamTraceLogging@@QEAAXPEAUHWND__@@@Z.c)
 */

void __fastcall IamTraceLogging::PendingActivation<HWND__ * const &>(HWND *a1, unsigned __int64 a2)
{
  IamTraceLogging *v3; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp+10h] BYREF
  LPVOID Context; // [rsp+40h] [rbp+18h] BYREF

  if ( IamTraceLogging::IsEnabled((unsigned __int8)a1, a2) )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`IamTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        Context = qword_180599B30;
        qword_180599B30[0] = &IamTraceLogging::`vftable';
        atexit(lambda_119a121fb38785c27806b92be2d82d86_::_lambda_invoker_cdecl_);
        CAppManagerTelemetry::Create((CAppManagerTelemetry *)qword_180599B30);
        InitOnceComplete(&`IamTraceLogging::Instance'::`2'::wrapper, 0, qword_180599B30);
      }
    }
    IamTraceLogging::PendingActivation_(v3, *a1);
  }
}
