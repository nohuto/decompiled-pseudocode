/*
 * XREFs of HvlpLogHypervisorSchedulerType @ 0x14028C67C
 * Callers:
 *     HvlPhase2Initialize @ 0x14019DD6C (HvlPhase2Initialize.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     HvlpWriteEventLog @ 0x14028CA6C (HvlpWriteEventLog.c)
 */

__int64 HvlpLogHypervisorSchedulerType()
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-28h] BYREF

  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)&HvlpSchedulerType;
  UserData.Size = 4;
  return HvlpWriteEventLog(&HV_EVENTLOG_SCHEDULER_TYPE, 1u, &UserData);
}
