/*
 * XREFs of ExpSetSystemTime @ 0x140566AC8
 * Callers:
 *     ExUpdateSystemTimeFromCmos @ 0x140566B6C (ExUpdateSystemTimeFromCmos.c)
 *     NtSetSystemTime @ 0x1408CD2B0 (NtSetSystemTime.c)
 * Callees:
 *     ExSystemTimeToLocalTime @ 0x14013AFA0 (ExSystemTimeToLocalTime.c)
 *     KeSetSystemTime @ 0x1401433EC (KeSetSystemTime.c)
 *     RtlTimeToTimeFields @ 0x14015DA20 (RtlTimeToTimeFields.c)
 *     PoNotifySystemTimeSet @ 0x14017834C (PoNotifySystemTimeSet.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     ExpRefreshTimeZoneInformation @ 0x140734674 (ExpRefreshTimeZoneInformation.c)
 */

void __fastcall ExpSetSystemTime(char a1, char a2, __int64 a3, LARGE_INTEGER a4, struct _SINGLE_LIST_ENTRY *a5)
{
  LARGE_INTEGER SystemTime; // [rsp+20h] [rbp-30h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+28h] [rbp-28h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+30h] [rbp-20h] BYREF

  SystemTime = a4;
  if ( ExpRealTimeIsUniversal )
    LocalTime = a4;
  else
    ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
  KeSetSystemTime((struct _SINGLE_LIST_ENTRY *)&SystemTime, a5, a2 != 0 ? 3 : 0);
  if ( a1 )
  {
    ExpRefreshTimeZoneInformation(0LL);
    if ( !ExpSystemIsInCmosMode )
    {
      if ( ExpRealTimeIsUniversal )
        LocalTime = SystemTime;
      else
        ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
      RtlTimeToTimeFields(&LocalTime, &TimeFields);
      HalSetRealTimeClock(&TimeFields);
    }
  }
  PoNotifySystemTimeSet((__int64 *)&SystemTime, (__int64 *)a5);
}
