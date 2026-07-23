/*
 * XREFs of PopBatteryApplyCompositeState @ 0x14071B3E8
 * Callers:
 *     PopBatteryWorker @ 0x14071B020 (PopBatteryWorker.c)
 * Callees:
 *     _TlgCreateSz @ 0x140003938 (_TlgCreateSz.c)
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopSetNotificationWork @ 0x1400041F0 (PopSetNotificationWork.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PopCheckForWork @ 0x140010620 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1400106A8 (PopGetPolicyWorker.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x140174AF4 (PopBatteryTraceSystemBatteryStatus.c)
 *     PopUpdateAcDcState @ 0x140174B78 (PopUpdateAcDcState.c)
 *     PopInitilizeAcDcSettings @ 0x14017DEFC (PopInitilizeAcDcSettings.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1401BBBD0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopTracePowerReconfig @ 0x1402E2754 (PopTracePowerReconfig.c)
 *     PopSqmAddToStream @ 0x1402E8B3C (PopSqmAddToStream.c)
 *     PopSqmCreateDwordStreamEntry @ 0x1402E8CF4 (PopSqmCreateDwordStreamEntry.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopSetPowerSettingValueAcDc @ 0x14058BA3C (PopSetPowerSettingValueAcDc.c)
 *     PopExecutePowerAction @ 0x1406DF390 (PopExecutePowerAction.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x14071B684 (PopDiagTraceBatteryTriggerFlags.c)
 *     PopBatteryCheckTrigger @ 0x14071B730 (PopBatteryCheckTrigger.c)
 *     PopEsQueueStateEvaluation @ 0x14071B760 (PopEsQueueStateEvaluation.c)
 *     PopAccountCbEnergyChange @ 0x14071B7C8 (PopAccountCbEnergyChange.c)
 *     PopBatteryCheckCompositeCapacity @ 0x14071B88C (PopBatteryCheckCompositeCapacity.c)
 *     PopWriteBsdPowerTransition @ 0x14071D708 (PopWriteBsdPowerTransition.c)
 *     PopInitSIdle @ 0x14071D85C (PopInitSIdle.c)
 *     PopBatteryUpdateAlarms @ 0x1407485CC (PopBatteryUpdateAlarms.c)
 *     PopBatteryCheckTriggerAllBatteries @ 0x14086DFB4 (PopBatteryCheckTriggerAllBatteries.c)
 *     PopBatteryTracePercentageRemaining @ 0x14086E80C (PopBatteryTracePercentageRemaining.c)
 *     PopRecalculateCBTriggerLevels @ 0x14086EE30 (PopRecalculateCBTriggerLevels.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x1408719A4 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopDiagTraceBatteryCountChange @ 0x140871CEC (PopDiagTraceBatteryCountChange.c)
 *     PopDiagTraceBatteryTriggerMet @ 0x140871DA8 (PopDiagTraceBatteryTriggerMet.c)
 *     PpmProfileAcDcUpdate @ 0x14087BBFC (PpmProfileAcDcUpdate.c)
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
  __int64 v16; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  int v21; // ecx
  int v22; // eax
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
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    HIBYTE(PopBsdPowerTransition) = HIBYTE(PopBsdPowerTransition) & 0x7F | ((_BYTE)v4 << 7);
    PopWriteBsdPowerTransition();
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
    PopInitSIdle(2LL);
    PopInitilizeAcDcSettings();
    PpmProfileAcDcUpdate();
    if ( v4 == 1 )
      PopMaxChargeRate = 0LL;
    v33 = 1;
  }
  if ( byte_1404189B8 )
  {
    PopSetPowerSettingValueAcDc(&GUID_BATTERY_COUNT, 4LL, &dword_1404189B4);
    v18 = qword_1404189C0;
    v19 = 0LL;
    v20 = 0LL;
    while ( (__int64 *)v18 != &qword_1404189C0 )
    {
      v21 = *(_DWORD *)(v18 + 104);
      if ( v21 == 2 )
      {
        v20 = (unsigned int)(v20 + 1);
      }
      else if ( v21 == 4 )
      {
        v19 = (unsigned int)(v19 + 1);
      }
      v18 = *(_QWORD *)v18;
    }
    if ( PopCachedValidBatteryCount == -1 || PopCachedValidBatteryCount != dword_1404189B4 )
    {
      PopCachedValidBatteryCount = dword_1404189B4;
      PopDiagTraceBatteryCountChange((unsigned int)dword_1404189B4, v20, v19, &qword_1404189C0);
    }
    v33 = 1;
  }
  PopReleasePolicyLock();
  PopBatteryCheckCompositeCapacity(a1, v4, &v36);
  if ( ((unk_1404189E0 ^ *(_BYTE *)a1) & 0xF) != 0 || byte_1404189B8 )
  {
    PopSetNotificationWork(8u);
    byte_1404189B8 = 0;
  }
  v6 = *(__m128i *)a1;
  v7 = 0;
  HIDWORD(qword_1404189EC) = a2;
  v8 = (unsigned int)_mm_cvtsi128_si32(v6);
  if ( a2 != -1 )
    v7 = a2;
  unk_1404189E0 = v6;
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
  if ( HIDWORD(qword_140418A00) )
    PopRecalculateCBTriggerLevels();
  PopBatteryTraceSystemBatteryStatus(0);
  if ( qword_140418A00
    && (unsigned __int8)PopBatteryCheckTriggerAllBatteries(&unk_140418AC8, 1LL)
    && (dword_140418ACC[0] & 2) == 0 )
  {
    PopGetPolicyWorker(64);
    PopCheckForWork();
  }
  PopAcquirePolicyLock();
  v9 = dword_1404189B4 != 0 ? 3 : 0;
  v10 = 0;
  v34 = 0;
  v11 = 0;
  do
  {
    v12 = v11;
    v13 = 3LL * v11;
    v14 = (char *)&unk_140418AC8 + 24 * v11;
    if ( (unsigned __int8)PopBatteryCheckTrigger(v14) )
    {
      v22 = dword_140418ACC[2 * v13];
      if ( PopBatteryCachedFlags[v12] != v22 )
      {
        v23 = (char *)PopPolicy + 96;
        PopBatteryCachedFlags[v12] = v22;
        PopDiagTraceBatteryAlarmStatus(v14, &v23[8 * v13], &v34);
        v10 = v34;
        if ( dword_140418ACC[6 * v34] == 128 )
        {
          PopDiagTraceBatteryTriggerMet(0x140000000LL + 24LL * v34 + 4295368, (char *)PopPolicy + 24 * v34 + 96, &v34);
          v10 = v34;
        }
      }
      if ( !byte_140418AC0 )
        PopExecutePowerAction(
          0x140000000LL + 24LL * v10 + 4295368,
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
      dword_140418ACC[2 * v13] &= 0xFFFFFFFC;
      PopDiagTraceBatteryTriggerFlags(&v34, v14);
      v10 = v34;
    }
    v34 = ++v10;
    v11 = v10;
  }
  while ( v10 < 4 );
  v15 = v35;
  if ( dword_140418A1C != v9 )
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
      TlgWrite(&pCallbackContext, &unk_14037037B, 0LL, 0LL, 4u, &pData);
      LevelPlus1 = pCallbackContext.LevelPlus1;
    }
    if ( (unsigned int)(v9 - 1) <= 1 != (unsigned int)(dword_140418A1C - 1) <= 1
      && LevelPlus1 > 5
      && TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
    {
      v39 = v27;
      v42 = &v39;
      v44 = &v40;
      v40 = v9;
      v43 = 4LL;
      v45 = 4LL;
      TlgWrite(&pCallbackContext, &unk_140370338, 0LL, 0LL, 4u, &v41);
    }
    dword_140418A1C = v9;
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE10(PopBsdPowerTransition) = BYTE10(PopBsdPowerTransition) & 0x3F | ((_BYTE)v9 << 6);
    PopWriteBsdPowerTransition();
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
  if ( v33 )
    PopTracePowerReconfig();
  PopReleasePolicyLock();
  PopAcquireRwLockExclusive((ULONG_PTR)&qword_140418B60);
  memset(&xmmword_140418B70, 0, 0x20uLL);
  BYTE7(xmmword_140418B70) = dword_140418A18;
  LOBYTE(xmmword_140418B70) = unk_1404189E0 & 1;
  if ( dword_1404189B4 )
  {
    BYTE1(xmmword_140418B70) = 1;
    BYTE2(xmmword_140418B70) = (unk_1404189E0 & 4) != 0;
    DWORD2(xmmword_140418B70) = HIDWORD(qword_140418A00);
    HIDWORD(xmmword_140418B70) = unk_1404189E4;
    *(_QWORD *)&xmmword_140418B80 = qword_1404189EC;
    *((_QWORD *)&xmmword_140418B80 + 1) = unk_140418A08;
    BYTE3(xmmword_140418B70) = byte_140418B28 != 0 || (unk_1404189E0 & 2) != 0;
  }
  PopAccountCbEnergyChange();
  PopReleaseRwLock((ULONG_PTR)&qword_140418B60);
  if ( v36 )
  {
    v35 = (dword_140418B30 + 500) / 0x3E8u;
    PopSetPowerSettingValueAcDc(&GUID_BATTERY_PERCENTAGE_REMAINING, 4LL, &v35);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    HIBYTE(PopBsdPowerTransition) ^= (HIBYTE(PopBsdPowerTransition) ^ v35) & 0x7F;
    PopWriteBsdPowerTransition();
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
    LODWORD(v28) = 0;
    v29 = MEMORY[0xFFFFF78000000008];
    if ( dword_140418B30 == -1 )
      v28 = (MEMORY[0xFFFFF78000000008] - qword_140418B38 + 5000) / 0x2710uLL;
    if ( PopPlatformAoAc )
    {
      PopSqmCreateDwordStreamEntry(v50, v35);
      PopSqmCreateDwordStreamEntry(v51, v36);
      PopSqmCreateDwordStreamEntry(v52, v15 ^ 1);
      PopSqmCreateDwordStreamEntry(v53, v28);
      PopSqmAddToStream(v31, v30, v32, (__int64)v50);
    }
    PopBatteryTracePercentageRemaining(v35, v36, v15, (unsigned int)v28);
    qword_140418B38 = v29;
  }
  LOBYTE(v16) = v33;
  return PopEsQueueStateEvaluation(v16);
}
