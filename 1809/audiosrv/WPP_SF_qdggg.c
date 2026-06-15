/*
 * XREFs of WPP_SF_qdggg @ 0x1800BA208
 * Callers:
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18005BA50 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qdggg(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+A8h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_1ac98b3e4732363a42c9f2d13b70c7da_Traceguids, 30LL, (__int64 *)va);
}
