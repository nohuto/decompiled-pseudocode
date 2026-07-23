/*
 * XREFs of PoPowerOffMonitor @ 0x140142DA8
 * Callers:
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PoUnblockConsoleSwitch @ 0x1406DEE4C (PoUnblockConsoleSwitch.c)
 *     PoStartPowerStateTasks @ 0x1406DEE70 (PoStartPowerStateTasks.c)
 *     PoEndPowerStateTasks @ 0x1406DEE90 (PoEndPowerStateTasks.c)
 *     PoBlockConsoleSwitch @ 0x1406DEEB0 (PoBlockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x1406DEF00 (PopDispatchStateCallout.c)
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
