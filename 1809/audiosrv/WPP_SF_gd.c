/*
 * XREFs of WPP_SF_gd @ 0x180104420
 * Callers:
 *     ?HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z @ 0x1801009D4 (-HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z.c)
 *     ?OnSimpleVolumeChanged@CMonitor@@EEAAJMHPEBU_GUID@@@Z @ 0x180102640 (-OnSimpleVolumeChanged@CMonitor@@EEAAJMHPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_gd(__int64 a1, unsigned __int16 a2, __int64 a3, double a4)
{
  double v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_19c32bd6ba053f64fb4a85d982837be5_Traceguids, a2, &v5);
}
