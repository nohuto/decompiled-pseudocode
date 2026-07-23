/*
 * XREFs of PopBatteryApplyCompositeState @ 0x14073A7DC
 * Callers:
 *     PopBatteryWorker @ 0x14073A3F0 (PopBatteryWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     PopCheckForWork @ 0x1400D5AC0 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1400D5B48 (PopGetPolicyWorker.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     _TlgCreateSz @ 0x1400D6128 (_TlgCreateSz.c)
 *     PopSetNotificationWork @ 0x1400F0C44 (PopSetNotificationWork.c)
 *     DbgPrintEx @ 0x140126B10 (DbgPrintEx.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x140176B38 (PopBatteryTraceSystemBatteryStatus.c)
 *     PopUpdateAcDcState @ 0x140176BBC (PopUpdateAcDcState.c)
 *     PopInitilizeAcDcSettings @ 0x14018C46C (PopInitilizeAcDcSettings.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     PopBsdHandleRequest @ 0x1401BF5D4 (PopBsdHandleRequest.c)
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopTracePowerReconfig @ 0x1402FEF04 (PopTracePowerReconfig.c)
 *     PopSqmAddToStream @ 0x14030573C (PopSqmAddToStream.c)
 *     PopSqmCreateDwordStreamEntry @ 0x1403058E4 (PopSqmCreateDwordStreamEntry.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopSetPowerSettingValueAcDc @ 0x14069D520 (PopSetPowerSettingValueAcDc.c)
 *     PopExecutePowerAction @ 0x1407274F8 (PopExecutePowerAction.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x14073AA8C (PopDiagTraceBatteryTriggerFlags.c)
 *     PopBatteryCheckTrigger @ 0x14073AB38 (PopBatteryCheckTrigger.c)
 *     PopEsQueueStateEvaluation @ 0x14073AB68 (PopEsQueueStateEvaluation.c)
 *     PopAccountCbEnergyChange @ 0x14073ABD0 (PopAccountCbEnergyChange.c)
 *     PopBatteryCheckCompositeCapacity @ 0x14073AC98 (PopBatteryCheckCompositeCapacity.c)
 *     PopInitSIdle @ 0x140747214 (PopInitSIdle.c)
 *     PopBatteryUpdateAlarms @ 0x14075AF6C (PopBatteryUpdateAlarms.c)
 *     PopRecordAcDcState @ 0x1408A1D20 (PopRecordAcDcState.c)
 *     PopBatteryCheckTriggerAllBatteries @ 0x1408A9114 (PopBatteryCheckTriggerAllBatteries.c)
 *     PopBatteryTracePercentageRemaining @ 0x1408A995C (PopBatteryTracePercentageRemaining.c)
 *     PopRecalculateCBTriggerLevels @ 0x1408A9F88 (PopRecalculateCBTriggerLevels.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x1408ACC98 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopDiagTraceBatteryCountChange @ 0x1408ACFE0 (PopDiagTraceBatteryCountChange.c)
 *     PopDiagTraceBatteryTriggerMet @ 0x1408AD09C (PopDiagTraceBatteryTriggerMet.c)
 *     PpmProfileAcDcUpdate @ 0x1408B684C (PpmProfileAcDcUpdate.c)
 */

__int64 __fastcall PopBatteryApplyCompositeState(_DWORD *a1, int a2)
{
  unsigned int v4; // r14d
  __int64 v5; // rcx
  __m128i v6; // xmm1
  int v7; // edx
  __int64 v8; // r9
  int v9; // ebx
  unsigned int v10; // edi
  unsigned int v11; // eax
  __int64 v12; // r15
  __int64 v13; // r12
  int v14; // esi
  __int64 v15; // r13
  unsigned int v16; // r14d
  __int64 v17; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  int v22; // ecx
  char *v23; // rdx
  NTSTATUS updated; // eax
  unsigned int LevelPlus1; // ecx
  const CHAR *v26; // rdx
  unsigned __int8 v27; // r9
  unsigned __int64 v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  char v33; // [rsp+40h] [rbp-C0h]
  unsigned int v34; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v35; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v36; // [rsp+4Ch] [rbp-B4h] BYREF
  int Buffer; // [rsp+50h] [rbp-B0h] BYREF
  NTSTATUS v38; // [rsp+54h] [rbp-ACh] BYREF
  int v39; // [rsp+58h] [rbp-A8h] BYREF
  int v40; // [rsp+5Ch] [rbp-A4h] BYREF
  EVENT_DATA_DESCRIPTOR v41; // [rsp+60h] [rbp-A0h] BYREF
  int *v42; // [rsp+80h] [rbp-80h]
  __int64 v43; // [rsp+88h] [rbp-78h]
  int *v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp-40h] BYREF
  NTSTATUS *v48; // [rsp+D0h] [rbp-30h]
  __int64 v49; // [rsp+D8h] [rbp-28h]
  _DWORD v50[4]; // [rsp+E0h] [rbp-20h] BYREF
  int v51[4]; // [rsp+F0h] [rbp-10h] BYREF
  int v52[4]; // [rsp+100h] [rbp+0h] BYREF
  int v53[4]; // [rsp+110h] [rbp+10h] BYREF

  v33 = 0;
  v4 = (*a1 & 1) == 0;
  v35 = v4;
  PopAcquirePolicyLock();
  if ( PopUpdateAcDcState(v4) )
  {
    LOBYTE(v5) = 1;
    PopBatteryUpdateAlarms(v5, 0LL);
    PopSetNotificationWork(4u);
    PopRecordAcDcState(v4);
    PopInitSIdle(2LL);
    PopInitilizeAcDcSettings();
    PpmProfileAcDcUpdate();
    if ( v4 == 1 )
      PopMaxChargeRate = 0LL;
    v33 = 1;
  }
  if ( byte_140443198 )
  {
    PopSetPowerSettingValueAcDc(&GUID_BATTERY_COUNT, 4LL, &dword_140443194);
    v19 = qword_1404431A0;
    v20 = 0LL;
    v21 = 0LL;
    while ( (__int64 *)v19 != &qword_1404431A0 )
    {
      v22 = *(_DWORD *)(v19 + 104);
      if ( v22 == 2 )
      {
        v21 = (unsigned int)(v21 + 1);
      }
      else if ( v22 == 4 )
      {
        v20 = (unsigned int)(v20 + 1);
      }
      v19 = *(_QWORD *)v19;
    }
    if ( PopCachedValidBatteryCount == -1 || PopCachedValidBatteryCount != dword_140443194 )
    {
      PopCachedValidBatteryCount = dword_140443194;
      PopDiagTraceBatteryCountChange((unsigned int)dword_140443194, v21, v20, &qword_1404431A0);
    }
    v33 = 1;
  }
  PopReleasePolicyLock();
  PopBatteryCheckCompositeCapacity(a1, v4, &v36);
  if ( ((unk_1404431C0 ^ *(_BYTE *)a1) & 0xF) != 0 || byte_140443198 )
  {
    PopSetNotificationWork(8u);
    byte_140443198 = 0;
  }
  v6 = *(__m128i *)a1;
  v7 = 0;
  HIDWORD(qword_1404431CC) = a2;
  v8 = (unsigned int)_mm_cvtsi128_si32(v6);
  if ( a2 != -1 )
    v7 = a2;
  unk_1404431C0 = v6;
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
  if ( HIDWORD(qword_1404431E0) )
    PopRecalculateCBTriggerLevels();
  PopBatteryTraceSystemBatteryStatus(0);
  if ( qword_1404431E0
    && (unsigned __int8)PopBatteryCheckTriggerAllBatteries(&unk_1404432A8, 1LL)
    && (dword_1404432AC[0] & 2) == 0 )
  {
    PopGetPolicyWorker(64);
    PopCheckForWork();
  }
  PopAcquirePolicyLock();
  v9 = dword_140443194 != 0 ? 3 : 0;
  v10 = 0;
  v34 = 0;
  v11 = 0;
  do
  {
    v12 = v11;
    v13 = 3LL * v11;
    v14 = dword_1404432AC[6 * v11];
    v15 = 0x140000000LL + 24LL * v11 + 4469416;
    if ( (unsigned __int8)PopBatteryCheckTrigger(v15) )
    {
      if ( PopBatteryCachedFlags[v12] != v14 )
      {
        v23 = (char *)PopPolicy + 96;
        PopBatteryCachedFlags[v12] = v14;
        PopDiagTraceBatteryAlarmStatus(v15, &v23[8 * v13], &v34);
        v10 = v34;
        if ( dword_1404432AC[6 * v34] == 128 )
        {
          PopDiagTraceBatteryTriggerMet(0x140000000LL + 24LL * v34 + 4469416, (char *)PopPolicy + 24 * v34 + 96, &v34);
          v10 = v34;
        }
      }
      if ( !byte_1404432A0 )
        PopExecutePowerAction(
          0x140000000LL + 24LL * v10 + 4469416,
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
      dword_1404432AC[2 * v13] = v14 & 0xFFFFFFFC;
      PopDiagTraceBatteryTriggerFlags(&v34, v15);
      v10 = v34;
    }
    v34 = ++v10;
    v11 = v10;
  }
  while ( v10 < 4 );
  v16 = v35;
  if ( dword_1404431FC != v9 )
  {
    Buffer = v9;
    updated = ZwUpdateWnfStateData(&WNF_PO_BATTERY_CHARGE_LEVEL, &Buffer, 4u, 0LL, 0LL, 0, 0);
    LevelPlus1 = pCallbackContext.LevelPlus1;
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          v26 = "PoBatteryLevelCritical";
        }
        else if ( v9 == 2 )
        {
          v26 = "PoBatteryLevelLow";
        }
        else
        {
          v26 = "PoBatteryLevelNormal";
        }
      }
      else
      {
        v26 = "PoBatteryLevelUnknown";
      }
      v38 = updated;
      TlgCreateSz(&pDesc, v26);
      v49 = 4LL;
      v48 = &v38;
      TlgWrite(&pCallbackContext, &unk_14038F3F3, 0LL, 0LL, 4u, &pData);
      LevelPlus1 = pCallbackContext.LevelPlus1;
    }
    if ( (unsigned int)(v9 - 1) <= 1 != (unsigned int)(dword_1404431FC - 1) <= 1
      && LevelPlus1 > 5
      && TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
    {
      v39 = v27;
      v42 = &v39;
      v44 = &v40;
      v40 = v9;
      v43 = 4LL;
      v45 = 4LL;
      TlgWrite(&pCallbackContext, &unk_14038F3B0, 0LL, 0LL, 4u, &v41);
    }
    dword_1404431FC = v9;
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE10(PopBsdPowerTransition) = BYTE10(PopBsdPowerTransition) & 0x3F | ((_BYTE)v9 << 6);
    PopBsdHandleRequest(1);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
  if ( v33 )
    PopTracePowerReconfig();
  PopReleasePolicyLock();
  PopAcquireRwLockExclusive((ULONG_PTR)&qword_140443338);
  memset(&xmmword_140443348, 0, 0x20uLL);
  BYTE7(xmmword_140443348) = dword_1404431F8;
  LOBYTE(xmmword_140443348) = unk_1404431C0 & 1;
  if ( dword_140443194 )
  {
    BYTE1(xmmword_140443348) = 1;
    BYTE2(xmmword_140443348) = (unk_1404431C0 & 4) != 0;
    DWORD2(xmmword_140443348) = HIDWORD(qword_1404431E0);
    HIDWORD(xmmword_140443348) = unk_1404431C4;
    *(_QWORD *)&xmmword_140443358 = qword_1404431CC;
    *((_QWORD *)&xmmword_140443358 + 1) = unk_1404431E8;
    BYTE3(xmmword_140443348) = byte_140443308 != 0 || (unk_1404431C0 & 2) != 0;
  }
  PopAccountCbEnergyChange();
  PopReleaseRwLock((ULONG_PTR)&qword_140443338);
  if ( v36 )
  {
    v35 = (dword_14044330C + 500) / 0x3E8u;
    PopSetPowerSettingValueAcDc(&GUID_BATTERY_PERCENTAGE_REMAINING, 4LL, &v35);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    HIBYTE(PopBsdPowerTransition) ^= (HIBYTE(PopBsdPowerTransition) ^ v35) & 0x7F;
    PopBsdHandleRequest(1);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
    LODWORD(v28) = 0;
    v29 = MEMORY[0xFFFFF78000000008];
    if ( dword_14044330C == -1 )
      v28 = (MEMORY[0xFFFFF78000000008] - qword_140443310 + 5000) / 0x2710uLL;
    if ( PopPlatformAoAc )
    {
      PopSqmCreateDwordStreamEntry(v50, v35);
      PopSqmCreateDwordStreamEntry(v51, v36);
      PopSqmCreateDwordStreamEntry(v52, v16 ^ 1);
      PopSqmCreateDwordStreamEntry(v53, v28);
      PopSqmAddToStream(v31, v30, v32, (__int64)v50);
    }
    PopBatteryTracePercentageRemaining(v35, v36, v16, (unsigned int)v28);
    qword_140443310 = v29;
  }
  LOBYTE(v17) = v33;
  return PopEsQueueStateEvaluation(v17);
}
