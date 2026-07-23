/*
 * XREFs of PopBlockSessionSwitch @ 0x140729830
 * Callers:
 *     PoSessionBuiltinPanelState @ 0x140303CE0 (PoSessionBuiltinPanelState.c)
 *     PoSessionEngagementUpdate @ 0x140303D6C (PoSessionEngagementUpdate.c)
 *     PopNotifyCsStateExited @ 0x1408ABBB0 (PopNotifyCsStateExited.c)
 *     PopScreenOff @ 0x1408AC0DC (PopScreenOff.c)
 *     PopScreenOn @ 0x1408AC12C (PopScreenOn.c)
 *     PoSessionPowerControl @ 0x1408B6360 (PoSessionPowerControl.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     PopDispatchStateCallout @ 0x1406A39E4 (PopDispatchStateCallout.c)
 *     PoBlockConsoleSwitch @ 0x1406A3A78 (PoBlockConsoleSwitch.c)
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
    result = PoBlockConsoleSwitch(&v5);
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
