/*
 * XREFs of ApiSetEditionUpdateSASModifiers @ 0x1C0091F0C
 * Callers:
 *     xxxKeyEventEx @ 0x1C0183FE0 (xxxKeyEventEx.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionUpdateSASModifiers(unsigned int a1, char a2, unsigned __int16 a3, unsigned int a4)
{
  __int64 result; // rax
  __int64 v9; // rdx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      430,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  result = IsEditionUpdateSASModifiersSupported();
  if ( (int)result >= 0 )
  {
    LOBYTE(v9) = a2;
    result = EditionUpdateSASModifiers(a1, v9, a3, a4);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               5,
               10,
               431,
               (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return result;
}
