/*
 * XREFs of PopBatteryWorker @ 0x14071B020
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
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     KeCancelTimer2 @ 0x1400FAFF0 (KeCancelTimer2.c)
 *     KeSetTimer2 @ 0x1400FC1F0 (KeSetTimer2.c)
 *     IoCancelIrp @ 0x140121F00 (IoCancelIrp.c)
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     PopBatteryQueueWork @ 0x1401763CC (PopBatteryQueueWork.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1401B75B0 (ExfUnblockPushLock.c)
 *     ZwQueryWnfStateData @ 0x1401BAE70 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x1401BBBD0 (ZwUpdateWnfStateData.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopBatteryApplyCompositeState @ 0x14071B3E8 (PopBatteryApplyCompositeState.c)
 *     PopResetCBTriggers @ 0x140748E1C (PopResetCBTriggers.c)
 *     PopAccountBatteryEnergyChange @ 0x14086DABC (PopAccountBatteryEnergyChange.c)
 *     PopBatteryEstimatesSpoiled @ 0x14086E268 (PopBatteryEstimatesSpoiled.c)
 *     PopBatteryInitialize @ 0x14086E310 (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x14086E4AC (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x14086E53C (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x14086E6BC (PopBatteryReadTag.c)
 *     PopBatteryUpdateCompositeInformation @ 0x14086E9B8 (PopBatteryUpdateCompositeInformation.c)
 *     PopBatteryWaitTag @ 0x14086EB10 (PopBatteryWaitTag.c)
 *     PopEstimateChargeTime @ 0x14086EB80 (PopEstimateChargeTime.c)
 */

void PopBatteryWorker()
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v1; // eax
  __int64 v2; // rdx
  int v3; // r14d
  __int64 *i; // rdi
  __int64 *j; // rdi
  int v6; // r13d
  __int32 v7; // r12d
  bool v8; // si
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 k; // rdi
  __int64 v12; // rdi
  char v13; // al
  __int64 v14; // r15
  unsigned int v15; // r9d
  __int64 v16; // r8
  int v17; // r10d
  unsigned int v18; // r12d
  int v19; // edi
  char v20; // si
  int v21; // edi
  __int64 *v22; // rdi
  char v23; // di
  __int64 v24; // rcx
  __int64 *v25; // rdi
  __int64 v26; // r15
  __int64 **v27; // rcx
  int v28; // edx
  int EstimatedTime; // eax
  int v30; // ecx
  int v31; // eax
  __int64 v32; // rdx
  int v33; // ecx
  int v34; // eax
  unsigned int v35; // eax
  int v36; // eax
  int v37; // esi
  __int64 v38; // rcx
  unsigned int v39; // r15d
  __int64 *v40; // rsi
  int v41; // eax
  unsigned int v42; // ecx
  NTSTATUS updated; // eax
  const CHAR *v44; // r10
  const CHAR *v45; // rdi
  const CHAR *v46; // r15
  const CHAR *v47; // r12
  unsigned __int64 v48; // rax
  LPCSTR v49; // r11
  const CHAR *v50; // rdx
  NTSTATUS v51; // eax
  signed __int32 v52[8]; // [rsp+8h] [rbp-100h] BYREF
  PVOID Buffer; // [rsp+28h] [rbp-E0h]
  PULONG BufferSize; // [rsp+30h] [rbp-D8h]
  __int64 CheckStamp; // [rsp+38h] [rbp-D0h]
  __int64 v56; // [rsp+40h] [rbp-C8h]
  __int64 v57; // [rsp+48h] [rbp-C0h]
  char v58; // [rsp+58h] [rbp-B0h]
  bool v59; // [rsp+59h] [rbp-AFh] BYREF
  bool v60; // [rsp+5Ah] [rbp-AEh] BYREF
  NTSTATUS v61; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned __int64 v62; // [rsp+60h] [rbp-A8h] BYREF
  int v63; // [rsp+68h] [rbp-A0h]
  unsigned int v64; // [rsp+6Ch] [rbp-9Ch]
  ULONG v65; // [rsp+70h] [rbp-98h] BYREF
  int v66; // [rsp+74h] [rbp-94h]
  unsigned int v67; // [rsp+78h] [rbp-90h] BYREF
  __int32 v68; // [rsp+7Ch] [rbp-8Ch]
  int v69; // [rsp+80h] [rbp-88h] BYREF
  int v70; // [rsp+84h] [rbp-84h] BYREF
  int v71; // [rsp+88h] [rbp-80h] BYREF
  int v72; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 v73; // [rsp+90h] [rbp-78h] BYREF
  int v74; // [rsp+98h] [rbp-70h] BYREF
  int v75; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v76; // [rsp+A0h] [rbp-68h] BYREF
  NTSTATUS v77; // [rsp+A4h] [rbp-64h] BYREF
  NTSTATUS v78; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v79; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v80; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v81; // [rsp+C0h] [rbp-48h] BYREF
  ULONG ChangeStamp; // [rsp+C8h] [rbp-40h] BYREF
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
  NTSTATUS *v118; // [rsp+258h] [rbp+150h]
  __int64 v119; // [rsp+260h] [rbp+158h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+268h] [rbp+160h] BYREF
  bool *v121; // [rsp+288h] [rbp+180h]
  __int64 v122; // [rsp+290h] [rbp+188h]
  NTSTATUS *v123; // [rsp+298h] [rbp+190h]
  __int64 v124; // [rsp+2A0h] [rbp+198h]
  EVENT_DATA_DESCRIPTOR v125; // [rsp+2A8h] [rbp+1A0h] BYREF
  NTSTATUS *v126; // [rsp+2C8h] [rbp+1C0h]
  __int64 v127; // [rsp+2D0h] [rbp+1C8h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
  v65 = 8;
  v1 = ZwQueryWnfStateData(&WNF_PO_DISCHARGE_START_FILETIME, 0LL, 0LL, &ChangeStamp, &v83, &v65);
  if ( v1 == -1073741670 || v1 == -1073741431 )
  {
    v3 = 0;
  }
  else if ( !v1 && v65 == 8 )
  {
    v3 = (v83 != 0) + 2;
  }
  else
  {
    v3 = 1;
  }
  for ( i = (__int64 *)qword_1404189D0; i != &qword_1404189D0; i = (__int64 *)*i )
    IoCancelIrp((PIRP)*(i - 1));
  for ( j = (__int64 *)qword_1404189D0; j != &qword_1404189D0; j = (__int64 *)*j )
    KeWaitForSingleObject(j + 2, Executive, 0, 0, 0LL);
  LOBYTE(v6) = 0;
  v58 = 0;
  do
  {
    v6 = (unsigned __int8)v6;
    v7 = _InterlockedExchange(&PopBatteryWorkRequests, 0x80000000);
    v68 = v7;
    v8 = (v7 & 2) != 0;
    if ( (v7 & 8) != 0 )
      v6 = 1;
    v66 = v6;
    if ( (v7 & 0x10) != 0 )
    {
      PopAcquirePolicyLock();
      LOBYTE(v24) = 0x80;
      PopResetCBTriggers(v24);
      PopReleasePolicyLock();
    }
    v9 = qword_1404189D0;
    v10 = (__int64)&qword_1404189D0;
    if ( (__int64 *)qword_1404189D0 != &qword_1404189D0 )
    {
      do
      {
        v25 = *(__int64 **)v9;
        v26 = v9 - 64;
        if ( *(_DWORD *)(v9 - 64 + 104) == 2 )
        {
          if ( v25[1] != v9 || (v27 = *(__int64 ***)(v9 + 8), *v27 != (__int64 *)v9) )
            __fastfail(3u);
          *v27 = v25;
          v25[1] = (__int64)v27;
          *(_QWORD *)v9 = 0LL;
          --dword_1404189B4;
          ++dword_140418A18;
          byte_1404189B8 = 1;
          if ( (int)PopBatteryReadTag(v9 - 64) < 0 )
            PopBatteryWaitTag(v26);
          v10 = (__int64)&qword_1404189D0;
          v8 = 1;
        }
        v9 = (__int64)v25;
      }
      while ( v25 != &qword_1404189D0 );
    }
    for ( k = qword_1404189C0; (__int64 *)k != &qword_1404189C0; k = *(_QWORD *)k )
    {
      if ( *(_DWORD *)(k + 104) == 1 )
      {
        KeWaitForSingleObject((PVOID)(k + 80), Executive, 0, 0, 0LL);
        if ( (int)PopBatteryInitialize(k) < 0 )
          PopBatteryWaitTag(k);
        else
          v8 = 1;
      }
    }
    v12 = qword_1404189D0;
    if ( (__int64 *)qword_1404189D0 != &qword_1404189D0 )
    {
      do
      {
        LOBYTE(v2) = 1;
        v85 = *(_OWORD *)(v12 + 84);
        if ( (int)PopBatteryQueryStatus(v12 - 64, v2) >= 0 )
        {
          PopAccountBatteryEnergyChange(v12 - 64);
          v28 = *(_DWORD *)(v12 + 84);
          if ( (((unsigned __int8)v85 ^ *(_BYTE *)(v12 + 84)) & 7) != 0 )
          {
            v58 = 1;
          }
          else if ( DWORD1(v85) != *(_DWORD *)(v12 + 88) || HIDWORD(v85) != *(_DWORD *)(v12 + 96) )
          {
            LOBYTE(v6) = 1;
          }
          EstimatedTime = -1;
          if ( (v28 & 2) != 0 )
          {
            EstimatedTime = PopBatteryQueryEstimatedTime(v12 - 64, 0LL);
            v28 = *(_DWORD *)(v12 + 84);
          }
          *(_DWORD *)(v12 + 100) = EstimatedTime;
          v30 = 0;
          if ( EstimatedTime != -1 )
            v30 = EstimatedTime;
          v31 = *(_DWORD *)(v12 + 96);
          LODWORD(v57) = v30;
          LODWORD(v56) = v31;
          LODWORD(CheckStamp) = *(_DWORD *)(v12 + 92);
          LODWORD(BufferSize) = *(_DWORD *)(v12 + 88);
          LODWORD(Buffer) = v28;
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
            v12 - 64,
            Buffer,
            BufferSize,
            CheckStamp,
            v56,
            v57);
        }
        else
        {
          *(_DWORD *)(v12 + 40) = 2;
          PopBatteryQueueWork(1u);
        }
        v12 = *(_QWORD *)v12;
      }
      while ( (__int64 *)v12 != &qword_1404189D0 );
      LOBYTE(v7) = v68;
      v66 = v6;
    }
    if ( v8 )
    {
      PopBatteryUpdateCompositeInformation();
      v13 = 1;
      PopMaxChargeRate = 0LL;
      v58 = 1;
    }
    else
    {
      v13 = v58;
    }
    if ( (v7 & 4) == 0 && !v13 )
      goto LABEL_23;
    if ( !PopEstimateSpoilerMask )
    {
      PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
      KiSetTimerEx((__int64)&stru_1404181C0, -300000000LL, 0, 0, (__int64)&PopPostSpoilingRefresh);
LABEL_23:
      v14 = -1LL;
      goto LABEL_24;
    }
    v14 = -1LL;
    PopEstimateSpoiledUntilTime = -1LL;
    KeCancelTimer(&stru_1404181C0);
LABEL_24:
    v79 = -1LL;
    v15 = 0x80000000;
    v16 = 0xFFFFFFFFLL;
    v17 = -1;
    v62 = 0xFFFFFFFF00000000uLL;
    v18 = -1;
    v64 = 0x80000000;
    v63 = -1;
    if ( dword_1404189B4 )
    {
      v32 = qword_1404189D0;
      v19 = v62;
      while ( (__int64 *)v32 != &qword_1404189D0 )
      {
        v33 = *(_DWORD *)(v32 + 84) & 0xA;
        v19 |= *(_DWORD *)(v32 + 84) & 0x17;
        LODWORD(v62) = v19;
        if ( (_BYTE)v33 == 10 )
        {
          v19 |= 8u;
          LODWORD(v62) = v19;
        }
        v34 = *(_DWORD *)(v32 + 88);
        if ( v34 != -1 )
        {
          if ( v17 == -1 )
            v17 = 0;
          v17 += v34;
          HIDWORD(v62) = v17;
        }
        v35 = *(_DWORD *)(v32 + 92);
        if ( v35 != -1 )
        {
          if ( (_DWORD)v16 == -1 )
            v16 = 0LL;
          if ( v35 > (unsigned int)v16 )
            v16 = v35;
          v63 = v16;
        }
        v36 = *(_DWORD *)(v32 + 96);
        v10 = 0x80000000LL;
        if ( v36 != 0x80000000 )
        {
          if ( v15 == 0x80000000 )
            v15 = 0;
          v15 += v36;
          v64 = v15;
        }
        v32 = *(_QWORD *)v32;
      }
      if ( PopBatteryChargingInProgress )
      {
        v37 = v19 & 4;
        if ( (v19 & 4) == 0 )
          KeCancelTimer2((__int64)&PopBatteryWakeTimer);
      }
      else
      {
        v37 = v19 & 4;
        if ( (v19 & 4) != 0 )
          KeSetTimer2((__int64)&PopBatteryWakeTimer, -50000000LL, 50000000LL, 0LL);
      }
      PopBatteryChargingInProgress = v37 != 0;
      if ( (v19 & 2) != 0 )
      {
        v19 &= ~4u;
        LODWORD(v62) = v19;
      }
      if ( (v19 & 1) != 0 )
      {
        if ( (v19 & 4) != 0 )
          v79 = PopEstimateChargeTime(v10, v32, v16);
      }
      else
      {
        v38 = qword_1404189D0;
        v39 = 0;
        if ( (__int64 *)qword_1404189D0 != &qword_1404189D0 )
        {
          do
          {
            v16 = *(unsigned int *)(v38 + 100);
            if ( (unsigned int)(v16 - 1) <= 0xFFFFFFFD )
              v39 -= 3600 * *(_DWORD *)(v38 + 88) / (unsigned int)v16;
            v38 = *(_QWORD *)v38;
          }
          while ( (__int64 *)v38 != &qword_1404189D0 );
          if ( v39 )
          {
            v40 = (__int64 *)qword_1404189D0;
            if ( (__int64 *)qword_1404189D0 != &qword_1404189D0 )
            {
              do
              {
                v41 = PopBatteryQueryEstimatedTime(v40 - 8, v39);
                if ( v41 != -1 )
                {
                  v42 = 0;
                  if ( v18 != -1 )
                    v42 = v18;
                  v18 = v41 + v42;
                }
                v40 = (__int64 *)*v40;
              }
              while ( v40 != &qword_1404189D0 );
              LOBYTE(v6) = v66;
            }
          }
        }
        v14 = -1LL;
      }
    }
    else
    {
      LOBYTE(v19) = 1;
      LODWORD(v62) = 1;
      if ( v3 == 3 && (unsigned __int64)KiQueryUnbiasedInterruptTime() >= 0x11E1A300 )
        v3 = 1;
    }
    v20 = v62 & 1;
    if ( v3 == 2 && !v20 || v3 == 3 && v20 )
      v3 = 1;
    v21 = v19 & 0x10;
    if ( (xmmword_1404189E0 & 0x10) != v21 )
    {
      v59 = v21 != 0;
      updated = ZwUpdateWnfStateData(&WNF_PO_BATTERY_CHARGE_LIMITING_MODE, &v59, 1u, 0LL, 0LL, 0, 0);
      if ( pCallbackContext.LevelPlus1 > 5 )
      {
        v61 = updated;
        v121 = &v60;
        v60 = v59;
        v123 = &v61;
        v122 = 1LL;
        v124 = 4LL;
        TlgWrite(&pCallbackContext, &unk_140370115, 0LL, 0LL, 4u, &pData);
      }
    }
    PopBatteryApplyCompositeState(&v62, v18, v16);
  }
  while ( _InterlockedCompareExchange(&PopBatteryWorkRequests, 0, 0x80000000) != 0x80000000 );
  qword_140418B50 = MEMORY[0xFFFFF78000000008];
  _InterlockedOr(v52, 0);
  if ( qword_140418B58 )
    ExfUnblockPushLock(&qword_140418B58, 0LL);
  v22 = (__int64 *)qword_1404189D0;
  if ( (__int64 *)qword_1404189D0 != &qword_1404189D0 )
  {
    do
    {
      PopBatteryQueryStatus(v22 - 8, 0LL);
      v22 = (__int64 *)*v22;
    }
    while ( v22 != &qword_1404189D0 );
    v14 = -1LL;
  }
  if ( !PopUserBatteryChargingEstimator )
    ZwUpdateWnfStateData(&WNF_PO_CHARGE_ESTIMATE, &v79, 8u, 0LL, 0LL, 0, 0);
  if ( !PopUserBatteryDischargeEstimator )
  {
    if ( v18 != -1 && !(unsigned __int8)PopBatteryEstimatesSpoiled() )
      v14 = v18;
    v84 = v14;
    ZwUpdateWnfStateData(&WNF_PO_DISCHARGE_ESTIMATE, &v84, 8u, 0LL, 0LL, 0, 0);
  }
  v23 = v58;
  if ( (unsigned __int8)v6 | (unsigned __int8)v58 )
  {
    v87 = dword_140418A14;
    v86[0] = xmmword_1404189F4;
    v90 = dword_1404189B0;
    v88 = xmmword_1404189E0;
    v89 = dword_1404189B4;
    v86[1] = xmmword_140418A04;
    v61 = ZwUpdateWnfStateData(&WNF_PO_COMPOSITE_BATTERY, v86, 0x3Cu, 0LL, 0LL, 0, 0);
    if ( pCallbackContext.LevelPlus1 > 5 && TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
    {
      v44 = "AC Power";
      v69 = dword_1404189B4;
      v45 = "Battery Charging";
      if ( (xmmword_1404189E0 & 1) == 0 )
        v44 = "DC Power";
      v46 = "Battery Critical";
      v47 = "Battery charge limiting mode";
      if ( (xmmword_1404189E0 & 4) == 0 )
        v45 = "-";
      if ( (xmmword_1404189E0 & 8) == 0 )
        v46 = "-";
      if ( (xmmword_1404189E0 & 0x10) == 0 )
        v47 = "-";
      if ( (_DWORD)xmmword_140418A04 )
      {
        v67 = (((unsigned int)xmmword_140418A04 >> 1) + 100 * DWORD1(xmmword_1404189E0))
            / (unsigned int)xmmword_140418A04;
        v48 = 100000 * (unsigned __int64)DWORD1(xmmword_1404189E0) / (unsigned int)xmmword_140418A04;
      }
      else
      {
        v67 = 0;
        LODWORD(v48) = 0;
      }
      v70 = v48;
      v73 = *((_QWORD *)&xmmword_1404189E0 + 1);
      v71 = DWORD1(xmmword_1404189E0);
      v74 = dword_1404189B0;
      v76 = HIDWORD(xmmword_1404189F4);
      v77 = v61;
      v92 = &v69;
      v72 = xmmword_140418A04;
      v75 = dword_1404189B4;
      v93 = 4LL;
      TlgCreateSz(&pDesc, v44);
      TlgCreateSz(&v95, v49);
      TlgCreateSz(&v96, v45);
      TlgCreateSz(&v97, v46);
      TlgCreateSz(&v98, v47);
      v101 = &v70;
      v99 = &v67;
      v103 = &v71;
      v50 = "Relative Capacity Unit";
      v100 = 4LL;
      v105 = &v72;
      v102 = 4LL;
      v107 = &v73;
      v109 = (char *)&v73 + 4;
      v111 = &v74;
      v113 = &v75;
      if ( (xmmword_1404189F4 & 0x40000000) == 0 )
        v50 = "mWh Unit";
      v104 = 4LL;
      v106 = 4LL;
      v108 = 4LL;
      v110 = 4LL;
      v112 = 4LL;
      v114 = 4LL;
      TlgCreateSz(&v115, v50);
      v117 = 4LL;
      v118 = &v77;
      v116 = &v76;
      v119 = 4LL;
      TlgWrite(&pCallbackContext, &unk_1403701A4, 0LL, 0LL, 0x13u, &v91);
      v23 = v58;
    }
    if ( v3 == 1 )
    {
      if ( v20 )
        v80 = 0LL;
      else
        v80 = MEMORY[0xFFFFF78000000014];
      ZwUpdateWnfStateData(&WNF_PO_DISCHARGE_START_FILETIME, &v80, 8u, 0LL, 0LL, 0, 0);
    }
    if ( v23 )
    {
      v81 = 0xFFFFFFFF00000000uLL;
      v51 = ZwUpdateWnfStateData(&WNF_PO_POWER_STATE_CHANGE, &v81, 8u, 0LL, 0LL, 0, 0);
      if ( pCallbackContext.LevelPlus1 > 5 )
      {
        v78 = v51;
        v126 = &v78;
        v127 = 4LL;
        TlgWrite(&pCallbackContext, &unk_140370170, 0LL, 0LL, 3u, &v125);
      }
    }
  }
  PopReleaseRwLock((ULONG_PTR)&PopCB);
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
}
