/*
 * XREFs of PoPowerOffMonitor @ 0x14015E574
 * Callers:
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x1406EF198 (PoBlockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x1406EF1E8 (PopDispatchStateCallout.c)
 *     PoUnblockConsoleSwitch @ 0x1407268A4 (PoUnblockConsoleSwitch.c)
 *     PoEndPowerStateTasks @ 0x1407268C8 (PoEndPowerStateTasks.c)
 *     PoStartPowerStateTasks @ 0x1407268E8 (PoStartPowerStateTasks.c)
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
