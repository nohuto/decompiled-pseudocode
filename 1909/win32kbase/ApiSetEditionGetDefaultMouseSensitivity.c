/*
 * XREFs of ApiSetEditionGetDefaultMouseSensitivity @ 0x1C00A9F58
 * Callers:
 *     InputInitialize @ 0x1C00A8EAC (InputInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionGetDefaultMouseSensitivity(unsigned int a1)
{
  unsigned int DefaultMouseSensitivity; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      316,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  DefaultMouseSensitivity = 10;
  if ( (int)IsEditionGetDefaultMouseSensitivitySupported() >= 0 )
    DefaultMouseSensitivity = EditionGetDefaultMouseSensitivity(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      317,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  return DefaultMouseSensitivity;
}
