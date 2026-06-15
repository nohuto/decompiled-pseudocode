/*
 * XREFs of WPP_SF_gg @ 0x180104474
 * Callers:
 *     ?MeasureClockDrift@CMonitor@@AEAAXNN@Z @ 0x1801017D8 (-MeasureClockDrift@CMonitor@@AEAAXNN@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_gg(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  double v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_19c32bd6ba053f64fb4a85d982837be5_Traceguids, 52LL, &v5);
}
