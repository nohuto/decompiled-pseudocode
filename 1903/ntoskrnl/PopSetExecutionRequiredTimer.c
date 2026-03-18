/*
 * XREFs of PopSetExecutionRequiredTimer @ 0x1407897C8
 * Callers:
 *     PopExecutionRequiredSettingCallback @ 0x140789730 (PopExecutionRequiredSettingCallback.c)
 *     PopPowerRequestNotifyStandbyStateChanged @ 0x1408A2AA8 (PopPowerRequestNotifyStandbyStateChanged.c)
 * Callees:
 *     KiSetTimerEx @ 0x1400B2A00 (KiSetTimerEx.c)
 */

__int64 PopSetExecutionRequiredTimer()
{
  unsigned __int64 v0; // rcx
  __int64 v1; // rdx
  __int64 result; // rax

  if ( qword_140444EE8 && PopExecutionRequiredTimeout )
  {
    v0 = 10000000LL * (unsigned int)PopExecutionRequiredTimeout;
    if ( MEMORY[0xFFFFF78000000008] - qword_140444EE8 < v0 )
      v1 = MEMORY[0xFFFFF78000000008] - qword_140444EE8 - v0;
    else
      v1 = -10000000LL;
    return KiSetTimerEx((__int64)&PopExecutionRequiredTimer, v1, 0, 0, (__int64)&PopExecutionRequiredTimeoutDpc);
  }
  return result;
}
