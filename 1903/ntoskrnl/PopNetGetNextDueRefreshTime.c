/*
 * XREFs of PopNetGetNextDueRefreshTime @ 0x1408B4014
 * Callers:
 *     PopNetRefreshTimerWorkerCallback @ 0x1408B41B0 (PopNetRefreshTimerWorkerCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x1408B42F0 (PopNetWnfLowPowerEpochCallback.c)
 * Callees:
 *     ExSystemTimeToLocalTime @ 0x14013CC60 (ExSystemTimeToLocalTime.c)
 *     ExLocalTimeToSystemTime @ 0x14015C370 (ExLocalTimeToSystemTime.c)
 */

LARGE_INTEGER PopNetGetNextDueRefreshTime()
{
  LARGE_INTEGER v1; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+38h] [rbp+10h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+40h] [rbp+18h] BYREF

  LocalTime.QuadPart = 0LL;
  SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
  if ( qword_140442F88
    && MEMORY[0xFFFFF78000000014] < qword_140442F88
    && qword_140442F88 - MEMORY[0xFFFFF78000000014] >= 1200000000 )
  {
    return (LARGE_INTEGER)(qword_140442F88 - 1200000000);
  }
  else
  {
    ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
    v1.QuadPart = LocalTime.QuadPart
                + 18000000000LL
                - (LocalTime.QuadPart + 18000000000LL) % 18000000000LL
                - 1200000000
                + (-(__int64)((unsigned __int64)(18000000000LL - (LocalTime.QuadPart + 18000000000LL) % 18000000000LL) < 0x47868C00) & 0x430E23400LL);
    ExLocalTimeToSystemTime(&v1, &v1);
    return v1;
  }
}
