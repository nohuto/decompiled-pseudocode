/*
 * XREFs of RtlCutoverTimeToSystemTime @ 0x14075FF8C
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x14075FA7C (ExpRefreshTimeZoneInformation.c)
 *     ExInitializeUtcTimeZoneBias @ 0x140A22BAC (ExInitializeUtcTimeZoneBias.c)
 * Callees:
 *     RtlTimeFieldsToTime @ 0x140120F80 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x140144D30 (RtlTimeToTimeFields.c)
 */

BOOLEAN __stdcall RtlCutoverTimeToSystemTime(
        PTIME_FIELDS CutoverTimeFields,
        PLARGE_INTEGER SystemTime,
        PLARGE_INTEGER CurrentTime,
        BOOLEAN ThisYearsCutoverOnly)
{
  __int16 Day; // r14
  __int16 Month; // cx
  __int16 Weekday; // r15
  __int16 v9; // bx
  __int16 Milliseconds; // ax
  __int16 v11; // si
  __int16 v12; // r15
  _TIME_FIELDS TimeFields; // [rsp+20h] [rbp-20h] BYREF
  _TIME_FIELDS v15; // [rsp+30h] [rbp-10h] BYREF
  LARGE_INTEGER Time; // [rsp+70h] [rbp+30h] BYREF

  *(_QWORD *)&TimeFields.Year = 0LL;
  *(_QWORD *)&TimeFields.Minute = 0LL;
  RtlTimeToTimeFields(CurrentTime, &TimeFields);
  if ( !CutoverTimeFields->Year )
  {
    Day = CutoverTimeFields->Day;
    *(_QWORD *)&v15.Year = 0LL;
    *(_QWORD *)&v15.Minute = 0LL;
    Time.QuadPart = 0LL;
    if ( Day <= 5 )
    {
      if ( Day )
      {
        Month = CutoverTimeFields->Month;
        Weekday = CutoverTimeFields->Weekday;
        v9 = 1;
        TimeFields.Hour = CutoverTimeFields->Hour;
        TimeFields.Minute = CutoverTimeFields->Minute;
        TimeFields.Second = CutoverTimeFields->Second;
        Milliseconds = CutoverTimeFields->Milliseconds;
        TimeFields.Month = Month;
        TimeFields.Milliseconds = Milliseconds;
        TimeFields.Day = 1;
        TimeFields.Weekday = 0;
        if ( RtlTimeFieldsToTime(&TimeFields, &Time) )
        {
          RtlTimeToTimeFields(&Time, &v15);
          if ( v15.Weekday <= Weekday )
          {
            v11 = 1;
            if ( v15.Weekday >= Weekday )
            {
LABEL_8:
              v12 = 1;
              if ( Day > 1 )
              {
                do
                {
                  v9 += 7;
                  TimeFields.Day = v9;
                  if ( !RtlTimeFieldsToTime(&TimeFields, &Time) )
                    break;
                  RtlTimeToTimeFields(&Time, &v15);
                  v11 = v15.Day;
                  ++v12;
                }
                while ( v12 < Day );
              }
              TimeFields.Day = v11;
              if ( RtlTimeFieldsToTime(&TimeFields, &Time) )
              {
                *SystemTime = Time;
                return 1;
              }
              return 0;
            }
            v9 = Weekday - v15.Weekday + 1;
          }
          else
          {
            v9 = Weekday - v15.Weekday + 8;
          }
          v11 = v9;
          goto LABEL_8;
        }
      }
    }
    return 0;
  }
  return RtlTimeFieldsToTime(CutoverTimeFields, SystemTime) != 0;
}
