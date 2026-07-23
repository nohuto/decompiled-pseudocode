/*
 * XREFs of PopScreenOff @ 0x1408AC0DC
 * Callers:
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14067E674 (PopPowerInformationInternal.c)
 *     PopIssueActionRequest @ 0x140725EAC (PopIssueActionRequest.c)
 * Callees:
 *     PopBlockSessionSwitch @ 0x140729830 (PopBlockSessionSwitch.c)
 *     PopControlMonitor @ 0x140729A70 (PopControlMonitor.c)
 */

ULONG __fastcall PopScreenOff(int a1)
{
  ULONG v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  v3 = -1;
  PopBlockSessionSwitch(1, &v3);
  LODWORD(v4) = 0;
  HIDWORD(v4) = a1;
  PopControlMonitor((unsigned int *)&v4, v3);
  return PopBlockSessionSwitch(0, &v3);
}
