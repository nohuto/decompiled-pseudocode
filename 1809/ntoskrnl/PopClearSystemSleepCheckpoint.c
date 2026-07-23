/*
 * XREFs of PopClearSystemSleepCheckpoint @ 0x1406E14D8
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x14056D5F0 (PopUnlockAfterSleepWorker.c)
 *     PopCheckShutdownMarker @ 0x1409DE374 (PopCheckShutdownMarker.c)
 * Callees:
 *     ExSetFirmwareEnvironmentVariable @ 0x1408D0E20 (ExSetFirmwareEnvironmentVariable.c)
 */

__int64 __fastcall PopClearSystemSleepCheckpoint(char a1)
{
  unsigned int v1; // edx
  __int64 result; // rax

  v1 = 0;
  if ( (PopCheckpointSystemSleepEnabled || a1) && (PopCheckpointSystemSleepSimulateFlags & 2) == 0 )
  {
    v1 = ExSetFirmwareEnvironmentVariable((unsigned int)L"*,", (unsigned int)&SYSTEM_SLEEP_ETW_CHECKPOINT_GUID, 0, 0, 1);
    if ( v1 == -1073741568 )
      v1 = 0;
  }
  PopCheckpointSystemSleepEnabled = 0;
  result = v1;
  _InterlockedExchange(&PopSleepCheckpointStatus, 0);
  return result;
}
