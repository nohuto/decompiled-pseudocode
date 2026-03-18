/*
 * XREFs of ApiSetGetPenArbitrationType @ 0x1C019D140
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1C0152D34 (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetGetPenArbitrationType()
{
  unsigned int PenArbitrationType; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      98,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  PenArbitrationType = 0;
  if ( (int)IsGetPenArbitrationTypeSupported() >= 0 )
    PenArbitrationType = GetPenArbitrationType();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      99,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  return PenArbitrationType;
}
