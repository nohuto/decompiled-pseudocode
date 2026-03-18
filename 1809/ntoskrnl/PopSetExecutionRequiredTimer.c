/*
 * XREFs of PopSetExecutionRequiredTimer @ 0x140762C38
 * Callers:
 *     PopExecutionRequiredSettingCallback @ 0x140762BA0 (PopExecutionRequiredSettingCallback.c)
 *     PopPowerRequestNotifyStandbyStateChanged @ 0x1408665A8 (PopPowerRequestNotifyStandbyStateChanged.c)
 * Callees:
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 */

__int64 PopSetExecutionRequiredTimer()
{
  unsigned __int64 v0; // rcx
  __int64 v1; // rdx
  __int64 result; // rax

  if ( qword_140419258 && PopExecutionRequiredTimeout )
  {
    v0 = 10000000LL * (unsigned int)PopExecutionRequiredTimeout;
    if ( MEMORY[0xFFFFF78000000008] - qword_140419258 < v0 )
      v1 = MEMORY[0xFFFFF78000000008] - qword_140419258 - v0;
    else
      v1 = -10000000LL;
    return KiSetTimerEx((__int64)&PopExecutionRequiredTimer, v1, 0, 0, (__int64)&PopExecutionRequiredTimeoutDpc);
  }
  return result;
}
