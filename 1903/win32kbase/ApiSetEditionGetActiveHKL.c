/*
 * XREFs of ApiSetEditionGetActiveHKL @ 0x1C0093AB0
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C003FF50 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C0185430 (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     xxxProcessKeyEvent @ 0x1C01865B0 (xxxProcessKeyEvent.c)
 *     VKFromVSC @ 0x1C0186AF0 (VKFromVSC.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetEditionGetActiveHKL()
{
  __int64 ActiveHKL; // rbx

  ActiveHKL = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      400,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  if ( (int)IsEditionGetActiveHKLSupported() >= 0 )
    ActiveHKL = EditionGetActiveHKL();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      401,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  return ActiveHKL;
}
