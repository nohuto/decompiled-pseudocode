/*
 * XREFs of PoPowerOffMonitor @ 0x14015DED4
 * Callers:
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     PopDispatchStateCallout @ 0x1406A39E4 (PopDispatchStateCallout.c)
 *     PoBlockConsoleSwitch @ 0x1406A3A78 (PoBlockConsoleSwitch.c)
 *     PoUnblockConsoleSwitch @ 0x140724A04 (PoUnblockConsoleSwitch.c)
 *     PoEndPowerStateTasks @ 0x140724A28 (PoEndPowerStateTasks.c)
 *     PoStartPowerStateTasks @ 0x140724A48 (PoStartPowerStateTasks.c)
 */

__int64 PoPowerOffMonitor()
{
  unsigned int v0; // ebx
  unsigned int v2; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v3[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v4; // [rsp+38h] [rbp-18h]

  v3[1] = 1LL;
  v3[0] = 0LL;
  v4 = 0LL;
  v2 = PoBlockConsoleSwitch(v3);
  PoStartPowerStateTasks(v3);
  LODWORD(v4) = 12;
  v0 = PopDispatchStateCallout(v3, &v2);
  PoEndPowerStateTasks(v3);
  PoUnblockConsoleSwitch(v3, v2);
  return v0;
}
