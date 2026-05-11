/*
 * XREFs of PinReset @ 0x1C0022310
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 */

_UNKNOWN **__fastcall PinReset(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax

  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return (_UNKNOWN **)WPP_RECORDER_SF_(
                            (__int64)WPP_GLOBAL_Control->DeviceExtension,
                            a2,
                            8u,
                            0x12u,
                            (__int64)&WPP_cc9c4cff163931cb0937dd2acbce6db6_Traceguids);
  }
  return result;
}
