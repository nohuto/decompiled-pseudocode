/*
 * XREFs of ApiSetEtwTracePointerDeviceArrivalStop @ 0x1C019ED18
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C00AE4FC (RIMAllocateHidDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0144678 (RIMVirtAllocateHidDesc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     EtwTracePointerDeviceArrivalStop @ 0x1C010E080 (EtwTracePointerDeviceArrivalStop.c)
 */

__int64 __fastcall ApiSetEtwTracePointerDeviceArrivalStop(PDEVICE_OBJECT a1)
{
  __int64 result; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        10,
        12,
        (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  result = EtwTracePointerDeviceArrivalStop((__int64)a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               5,
               10,
               13,
               (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return result;
}
