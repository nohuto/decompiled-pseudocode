/*
 * XREFs of PopScreenOn @ 0x14086F500
 * Callers:
 *     PopPowerInformationInternal @ 0x14058DF30 (PopPowerInformationInternal.c)
 * Callees:
 *     PopBlockSessionSwitch @ 0x1406DDB50 (PopBlockSessionSwitch.c)
 *     PopControlMonitor @ 0x1406E23B0 (PopControlMonitor.c)
 */

__int64 PopScreenOn()
{
  unsigned int v1; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF
  int v3; // [rsp+3Ch] [rbp+14h]

  v1 = -1;
  PopBlockSessionSwitch(1, (int *)&v1);
  v2 = 2;
  v3 = 30;
  PopControlMonitor(&v2, v1);
  return PopBlockSessionSwitch(0, (int *)&v1);
}
