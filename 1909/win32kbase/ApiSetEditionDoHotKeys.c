/*
 * XREFs of ApiSetEditionDoHotKeys @ 0x1C004AD50
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C004A650 (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionDoHotKeys(char a1, char a2, unsigned int a3, unsigned int a4, __int64 a5, __int64 a6)
{
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      414,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  v10 = 0;
  if ( (int)IsEditionDoHotKeysSupported() >= 0 )
  {
    LOBYTE(v11) = a2;
    LOBYTE(v12) = a1;
    v10 = EditionDoHotKeys(v12, v11, a3, a4, a5, a6);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      415,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  return v10;
}
