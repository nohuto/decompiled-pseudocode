/*
 * XREFs of ExpRefreshSystemTime @ 0x140735390
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x140733770 (CmpFinishSystemHivesLoad.c)
 *     CmCompleteRegistryInitialization @ 0x1407467A4 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlTimeFieldsToTime @ 0x140127130 (RtlTimeFieldsToTime.c)
 *     ExSystemTimeToLocalTime @ 0x14013B0A0 (ExSystemTimeToLocalTime.c)
 *     KeSetSystemTime @ 0x1401434EC (KeSetSystemTime.c)
 *     RtlTimeToTimeFields @ 0x14015DB20 (RtlTimeToTimeFields.c)
 *     ExLocalTimeToSystemTime @ 0x140160CF0 (ExLocalTimeToSystemTime.c)
 *     PoNotifySystemTimeSet @ 0x14017844C (PoNotifySystemTimeSet.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExAcquireTimeRefreshLock @ 0x1406669FC (ExAcquireTimeRefreshLock.c)
 *     ExpRefreshTimeZoneInformation @ 0x140735864 (ExpRefreshTimeZoneInformation.c)
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
  _TIME_FIELDS TimeFields; // [rsp+38h] [rbp-18h] BYREF

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
