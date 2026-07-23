/*
 * XREFs of PopSetExecutionRequiredTimer @ 0x140763E08
 * Callers:
 *     PopExecutionRequiredSettingCallback @ 0x140763D70 (PopExecutionRequiredSettingCallback.c)
 *     PopPowerRequestNotifyStandbyStateChanged @ 0x1408677E8 (PopPowerRequestNotifyStandbyStateChanged.c)
 * Callees:
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 */

__int64 PopSetExecutionRequiredTimer()
{
  unsigned __int64 v0; // rcx
  __int64 v1; // rdx
  __int64 result; // rax

  if ( qword_14041A318 && PopExecutionRequiredTimeout )
  {
    v0 = 10000000LL * (unsigned int)PopExecutionRequiredTimeout;
    if ( MEMORY[0xFFFFF78000000008] - qword_14041A318 < v0 )
      v1 = MEMORY[0xFFFFF78000000008] - qword_14041A318 - v0;
    else
      v1 = -10000000LL;
    return KiSetTimerEx((__int64)&PopExecutionRequiredTimer, v1, 0, 0, (__int64)&PopExecutionRequiredTimeoutDpc);
  }
  return result;
}
