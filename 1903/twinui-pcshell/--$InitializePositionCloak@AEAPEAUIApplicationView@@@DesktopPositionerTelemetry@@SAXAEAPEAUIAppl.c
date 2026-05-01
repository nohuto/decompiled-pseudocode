/*
 * XREFs of ??$InitializePositionCloak@AEAPEAUIApplicationView@@@DesktopPositionerTelemetry@@SAXAEAPEAUIApplicationView@@@Z @ 0x18039F448
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x18009F4A4 (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 * Callees:
 *     atexit @ 0x18008753C (atexit.c)
 *     ?Create@DesktopPositionerTelemetry@@IEAAXXZ @ 0x180394C78 (-Create@DesktopPositionerTelemetry@@IEAAXXZ.c)
 *     ?InitializePositionCloak_@DesktopPositionerTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x1803A24D4 (-InitializePositionCloak_@DesktopPositionerTelemetry@@QEAAXPEAUIApplicationView@@@Z.c)
 *     ?IsEnabled@DesktopPositionerTelemetry@@SA_NE_K@Z @ 0x1803A26A8 (-IsEnabled@DesktopPositionerTelemetry@@SA_NE_K@Z.c)
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
        Context = qword_18059A650;
        qword_18059A650[0] = &IamTraceLogging::`vftable';
        atexit(lambda_b3732bec005be52ff747cf12f24aa814_::_lambda_invoker_cdecl_);
        DesktopPositionerTelemetry::Create((DesktopPositionerTelemetry *)qword_18059A650);
        InitOnceComplete(&`DesktopPositionerTelemetry::Instance'::`2'::wrapper, 0, qword_18059A650);
      }
    }
    DesktopPositionerTelemetry::InitializePositionCloak_(v3, *a1);
  }
}
