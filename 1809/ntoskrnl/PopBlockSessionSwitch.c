/*
 * XREFs of PopBlockSessionSwitch @ 0x1406DEDD0
 * Callers:
 *     PoSessionBuiltinPanelState @ 0x1402E7240 (PoSessionBuiltinPanelState.c)
 *     PoSessionEngagementUpdate @ 0x1402E72C4 (PoSessionEngagementUpdate.c)
 *     PopNotifyCsStateExited @ 0x1408701D0 (PopNotifyCsStateExited.c)
 *     PopScreenOff @ 0x1408706F8 (PopScreenOff.c)
 *     PopScreenOn @ 0x140870740 (PopScreenOn.c)
 *     PoSessionPowerControl @ 0x14087A4D8 (PoSessionPowerControl.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x1406DEEB0 (PoBlockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x1406DEF00 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PopBlockSessionSwitch(char a1, int *a2)
{
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v5[4]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v6; // [rsp+38h] [rbp-20h]

  v5[0] = 0;
  v5[3] = 0;
  v6 = 0LL;
  v5[1] = 0;
  v5[2] = 1;
  if ( a1 )
  {
    result = PoBlockConsoleSwitch(v5);
    *a2 = result;
  }
  else
  {
    v4 = *a2;
    LODWORD(v6) = 7;
    return PopDispatchStateCallout(v5, &v4);
  }
  return result;
}
