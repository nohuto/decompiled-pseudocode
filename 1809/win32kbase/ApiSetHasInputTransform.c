/*
 * XREFs of ApiSetHasInputTransform @ 0x1C0164240
 * Callers:
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C013DBB8 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetHasInputTransform(__int64 a1)
{
  unsigned int v2; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x6Eu,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  v2 = 0;
  if ( (int)IsHasInputTransformSupported() >= 0 )
    v2 = HasInputTransform(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x6Fu,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return v2;
}
