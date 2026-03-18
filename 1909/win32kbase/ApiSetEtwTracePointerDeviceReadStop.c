/*
 * XREFs of ApiSetEtwTracePointerDeviceReadStop @ 0x1C019CB88
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C01513BC (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     EtwTracePointerDeviceReadStop @ 0x1C010B8D0 (EtwTracePointerDeviceReadStop.c)
 */

__int64 __fastcall ApiSetEtwTracePointerDeviceReadStop(PDEVICE_OBJECT a1)
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
        16,
        (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  result = EtwTracePointerDeviceReadStop((__int64)a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               5,
               10,
               17,
               (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return result;
}
