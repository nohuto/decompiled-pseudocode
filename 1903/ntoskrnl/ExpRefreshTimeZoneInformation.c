/*
 * XREFs of ExpRefreshTimeZoneInformation @ 0x14075FA7C
 * Callers:
 *     ExpSetSystemTime @ 0x140596560 (ExpSetSystemTime.c)
 *     ExpRefreshSystemTime @ 0x14075F674 (ExpRefreshSystemTime.c)
 *     ExpReadLeapSecondData @ 0x14075F730 (ExpReadLeapSecondData.c)
 *     NtSetSystemTime @ 0x14090A870 (NtSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140081CA0 (KeInitializeTimerEx.c)
 *     KiSetTimerEx @ 0x1400B2A00 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1400B2CA0 (KeCancelTimer.c)
 *     KeInitializeDpc @ 0x1400B8D00 (KeInitializeDpc.c)
 *     RtlTimeFieldsToTime @ 0x140120F80 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x140144D30 (RtlTimeToTimeFields.c)
 *     ExLocalTimeToSystemTime @ 0x14015C370 (ExLocalTimeToSystemTime.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1401C39D0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x1406B97C0 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlCutoverTimeToSystemTime @ 0x14075FF8C (RtlCutoverTimeToSystemTime.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140760108 (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x140760380 (RtlSetActiveTimeBias.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x14076044C (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1408D385C (RtlpSetTimeZoneInformationWorker.c)
 *     EtwTraceTimeZoneBiasChange @ 0x1408F4874 (EtwTraceTimeZoneBiasChange.c)
 *     ExInitializeTimeRefresh @ 0x140A0E83C (ExInitializeTimeRefresh.c)
 */

char ExpRefreshTimeZoneInformation()
{
  BOOLEAN v0; // r9
  __int64 v1; // rdi
  LARGE_INTEGER v2; // rbx
  unsigned int v3; // esi
  BOOLEAN v4; // r9
  LARGE_INTEGER v5; // rbx
  int v6; // edx
  int v7; // eax
  __int64 v8; // rdx
  _OWORD *v9; // rcx
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int16 Year; // bx
  LARGE_INTEGER v22; // rax
  __int16 v23; // bx
  char result; // al
  LARGE_INTEGER LocalTime; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER Time; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER v27; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 Buffer; // [rsp+60h] [rbp-A8h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+68h] [rbp-A0h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER v31; // [rsp+80h] [rbp-88h] BYREF
  _QWORD Buf2[54]; // [rsp+88h] [rbp-80h] BYREF

  memset(Buf2, 0, sizeof(Buf2));
  SystemTime.QuadPart = 0LL;
  v31.QuadPart = 0LL;
  v27.QuadPart = 0LL;
  *(_QWORD *)&TimeFields.Year = 0LL;
  *(_QWORD *)&TimeFields.Minute = 0LL;
  Buffer = 0LL;
  if ( !ExpTimeZoneWorkItem.WorkerRoutine )
  {
    ExInitializeTimeRefresh();
    KeInitializeDpc(&ExpTimeZoneDpc, (PKDEFERRED_ROUTINE)ExpTimeZoneDpcRoutine, &ExpOkToTimeZoneRefresh);
    ExpTimeZoneWorkItem.Parameter = 0LL;
    ExpTimeZoneWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ExpTimeZoneWork;
    ExpTimeZoneWorkItem.List.Flink = 0LL;
    KeInitializeTimerEx(&ExpTimeZoneTimer, NotificationTimer);
    KeInitializeDpc(&ExpNextYearDpc, (PKDEFERRED_ROUTINE)ExpNextYearDpcRoutine, &ExpOkToTimeZoneRefresh);
    ExpNextYearWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ExpTimeZoneWork;
    ExpNextYearWorkItem.Parameter = 0LL;
    ExpNextYearWorkItem.List.Flink = 0LL;
    KeInitializeTimerEx(&ExpNextYearTimer, NotificationTimer);
    KeInitializeDpc(&ExpCenturyDpc, (PKDEFERRED_ROUTINE)ExpCenturyDpcRoutine, &ExpOkToTimeZoneRefresh);
    ExpCenturyWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ExpTimeZoneWork;
    ExpCenturyWorkItem.Parameter = 0LL;
    ExpCenturyWorkItem.List.Flink = 0LL;
    KeInitializeTimerEx(&ExpCenturyTimer, NotificationTimer);
    *(_QWORD *)&ExpNextCenturyTimeFieldsInLocalTime.Year = 0x100010000LL;
    *(_QWORD *)&ExpNextCenturyTimeFieldsInLocalTime.Minute = 0x100000000LL;
    *(_QWORD *)&ExpNextYearTimeFieldsInLocalTime.Year = 0x100010000LL;
    *(_QWORD *)&ExpNextYearTimeFieldsInLocalTime.Minute = 0x100000000LL;
  }
  if ( (int)RtlpQueryTimeZoneInformationWorker((char *)Buf2, 0x1B0uLL) < 0 )
    goto LABEL_33;
  v1 = MEMORY[0xFFFFF78000000014];
  v2.QuadPart = MEMORY[0xFFFFF78000000014] - ExpTimeZoneBias;
  Time.QuadPart = MEMORY[0xFFFFF78000000014] - ExpTimeZoneBias;
  if ( !BYTE4(Buf2[53]) )
  {
    if ( WORD2(Buf2[21]) )
    {
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( (unsigned __int8)RtlpCheckDynamicTimeZoneInformation(Buf2) )
        RtlpSetTimeZoneInformationWorker(Buf2);
    }
  }
  v3 = Buf2[0];
  if ( !HIWORD(Buf2[8]) || !WORD1(Buf2[19]) )
  {
    KeCancelTimer(&ExpTimeZoneTimer);
    v5.QuadPart = 0LL;
    ExpCurrentTimeZoneId = 0;
    LocalTime.QuadPart = 0LL;
    goto LABEL_19;
  }
  if ( !RtlCutoverTimeToSystemTime((PTIME_FIELDS)((char *)&Buf2[8] + 4), &SystemTime, &Time, v0)
    || !RtlCutoverTimeToSystemTime((PTIME_FIELDS)&Buf2[19], &v31, &Time, v4) )
  {
LABEL_33:
    ++ExpRefreshFailures;
    result = 0;
    ExpSystemIsInCmosMode = 1;
    return result;
  }
  if ( v2.QuadPart < v31.QuadPart || v2.QuadPart < SystemTime.QuadPart )
  {
    if ( v31.QuadPart >= SystemTime.QuadPart )
    {
      if ( v2.QuadPart >= SystemTime.QuadPart && v2.QuadPart < v31.QuadPart )
      {
        v5 = v31;
        LocalTime = v31;
        ExpCurrentTimeZoneId = 1;
        goto LABEL_17;
      }
    }
    else if ( v2.QuadPart < v31.QuadPart || v2.QuadPart >= SystemTime.QuadPart )
    {
      v5 = v31;
      LocalTime = v31;
      v6 = 1;
      goto LABEL_16;
    }
    v6 = 2;
    LocalTime = SystemTime;
    v5 = SystemTime;
  }
  else
  {
    v5.QuadPart = 0LL;
    LocalTime.QuadPart = 0LL;
    v6 = (SystemTime.QuadPart <= v31.QuadPart) + 1;
  }
LABEL_16:
  v7 = Buf2[21];
  ExpCurrentTimeZoneId = v6;
  if ( v6 != 2 )
LABEL_17:
    v7 = HIDWORD(Buf2[10]);
  v3 += v7;
LABEL_19:
  if ( ExpLastTimeZoneBias != v3 )
  {
    Buffer = 0xFFFFFFFF00000000uLL;
    ZwUpdateWnfStateData(&WNF_SEB_TIME_ZONE_CHANGE, &Buffer, 8u, 0LL, 0LL, 0, 0);
    EtwTraceTimeZoneBiasChange(v3);
  }
  v8 = 3LL;
  ExpLastTimeZoneBias = v3;
  v9 = Buf2;
  ExpTimeZoneBias = 10000000LL * (int)(60 * v3);
  v10 = &ExpTimeZoneInformation;
  do
  {
    v11 = v9[1];
    *v10 = *v9;
    v12 = v9[2];
    v10[1] = v11;
    v13 = v9[3];
    v10[2] = v12;
    v14 = v9[4];
    v10[3] = v13;
    v15 = v9[5];
    v10[4] = v14;
    v16 = v9[6];
    v10[5] = v15;
    v17 = v9[7];
    v9 += 8;
    v10[6] = v16;
    v10 += 8;
    *(v10 - 1) = v17;
    --v8;
  }
  while ( v8 );
  v18 = *v9;
  ExpSystemIsInCmosMode = 0;
  v19 = v9[1];
  *v10 = v18;
  v20 = v9[2];
  v10[1] = v19;
  v10[2] = v20;
  MEMORY[0xFFFFF78000000240] = ExpCurrentTimeZoneId;
  RtlTimeToTimeFields(&Time, &TimeFields);
  if ( v5.QuadPart )
  {
    ExLocalTimeToSystemTime(&LocalTime, &ExpNextSystemCutoverInUTC);
    KiSetTimerEx((__int64)&ExpTimeZoneTimer, ExpNextSystemCutoverInUTC.QuadPart, 0, 0, (__int64)&ExpTimeZoneDpc);
  }
  Year = TimeFields.Year;
  ExpNextCenturyTimeFieldsInLocalTime.Year = 100 * (TimeFields.Year / 100 + 1);
  RtlTimeFieldsToTime(&ExpNextCenturyTimeFieldsInLocalTime, &v27);
  ExLocalTimeToSystemTime(&v27, &ExpNextCenturyTimeInUTC);
  KiSetTimerEx((__int64)&ExpCenturyTimer, ExpNextCenturyTimeInUTC.QuadPart, 0, 0, (__int64)&ExpCenturyDpc);
  ExpNextYearTimeFieldsInLocalTime.Year = Year + 1;
  RtlTimeFieldsToTime(&ExpNextYearTimeFieldsInLocalTime, &v27);
  ExLocalTimeToSystemTime(&v27, &ExpNextYearTimeInUTC);
  KiSetTimerEx((__int64)&ExpNextYearTimer, ExpNextYearTimeInUTC.QuadPart, 0, 0, (__int64)&ExpNextYearDpc);
  _InterlockedAdd((volatile signed __int32 *)0xFFFFF7800000025CLL, 1u);
  MEMORY[0xFFFFF78000000028] = HIDWORD(ExpTimeZoneBias);
  MEMORY[0xFFFFF78000000020] = ExpTimeZoneBias;
  MEMORY[0xFFFFF780000003C8] = v1;
  if ( LocalTime.QuadPart )
    v22 = ExpNextSystemCutoverInUTC;
  else
    v22.QuadPart = ExpNextYearTimeInUTC.QuadPart - 10000;
  MEMORY[0xFFFFF780000003D0] = v22.QuadPart;
  _InterlockedAdd((volatile signed __int32 *)0xFFFFF7800000025CLL, 1u);
  if ( !ExpRealTimeIsUniversal )
    RtlSetActiveTimeBias();
  v23 = TimeFields.Year;
  if ( TimeFields.Year != ExpLastDynamicTimeZoneYear )
  {
    if ( (unsigned __int8)RtlpUpdateDynamicTimeZones((unsigned __int16)TimeFields.Year) )
      ExpLastDynamicTimeZoneYear = v23;
  }
  return 1;
}
