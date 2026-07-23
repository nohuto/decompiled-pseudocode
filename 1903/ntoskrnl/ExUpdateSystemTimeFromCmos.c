/*
 * XREFs of ExUpdateSystemTimeFromCmos @ 0x1405969AC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     ExpTimeRefreshWork @ 0x14059D9F0 (ExpTimeRefreshWork.c)
 *     KdpTimeSlipWork @ 0x140956660 (KdpTimeSlipWork.c)
 * Callees:
 *     RtlTimeFieldsToTime @ 0x140120F80 (RtlTimeFieldsToTime.c)
 *     ExLocalTimeToSystemTime @ 0x14015C370 (ExLocalTimeToSystemTime.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ExpSetSystemTime @ 0x140596560 (ExpSetSystemTime.c)
 */

void __fastcall ExUpdateSystemTimeFromCmos(char a1, unsigned int a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rcx
  LARGE_INTEGER Time; // [rsp+30h] [rbp-30h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+38h] [rbp-28h] BYREF
  __int64 v7; // [rsp+40h] [rbp-20h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+48h] [rbp-18h] BYREF

  SystemTime.QuadPart = 0LL;
  Time.QuadPart = 0LL;
  *(_QWORD *)&TimeFields.Year = 0LL;
  *(_QWORD *)&TimeFields.Minute = 0LL;
  if ( !a2 )
    a2 = ExpMaxTimeSeperationBeforeCorrect;
  v3 = 10000000LL * a2;
  if ( (unsigned __int8)HalQueryRealTimeClock(&TimeFields) && RtlTimeFieldsToTime(&TimeFields, &Time) )
  {
    if ( ExpRealTimeIsUniversal )
      SystemTime = Time;
    else
      ExLocalTimeToSystemTime(&Time, &SystemTime);
    v7 = MEMORY[0xFFFFF78000000014];
    if ( SystemTime.QuadPart <= MEMORY[0xFFFFF78000000014] )
      v4 = MEMORY[0xFFFFF78000000014] - SystemTime.QuadPart;
    else
      v4 = SystemTime.QuadPart - MEMORY[0xFFFFF78000000014];
    if ( v4 > v3 )
      ExpSetSystemTime(0, a1, 2LL, SystemTime, &v7);
  }
}
