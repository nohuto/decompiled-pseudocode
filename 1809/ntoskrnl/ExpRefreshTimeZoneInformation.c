/*
 * XREFs of ExpRefreshTimeZoneInformation @ 0x140734674
 * Callers:
 *     ExpSetSystemTime @ 0x140566AC8 (ExpSetSystemTime.c)
 *     ExpTimeZoneInitSiloState @ 0x1405839E4 (ExpTimeZoneInitSiloState.c)
 *     ExpRefreshSystemTime @ 0x1407341A0 (ExpRefreshSystemTime.c)
 *     ExpReadLeapSecondData @ 0x1407342DC (ExpReadLeapSecondData.c)
 *     NtSetSystemTime @ 0x1408CD2B0 (NtSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x14000FBB0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14000FBD0 (PsAttachSiloToCurrentThread.c)
 *     KeCancelTimer @ 0x14001CEB0 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     PsGetCurrentServerSilo @ 0x14004D270 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x14009238C (PsGetServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9C20 (PsIsCurrentThreadInServerSilo.c)
 *     RtlTimeFieldsToTime @ 0x140127060 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x14015DA20 (RtlTimeToTimeFields.c)
 *     ExLocalTimeToSystemTime @ 0x140160BF0 (ExLocalTimeToSystemTime.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     RtlSetSystemGlobalData @ 0x1401B5DDC (RtlSetSystemGlobalData.c)
 *     ZwUpdateWnfStateData @ 0x1401BBA70 (ZwUpdateWnfStateData.c)
 *     ExpInitializeTimeChangeWorker @ 0x140583834 (ExpInitializeTimeChangeWorker.c)
 *     ExpReadSiloTimeZoneMarker @ 0x14058387C (ExpReadSiloTimeZoneMarker.c)
 *     ExpWriteTimeZoneBias @ 0x140583B28 (ExpWriteTimeZoneBias.c)
 *     ExpWriteTimeZoneBiasStartEnd @ 0x140583B78 (ExpWriteTimeZoneBiasStartEnd.c)
 *     RtlQueryDynamicTimeZoneInformation @ 0x140699AE0 (RtlQueryDynamicTimeZoneInformation.c)
 *     RtlCutoverTimeToSystemTime @ 0x140734C60 (RtlCutoverTimeToSystemTime.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140734DC4 (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x140734FF4 (RtlSetActiveTimeBias.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x1407350A4 (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x14089590C (RtlpSetTimeZoneInformationWorker.c)
 */

char __fastcall ExpRefreshTimeZoneInformation(char a1)
{
  struct _LIST_ENTRY *v2; // rdi
  void *CurrentServerSilo; // rbx
  __int64 v4; // r9
  __int64 v5; // r14
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 v8; // r12
  int DynamicTimeZoneInformation; // ebx
  BOOLEAN v10; // r9
  bool SiloTimeZoneMarker; // al
  _OWORD *v12; // rcx
  _OWORD *v13; // rax
  __int64 v14; // rdx
  __int128 v15; // xmm1
  __int64 v16; // rdi
  LARGE_INTEGER v17; // rbx
  int v18; // r15d
  BOOLEAN v19; // r9
  LARGE_INTEGER v20; // rcx
  LARGE_INTEGER v21; // rbx
  int v22; // edx
  _DWORD *v23; // rsi
  int v24; // eax
  _OWORD *v25; // rcx
  _OWORD *v26; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int16 Year; // si
  __int64 v30; // rdx
  __int16 v31; // bx
  char result; // al
  LARGE_INTEGER LocalTime; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER Time; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v35[2]; // [rsp+58h] [rbp-B0h] BYREF
  LARGE_INTEGER v36; // [rsp+60h] [rbp-A8h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+68h] [rbp-A0h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER v39; // [rsp+80h] [rbp-88h] BYREF
  _DWORD Buf2[17]; // [rsp+88h] [rbp-80h] BYREF
  struct _TIME_FIELDS CutoverTimeFields; // [rsp+CCh] [rbp-3Ch] BYREF
  int v42; // [rsp+DCh] [rbp-2Ch]
  struct _TIME_FIELDS v43; // [rsp+120h] [rbp+18h] BYREF
  int v44; // [rsp+130h] [rbp+28h]
  __int16 v45; // [rsp+134h] [rbp+2Ch]
  char v46; // [rsp+234h] [rbp+12Ch]

  v2 = 0LL;
  CurrentServerSilo = (void *)PsGetCurrentServerSilo();
  v5 = *((_QWORD *)PsGetServerSiloGlobals((__int64)CurrentServerSilo) + 132);
  if ( !*(_QWORD *)(v5 + 592) )
  {
    ExpInitializeTimeChangeWorker(
      v5 + 448,
      (KDEFERRED_ROUTINE *)ExpTimeZoneDpcRoutine,
      CurrentServerSilo,
      v4,
      (__int64)CurrentServerSilo);
    ExpInitializeTimeChangeWorker(
      v5 + 768,
      (KDEFERRED_ROUTINE *)ExpNextYearDpcRoutine,
      CurrentServerSilo,
      v6,
      (__int64)CurrentServerSilo);
    ExpInitializeTimeChangeWorker(
      v5 + 608,
      (KDEFERRED_ROUTINE *)ExpCenturyDpcRoutine,
      CurrentServerSilo,
      v7,
      (__int64)CurrentServerSilo);
    *(_QWORD *)(v5 + 944) = 0LL;
    *(_QWORD *)(v5 + 952) = 0LL;
    *(_QWORD *)(v5 + 968) = 0LL;
    *(_QWORD *)(v5 + 976) = 0LL;
    *(_DWORD *)(v5 + 946) = 65537;
    *(_WORD *)(v5 + 956) = 1;
    *(_DWORD *)(v5 + 970) = 65537;
    *(_WORD *)(v5 + 980) = 1;
  }
  v8 = 3LL;
  if ( a1 )
  {
    if ( !ExpReadSiloTimeZoneMarker() )
      v2 = PsAttachSiloToCurrentThread(0LL);
    DynamicTimeZoneInformation = RtlQueryDynamicTimeZoneInformation(Buf2);
    if ( v2 )
      PsDetachSiloFromCurrentThread(v2);
  }
  else if ( !PsIsCurrentThreadInServerSilo()
         || (SiloTimeZoneMarker = ExpReadSiloTimeZoneMarker(), v12 = Buf2, SiloTimeZoneMarker) )
  {
    DynamicTimeZoneInformation = RtlQueryDynamicTimeZoneInformation(Buf2);
  }
  else
  {
    v13 = (_OWORD *)v5;
    v14 = 3LL;
    do
    {
      *v12 = *v13;
      v12[1] = v13[1];
      v12[2] = v13[2];
      v12[3] = v13[3];
      v12[4] = v13[4];
      v12[5] = v13[5];
      v12[6] = v13[6];
      v12 += 8;
      v15 = v13[7];
      v13 += 8;
      *(v12 - 1) = v15;
      --v14;
    }
    while ( v14 );
    DynamicTimeZoneInformation = 0;
    *v12 = *v13;
    v12[1] = v13[1];
    v12[2] = v13[2];
  }
  if ( DynamicTimeZoneInformation < 0 )
    goto LABEL_55;
  v16 = MEMORY[0xFFFFF78000000014];
  v17.QuadPart = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v5 + 440);
  Time = v17;
  if ( !v46 )
  {
    if ( v45 )
    {
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( (unsigned __int8)RtlpCheckDynamicTimeZoneInformation(Buf2) )
        RtlpSetTimeZoneInformationWorker(Buf2);
    }
  }
  v18 = Buf2[0];
  if ( !CutoverTimeFields.Month || !v43.Month )
  {
    KeCancelTimer((PKTIMER)(v5 + 512));
    v23 = (_DWORD *)(v5 + 432);
    v21.QuadPart = 0LL;
    *(_DWORD *)(v5 + 432) = 0;
    LocalTime.QuadPart = 0LL;
    goto LABEL_40;
  }
  if ( !RtlCutoverTimeToSystemTime(&CutoverTimeFields, &SystemTime, &Time, v10)
    || !RtlCutoverTimeToSystemTime(&v43, &v39, &Time, v19) )
  {
LABEL_55:
    result = 0;
    ExpSystemIsInCmosMode = 1;
    return result;
  }
  v20 = SystemTime;
  if ( v17.QuadPart >= v39.QuadPart && v17.QuadPart >= SystemTime.QuadPart )
  {
    v21.QuadPart = 0LL;
    LocalTime.QuadPart = 0LL;
    v22 = (SystemTime.QuadPart <= v39.QuadPart) + 1;
LABEL_31:
    v23 = (_DWORD *)(v5 + 432);
    *(_DWORD *)(v5 + 432) = v22;
    goto LABEL_36;
  }
  if ( v39.QuadPart < SystemTime.QuadPart )
  {
    if ( v17.QuadPart < v39.QuadPart || v17.QuadPart >= SystemTime.QuadPart )
    {
      v21 = v39;
      LocalTime = v39;
      v22 = 1;
    }
    else
    {
      v21 = SystemTime;
      LocalTime = SystemTime;
      v22 = 2;
    }
    goto LABEL_31;
  }
  if ( v17.QuadPart >= SystemTime.QuadPart && v17.QuadPart < v39.QuadPart )
  {
    v21 = v39;
    LocalTime = v39;
    v23 = (_DWORD *)(v5 + 432);
    *(_DWORD *)(v5 + 432) = 1;
LABEL_37:
    v24 = v42;
    goto LABEL_38;
  }
  v23 = (_DWORD *)(v5 + 432);
  LocalTime = SystemTime;
  *(_DWORD *)(v5 + 432) = 2;
  v21 = v20;
  v22 = 2;
LABEL_36:
  v24 = v44;
  if ( v22 != 2 )
    goto LABEL_37;
LABEL_38:
  v18 += v24;
LABEL_40:
  if ( *(_DWORD *)(v5 + 436) != v18 )
  {
    v35[1] = -1;
    v35[0] = 0;
    ZwUpdateWnfStateData((__int64)&WNF_SEB_TIME_ZONE_CHANGE, (__int64)v35, 8LL);
  }
  *(_DWORD *)(v5 + 436) = v18;
  v25 = Buf2;
  *(_QWORD *)(v5 + 440) = 600000000LL * v18;
  v26 = (_OWORD *)v5;
  do
  {
    *v26 = *v25;
    v26[1] = v25[1];
    v26[2] = v25[2];
    v26[3] = v25[3];
    v26[4] = v25[4];
    v26[5] = v25[5];
    v26[6] = v25[6];
    v26 += 8;
    v27 = v25[7];
    v25 += 8;
    *(v26 - 1) = v27;
    --v8;
  }
  while ( v8 );
  v28 = *v25;
  ExpSystemIsInCmosMode = 0;
  *v26 = v28;
  v26[1] = v25[1];
  v26[2] = v25[2];
  RtlSetSystemGlobalData((__int64)v25, v23);
  RtlTimeToTimeFields(&Time, &TimeFields);
  if ( v21.QuadPart )
  {
    ExLocalTimeToSystemTime(&LocalTime, (PLARGE_INTEGER)(v5 + 992));
    KiSetTimerEx(v5 + 512, *(_QWORD *)(v5 + 992), 0, 0, v5 + 448);
  }
  Year = TimeFields.Year;
  *(_WORD *)(v5 + 944) = 100 * (TimeFields.Year / 100 + 1);
  RtlTimeFieldsToTime((PTIME_FIELDS)(v5 + 944), &v36);
  ExLocalTimeToSystemTime(&v36, (PLARGE_INTEGER)(v5 + 936));
  KiSetTimerEx(v5 + 672, *(_QWORD *)(v5 + 936), 0, 0, v5 + 608);
  *(_WORD *)(v5 + 968) = Year + 1;
  RtlTimeFieldsToTime((PTIME_FIELDS)(v5 + 968), &v36);
  ExLocalTimeToSystemTime(&v36, (PLARGE_INTEGER)(v5 + 960));
  KiSetTimerEx(v5 + 832, *(_QWORD *)(v5 + 960), 0, 0, v5 + 768);
  _InterlockedAdd((volatile signed __int32 *)0xFFFFF7800000025CLL, 1u);
  ExpWriteTimeZoneBias((_DWORD *)(v5 + 440));
  if ( LocalTime.QuadPart )
    v30 = *(_QWORD *)(v5 + 992);
  else
    v30 = *(_QWORD *)(v5 + 960) - 10000LL;
  ExpWriteTimeZoneBiasStartEnd(v16, v30);
  _InterlockedAdd((volatile signed __int32 *)0xFFFFF7800000025CLL, 1u);
  if ( !ExpRealTimeIsUniversal )
    RtlSetActiveTimeBias(*(unsigned int *)(v5 + 436));
  v31 = TimeFields.Year;
  if ( TimeFields.Year != *(_WORD *)(v5 + 984) )
  {
    if ( (unsigned __int8)RtlpUpdateDynamicTimeZones((unsigned __int16)TimeFields.Year) )
      *(_WORD *)(v5 + 984) = v31;
  }
  return 1;
}
