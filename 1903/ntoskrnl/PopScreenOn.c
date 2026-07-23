/*
 * XREFs of PopScreenOn @ 0x1408AC12C
 * Callers:
 *     PopPowerInformationInternal @ 0x14067E674 (PopPowerInformationInternal.c)
 * Callees:
 *     PopBlockSessionSwitch @ 0x140729830 (PopBlockSessionSwitch.c)
 *     PopControlMonitor @ 0x140729A70 (PopControlMonitor.c)
 */

ULONG PopScreenOn()
{
  ULONG v1; // [rsp+30h] [rbp+8h] BYREF
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v1 = -1;
  PopBlockSessionSwitch(1, &v1);
  v2 = 0x1E00000002LL;
  PopControlMonitor((unsigned int *)&v2, v1);
  return PopBlockSessionSwitch(0, &v1);
}
