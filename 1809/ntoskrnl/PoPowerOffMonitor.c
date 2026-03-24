/*
 * XREFs of PoPowerOffMonitor @ 0x140142CA8
 * Callers:
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     PoUnblockConsoleSwitch @ 0x1406DDBAC (PoUnblockConsoleSwitch.c)
 *     PoStartPowerStateTasks @ 0x1406DDBD0 (PoStartPowerStateTasks.c)
 *     PoEndPowerStateTasks @ 0x1406DDBF0 (PoEndPowerStateTasks.c)
 *     PoBlockConsoleSwitch @ 0x1406DDC10 (PoBlockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x1406DDC60 (PopDispatchStateCallout.c)
 */

__int64 PoPowerOffMonitor()
{
  unsigned int v0; // ebx
  unsigned int v2; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v3[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v4; // [rsp+38h] [rbp-18h]

  v3[0] = 0LL;
  v3[1] = 1LL;
  v4 = 0LL;
  v2 = PoBlockConsoleSwitch(v3);
  PoStartPowerStateTasks(v3);
  LODWORD(v4) = 12;
  v0 = PopDispatchStateCallout(v3, &v2);
  PoEndPowerStateTasks(v3);
  PoUnblockConsoleSwitch(v3, v2);
  return v0;
}
