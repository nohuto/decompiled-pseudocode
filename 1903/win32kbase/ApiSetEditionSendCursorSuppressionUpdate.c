/*
 * XREFs of ApiSetEditionSendCursorSuppressionUpdate @ 0x1C019E150
 * Callers:
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0167680 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0167854 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionSendCursorSuppressionUpdate(unsigned int a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v4; // ebx
  int v5; // edx

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      272,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  v4 = 0;
  if ( (int)IsEditionSendCursorSuppressionUpdateSupported() >= 0 )
    v4 = EditionSendCursorSuppressionUpdate(a1, v2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      10,
      273,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return v4;
}
