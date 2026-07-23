/*
 * XREFs of ExpRefreshSystemTime @ 0x14075F674
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x14075DD80 (CmpFinishSystemHivesLoad.c)
 *     CmCompleteRegistryInitialization @ 0x140769A5C (CmCompleteRegistryInitialization.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     RtlTimeFieldsToTime @ 0x140120F80 (RtlTimeFieldsToTime.c)
 *     ExSystemTimeToLocalTime @ 0x14013CC60 (ExSystemTimeToLocalTime.c)
 *     RtlTimeToTimeFields @ 0x140144D30 (RtlTimeToTimeFields.c)
 *     ExLocalTimeToSystemTime @ 0x14015C370 (ExLocalTimeToSystemTime.c)
 *     PoNotifySystemTimeSet @ 0x140181BFC (PoNotifySystemTimeSet.c)
 *     KeSetSystemTime @ 0x140181E60 (KeSetSystemTime.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ExAcquireTimeRefreshLock @ 0x1406A7970 (ExAcquireTimeRefreshLock.c)
 *     ExpRefreshTimeZoneInformation @ 0x14075FA7C (ExpRefreshTimeZoneInformation.c)
 */

void ExpRefreshSystemTime()
{
  char v0; // di
  __int64 v1; // rcx
  int v2; // ebx
  LARGE_INTEGER v3; // rax
  LARGE_INTEGER SystemTime; // [rsp+20h] [rbp-30h] BYREF
  LARGE_INTEGER v5; // [rsp+28h] [rbp-28h] BYREF
  LARGE_INTEGER Time; // [rsp+30h] [rbp-20h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+38h] [rbp-18h] BYREF

  SystemTime.QuadPart = 0LL;
  v5.QuadPart = 0LL;
  Time.QuadPart = 0LL;
  *(_QWORD *)&TimeFields.Year = 0LL;
  *(_QWORD *)&TimeFields.Minute = 0LL;
  ExAcquireTimeRefreshLock(1u);
  v0 = ExpSystemIsInCmosMode;
  if ( (unsigned __int8)HalQueryRealTimeClock(&TimeFields) )
  {
    if ( RtlTimeFieldsToTime(&TimeFields, &Time) )
    {
      v2 = ExpLastTimeZoneBias;
      if ( (unsigned __int8)ExpRefreshTimeZoneInformation(v1) )
      {
        if ( v2 != ExpLastTimeZoneBias )
        {
          v3.QuadPart = MEMORY[0xFFFFF78000000014];
          SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
          if ( !ExpRealTimeIsUniversal )
          {
            if ( v0 )
            {
              ExLocalTimeToSystemTime(&Time, &v5);
              KeSetSystemTime((__int64)&v5, (__int64)&SystemTime, 0);
              goto LABEL_10;
            }
            ExSystemTimeToLocalTime(&SystemTime, &Time);
            RtlTimeToTimeFields(&Time, &TimeFields);
            HalSetRealTimeClock(&TimeFields);
            v3 = SystemTime;
          }
          v5 = v3;
LABEL_10:
          PoNotifySystemTimeSet((__int64 *)&v5, (__int64 *)&SystemTime);
        }
      }
    }
  }
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
