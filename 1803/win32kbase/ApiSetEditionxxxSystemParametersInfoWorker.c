/*
 * XREFs of ApiSetEditionxxxSystemParametersInfoWorker @ 0x1C005C0E0
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C005C030 (xxxSystemParametersInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionxxxSystemParametersInfoWorker(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int v8; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x128u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  v8 = 0;
  if ( (int)IsEditionxxxSystemParametersInfoWorkerSupported() >= 0 )
    v8 = EditionxxxSystemParametersInfoWorker(a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x129u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return v8;
}
