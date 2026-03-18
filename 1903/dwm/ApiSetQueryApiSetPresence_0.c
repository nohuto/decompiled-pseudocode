/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x140004970
 * Callers:
 *     IsChangeWindowMessageFilterExPresent @ 0x140004298 (IsChangeWindowMessageFilterExPresent.c)
 *     IsRegisterHotKeyPresent @ 0x140004378 (IsRegisterHotKeyPresent.c)
 *     IsWerReportCreatePresent @ 0x1400046CC (IsWerReportCreatePresent.c)
 *     IsDWMGhostHandleGhostMsgPresent @ 0x140004768 (IsDWMGhostHandleGhostMsgPresent.c)
 *     IsImmDisableIMEPresent @ 0x140004880 (IsImmDisableIMEPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
