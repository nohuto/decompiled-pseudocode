/*
 * XREFs of ApiSetEditionxxxSystemParametersInfoWorker @ 0x1C0068988
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C00688C0 (xxxSystemParametersInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
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
      0x12Eu,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  v8 = 0;
  if ( (int)IsEditionxxxSystemParametersInfoWorkerSupported() >= 0 )
    v8 = EditionxxxSystemParametersInfoWorker(a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x12Fu,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return v8;
}
