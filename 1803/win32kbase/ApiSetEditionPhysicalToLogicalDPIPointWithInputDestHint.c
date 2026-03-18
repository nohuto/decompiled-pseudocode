/*
 * XREFs of ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x1C006C0F4
 * Callers:
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTATTRIBUTES@@KW4MouseHitTestOptions@@PEAHPEAI@Z @ 0x1C00375F0 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTA.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xB2u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  *a1 = a2;
  result = IsEditionPhysicalToLogicalDPIPointWithInputDestHintSupported();
  if ( (int)result >= 0 )
    result = EditionPhysicalToLogicalDPIPointWithInputDestHint(a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xFu,
             0xB3u,
             (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return result;
}
