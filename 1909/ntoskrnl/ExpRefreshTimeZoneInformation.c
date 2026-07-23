/*
 * XREFs of ExpRefreshTimeZoneInformation @ 0x1407643E8
 * Callers:
 *     ExpSetSystemTime @ 0x1405968F8 (ExpSetSystemTime.c)
 *     ExpRefreshSystemTime @ 0x140763F98 (ExpRefreshSystemTime.c)
 *     ExpReadLeapSecondData @ 0x140764054 (ExpReadLeapSecondData.c)
 *     NtSetSystemTime @ 0x14090A2D0 (NtSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x1400820A0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140098B70 (KeInitializeDpc.c)
 *     KiSetTimerEx @ 0x1400E2AF0 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1400E2D90 (KeCancelTimer.c)
 *     RtlTimeFieldsToTime @ 0x140121DD0 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x1401453D0 (RtlTimeToTimeFields.c)
 *     ExLocalTimeToSystemTime @ 0x14015CA10 (ExLocalTimeToSystemTime.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x1406AEEB0 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlCutoverTimeToSystemTime @ 0x140764994 (RtlCutoverTimeToSystemTime.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140764B10 (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x140764D88 (RtlSetActiveTimeBias.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x140764E54 (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1408D315C (RtlpSetTimeZoneInformationWorker.c)
 *     EtwTraceTimeZoneBiasChange @ 0x1408F41E4 (EtwTraceTimeZoneBiasChange.c)
 */

char ExpRefreshTimeZoneInformation()
{
  BOOLEAN v0; // r9
  char result; // al
  __int64 v2; // rdi
  LARGE_INTEGER v3; // rbx
  unsigned int v4; // esi
  BOOLEAN v5; // r9
  LARGE_INTEGER v6; // rbx
  int v7; // edx
  int v8; // eax
  __int64 v9; // rdx
  _OWORD *v10; // rcx
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int16 Year; // bx
  LARGE_INTEGER v23; // rax
  __int16 v24; // bx
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
    goto LABEL_4;
  v2 = MEMORY[0xFFFFF78000000014];
  v3.QuadPart = MEMORY[0xFFFFF78000000014] - ExpTimeZoneBias;
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
  v4 = Buf2[0];
  if ( !HIWORD(Buf2[8]) || !WORD1(Buf2[19]) )
  {
    KeCancelTimer(&ExpTimeZoneTimer);
    v6.QuadPart = 0LL;
    ExpCurrentTimeZoneId = 0;
    LocalTime.QuadPart = 0LL;
    goto LABEL_28;
  }
  if ( !RtlCutoverTimeToSystemTime((PTIME_FIELDS)((char *)&Buf2[8] + 4), &SystemTime, &Time, v0)
    || !RtlCutoverTimeToSystemTime((PTIME_FIELDS)&Buf2[19], &v31, &Time, v5) )
  {
LABEL_4:
    ++ExpRefreshFailures;
    result = 0;
    ExpSystemIsInCmosMode = 1;
    return result;
  }
  if ( v3.QuadPart >= v31.QuadPart && v3.QuadPart >= SystemTime.QuadPart )
  {
    v6.QuadPart = 0LL;
    LocalTime.QuadPart = 0LL;
    v7 = (SystemTime.QuadPart <= v31.QuadPart) + 1;
    goto LABEL_24;
  }
  if ( v31.QuadPart >= SystemTime.QuadPart )
  {
    if ( v3.QuadPart >= SystemTime.QuadPart && v3.QuadPart < v31.QuadPart )
    {
      v6 = v31;
      LocalTime = v31;
      ExpCurrentTimeZoneId = 1;
LABEL_25:
      v8 = HIDWORD(Buf2[10]);
      goto LABEL_26;
    }
  }
  else if ( v3.QuadPart < v31.QuadPart || v3.QuadPart >= SystemTime.QuadPart )
  {
    v6 = v31;
    LocalTime = v31;
    v7 = 1;
    goto LABEL_24;
  }
  v7 = 2;
  LocalTime = SystemTime;
  v6 = SystemTime;
LABEL_24:
  v8 = Buf2[21];
  ExpCurrentTimeZoneId = v7;
  if ( v7 != 2 )
    goto LABEL_25;
LABEL_26:
  v4 += v8;
LABEL_28:
  if ( ExpLastTimeZoneBias != v4 )
  {
    Buffer = 0xFFFFFFFF00000000uLL;
    ZwUpdateWnfStateData(&WNF_SEB_TIME_ZONE_CHANGE, &Buffer, 8u, 0LL, 0LL, 0, 0);
    EtwTraceTimeZoneBiasChange(v4);
  }
  v9 = 3LL;
  ExpLastTimeZoneBias = v4;
  v10 = Buf2;
  ExpTimeZoneBias = 10000000LL * (int)(60 * v4);
  v11 = &ExpTimeZoneInformation;
  do
  {
    v12 = v10[1];
    *v11 = *v10;
    v13 = v10[2];
    v11[1] = v12;
    v14 = v10[3];
    v11[2] = v13;
    v15 = v10[4];
    v11[3] = v14;
    v16 = v10[5];
    v11[4] = v15;
    v17 = v10[6];
    v11[5] = v16;
    v18 = v10[7];
    v10 += 8;
    v11[6] = v17;
    v11 += 8;
    *(v11 - 1) = v18;
    --v9;
  }
  while ( v9 );
  v19 = *v10;
  ExpSystemIsInCmosMode = 0;
  v20 = v10[1];
  *v11 = v19;
  v21 = v10[2];
  v11[1] = v20;
  v11[2] = v21;
  MEMORY[0xFFFFF78000000240] = ExpCurrentTimeZoneId;
  RtlTimeToTimeFields(&Time, &TimeFields);
  if ( v6.QuadPart )
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
  MEMORY[0xFFFFF780000003C8] = v2;
  if ( LocalTime.QuadPart )
    v23 = ExpNextSystemCutoverInUTC;
  else
    v23.QuadPart = ExpNextYearTimeInUTC.QuadPart - 10000;
  MEMORY[0xFFFFF780000003D0] = v23.QuadPart;
  _InterlockedAdd((volatile signed __int32 *)0xFFFFF7800000025CLL, 1u);
  if ( !ExpRealTimeIsUniversal )
    RtlSetActiveTimeBias();
  v24 = TimeFields.Year;
  if ( TimeFields.Year != ExpLastDynamicTimeZoneYear )
  {
    if ( (unsigned __int8)RtlpUpdateDynamicTimeZones((unsigned __int16)TimeFields.Year) )
      ExpLastDynamicTimeZoneYear = v24;
  }
  return 1;
}
