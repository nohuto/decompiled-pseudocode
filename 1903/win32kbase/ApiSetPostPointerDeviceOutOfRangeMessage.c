/*
 * XREFs of ApiSetPostPointerDeviceOutOfRangeMessage @ 0x1C01A02C4
 * Callers:
 *     RIMRemoveFromActiveDevices @ 0x1C014130C (RIMRemoveFromActiveDevices.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     EtwTracePointerDeviceOutOfRangeMessageStart @ 0x1C010E1B0 (EtwTracePointerDeviceOutOfRangeMessageStart.c)
 *     EtwTracePointerDeviceOutOfRangeMessageStop @ 0x1C010E1E0 (EtwTracePointerDeviceOutOfRangeMessageStop.c)
 */

_UNKNOWN **__fastcall ApiSetPostPointerDeviceOutOfRangeMessage(PDEVICE_OBJECT a1)
{
  _UNKNOWN **result; // rax
  PDEVICE_OBJECT v2; // rbx
  __int64 v3; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = (_UNKNOWN **)WPP_RECORDER_SF_(
                              WPP_GLOBAL_Control->DeviceExtension,
                              5,
                              10,
                              72,
                              (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  if ( LODWORD(v2->AttachedDevice) != 7 )
  {
    EtwTracePointerDeviceOutOfRangeMessageStart((__int64)a1);
    if ( (int)IsPostPointerDeviceOutOfRangeMessageSupported() >= 0 )
      PostPointerDeviceOutOfRangeMessage(v2, 0LL, 0LL);
    result = (_UNKNOWN **)EtwTracePointerDeviceOutOfRangeMessageStop(v3);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return (_UNKNOWN **)WPP_RECORDER_SF_(
                            WPP_GLOBAL_Control->DeviceExtension,
                            5,
                            10,
                            73,
                            (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return result;
}
