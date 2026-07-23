/*
 * XREFs of ExUpdateSystemTimeFromCmos @ 0x140567B6C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 *     ExpTimeRefreshWork @ 0x14056F0E0 (ExpTimeRefreshWork.c)
 *     KdpTimeSlipWork @ 0x140918C10 (KdpTimeSlipWork.c)
 * Callees:
 *     RtlTimeFieldsToTime @ 0x140127130 (RtlTimeFieldsToTime.c)
 *     ExLocalTimeToSystemTime @ 0x140160CF0 (ExLocalTimeToSystemTime.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExpSetSystemTime @ 0x140567AC8 (ExpSetSystemTime.c)
 */

void __fastcall ExUpdateSystemTimeFromCmos(char a1, unsigned int a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rcx
  LARGE_INTEGER Time; // [rsp+30h] [rbp-38h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+38h] [rbp-30h] BYREF
  struct _SINGLE_LIST_ENTRY v7; // [rsp+40h] [rbp-28h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+48h] [rbp-20h] BYREF

  if ( !a2 )
    a2 = ExpMaxTimeSeperationBeforeCorrect;
  v3 = 10000000LL * a2;
  if ( (unsigned __int8)HalQueryRealTimeClock(&TimeFields) && RtlTimeFieldsToTime(&TimeFields, &Time) )
  {
    if ( ExpRealTimeIsUniversal )
      SystemTime = Time;
    else
      ExLocalTimeToSystemTime(&Time, &SystemTime);
    v7.Next = (struct _SINGLE_LIST_ENTRY *)MEMORY[0xFFFFF78000000014];
    if ( SystemTime.QuadPart <= MEMORY[0xFFFFF78000000014] )
      v4 = MEMORY[0xFFFFF78000000014] - SystemTime.QuadPart;
    else
      v4 = SystemTime.QuadPart - MEMORY[0xFFFFF78000000014];
    if ( v4 > v3 )
      ExpSetSystemTime(0, a1, 2LL, SystemTime, &v7);
  }
}
