/*
 * XREFs of ApiSetEditionIsCompositeAppOrSelfDisabled @ 0x1C019C950
 * Callers:
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C016D1D8 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionIsCompositeAppOrSelfDisabled(__int64 a1)
{
  unsigned int IsCompositeAppOrSelfDisabled; // ebx

  IsCompositeAppOrSelfDisabled = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      120,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  if ( (int)IsEditionIsCompositeAppOrSelfDisabledSupported() >= 0 )
    IsCompositeAppOrSelfDisabled = EditionIsCompositeAppOrSelfDisabled(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      121,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  return IsCompositeAppOrSelfDisabled;
}
