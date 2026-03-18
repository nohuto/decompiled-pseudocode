/*
 * XREFs of ApiSetEditionUpdateInputTransformFromHitTest @ 0x1C00025F4
 * Callers:
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C002F4CC (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA-AVCInputDest@@AEBU_InputHitTestRes.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionUpdateInputTransformFromHitTest(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rsi
  __int64 result; // rax
  int v11; // edx

  v8 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      15,
      80,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  }
  result = IsEditionUpdateInputTransformFromHitTestSupported();
  if ( (int)result >= 0 )
    result = EditionUpdateInputTransformFromHitTest(a1, v8, a3, a4, a5, a6);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v11) = 5;
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             v11,
             15,
             81,
             (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  }
  return result;
}
