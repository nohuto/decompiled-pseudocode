/*
 * XREFs of PopCheckpointSystemSleepUnsafe @ 0x14057E0E4
 * Callers:
 *     PopCheckpointSystemSleep @ 0x140569714 (PopCheckpointSystemSleep.c)
 *     PopIssueActionRequest @ 0x1406DE870 (PopIssueActionRequest.c)
 * Callees:
 *     VslReportBugCheckProgress @ 0x14027BBC0 (VslReportBugCheckProgress.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x1408CFB80 (ExSetFirmwareEnvironmentVariable.c)
 */

NTSTATUS __fastcall PopCheckpointSystemSleepUnsafe(char a1)
{
  char v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1;
  if ( !PoAllProcIntrDisabled )
    return ExSetFirmwareEnvironmentVariable(
             (unsigned int)L"*,",
             (unsigned int)&SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
             (unsigned int)&v2,
             1,
             1);
  if ( PopCheckpointEfiRuntimeRedirected )
    return VslReportBugCheckProgress((char *)L"SystemSleepCheckpoint", &SYSTEM_SLEEP_ETW_CHECKPOINT_GUID, &v2, 1u, 1);
  return HalSetEnvironmentVariableEx(L"SystemSleepCheckpoint", &SYSTEM_SLEEP_ETW_CHECKPOINT_GUID, &v2, 1LL, 1);
}
