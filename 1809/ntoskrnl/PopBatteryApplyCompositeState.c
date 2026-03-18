/*
 * XREFs of PopBatteryApplyCompositeState @ 0x14071A168
 * Callers:
 *     PopBatteryWorker @ 0x140719DA0 (PopBatteryWorker.c)
 * Callees:
 *     _TlgCreateSz @ 0x140003938 (_TlgCreateSz.c)
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopSetNotificationWork @ 0x1400041F0 (PopSetNotificationWork.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PopCheckForWork @ 0x140010620 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1400106A8 (PopGetPolicyWorker.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     DbgPrintEx @ 0x140160440 (DbgPrintEx.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x1401749D4 (PopBatteryTraceSystemBatteryStatus.c)
 *     PopUpdateAcDcState @ 0x140174A58 (PopUpdateAcDcState.c)
 *     PopInitilizeAcDcSettings @ 0x14017DD9C (PopInitilizeAcDcSettings.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1401BBA50 (ZwUpdateWnfStateData.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     PopTracePowerReconfig @ 0x1402E2464 (PopTracePowerReconfig.c)
 *     PopSqmAddToStream @ 0x1402E884C (PopSqmAddToStream.c)
 *     PopSqmCreateDwordStreamEntry @ 0x1402E8A04 (PopSqmCreateDwordStreamEntry.c)
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 *     PopSetPowerSettingValueAcDc @ 0x14058AA3C (PopSetPowerSettingValueAcDc.c)
 *     PopExecutePowerAction @ 0x1406DE110 (PopExecutePowerAction.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x14071A404 (PopDiagTraceBatteryTriggerFlags.c)
 *     PopBatteryCheckTrigger @ 0x14071A4B0 (PopBatteryCheckTrigger.c)
 *     PopEsQueueStateEvaluation @ 0x14071A4E0 (PopEsQueueStateEvaluation.c)
 *     PopAccountCbEnergyChange @ 0x14071A548 (PopAccountCbEnergyChange.c)
 *     PopBatteryCheckCompositeCapacity @ 0x14071A60C (PopBatteryCheckCompositeCapacity.c)
 *     PopWriteBsdPowerTransition @ 0x14071C488 (PopWriteBsdPowerTransition.c)
 *     PopInitSIdle @ 0x14071C5DC (PopInitSIdle.c)
 *     PopBatteryUpdateAlarms @ 0x1407473FC (PopBatteryUpdateAlarms.c)
 *     PopBatteryCheckTriggerAllBatteries @ 0x14086CD74 (PopBatteryCheckTriggerAllBatteries.c)
 *     PopBatteryTracePercentageRemaining @ 0x14086D5CC (PopBatteryTracePercentageRemaining.c)
 *     PopRecalculateCBTriggerLevels @ 0x14086DBF0 (PopRecalculateCBTriggerLevels.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x140870764 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopDiagTraceBatteryCountChange @ 0x140870AAC (PopDiagTraceBatteryCountChange.c)
 *     PopDiagTraceBatteryTriggerMet @ 0x140870B68 (PopDiagTraceBatteryTriggerMet.c)
 *     PpmProfileAcDcUpdate @ 0x14087A9BC (PpmProfileAcDcUpdate.c)
 */

__int64 __fastcall PopBatteryApplyCompositeState(_DWORD *a1, int a2)
{
  unsigned int v4; // r15d
  __int64 v5; // rcx
  __m128i v6; // xmm1
  int v7; // edx
  __int64 v8; // r9
  int v9; // ebx
  unsigned int v10; // edi
  unsigned int v11; // eax
  __int64 v12; // r14
  __int64 v13; // rsi
  char *v14; // r12
  unsigned int v15; // r15d
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdx
  int v24; // ecx
  int v25; // eax
  char *v26; // rdx
  int updated; // eax
  unsigned int LevelPlus1; // ecx
  const CHAR *v29; // rdx
  unsigned __int8 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned __int64 v37; // rbx
  __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  UINT32 cData[2]; // [rsp+20h] [rbp-E0h]
  int pData; // [rsp+28h] [rbp-D8h]
  int v44; // [rsp+30h] [rbp-D0h]
  char v45; // [rsp+40h] [rbp-C0h]
  unsigned int v46; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v47; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v48; // [rsp+4Ch] [rbp-B4h] BYREF
  int v49; // [rsp+50h] [rbp-B0h] BYREF
  int v50; // [rsp+54h] [rbp-ACh] BYREF
  int v51; // [rsp+58h] [rbp-A8h] BYREF
  int v52; // [rsp+5Ch] [rbp-A4h] BYREF
  EVENT_DATA_DESCRIPTOR v53; // [rsp+60h] [rbp-A0h] BYREF
  int *v54; // [rsp+80h] [rbp-80h]
  __int64 v55; // [rsp+88h] [rbp-78h]
  int *v56; // [rsp+90h] [rbp-70h]
  __int64 v57; // [rsp+98h] [rbp-68h]
  EVENT_DATA_DESCRIPTOR v58; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp-40h] BYREF
  int *v60; // [rsp+D0h] [rbp-30h]
  __int64 v61; // [rsp+D8h] [rbp-28h]
  _DWORD v62[4]; // [rsp+E0h] [rbp-20h] BYREF
  int v63[4]; // [rsp+F0h] [rbp-10h] BYREF
  int v64[4]; // [rsp+100h] [rbp+0h] BYREF
  int v65[4]; // [rsp+110h] [rbp+10h] BYREF

  v45 = 0;
  v4 = (*a1 & 1) == 0;
  v47 = v4;
  PopAcquirePolicyLock();
  if ( PopUpdateAcDcState(v4) )
  {
    LOBYTE(v5) = 1;
    PopBatteryUpdateAlarms(v5, 0LL);
    PopSetNotificationWork(4u);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    HIBYTE(PopBsdPowerTransition) = HIBYTE(PopBsdPowerTransition) & 0x7F | ((_BYTE)v4 << 7);
    ((void (*)(void))PopWriteBsdPowerTransition)();
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
    PopInitSIdle(2LL);
    PopInitilizeAcDcSettings();
    PpmProfileAcDcUpdate();
    if ( v4 == 1 )
      PopMaxChargeRate = 0LL;
    v45 = 1;
  }
  if ( byte_140417838 )
  {
    PopSetPowerSettingValueAcDc(&GUID_BATTERY_COUNT, 4LL, &dword_140417834);
    v21 = qword_140417840;
    v22 = 0LL;
    v23 = 0LL;
    while ( (__int64 *)v21 != &qword_140417840 )
    {
      v24 = *(_DWORD *)(v21 + 104);
      if ( v24 == 2 )
      {
        v23 = (unsigned int)(v23 + 1);
      }
      else if ( v24 == 4 )
      {
        v22 = (unsigned int)(v22 + 1);
      }
      v21 = *(_QWORD *)v21;
    }
    if ( PopCachedValidBatteryCount == -1 || PopCachedValidBatteryCount != dword_140417834 )
    {
      PopCachedValidBatteryCount = dword_140417834;
      PopDiagTraceBatteryCountChange((unsigned int)dword_140417834, v23, v22, &qword_140417840);
    }
    v45 = 1;
  }
  PopReleasePolicyLock();
  PopBatteryCheckCompositeCapacity(a1, v4, &v48);
  if ( ((unk_140417860 ^ *(_BYTE *)a1) & 0xF) != 0 || byte_140417838 )
  {
    PopSetNotificationWork(8u);
    byte_140417838 = 0;
  }
  v6 = *(__m128i *)a1;
  v7 = 0;
  HIDWORD(qword_14041786C) = a2;
  v8 = (unsigned int)_mm_cvtsi128_si32(v6);
  if ( a2 != -1 )
    v7 = a2;
  unk_140417860 = v6;
  DbgPrintEx(
    0x92u,
    3u,
    "\n"
    "Composite Status\n"
    "|-- PowerState = 0x%08x\n"
    "|-- Capacity   = %u\n"
    "|-- Voltage    = %u\n"
    "|-- Rate       = %d\n"
    "|-- Est Time   = %u\n",
    v8,
    v6.m128i_i32[1],
    _mm_cvtsi128_si32(_mm_srli_si128(v6, 8)),
    _mm_srli_si128(v6, 8).m128i_i32[1],
    v7);
  if ( HIDWORD(qword_140417880) )
    PopRecalculateCBTriggerLevels();
  PopBatteryTraceSystemBatteryStatus(0);
  if ( qword_140417880
    && (unsigned __int8)PopBatteryCheckTriggerAllBatteries(&unk_140417948, 1LL)
    && (dword_14041794C[0] & 2) == 0 )
  {
    PopGetPolicyWorker(64);
    PopCheckForWork();
  }
  PopAcquirePolicyLock();
  v9 = dword_140417834 != 0 ? 3 : 0;
  v10 = 0;
  v46 = 0;
  v11 = 0;
  do
  {
    v12 = v11;
    v13 = 3LL * v11;
    v14 = (char *)&unk_140417948 + 24 * v11;
    if ( (unsigned __int8)PopBatteryCheckTrigger(v14) )
    {
      v25 = dword_14041794C[2 * v13];
      if ( PopBatteryCachedFlags[v12] != v25 )
      {
        v26 = (char *)PopPolicy + 96;
        PopBatteryCachedFlags[v12] = v25;
        PopDiagTraceBatteryAlarmStatus(v14, &v26[8 * v13], &v46);
        v10 = v46;
        if ( dword_14041794C[6 * v46] == 128 )
        {
          PopDiagTraceBatteryTriggerMet(0x140000000LL + 24LL * v46 + 4290888, (char *)PopPolicy + 24 * v46 + 96, &v46);
          v10 = v46;
        }
      }
      if ( !byte_140417940 )
        PopExecutePowerAction(
          0x140000000LL + 24LL * v10 + 4290888,
          8u,
          (__int64 *)PopPolicy + 3 * v10 + 13,
          *((_DWORD *)PopPolicy + 6 * v10 + 29),
          1u);
      if ( v9 == 3 )
      {
        if ( v10 )
        {
          if ( v10 == 1 )
            v9 = 2;
        }
        else
        {
          v9 = 1;
        }
      }
    }
    else
    {
      PopBatteryCachedFlags[v12] = -1;
      dword_14041794C[2 * v13] &= 0xFFFFFFFC;
      PopDiagTraceBatteryTriggerFlags(&v46, v14);
      v10 = v46;
    }
    v46 = ++v10;
    v11 = v10;
  }
  while ( v10 < 4 );
  v15 = v47;
  if ( dword_14041789C != v9 )
  {
    v49 = v9;
    v44 = 0;
    pData = 0;
    *(_QWORD *)cData = 0LL;
    updated = ZwUpdateWnfStateData((__int64)&WNF_PO_BATTERY_CHARGE_LEVEL, (__int64)&v49, 4LL);
    LevelPlus1 = pCallbackContext.LevelPlus1;
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          v29 = "PoBatteryLevelCritical";
        }
        else if ( v9 == 2 )
        {
          v29 = "PoBatteryLevelLow";
        }
        else
        {
          v29 = "PoBatteryLevelNormal";
        }
      }
      else
      {
        v29 = "PoBatteryLevelUnknown";
      }
      v50 = updated;
      TlgCreateSz(&pDesc, v29);
      v61 = 4LL;
      v60 = &v50;
      TlgWrite(&pCallbackContext, &unk_14036F2DB, 0LL, 0LL, 4u, &v58);
      LevelPlus1 = pCallbackContext.LevelPlus1;
    }
    if ( (unsigned int)(v9 - 1) <= 1 != (unsigned int)(dword_14041789C - 1) <= 1
      && LevelPlus1 > 5
      && TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
    {
      v51 = v30;
      v54 = &v51;
      v56 = &v52;
      v52 = v9;
      v55 = 4LL;
      v57 = 4LL;
      TlgWrite(&pCallbackContext, &unk_14036F298, 0LL, 0LL, 4u, &v53);
    }
    dword_14041789C = v9;
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE10(PopBsdPowerTransition) = BYTE10(PopBsdPowerTransition) & 0x3F | ((_BYTE)v9 << 6);
    PopWriteBsdPowerTransition(v32, v31, v33);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
  if ( v45 )
    PopTracePowerReconfig();
  PopReleasePolicyLock();
  PopAcquireRwLockExclusive((ULONG_PTR)&qword_1404179E0);
  memset(&xmmword_1404179F0, 0, 0x20uLL);
  LOBYTE(v18) = unk_140417860;
  BYTE7(xmmword_1404179F0) = dword_140417898;
  LOBYTE(xmmword_1404179F0) = unk_140417860 & 1;
  if ( dword_140417834 )
  {
    BYTE1(xmmword_1404179F0) = 1;
    BYTE2(xmmword_1404179F0) = (unk_140417860 & 4) != 0;
    LOBYTE(v18) = byte_1404179A8 != 0 || (unk_140417860 & 2) != 0;
    DWORD2(xmmword_1404179F0) = HIDWORD(qword_140417880);
    HIDWORD(xmmword_1404179F0) = unk_140417864;
    *(_QWORD *)&xmmword_140417A00 = qword_14041786C;
    *((_QWORD *)&xmmword_140417A00 + 1) = unk_140417888;
    BYTE3(xmmword_1404179F0) = v18;
  }
  PopAccountCbEnergyChange(v18, v16, v17);
  PopReleaseRwLock((ULONG_PTR)&qword_1404179E0);
  if ( v48 )
  {
    v47 = (dword_1404179B0 + 500) / 0x3E8u;
    PopSetPowerSettingValueAcDc(&GUID_BATTERY_PERCENTAGE_REMAINING, 4LL, &v47);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    LOBYTE(v34) = (HIBYTE(PopBsdPowerTransition) ^ v47) & 0x7F;
    HIBYTE(PopBsdPowerTransition) ^= v34;
    PopWriteBsdPowerTransition(v35, v34, v36);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
    LODWORD(v37) = 0;
    v38 = MEMORY[0xFFFFF78000000008];
    if ( dword_1404179B0 == -1 )
      v37 = (MEMORY[0xFFFFF78000000008] - qword_1404179B8 + 5000) / 0x2710uLL;
    if ( PopPlatformAoAc )
    {
      PopSqmCreateDwordStreamEntry(v62, v47);
      PopSqmCreateDwordStreamEntry(v63, v48);
      PopSqmCreateDwordStreamEntry(v64, v15 ^ 1);
      PopSqmCreateDwordStreamEntry(v65, v37);
      PopSqmAddToStream(v40, v39, v41, (__int64)v62);
    }
    PopBatteryTracePercentageRemaining(v47, v48, v15, (unsigned int)v37, *(_QWORD *)cData, pData, v44);
    qword_1404179B8 = v38;
  }
  LOBYTE(v19) = v45;
  return PopEsQueueStateEvaluation(v19);
}
