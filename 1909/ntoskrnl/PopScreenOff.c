/*
 * XREFs of PopScreenOff @ 0x1408AB93C
 * Callers:
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14069B7B4 (PopPowerInformationInternal.c)
 *     PopIssueActionRequest @ 0x140727D4C (PopIssueActionRequest.c)
 * Callees:
 *     PopBlockSessionSwitch @ 0x14072ABA0 (PopBlockSessionSwitch.c)
 *     PopControlMonitor @ 0x14072ADE0 (PopControlMonitor.c)
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
