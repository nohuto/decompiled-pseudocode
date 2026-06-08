/*
 * XREFs of RegisterSystemSleepStateNotifyHandler @ 0x1C00032E0
 * Callers:
 *     ProcLibGlobalInit @ 0x1C00361EC (ProcLibGlobalInit.c)
 * Callees:
 *     <none>
 */

NTSTATUS RegisterSystemSleepStateNotifyHandler()
{
  _QWORD v1[3]; // [rsp+30h] [rbp-18h] BYREF

  v1[1] = 0LL;
  v1[0] = ProcessSystemSleepStateNotify;
  return ZwPowerInformation(SystemPowerStateNotifyHandler, v1, 0x10u, 0LL, 0);
}
