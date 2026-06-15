/*
 * XREFs of WPP_SF_gggg @ 0x180111D54
 * Callers:
 *     ?MeasureClockDrift@CMonitor@@AEAAXNN@Z @ 0x18010F01C (-MeasureClockDrift@CMonitor@@AEAAXNN@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_gggg(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  double v5; // [rsp+98h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_70b4bc2e72a23cf5637e1be4ab06d41d_Traceguids, 52LL, &v5);
}
