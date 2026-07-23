/*
 * XREFs of PopScreenOn @ 0x1408AB98C
 * Callers:
 *     PopPowerInformationInternal @ 0x14069B7B4 (PopPowerInformationInternal.c)
 * Callees:
 *     PopBlockSessionSwitch @ 0x14072ABA0 (PopBlockSessionSwitch.c)
 *     PopControlMonitor @ 0x14072ADE0 (PopControlMonitor.c)
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
