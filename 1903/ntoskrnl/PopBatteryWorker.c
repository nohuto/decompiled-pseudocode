/*
 * XREFs of PopBatteryWorker @ 0x140738190
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082998 (KiQueryUnbiasedInterruptTime.c)
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     KiSetTimerEx @ 0x1400B2A00 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1400B2CA0 (KeCancelTimer.c)
 *     _TlgCreateSz @ 0x1400ED314 (_TlgCreateSz.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     DbgPrintEx @ 0x1401264A0 (DbgPrintEx.c)
 *     IoCancelIrp @ 0x1401279E0 (IoCancelIrp.c)
 *     PopBatteryQueueWork @ 0x140176E10 (PopBatteryQueueWork.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1401BFCF0 (ExfUnblockPushLock.c)
 *     ZwQueryWnfStateData @ 0x1401C2C70 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x1401C39D0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopBatteryApplyCompositeState @ 0x14073857C (PopBatteryApplyCompositeState.c)
 *     PopResetCBTriggers @ 0x14074A148 (PopResetCBTriggers.c)
 *     PopAccountBatteryEnergyChange @ 0x1408A93B4 (PopAccountBatteryEnergyChange.c)
 *     PopBatteryEstimatesSpoiled @ 0x1408A9B68 (PopBatteryEstimatesSpoiled.c)
 *     PopBatteryInitialize @ 0x1408A9C10 (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x1408A9D9C (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x1408A9E24 (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x1408A9FA8 (PopBatteryReadTag.c)
 *     PopBatteryUpdateCompositeInformation @ 0x1408AA2A8 (PopBatteryUpdateCompositeInformation.c)
 *     PopBatteryWaitTag @ 0x1408AA400 (PopBatteryWaitTag.c)
 *     PopEstimateChargeTime @ 0x1408AA470 (PopEstimateChargeTime.c)
 */

void PopBatteryWorker()
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v1; // eax
  __int64 v2; // rdx
  int v3; // esi
  __int64 *i; // rbx
  __int64 *j; // rbx
  char v6; // r12
  char v7; // r13
  __int32 v8; // r15d
  bool v9; // di
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rbx
  const void *v13; // r11
  __int64 v14; // r14
  __int64 v15; // rcx
  unsigned int v16; // r9d
  __int64 v17; // r8
  int v18; // r10d
  unsigned int v19; // r15d
  int v20; // ebx
  char v21; // di
  int v22; // ebx
  __int64 *v23; // rbx
  __int64 v24; // rcx
  __int64 *v25; // rbx
  __int64 v26; // r14
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
  __int64 v37; // rcx
  unsigned int v38; // r14d
  __int64 *v39; // rdi
  int v40; // eax
  unsigned int v41; // ecx
  NTSTATUS updated; // eax
  NTSTATUS v43; // r13d
  const CHAR *v44; // r10
  const CHAR *v45; // rbx
  const CHAR *v46; // r14
  const CHAR *v47; // r15
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
  unsigned __int64 v61; // [rsp+60h] [rbp-A8h] BYREF
  int v62; // [rsp+68h] [rbp-A0h]
  unsigned int v63; // [rsp+6Ch] [rbp-9Ch]
  ULONG v64; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v65; // [rsp+74h] [rbp-94h] BYREF
  __int32 v66; // [rsp+78h] [rbp-90h]
  NTSTATUS v67; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v68; // [rsp+80h] [rbp-88h] BYREF
  int v69; // [rsp+84h] [rbp-84h] BYREF
  int v70; // [rsp+88h] [rbp-80h] BYREF
  int v71; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 v72; // [rsp+90h] [rbp-78h] BYREF
  int v73; // [rsp+98h] [rbp-70h] BYREF
  int v74; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v75; // [rsp+A0h] [rbp-68h] BYREF
  NTSTATUS v76; // [rsp+A4h] [rbp-64h] BYREF
  NTSTATUS v77; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int64 v78; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v79; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v80; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v81; // [rsp+C8h] [rbp-40h] BYREF
  ULONG ChangeStamp; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v83; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v84; // [rsp+E0h] [rbp-28h]
  _OWORD v85[4]; // [rsp+F0h] [rbp-18h] BYREF
  EVENT_DATA_DESCRIPTOR v86; // [rsp+138h] [rbp+30h] BYREF
  int *v87; // [rsp+158h] [rbp+50h]
  __int64 v88; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+168h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v90; // [rsp+178h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v91; // [rsp+188h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v92; // [rsp+198h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v93; // [rsp+1A8h] [rbp+A0h] BYREF
  unsigned int *v94; // [rsp+1B8h] [rbp+B0h]
  __int64 v95; // [rsp+1C0h] [rbp+B8h]
  int *v96; // [rsp+1C8h] [rbp+C0h]
  __int64 v97; // [rsp+1D0h] [rbp+C8h]
  int *v98; // [rsp+1D8h] [rbp+D0h]
  __int64 v99; // [rsp+1E0h] [rbp+D8h]
  int *v100; // [rsp+1E8h] [rbp+E0h]
  __int64 v101; // [rsp+1F0h] [rbp+E8h]
  __int64 *v102; // [rsp+1F8h] [rbp+F0h]
  __int64 v103; // [rsp+200h] [rbp+F8h]
  char *v104; // [rsp+208h] [rbp+100h]
  __int64 v105; // [rsp+210h] [rbp+108h]
  int *v106; // [rsp+218h] [rbp+110h]
  __int64 v107; // [rsp+220h] [rbp+118h]
  int *v108; // [rsp+228h] [rbp+120h]
  __int64 v109; // [rsp+230h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR v110; // [rsp+238h] [rbp+130h] BYREF
  int *v111; // [rsp+248h] [rbp+140h]
  __int64 v112; // [rsp+250h] [rbp+148h]
  NTSTATUS *v113; // [rsp+258h] [rbp+150h]
  __int64 v114; // [rsp+260h] [rbp+158h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+268h] [rbp+160h] BYREF
  bool *v116; // [rsp+288h] [rbp+180h]
  __int64 v117; // [rsp+290h] [rbp+188h]
  NTSTATUS *v118; // [rsp+298h] [rbp+190h]
  __int64 v119; // [rsp+2A0h] [rbp+198h]
  EVENT_DATA_DESCRIPTOR v120; // [rsp+2A8h] [rbp+1A0h] BYREF
  NTSTATUS *v121; // [rsp+2C8h] [rbp+1C0h]
  __int64 v122; // [rsp+2D0h] [rbp+1C8h]

  v78 = 0LL;
  memset(v85, 0, 0x3CuLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
  v79 = 0LL;
  v64 = 8;
  v1 = ZwQueryWnfStateData(&WNF_PO_DISCHARGE_START_FILETIME, 0LL, 0LL, &ChangeStamp, &v79, &v64);
  if ( v1 == -1073741670 || v1 == -1073741431 )
  {
    v3 = 0;
  }
  else if ( !v1 && v64 == 8 )
  {
    v3 = (v79 != 0) + 2;
  }
  else
  {
    v3 = 1;
  }
  for ( i = (__int64 *)qword_140443230; i != &qword_140443230; i = (__int64 *)*i )
    IoCancelIrp((PIRP)*(i - 1));
  for ( j = (__int64 *)qword_140443230; j != &qword_140443230; j = (__int64 *)*j )
    KeWaitForSingleObject(j + 2, Executive, 0, 0, 0LL);
  v6 = 0;
  v58 = 0;
  v7 = 0;
  do
  {
    v8 = _InterlockedExchange(&PopBatteryWorkRequests, 0x80000000);
    v66 = v8;
    v9 = (v8 & 2) != 0;
    if ( (v8 & 8) != 0 )
      v6 = 1;
    if ( (v8 & 0x10) != 0 )
    {
      PopAcquirePolicyLock();
      LOBYTE(v24) = 0x80;
      PopResetCBTriggers(v24);
      PopReleasePolicyLock();
    }
    v10 = qword_140443230;
    if ( (__int64 *)qword_140443230 != &qword_140443230 )
    {
      do
      {
        v25 = *(__int64 **)v10;
        v26 = v10 - 64;
        if ( *(_DWORD *)(v10 - 64 + 104) == 2 )
        {
          if ( v25[1] != v10 || (v27 = *(__int64 ***)(v10 + 8), *v27 != (__int64 *)v10) )
            __fastfail(3u);
          *v27 = v25;
          v25[1] = (__int64)v27;
          *(_QWORD *)v10 = 0LL;
          --dword_140443214;
          ++dword_140443278;
          byte_140443218 = 1;
          if ( (int)PopBatteryReadTag(v10 - 64) < 0 )
            PopBatteryWaitTag(v26);
          v9 = 1;
        }
        v10 = (__int64)v25;
      }
      while ( v25 != &qword_140443230 );
    }
    v11 = qword_140443220;
    if ( (__int64 *)qword_140443220 != &qword_140443220 )
    {
      do
      {
        if ( *(_DWORD *)(v11 + 104) == 1 )
        {
          KeWaitForSingleObject((PVOID)(v11 + 80), Executive, 0, 0, 0LL);
          if ( (int)PopBatteryInitialize(v11) < 0 )
            PopBatteryWaitTag(v11);
          else
            v9 = 1;
        }
        v11 = *(_QWORD *)v11;
      }
      while ( (__int64 *)v11 != &qword_140443220 );
      v7 = v58;
    }
    v12 = qword_140443230;
    if ( (__int64 *)qword_140443230 != &qword_140443230 )
    {
      do
      {
        LOBYTE(v2) = 1;
        v84 = *(_OWORD *)(v12 + 84);
        if ( (int)PopBatteryQueryStatus(v12 - 64, v2) >= 0 )
        {
          PopAccountBatteryEnergyChange(v12 - 64);
          v28 = *(_DWORD *)(v12 + 84);
          if ( (((unsigned __int8)v84 ^ *(_BYTE *)(v12 + 84)) & 7) != 0 )
          {
            v7 = 1;
          }
          else if ( DWORD1(v84) != *(_DWORD *)(v12 + 88) || HIDWORD(v84) != *(_DWORD *)(v12 + 96) )
          {
            v6 = 1;
          }
          EstimatedTime = -1;
          if ( (v28 & 2) != 0 )
          {
            EstimatedTime = PopBatteryQueryEstimatedTime(v12 - 64, 0LL);
            v28 = *(_DWORD *)(v12 + 84);
          }
          v30 = 0;
          *(_DWORD *)(v12 + 100) = EstimatedTime;
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
      while ( (__int64 *)v12 != &qword_140443230 );
      LOBYTE(v8) = v66;
      v58 = v7;
    }
    v13 = 0LL;
    if ( v9 )
    {
      PopBatteryUpdateCompositeInformation();
      v13 = 0LL;
      v7 = 1;
      PopMaxChargeRate = 0LL;
      v58 = 1;
    }
    if ( (v8 & 4) != 0 || v7 )
    {
      if ( PopEstimateSpoilerMask )
      {
        v14 = -1LL;
        PopEstimateSpoiledUntilTime = -1LL;
        KeCancelTimer(&stru_1404429C0);
      }
      else
      {
        PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
        KiSetTimerEx((__int64)&stru_1404429C0, -300000000LL, 0, 0, (__int64)&PopPostSpoilingRefresh);
        v14 = -1LL;
      }
      v13 = 0LL;
    }
    else
    {
      v14 = -1LL;
    }
    v15 = 0xFFFFFFFFLL;
    v80 = -1LL;
    v16 = 0x80000000;
    v17 = 0xFFFFFFFFLL;
    v18 = -1;
    v61 = 0xFFFFFFFF00000000uLL;
    v19 = -1;
    v63 = 0x80000000;
    v62 = -1;
    if ( dword_140443214 )
    {
      v32 = qword_140443230;
      v20 = v61;
      while ( (__int64 *)v32 != &qword_140443230 )
      {
        v33 = *(_DWORD *)(v32 + 84) & 0xA;
        v20 |= *(_DWORD *)(v32 + 84) & 0x17;
        LODWORD(v61) = v20;
        if ( (_BYTE)v33 == 10 )
        {
          v20 |= 8u;
          LODWORD(v61) = v20;
        }
        v34 = *(_DWORD *)(v32 + 88);
        if ( v34 != -1 )
        {
          if ( v18 == -1 )
            v18 = 0;
          v18 += v34;
          HIDWORD(v61) = v18;
        }
        v35 = *(_DWORD *)(v32 + 92);
        if ( v35 != -1 )
        {
          if ( (_DWORD)v17 == -1 )
            v17 = 0LL;
          if ( v35 > (unsigned int)v17 )
            v17 = v35;
          v62 = v17;
        }
        v36 = *(_DWORD *)(v32 + 96);
        v15 = 0x80000000LL;
        if ( v36 != 0x80000000 )
        {
          if ( v16 == 0x80000000 )
            v16 = 0;
          v16 += v36;
          v63 = v16;
        }
        v32 = *(_QWORD *)v32;
      }
      if ( (v20 & 2) != 0 )
      {
        v20 &= ~4u;
        LODWORD(v61) = v20;
      }
      if ( (v20 & 1) != 0 )
      {
        if ( (v20 & 4) != 0 )
        {
          v80 = PopEstimateChargeTime(v15, v32, v17);
          v13 = 0LL;
        }
      }
      else
      {
        v37 = qword_140443230;
        v38 = 0;
        if ( (__int64 *)qword_140443230 != &qword_140443230 )
        {
          do
          {
            v17 = *(unsigned int *)(v37 + 100);
            if ( (unsigned int)(v17 - 1) <= 0xFFFFFFFD )
              v38 -= 3600 * *(_DWORD *)(v37 + 88) / (unsigned int)v17;
            v37 = *(_QWORD *)v37;
          }
          while ( (__int64 *)v37 != &qword_140443230 );
          if ( v38 )
          {
            v39 = (__int64 *)qword_140443230;
            if ( (__int64 *)qword_140443230 != &qword_140443230 )
            {
              do
              {
                v40 = PopBatteryQueryEstimatedTime(v39 - 8, v38);
                v13 = 0LL;
                if ( v40 != -1 )
                {
                  v41 = 0;
                  if ( v19 != -1 )
                    v41 = v19;
                  v19 = v40 + v41;
                }
                v39 = (__int64 *)*v39;
              }
              while ( v39 != &qword_140443230 );
              v7 = v58;
            }
          }
        }
        v14 = -1LL;
      }
    }
    else
    {
      LOBYTE(v20) = 1;
      LODWORD(v61) = 1;
      if ( v3 == 3 && (unsigned __int64)KiQueryUnbiasedInterruptTime() >= 0x11E1A300 )
        v3 = 1;
    }
    v21 = v61 & 1;
    if ( v3 == 2 && !v21 || v3 == 3 && v21 )
      v3 = 1;
    v22 = v20 & 0x10;
    if ( (xmmword_140443240 & 0x10) != v22 )
    {
      v59 = v22 != 0;
      updated = ZwUpdateWnfStateData(
                  &WNF_PO_BATTERY_CHARGE_LIMITING_MODE,
                  &v59,
                  1u,
                  0LL,
                  v13,
                  (WNF_CHANGE_STAMP)v13,
                  (LOGICAL)v13);
      if ( pCallbackContext.LevelPlus1 > 5 )
      {
        v67 = updated;
        v116 = &v60;
        v118 = &v67;
        v60 = v59;
        v117 = 1LL;
        v119 = 4LL;
        TlgWrite(&pCallbackContext, &unk_14038F08C, 0LL, 0LL, 4u, &pData);
      }
    }
    PopBatteryApplyCompositeState(&v61, v19, v17);
    _InterlockedAnd(&PopBatteryWorkRequests, 0xFFFFFFDF);
    qword_1404433A8 = MEMORY[0xFFFFF78000000008];
    _InterlockedOr(v52, 0);
    if ( qword_1404433B0 )
      ExfUnblockPushLock(&qword_1404433B0, 0LL);
  }
  while ( _InterlockedCompareExchange(&PopBatteryWorkRequests, 0, 0x80000000) != 0x80000000 );
  v23 = (__int64 *)qword_140443230;
  if ( (__int64 *)qword_140443230 != &qword_140443230 )
  {
    do
    {
      PopBatteryQueryStatus(v23 - 8, 0LL);
      v23 = (__int64 *)*v23;
    }
    while ( v23 != &qword_140443230 );
    v7 = v58;
  }
  if ( !PopUserBatteryChargingEstimator )
    ZwUpdateWnfStateData(&WNF_PO_CHARGE_ESTIMATE, &v80, 8u, 0LL, 0LL, 0, 0);
  if ( !PopDisableBatteryDischargeEstimator )
  {
    if ( v19 != -1 && !(unsigned __int8)PopBatteryEstimatesSpoiled() )
      v14 = v19;
    v83 = v14;
    ZwUpdateWnfStateData(&WNF_PO_DISCHARGE_ESTIMATE, &v83, 8u, 0LL, 0LL, 0, 0);
  }
  if ( (unsigned __int8)v6 | (unsigned __int8)v7 )
  {
    LODWORD(v85[2]) = dword_140443274;
    v85[0] = xmmword_140443254;
    *(_OWORD *)((char *)&v85[2] + 4) = xmmword_140443240;
    *(_QWORD *)((char *)&v85[3] + 4) = __PAIR64__(dword_140443210, dword_140443214);
    v85[1] = xmmword_140443264;
    v43 = ZwUpdateWnfStateData(&WNF_PO_COMPOSITE_BATTERY, v85, 0x3Cu, 0LL, 0LL, 0, 0);
    if ( pCallbackContext.LevelPlus1 > 5 && TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
    {
      v44 = "AC Power";
      v68 = dword_140443214;
      v45 = "Battery Charging";
      if ( (xmmword_140443240 & 1) == 0 )
        v44 = "DC Power";
      v46 = "Battery Critical";
      v47 = "Battery charge limiting mode";
      if ( (xmmword_140443240 & 4) == 0 )
        v45 = "-";
      if ( (xmmword_140443240 & 8) == 0 )
        v46 = "-";
      if ( (xmmword_140443240 & 0x10) == 0 )
        v47 = "-";
      LODWORD(v48) = 0;
      if ( (_DWORD)xmmword_140443264 )
      {
        v65 = (((unsigned int)xmmword_140443264 >> 1) + 100 * DWORD1(xmmword_140443240))
            / (unsigned int)xmmword_140443264;
        v48 = 100000 * (unsigned __int64)DWORD1(xmmword_140443240) / (unsigned int)xmmword_140443264;
      }
      else
      {
        v65 = 0;
      }
      v69 = v48;
      v72 = *((_QWORD *)&xmmword_140443240 + 1);
      v70 = DWORD1(xmmword_140443240);
      v73 = dword_140443210;
      v75 = HIDWORD(xmmword_140443254);
      v87 = &v68;
      v71 = xmmword_140443264;
      v74 = dword_140443214;
      v76 = v43;
      v88 = 4LL;
      TlgCreateSz(&pDesc, v44);
      TlgCreateSz(&v90, v49);
      TlgCreateSz(&v91, v45);
      TlgCreateSz(&v92, v46);
      TlgCreateSz(&v93, v47);
      v95 = 4LL;
      v96 = &v69;
      v94 = &v65;
      v98 = &v70;
      v50 = "Relative Capacity Unit";
      v97 = 4LL;
      v100 = &v71;
      v99 = 4LL;
      v102 = &v72;
      v104 = (char *)&v72 + 4;
      v106 = &v73;
      v108 = &v74;
      if ( (xmmword_140443254 & 0x40000000) == 0 )
        v50 = "mWh Unit";
      v101 = 4LL;
      v103 = 4LL;
      v105 = 4LL;
      v107 = 4LL;
      v109 = 4LL;
      TlgCreateSz(&v110, v50);
      v112 = 4LL;
      v113 = &v76;
      v111 = &v75;
      v114 = 4LL;
      TlgWrite(&pCallbackContext, &unk_14038EEF8, 0LL, 0LL, 0x13u, &v86);
    }
    if ( v3 == 1 )
    {
      if ( v21 )
        v81 = 0LL;
      else
        v81 = MEMORY[0xFFFFF78000000014];
      ZwUpdateWnfStateData(&WNF_PO_DISCHARGE_START_FILETIME, &v81, 8u, 0LL, 0LL, 0, 0);
    }
    if ( v58 )
    {
      v78 = 0xFFFFFFFF00000000uLL;
      v51 = ZwUpdateWnfStateData(&WNF_PO_POWER_STATE_CHANGE, &v78, 8u, 0LL, 0LL, 0, 0);
      if ( pCallbackContext.LevelPlus1 > 5 )
      {
        v77 = v51;
        v121 = &v77;
        v122 = 4LL;
        TlgWrite(&pCallbackContext, &unk_14038EE01, 0LL, 0LL, 3u, &v120);
      }
    }
  }
  PopReleaseRwLock((ULONG_PTR)&PopCB);
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
}
