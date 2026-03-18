/*
 * XREFs of ExpRefreshSystemTime @ 0x1407341C0
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x1407325A0 (CmpFinishSystemHivesLoad.c)
 *     CmCompleteRegistryInitialization @ 0x1407455D4 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109D20 (PsGetCurrentServerSiloGlobals.c)
 *     RtlTimeFieldsToTime @ 0x140127040 (RtlTimeFieldsToTime.c)
 *     ExSystemTimeToLocalTime @ 0x14013AF80 (ExSystemTimeToLocalTime.c)
 *     KeSetSystemTime @ 0x1401433CC (KeSetSystemTime.c)
 *     RtlTimeToTimeFields @ 0x14015DA00 (RtlTimeToTimeFields.c)
 *     ExLocalTimeToSystemTime @ 0x140160BD0 (ExLocalTimeToSystemTime.c)
 *     PoNotifySystemTimeSet @ 0x14017832C (PoNotifySystemTimeSet.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ExAcquireTimeRefreshLock @ 0x14066585C (ExAcquireTimeRefreshLock.c)
 *     ExpRefreshTimeZoneInformation @ 0x140734694 (ExpRefreshTimeZoneInformation.c)
 */

void ExpRefreshSystemTime()
{
  __int64 v0; // rbx
  char v1; // si
  int v2; // edi
  LARGE_INTEGER v3; // rax
  LARGE_INTEGER SystemTime; // [rsp+20h] [rbp-30h] BYREF
  LARGE_INTEGER v5; // [rsp+28h] [rbp-28h] BYREF
  LARGE_INTEGER Time; // [rsp+30h] [rbp-20h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+38h] [rbp-18h] BYREF

  v0 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 132);
  ExAcquireTimeRefreshLock(1u);
  v1 = ExpSystemIsInCmosMode;
  if ( (unsigned __int8)HalQueryRealTimeClock(&TimeFields) )
  {
    if ( RtlTimeFieldsToTime(&TimeFields, &Time) )
    {
      v2 = *(_DWORD *)(v0 + 436);
      if ( (unsigned __int8)ExpRefreshTimeZoneInformation(0LL) )
      {
        if ( v2 != *(_DWORD *)(v0 + 436) )
        {
          v3.QuadPart = MEMORY[0xFFFFF78000000014];
          SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
          if ( !ExpRealTimeIsUniversal )
          {
            if ( v1 )
            {
              ExLocalTimeToSystemTime(&Time, &v5);
              KeSetSystemTime((struct _SINGLE_LIST_ENTRY *)&v5, (struct _SINGLE_LIST_ENTRY *)&SystemTime, 0);
              goto LABEL_9;
            }
            ExSystemTimeToLocalTime(&SystemTime, &Time);
            RtlTimeToTimeFields(&Time, &TimeFields);
            HalSetRealTimeClock(&TimeFields);
            v3 = SystemTime;
          }
          v5 = v3;
LABEL_9:
          PoNotifySystemTimeSet((__int64 *)&v5, (__int64 *)&SystemTime);
        }
      }
    }
  }
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
