/*
 * XREFs of ApiSetEditionSendCursorSuppressionUpdate @ 0x1C013FE14
 * Callers:
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01128F8 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0112A84 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionSendCursorSuppressionUpdate(unsigned int a1, __int64 a2)
{
  unsigned int v4; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x8Cu,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  v4 = 0;
  if ( (int)IsEditionSendCursorSuppressionUpdateSupported() >= 0 )
    v4 = EditionSendCursorSuppressionUpdate(a1, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x8Du,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return v4;
}
