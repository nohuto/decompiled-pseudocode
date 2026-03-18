/*
 * XREFs of ApiSetEditionGetAppImeCompatFlags @ 0x1C019C164
 * Callers:
 *     NlsKbdSendIMEProc @ 0x1C0182198 (NlsKbdSendIMEProc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionGetAppImeCompatFlags(__int64 a1)
{
  unsigned int AppImeCompatFlags; // ebx

  AppImeCompatFlags = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      398,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  if ( (int)IsEditionGetAppImeCompatFlagsSupported() >= 0 )
    AppImeCompatFlags = EditionGetAppImeCompatFlags(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      399,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  return AppImeCompatFlags;
}
