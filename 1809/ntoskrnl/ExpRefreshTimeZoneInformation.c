/*
 * XREFs of ExpRefreshTimeZoneInformation @ 0x140735864
 * Callers:
 *     ExpSetSystemTime @ 0x140567AC8 (ExpSetSystemTime.c)
 *     ExpTimeZoneInitSiloState @ 0x1405849E4 (ExpTimeZoneInitSiloState.c)
 *     ExpRefreshSystemTime @ 0x140735390 (ExpRefreshSystemTime.c)
 *     ExpReadLeapSecondData @ 0x1407354CC (ExpReadLeapSecondData.c)
 *     NtSetSystemTime @ 0x1408CE570 (NtSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x14000FBB0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14000FBD0 (PsAttachSiloToCurrentThread.c)
 *     KeCancelTimer @ 0x14001CEB0 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     PsGetCurrentServerSilo @ 0x14004D270 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x1400922CC (PsGetServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9B60 (PsIsCurrentThreadInServerSilo.c)
 *     RtlTimeFieldsToTime @ 0x140127130 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x14015DB20 (RtlTimeToTimeFields.c)
 *     ExLocalTimeToSystemTime @ 0x140160CF0 (ExLocalTimeToSystemTime.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlSetSystemGlobalData @ 0x1401B5F44 (RtlSetSystemGlobalData.c)
 *     ZwUpdateWnfStateData @ 0x1401BBBD0 (ZwUpdateWnfStateData.c)
 *     ExpInitializeTimeChangeWorker @ 0x140584834 (ExpInitializeTimeChangeWorker.c)
 *     ExpReadSiloTimeZoneMarker @ 0x14058487C (ExpReadSiloTimeZoneMarker.c)
 *     ExpWriteTimeZoneBias @ 0x140584B28 (ExpWriteTimeZoneBias.c)
 *     ExpWriteTimeZoneBiasStartEnd @ 0x140584B78 (ExpWriteTimeZoneBiasStartEnd.c)
 *     RtlQueryDynamicTimeZoneInformation @ 0x14069ACA0 (RtlQueryDynamicTimeZoneInformation.c)
 *     RtlCutoverTimeToSystemTime @ 0x140735E50 (RtlCutoverTimeToSystemTime.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140735FB4 (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x1407361E4 (RtlSetActiveTimeBias.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x140736294 (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x140896B6C (RtlpSetTimeZoneInformationWorker.c)
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
  BOOLEAN v20; // al
  DWORD v21; // r8d
  LARGE_INTEGER v22; // rcx
  LARGE_INTEGER v23; // rbx
  int v24; // edx
  void *v25; // rsi
  int v26; // eax
  _OWORD *v27; // rcx
  _OWORD *v28; // rax
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int16 Year; // si
  __int64 v32; // rdx
  __int16 v33; // bx
  char result; // al
  LARGE_INTEGER LocalTime; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER Time; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD Buffer[2]; // [rsp+58h] [rbp-B0h] BYREF
  LARGE_INTEGER v38; // [rsp+60h] [rbp-A8h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+68h] [rbp-A0h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER v41; // [rsp+80h] [rbp-88h] BYREF
  _DWORD Buf2[17]; // [rsp+88h] [rbp-80h] BYREF
  _TIME_FIELDS CutoverTimeFields; // [rsp+CCh] [rbp-3Ch] BYREF
  int v44; // [rsp+DCh] [rbp-2Ch]
  _TIME_FIELDS v45; // [rsp+120h] [rbp+18h] BYREF
  int v46; // [rsp+130h] [rbp+28h]
  __int16 v47; // [rsp+134h] [rbp+2Ch]
  char v48; // [rsp+234h] [rbp+12Ch]

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
  if ( !v48 )
  {
    if ( v47 )
    {
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( (unsigned __int8)RtlpCheckDynamicTimeZoneInformation(Buf2) )
        RtlpSetTimeZoneInformationWorker(Buf2);
    }
  }
  v18 = Buf2[0];
  if ( !CutoverTimeFields.Month || !v45.Month )
  {
    KeCancelTimer((PKTIMER)(v5 + 512));
    v21 = 0;
    v25 = (void *)(v5 + 432);
    v23.QuadPart = 0LL;
    *(_DWORD *)(v5 + 432) = 0;
    LocalTime.QuadPart = 0LL;
    goto LABEL_40;
  }
  if ( !RtlCutoverTimeToSystemTime(&CutoverTimeFields, &SystemTime, &Time, v10)
    || (v20 = RtlCutoverTimeToSystemTime(&v45, &v41, &Time, v19), v21 = 0, !v20) )
  {
LABEL_55:
    result = 0;
    ExpSystemIsInCmosMode = 1;
    return result;
  }
  v22 = SystemTime;
  if ( v17.QuadPart >= v41.QuadPart && v17.QuadPart >= SystemTime.QuadPart )
  {
    v23.QuadPart = 0LL;
    LocalTime.QuadPart = 0LL;
    v24 = (SystemTime.QuadPart <= v41.QuadPart) + 1;
LABEL_31:
    v25 = (void *)(v5 + 432);
    *(_DWORD *)(v5 + 432) = v24;
    goto LABEL_36;
  }
  if ( v41.QuadPart < SystemTime.QuadPart )
  {
    if ( v17.QuadPart < v41.QuadPart || v17.QuadPart >= SystemTime.QuadPart )
    {
      v23 = v41;
      LocalTime = v41;
      v24 = 1;
    }
    else
    {
      v23 = SystemTime;
      LocalTime = SystemTime;
      v24 = 2;
    }
    goto LABEL_31;
  }
  if ( v17.QuadPart >= SystemTime.QuadPart && v17.QuadPart < v41.QuadPart )
  {
    v23 = v41;
    LocalTime = v41;
    v25 = (void *)(v5 + 432);
    *(_DWORD *)(v5 + 432) = 1;
LABEL_37:
    v26 = v44;
    goto LABEL_38;
  }
  v25 = (void *)(v5 + 432);
  LocalTime = SystemTime;
  *(_DWORD *)(v5 + 432) = 2;
  v23 = v22;
  v24 = 2;
LABEL_36:
  v26 = v46;
  if ( v24 != 2 )
    goto LABEL_37;
LABEL_38:
  v18 += v26;
LABEL_40:
  if ( *(_DWORD *)(v5 + 436) != v18 )
  {
    Buffer[1] = -1;
    Buffer[0] = 0;
    ZwUpdateWnfStateData(&WNF_SEB_TIME_ZONE_CHANGE, Buffer, 8u, 0LL, 0LL, 0, 0);
  }
  *(_DWORD *)(v5 + 436) = v18;
  v27 = Buf2;
  *(_QWORD *)(v5 + 440) = 600000000LL * v18;
  v28 = (_OWORD *)v5;
  do
  {
    *v28 = *v27;
    v28[1] = v27[1];
    v28[2] = v27[2];
    v28[3] = v27[3];
    v28[4] = v27[4];
    v28[5] = v27[5];
    v28[6] = v27[6];
    v28 += 8;
    v29 = v27[7];
    v27 += 8;
    *(v28 - 1) = v29;
    --v8;
  }
  while ( v8 );
  v30 = *v27;
  ExpSystemIsInCmosMode = 0;
  *v28 = v30;
  v28[1] = v27[1];
  v28[2] = v27[2];
  RtlSetSystemGlobalData((RTL_SYSTEM_GLOBAL_DATA_ID)v27, v25, v21);
  RtlTimeToTimeFields(&Time, &TimeFields);
  if ( v23.QuadPart )
  {
    ExLocalTimeToSystemTime(&LocalTime, (PLARGE_INTEGER)(v5 + 992));
    KiSetTimerEx(v5 + 512, *(_QWORD *)(v5 + 992), 0, 0, v5 + 448);
  }
  Year = TimeFields.Year;
  *(_WORD *)(v5 + 944) = 100 * (TimeFields.Year / 100 + 1);
  RtlTimeFieldsToTime((PTIME_FIELDS)(v5 + 944), &v38);
  ExLocalTimeToSystemTime(&v38, (PLARGE_INTEGER)(v5 + 936));
  KiSetTimerEx(v5 + 672, *(_QWORD *)(v5 + 936), 0, 0, v5 + 608);
  *(_WORD *)(v5 + 968) = Year + 1;
  RtlTimeFieldsToTime((PTIME_FIELDS)(v5 + 968), &v38);
  ExLocalTimeToSystemTime(&v38, (PLARGE_INTEGER)(v5 + 960));
  KiSetTimerEx(v5 + 832, *(_QWORD *)(v5 + 960), 0, 0, v5 + 768);
  _InterlockedAdd((volatile signed __int32 *)0xFFFFF7800000025CLL, 1u);
  ExpWriteTimeZoneBias((_DWORD *)(v5 + 440));
  if ( LocalTime.QuadPart )
    v32 = *(_QWORD *)(v5 + 992);
  else
    v32 = *(_QWORD *)(v5 + 960) - 10000LL;
  ExpWriteTimeZoneBiasStartEnd(v16, v32);
  _InterlockedAdd((volatile signed __int32 *)0xFFFFF7800000025CLL, 1u);
  if ( !ExpRealTimeIsUniversal )
    RtlSetActiveTimeBias(*(unsigned int *)(v5 + 436));
  v33 = TimeFields.Year;
  if ( TimeFields.Year != *(_WORD *)(v5 + 984) )
  {
    if ( (unsigned __int8)RtlpUpdateDynamicTimeZones((unsigned __int16)TimeFields.Year) )
      *(_WORD *)(v5 + 984) = v33;
  }
  return 1;
}
