/*
 * XREFs of ??$InitializePositionCloak@AEAPEAUIApplicationView@@@DesktopPositionerTelemetry@@SAXAEAPEAUIApplicationView@@@Z @ 0x18033A43C
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAK@Z @ 0x180055B10 (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAK@Z.c)
 * Callees:
 *     atexit @ 0x1800848AC (atexit.c)
 *     ?Create@DesktopPositionerTelemetry@@IEAAXXZ @ 0x18033466C (-Create@DesktopPositionerTelemetry@@IEAAXXZ.c)
 *     ?InitializePositionCloak_@DesktopPositionerTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x18033D424 (-InitializePositionCloak_@DesktopPositionerTelemetry@@QEAAXPEAUIApplicationView@@@Z.c)
 *     ?IsEnabled@DesktopPositionerTelemetry@@SA_NE_K@Z @ 0x18033D638 (-IsEnabled@DesktopPositionerTelemetry@@SA_NE_K@Z.c)
 */

void __fastcall DesktopPositionerTelemetry::InitializePositionCloak<IApplicationView * &>(
        struct IApplicationView **a1,
        unsigned __int64 a2)
{
  DesktopPositionerTelemetry *v3; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp+10h] BYREF
  LPVOID Context; // [rsp+40h] [rbp+18h] BYREF

  if ( DesktopPositionerTelemetry::IsEnabled((unsigned __int8)a1, a2) )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`DesktopPositionerTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        Context = qword_1805101D0;
        qword_1805101D0[0] = &IamTraceLogging::`vftable';
        atexit(lambda_b3732bec005be52ff747cf12f24aa814_::_lambda_invoker_cdecl_);
        DesktopPositionerTelemetry::Create((DesktopPositionerTelemetry *)qword_1805101D0);
        InitOnceComplete(&`DesktopPositionerTelemetry::Instance'::`2'::wrapper, 0, qword_1805101D0);
      }
    }
    DesktopPositionerTelemetry::InitializePositionCloak_(v3, *a1);
  }
}
