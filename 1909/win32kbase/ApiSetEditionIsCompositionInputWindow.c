/*
 * XREFs of ApiSetEditionIsCompositionInputWindow @ 0x1C0038008
 * Callers:
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C0037FDC (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionIsCompositionInputWindow(__int64 a1)
{
  unsigned int IsCompositionInputWindow; // ebx

  IsCompositionInputWindow = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      132,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  if ( (int)IsEditionIsCompositionInputWindowSupported() >= 0 )
    IsCompositionInputWindow = EditionIsCompositionInputWindow(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      133,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  return IsCompositionInputWindow;
}
