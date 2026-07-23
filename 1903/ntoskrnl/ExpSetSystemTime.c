/*
 * XREFs of ExpSetSystemTime @ 0x140596560
 * Callers:
 *     ExUpdateSystemTimeFromCmos @ 0x1405969AC (ExUpdateSystemTimeFromCmos.c)
 *     NtSetSystemTime @ 0x14090A870 (NtSetSystemTime.c)
 * Callees:
 *     ExSystemTimeToLocalTime @ 0x14013CC60 (ExSystemTimeToLocalTime.c)
 *     RtlTimeToTimeFields @ 0x140144D30 (RtlTimeToTimeFields.c)
 *     PoNotifySystemTimeSet @ 0x140181BFC (PoNotifySystemTimeSet.c)
 *     KeSetSystemTime @ 0x140181E60 (KeSetSystemTime.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ExpRefreshTimeZoneInformation @ 0x14075FA7C (ExpRefreshTimeZoneInformation.c)
 */

void __fastcall ExpSetSystemTime(char a1, char a2, __int64 a3, LARGE_INTEGER a4, __int64 *a5)
{
  __int64 v7; // rcx
  LARGE_INTEGER LocalTime; // [rsp+20h] [rbp-30h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+28h] [rbp-28h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+30h] [rbp-20h] BYREF

  LocalTime.QuadPart = 0LL;
  SystemTime = a4;
  *(_QWORD *)&TimeFields.Year = 0LL;
  *(_QWORD *)&TimeFields.Minute = 0LL;
  if ( ExpRealTimeIsUniversal )
    LocalTime = a4;
  else
    ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
  KeSetSystemTime((__int64)&SystemTime, (__int64)a5, a2 != 0 ? 3 : 0);
  if ( a1 )
  {
    ExpRefreshTimeZoneInformation(v7);
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
  PoNotifySystemTimeSet((__int64 *)&SystemTime, a5);
}
