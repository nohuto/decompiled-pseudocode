/*
 * XREFs of RtlpHpScheduleCompaction @ 0x14001F300
 * Callers:
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x14001E120 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpSegLfhVsDecommit @ 0x14001E6A0 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x14001EDE0 (RtlpHpSegPageRangeCoalesce.c)
 * Callees:
 *     ExSetTimer @ 0x1401147D0 (ExSetTimer.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpScheduleCompaction(_QWORD *a1)
{
  unsigned int v1; // ebx
  signed __int32 v2; // eax
  ULONG_PTR v3; // rcx

  v1 = 0;
  if ( ExpHpGCInitialized )
  {
    if ( BYTE1(*a1) == 1 )
    {
      v2 = _InterlockedCompareExchange(&ExpHpGCScheduledNonPaged, 1, 0);
      v3 = ExpHpGCTimerNonPaged;
    }
    else
    {
      v2 = _InterlockedCompareExchange(&ExpHpGCScheduledPaged, 1, 0);
      v3 = ExpHpGCTimerPaged;
    }
    if ( !v2 )
      ExSetTimer(v3);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v1;
}
