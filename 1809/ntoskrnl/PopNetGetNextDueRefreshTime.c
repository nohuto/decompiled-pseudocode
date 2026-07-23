/*
 * XREFs of PopNetGetNextDueRefreshTime @ 0x140877FA4
 * Callers:
 *     PopNetRefreshTimerWorkerCallback @ 0x140878110 (PopNetRefreshTimerWorkerCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x140878250 (PopNetWnfLowPowerEpochCallback.c)
 * Callees:
 *     ExSystemTimeToLocalTime @ 0x14013B0A0 (ExSystemTimeToLocalTime.c)
 *     ExLocalTimeToSystemTime @ 0x140160CF0 (ExLocalTimeToSystemTime.c)
 */

LARGE_INTEGER PopNetGetNextDueRefreshTime()
{
  LARGE_INTEGER v1; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+38h] [rbp+10h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+40h] [rbp+18h] BYREF

  SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
  ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
  v1.QuadPart = LocalTime.QuadPart
              + 18000000000LL
              - (LocalTime.QuadPart + 18000000000LL) % 18000000000LL
              - 1200000000
              + (-(__int64)((unsigned __int64)(18000000000LL - (LocalTime.QuadPart + 18000000000LL) % 18000000000LL) < 0x47868C00) & 0x430E23400LL);
  ExLocalTimeToSystemTime(&v1, &v1);
  return v1;
}
