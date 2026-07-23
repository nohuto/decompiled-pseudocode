/*
 * XREFs of PopBlockSessionSwitch @ 0x14072ABA0
 * Callers:
 *     PoSessionBuiltinPanelState @ 0x140303790 (PoSessionBuiltinPanelState.c)
 *     PoSessionEngagementUpdate @ 0x14030381C (PoSessionEngagementUpdate.c)
 *     PopNotifyCsStateExited @ 0x1408AB410 (PopNotifyCsStateExited.c)
 *     PopScreenOff @ 0x1408AB93C (PopScreenOff.c)
 *     PopScreenOn @ 0x1408AB98C (PopScreenOn.c)
 *     PoSessionPowerControl @ 0x1408B5C30 (PoSessionPowerControl.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x1406EF198 (PoBlockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x1406EF1E8 (PopDispatchStateCallout.c)
 */

ULONG __fastcall PopBlockSessionSwitch(char a1, ULONG *a2)
{
  ULONG result; // eax
  ULONG v4; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+28h] [rbp-30h] BYREF
  int v6; // [rsp+30h] [rbp-28h]
  int v7; // [rsp+34h] [rbp-24h]
  __int64 v8; // [rsp+38h] [rbp-20h]

  v5 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v6 = 1;
  if ( a1 )
  {
    result = PoBlockConsoleSwitch((__int64)&v5);
    *a2 = result;
  }
  else
  {
    v4 = *a2;
    LODWORD(v8) = 7;
    return PopDispatchStateCallout(&v5, (__int64)&v4);
  }
  return result;
}
