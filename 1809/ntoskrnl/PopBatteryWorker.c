/*
 * XREFs of PopBatteryWorker @ 0x140719DA0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateSz @ 0x140003938 (_TlgCreateSz.c)
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     KeCancelTimer @ 0x14001CEB0 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CF10 (KiQueryUnbiasedInterruptTime.c)
 *     KeCancelTimer2 @ 0x1400FAF50 (KeCancelTimer2.c)
 *     KeSetTimer2 @ 0x1400FC150 (KeSetTimer2.c)
 *     IoCancelIrp @ 0x140121E10 (IoCancelIrp.c)
 *     DbgPrintEx @ 0x140160440 (DbgPrintEx.c)
 *     PopBatteryQueueWork @ 0x1401762AC (PopBatteryQueueWork.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1401B7430 (ExfUnblockPushLock.c)
 *     ZwQueryWnfStateData @ 0x1401BACF0 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x1401BBA50 (ZwUpdateWnfStateData.c)
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 *     PopBatteryApplyCompositeState @ 0x14071A168 (PopBatteryApplyCompositeState.c)
 *     PopResetCBTriggers @ 0x140747C4C (PopResetCBTriggers.c)
 *     PopAccountBatteryEnergyChange @ 0x14086C87C (PopAccountBatteryEnergyChange.c)
 *     PopBatteryEstimatesSpoiled @ 0x14086D028 (PopBatteryEstimatesSpoiled.c)
 *     PopBatteryInitialize @ 0x14086D0D0 (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x14086D26C (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x14086D2FC (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x14086D47C (PopBatteryReadTag.c)
 *     PopBatteryUpdateCompositeInformation @ 0x14086D778 (PopBatteryUpdateCompositeInformation.c)
 *     PopBatteryWaitTag @ 0x14086D8D0 (PopBatteryWaitTag.c)
 *     PopEstimateChargeTime @ 0x14086D940 (PopEstimateChargeTime.c)
 */

void PopBatteryWorker()
{
  struct _KTHREAD *CurrentThread; // rax
  int WnfStateData; // eax
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // r14d
  __int64 *i; // rdi
  __int64 *j; // rdi
  int v7; // r13d
  __int32 v8; // r12d
  bool v9; // si
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 k; // rdi
  __int64 v13; // rdi
  char v14; // al
  __int64 v15; // r15
  unsigned int v16; // r9d
  __int64 v17; // r8
  int v18; // r10d
  unsigned int v19; // r12d
  int v20; // edi
  char v21; // si
  int v22; // edi
  __int64 *v23; // rdi
  char v24; // di
  __int64 v25; // rcx
  __int64 *v26; // rdi
  __int64 v27; // r15
  __int64 **v28; // rcx
  int v29; // edx
  int EstimatedTime; // eax
  int v31; // ecx
  int v32; // eax
  __int64 v33; // rdx
  int v34; // ecx
  int v35; // eax
  unsigned int v36; // eax
  int v37; // eax
  int v38; // esi
  __int64 v39; // rcx
  unsigned int v40; // r15d
  __int64 *v41; // rsi
  int v42; // eax
  unsigned int v43; // ecx
  int updated; // eax
  const CHAR *v45; // r10
  const CHAR *v46; // rdi
  const CHAR *v47; // r15
  const CHAR *v48; // r12
  unsigned __int64 v49; // rax
  LPCSTR v50; // r11
  const CHAR *v51; // rdx
  int v52; // eax
  signed __int32 v53[8]; // [rsp+8h] [rbp-100h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+28h] [rbp-E0h]
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+30h] [rbp-D8h]
  __int64 v56; // [rsp+38h] [rbp-D0h]
  __int64 v57; // [rsp+40h] [rbp-C8h]
  __int64 v58; // [rsp+48h] [rbp-C0h]
  char v59; // [rsp+58h] [rbp-B0h]
  bool v60; // [rsp+59h] [rbp-AFh] BYREF
  bool v61; // [rsp+5Ah] [rbp-AEh] BYREF
  int v62; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned __int64 v63; // [rsp+60h] [rbp-A8h] BYREF
  int v64; // [rsp+68h] [rbp-A0h]
  unsigned int v65; // [rsp+6Ch] [rbp-9Ch]
  int v66; // [rsp+70h] [rbp-98h] BYREF
  int v67; // [rsp+74h] [rbp-94h]
  unsigned int v68; // [rsp+78h] [rbp-90h] BYREF
  __int32 v69; // [rsp+7Ch] [rbp-8Ch]
  int v70; // [rsp+80h] [rbp-88h] BYREF
  int v71; // [rsp+84h] [rbp-84h] BYREF
  int v72; // [rsp+88h] [rbp-80h] BYREF
  int v73; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 v74; // [rsp+90h] [rbp-78h] BYREF
  int v75; // [rsp+98h] [rbp-70h] BYREF
  int v76; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v77; // [rsp+A0h] [rbp-68h] BYREF
  int v78; // [rsp+A4h] [rbp-64h] BYREF
  int v79; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v80; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v81; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v82; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v83; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v84; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v85; // [rsp+E0h] [rbp-28h]
  _OWORD v86[2]; // [rsp+F0h] [rbp-18h] BYREF
  int v87; // [rsp+110h] [rbp+8h]
  __int128 v88; // [rsp+114h] [rbp+Ch]
  int v89; // [rsp+124h] [rbp+1Ch]
  int v90; // [rsp+128h] [rbp+20h]
  EVENT_DATA_DESCRIPTOR v91; // [rsp+138h] [rbp+30h] BYREF
  int *v92; // [rsp+158h] [rbp+50h]
  __int64 v93; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+168h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v95; // [rsp+178h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v96; // [rsp+188h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v97; // [rsp+198h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v98; // [rsp+1A8h] [rbp+A0h] BYREF
  unsigned int *v99; // [rsp+1B8h] [rbp+B0h]
  __int64 v100; // [rsp+1C0h] [rbp+B8h]
  int *v101; // [rsp+1C8h] [rbp+C0h]
  __int64 v102; // [rsp+1D0h] [rbp+C8h]
  int *v103; // [rsp+1D8h] [rbp+D0h]
  __int64 v104; // [rsp+1E0h] [rbp+D8h]
  int *v105; // [rsp+1E8h] [rbp+E0h]
  __int64 v106; // [rsp+1F0h] [rbp+E8h]
  __int64 *v107; // [rsp+1F8h] [rbp+F0h]
  __int64 v108; // [rsp+200h] [rbp+F8h]
  char *v109; // [rsp+208h] [rbp+100h]
  __int64 v110; // [rsp+210h] [rbp+108h]
  int *v111; // [rsp+218h] [rbp+110h]
  __int64 v112; // [rsp+220h] [rbp+118h]
  int *v113; // [rsp+228h] [rbp+120h]
  __int64 v114; // [rsp+230h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR v115; // [rsp+238h] [rbp+130h] BYREF
  int *v116; // [rsp+248h] [rbp+140h]
  __int64 v117; // [rsp+250h] [rbp+148h]
  int *v118; // [rsp+258h] [rbp+150h]
  __int64 v119; // [rsp+260h] [rbp+158h]
  EVENT_DATA_DESCRIPTOR v120; // [rsp+268h] [rbp+160h] BYREF
  bool *v121; // [rsp+288h] [rbp+180h]
  __int64 v122; // [rsp+290h] [rbp+188h]
  int *v123; // [rsp+298h] [rbp+190h]
  __int64 v124; // [rsp+2A0h] [rbp+198h]
  EVENT_DATA_DESCRIPTOR v125; // [rsp+2A8h] [rbp+1A0h] BYREF
  int *v126; // [rsp+2C8h] [rbp+1C0h]
  __int64 v127; // [rsp+2D0h] [rbp+1C8h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
  v66 = 8;
  pData = (EVENT_DATA_DESCRIPTOR *)&v66;
  Timeout = (PLARGE_INTEGER)&v83;
  WnfStateData = ZwQueryWnfStateData((__int64)&WNF_PO_DISCHARGE_START_FILETIME, 0LL, 0LL);
  if ( WnfStateData == -1073741670 || WnfStateData == -1073741431 )
  {
    v4 = 0;
  }
  else if ( !WnfStateData && v66 == 8 )
  {
    v4 = (v83 != 0) + 2;
  }
  else
  {
    v4 = 1;
  }
  for ( i = (__int64 *)qword_140417850; i != &qword_140417850; i = (__int64 *)*i )
    IoCancelIrp((PIRP)*(i - 1));
  for ( j = (__int64 *)qword_140417850; j != &qword_140417850; j = (__int64 *)*j )
    KeWaitForSingleObject(j + 2, Executive, 0, 0, 0LL);
  LOBYTE(v7) = 0;
  v59 = 0;
  do
  {
    v7 = (unsigned __int8)v7;
    v8 = _InterlockedExchange(&PopBatteryWorkRequests, 0x80000000);
    v69 = v8;
    v9 = (v8 & 2) != 0;
    if ( (v8 & 8) != 0 )
      v7 = 1;
    v67 = v7;
    if ( (v8 & 0x10) != 0 )
    {
      PopAcquirePolicyLock();
      LOBYTE(v25) = 0x80;
      PopResetCBTriggers(v25);
      PopReleasePolicyLock();
    }
    v10 = qword_140417850;
    v11 = (__int64)&qword_140417850;
    if ( (__int64 *)qword_140417850 != &qword_140417850 )
    {
      do
      {
        v26 = *(__int64 **)v10;
        v27 = v10 - 64;
        if ( *(_DWORD *)(v10 - 64 + 104) == 2 )
        {
          if ( v26[1] != v10 || (v28 = *(__int64 ***)(v10 + 8), *v28 != (__int64 *)v10) )
            __fastfail(3u);
          *v28 = v26;
          v26[1] = (__int64)v28;
          *(_QWORD *)v10 = 0LL;
          --dword_140417834;
          ++dword_140417898;
          byte_140417838 = 1;
          if ( (int)PopBatteryReadTag(v10 - 64) < 0 )
            PopBatteryWaitTag(v27);
          v11 = (__int64)&qword_140417850;
          v9 = 1;
        }
        v10 = (__int64)v26;
      }
      while ( v26 != &qword_140417850 );
    }
    for ( k = qword_140417840; (__int64 *)k != &qword_140417840; k = *(_QWORD *)k )
    {
      if ( *(_DWORD *)(k + 104) == 1 )
      {
        KeWaitForSingleObject((PVOID)(k + 80), Executive, 0, 0, 0LL);
        if ( (int)PopBatteryInitialize(k) < 0 )
          PopBatteryWaitTag(k);
        else
          v9 = 1;
      }
    }
    v13 = qword_140417850;
    if ( (__int64 *)qword_140417850 != &qword_140417850 )
    {
      do
      {
        LOBYTE(v2) = 1;
        v85 = *(_OWORD *)(v13 + 84);
        if ( (int)PopBatteryQueryStatus(v13 - 64, v2) >= 0 )
        {
          PopAccountBatteryEnergyChange(v13 - 64);
          v29 = *(_DWORD *)(v13 + 84);
          if ( (((unsigned __int8)v85 ^ *(_BYTE *)(v13 + 84)) & 7) != 0 )
          {
            v59 = 1;
          }
          else if ( DWORD1(v85) != *(_DWORD *)(v13 + 88) || HIDWORD(v85) != *(_DWORD *)(v13 + 96) )
          {
            LOBYTE(v7) = 1;
          }
          EstimatedTime = -1;
          if ( (v29 & 2) != 0 )
          {
            EstimatedTime = PopBatteryQueryEstimatedTime(v13 - 64, 0LL);
            v29 = *(_DWORD *)(v13 + 84);
          }
          *(_DWORD *)(v13 + 100) = EstimatedTime;
          v31 = 0;
          if ( EstimatedTime != -1 )
            v31 = EstimatedTime;
          v32 = *(_DWORD *)(v13 + 96);
          LODWORD(v58) = v31;
          LODWORD(v57) = v32;
          LODWORD(v56) = *(_DWORD *)(v13 + 92);
          LODWORD(pData) = *(_DWORD *)(v13 + 88);
          LODWORD(Timeout) = v29;
          DbgPrintEx(
            0x92u,
            3u,
            "\n"
            "Battery Status [%p]\n"
            "|-- PowerState = 0x%08x\n"
            "|-- Capacity   = %u\n"
            "|-- Voltage    = %u\n"
            "|-- Rate       = %d\n"
            "|-- Est Time   = %u\n",
            v13 - 64,
            Timeout,
            pData,
            v56,
            v57,
            v58);
        }
        else
        {
          *(_DWORD *)(v13 + 40) = 2;
          PopBatteryQueueWork(1u);
        }
        v13 = *(_QWORD *)v13;
      }
      while ( (__int64 *)v13 != &qword_140417850 );
      LOBYTE(v8) = v69;
      v67 = v7;
    }
    if ( v9 )
    {
      PopBatteryUpdateCompositeInformation(v11, v2, v3);
      v14 = 1;
      PopMaxChargeRate = 0LL;
      v59 = 1;
    }
    else
    {
      v14 = v59;
    }
    if ( (v8 & 4) == 0 && !v14 )
      goto LABEL_23;
    if ( !PopEstimateSpoilerMask )
    {
      PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
      KiSetTimerEx((__int64)&stru_140417100, -300000000LL, 0, 0, (__int64)&PopPostSpoilingRefresh);
LABEL_23:
      v15 = -1LL;
      goto LABEL_24;
    }
    v15 = -1LL;
    PopEstimateSpoiledUntilTime = -1LL;
    KeCancelTimer(&stru_140417100);
LABEL_24:
    v80 = -1LL;
    v16 = 0x80000000;
    v17 = 0xFFFFFFFFLL;
    v18 = -1;
    v63 = 0xFFFFFFFF00000000uLL;
    v19 = -1;
    v65 = 0x80000000;
    v64 = -1;
    if ( dword_140417834 )
    {
      v33 = qword_140417850;
      v20 = v63;
      while ( (__int64 *)v33 != &qword_140417850 )
      {
        v34 = *(_DWORD *)(v33 + 84) & 0xA;
        v20 |= *(_DWORD *)(v33 + 84) & 0x17;
        LODWORD(v63) = v20;
        if ( (_BYTE)v34 == 10 )
        {
          v20 |= 8u;
          LODWORD(v63) = v20;
        }
        v35 = *(_DWORD *)(v33 + 88);
        if ( v35 != -1 )
        {
          if ( v18 == -1 )
            v18 = 0;
          v18 += v35;
          HIDWORD(v63) = v18;
        }
        v36 = *(_DWORD *)(v33 + 92);
        if ( v36 != -1 )
        {
          if ( (_DWORD)v17 == -1 )
            v17 = 0LL;
          if ( v36 > (unsigned int)v17 )
            v17 = v36;
          v64 = v17;
        }
        v37 = *(_DWORD *)(v33 + 96);
        v11 = 0x80000000LL;
        if ( v37 != 0x80000000 )
        {
          if ( v16 == 0x80000000 )
            v16 = 0;
          v16 += v37;
          v65 = v16;
        }
        v33 = *(_QWORD *)v33;
      }
      if ( PopBatteryChargingInProgress )
      {
        v38 = v20 & 4;
        if ( (v20 & 4) == 0 )
          KeCancelTimer2((__int64)&PopBatteryWakeTimer);
      }
      else
      {
        v38 = v20 & 4;
        if ( (v20 & 4) != 0 )
          KeSetTimer2((__int64)&PopBatteryWakeTimer, -50000000LL, 50000000LL, 0LL);
      }
      PopBatteryChargingInProgress = v38 != 0;
      if ( (v20 & 2) != 0 )
      {
        v20 &= ~4u;
        LODWORD(v63) = v20;
      }
      if ( (v20 & 1) != 0 )
      {
        if ( (v20 & 4) != 0 )
          v80 = PopEstimateChargeTime(v11, v33, v17);
      }
      else
      {
        v39 = qword_140417850;
        v40 = 0;
        if ( (__int64 *)qword_140417850 != &qword_140417850 )
        {
          do
          {
            v17 = *(unsigned int *)(v39 + 100);
            if ( (unsigned int)(v17 - 1) <= 0xFFFFFFFD )
              v40 -= 3600 * *(_DWORD *)(v39 + 88) / (unsigned int)v17;
            v39 = *(_QWORD *)v39;
          }
          while ( (__int64 *)v39 != &qword_140417850 );
          if ( v40 )
          {
            v41 = (__int64 *)qword_140417850;
            if ( (__int64 *)qword_140417850 != &qword_140417850 )
            {
              do
              {
                v42 = PopBatteryQueryEstimatedTime(v41 - 8, v40);
                if ( v42 != -1 )
                {
                  v43 = 0;
                  if ( v19 != -1 )
                    v43 = v19;
                  v19 = v42 + v43;
                }
                v41 = (__int64 *)*v41;
              }
              while ( v41 != &qword_140417850 );
              LOBYTE(v7) = v67;
            }
          }
        }
        v15 = -1LL;
      }
    }
    else
    {
      LOBYTE(v20) = 1;
      LODWORD(v63) = 1;
      if ( v4 == 3 && (unsigned __int64)KiQueryUnbiasedInterruptTime() >= 0x11E1A300 )
        v4 = 1;
    }
    v21 = v63 & 1;
    if ( v4 == 2 && !v21 || v4 == 3 && v21 )
      v4 = 1;
    v22 = v20 & 0x10;
    if ( (xmmword_140417860 & 0x10) != v22 )
    {
      LODWORD(v56) = 0;
      LODWORD(pData) = 0;
      v60 = v22 != 0;
      Timeout = 0LL;
      updated = ZwUpdateWnfStateData((__int64)&WNF_PO_BATTERY_CHARGE_LIMITING_MODE, (__int64)&v60, 1LL);
      if ( pCallbackContext.LevelPlus1 > 5 )
      {
        v62 = updated;
        v121 = &v61;
        v61 = v60;
        v123 = &v62;
        v122 = 1LL;
        v124 = 4LL;
        TlgWrite(&pCallbackContext, &unk_14036F23D, 0LL, 0LL, 4u, &v120);
      }
    }
    PopBatteryApplyCompositeState(&v63, v19, v17);
  }
  while ( _InterlockedCompareExchange(&PopBatteryWorkRequests, 0, 0x80000000) != 0x80000000 );
  qword_1404179D0 = MEMORY[0xFFFFF78000000008];
  _InterlockedOr(v53, 0);
  if ( qword_1404179D8 )
    ExfUnblockPushLock(&qword_1404179D8, 0LL);
  v23 = (__int64 *)qword_140417850;
  if ( (__int64 *)qword_140417850 != &qword_140417850 )
  {
    do
    {
      PopBatteryQueryStatus(v23 - 8, 0LL);
      v23 = (__int64 *)*v23;
    }
    while ( v23 != &qword_140417850 );
    v15 = -1LL;
  }
  if ( !PopUserBatteryChargingEstimator )
  {
    LODWORD(v56) = 0;
    LODWORD(pData) = 0;
    Timeout = 0LL;
    ZwUpdateWnfStateData((__int64)&WNF_PO_CHARGE_ESTIMATE, (__int64)&v80, 8LL);
  }
  if ( !PopUserBatteryDischargeEstimator )
  {
    if ( v19 != -1 && !(unsigned __int8)PopBatteryEstimatesSpoiled() )
      v15 = v19;
    LODWORD(v56) = 0;
    LODWORD(pData) = 0;
    v84 = v15;
    Timeout = 0LL;
    ZwUpdateWnfStateData((__int64)&WNF_PO_DISCHARGE_ESTIMATE, (__int64)&v84, 8LL);
  }
  v24 = v59;
  if ( (unsigned __int8)v7 | (unsigned __int8)v59 )
  {
    v87 = dword_140417894;
    v86[0] = xmmword_140417874;
    v90 = dword_140417830;
    LODWORD(v56) = 0;
    LODWORD(pData) = 0;
    v88 = xmmword_140417860;
    v89 = dword_140417834;
    v86[1] = xmmword_140417884;
    Timeout = 0LL;
    v62 = ZwUpdateWnfStateData((__int64)&WNF_PO_COMPOSITE_BATTERY, (__int64)v86, 60LL);
    if ( pCallbackContext.LevelPlus1 > 5 && TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
    {
      v45 = "AC Power";
      v70 = dword_140417834;
      v46 = "Battery Charging";
      if ( (xmmword_140417860 & 1) == 0 )
        v45 = "DC Power";
      v47 = "Battery Critical";
      v48 = "Battery charge limiting mode";
      if ( (xmmword_140417860 & 4) == 0 )
        v46 = "-";
      if ( (xmmword_140417860 & 8) == 0 )
        v47 = "-";
      if ( (xmmword_140417860 & 0x10) == 0 )
        v48 = "-";
      if ( (_DWORD)xmmword_140417884 )
      {
        v68 = (((unsigned int)xmmword_140417884 >> 1) + 100 * DWORD1(xmmword_140417860))
            / (unsigned int)xmmword_140417884;
        v49 = 100000 * (unsigned __int64)DWORD1(xmmword_140417860) / (unsigned int)xmmword_140417884;
      }
      else
      {
        v68 = 0;
        LODWORD(v49) = 0;
      }
      v71 = v49;
      v74 = *((_QWORD *)&xmmword_140417860 + 1);
      v72 = DWORD1(xmmword_140417860);
      v75 = dword_140417830;
      v77 = HIDWORD(xmmword_140417874);
      v78 = v62;
      v92 = &v70;
      v73 = xmmword_140417884;
      v76 = dword_140417834;
      v93 = 4LL;
      TlgCreateSz(&pDesc, v45);
      TlgCreateSz(&v95, v50);
      TlgCreateSz(&v96, v46);
      TlgCreateSz(&v97, v47);
      TlgCreateSz(&v98, v48);
      v101 = &v71;
      v99 = &v68;
      v103 = &v72;
      v51 = "Relative Capacity Unit";
      v100 = 4LL;
      v105 = &v73;
      v102 = 4LL;
      v107 = &v74;
      v109 = (char *)&v74 + 4;
      v111 = &v75;
      v113 = &v76;
      if ( (xmmword_140417874 & 0x40000000) == 0 )
        v51 = "mWh Unit";
      v104 = 4LL;
      v106 = 4LL;
      v108 = 4LL;
      v110 = 4LL;
      v112 = 4LL;
      v114 = 4LL;
      TlgCreateSz(&v115, v51);
      v117 = 4LL;
      v118 = &v78;
      v116 = &v77;
      v119 = 4LL;
      TlgWrite(&pCallbackContext, &unk_14036F0A9, 0LL, 0LL, 0x13u, &v91);
      v24 = v59;
    }
    if ( v4 == 1 )
    {
      if ( v21 )
        v81 = 0LL;
      else
        v81 = MEMORY[0xFFFFF78000000014];
      LODWORD(v56) = 0;
      LODWORD(pData) = 0;
      Timeout = 0LL;
      ZwUpdateWnfStateData((__int64)&WNF_PO_DISCHARGE_START_FILETIME, (__int64)&v81, 8LL);
    }
    if ( v24 )
    {
      LODWORD(v56) = 0;
      v82 = 0xFFFFFFFF00000000uLL;
      LODWORD(pData) = 0;
      Timeout = 0LL;
      v52 = ZwUpdateWnfStateData((__int64)&WNF_PO_POWER_STATE_CHANGE, (__int64)&v82, 8LL);
      if ( pCallbackContext.LevelPlus1 > 5 )
      {
        v79 = v52;
        v126 = &v79;
        v127 = 4LL;
        TlgWrite(&pCallbackContext, &unk_14036EFB2, 0LL, 0LL, 3u, &v125);
      }
    }
  }
  PopReleaseRwLock((ULONG_PTR)&PopCB);
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
}
