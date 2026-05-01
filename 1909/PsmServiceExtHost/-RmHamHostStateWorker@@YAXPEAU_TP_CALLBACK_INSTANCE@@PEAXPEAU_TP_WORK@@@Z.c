/*
 * XREFs of ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180026B20
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000B650 (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000E090 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18000E0B0 (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18000E0DC (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E230 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800121A8 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180013534 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180013580 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800182C0 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18001A258 (-RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001ADF0 (-RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     ?RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180026A90 (-RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027B40 (-HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027E60 (-HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180028200 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800288A0 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002BED0 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180030170 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800370A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180037528 (-HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x18003766C (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z @ 0x1800376AC (-RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z.c)
 *     ?RmpPolicyIsActivityHostSwappable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800381A4 (-RmpPolicyIsActivityHostSwappable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180039380 (-RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x180039404 (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 *     ?HampSystemEnsureStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003B0CC (-HampSystemEnsureStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003B8E0 (-HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x18004936C (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x1800689D0 (-RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180077258 (-HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z @ 0x180079220 (-HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z.c)
 *     ?HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007933C (-HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x1800793D8 (-HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 */

void __fastcall RmHamHostStateWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  char *v3; // rdi
  DWORD v4; // ebx
  char *v5; // r14
  __int64 v6; // rax
  int v7; // r12d
  DWORD v8; // esi
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v11; // esi
  _QWORD *v12; // rbx
  char *v13; // rcx
  char *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // edx
  unsigned __int64 v18; // r8
  __int64 v19; // r13
  DWORD v20; // esi
  __int64 v21; // r15
  _QWORD *v22; // rbx
  int *v23; // r12
  unsigned int v24; // ebx
  _QWORD *v25; // rax
  bool v26; // zf
  unsigned int v27; // edx
  int v28; // eax
  unsigned int v29; // r13d
  __int64 v30; // r15
  DWORD v31; // esi
  _QWORD *v32; // rbx
  __int64 v33; // rcx
  unsigned int v34; // ebx
  DWORD v35; // r15d
  __int64 v36; // r13
  _QWORD *v37; // rsi
  bool v38; // si
  _QWORD *v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rax
  int v42; // eax
  int v43; // edx
  char *v44; // rcx
  char *v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  BOOL v48; // ebx
  _QWORD *v49; // rax
  __int64 v50; // rcx
  int v51; // eax
  _QWORD *v52; // rax
  signed __int64 v53; // rax
  bool v54; // cc
  signed __int64 v55; // rax
  DWORD v56; // ebx
  int v57; // eax
  __int64 v58; // rsi
  int v59; // ebx
  unsigned int v60; // r8d
  unsigned int v61; // ecx
  struct _RM_HAM_ACTIVITY_HOST *v62; // rdx
  int v63; // r8d
  __int64 v65; // rdx
  struct _HAM_ACTIVITY *FirstActivity; // rcx
  int v67; // ecx
  struct _RM_PARTITION *v68; // rcx
  int v69; // eax
  BOOL IsSuspendWaiter; // eax
  unsigned int v71; // ebx
  __int64 v72; // rcx
  BOOL v73; // eax
  int v74; // ecx
  void *v75; // rcx
  int v76; // [rsp+30h] [rbp-D0h]
  unsigned int v77; // [rsp+34h] [rbp-CCh]
  unsigned int v78; // [rsp+38h] [rbp-C8h] BYREF
  int v79; // [rsp+3Ch] [rbp-C4h] BYREF
  BOOL v80; // [rsp+40h] [rbp-C0h]
  __int64 v81; // [rsp+48h] [rbp-B8h]
  int v82; // [rsp+50h] [rbp-B0h] BYREF
  int v83; // [rsp+54h] [rbp-ACh] BYREF
  char v84[4]; // [rsp+58h] [rbp-A8h] BYREF
  char v85[4]; // [rsp+5Ch] [rbp-A4h] BYREF
  char v86[4]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v87; // [rsp+64h] [rbp-9Ch] BYREF
  int v88; // [rsp+68h] [rbp-98h] BYREF
  int v89; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v90; // [rsp+70h] [rbp-90h] BYREF
  char *v91; // [rsp+78h] [rbp-88h]
  __int64 v92; // [rsp+80h] [rbp-80h] BYREF
  __int64 v93; // [rsp+88h] [rbp-78h] BYREF
  __int64 v94; // [rsp+90h] [rbp-70h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+98h] [rbp-68h] BYREF
  EVENT_DESCRIPTOR v96; // [rsp+A8h] [rbp-58h] BYREF
  EVENT_DESCRIPTOR v97; // [rsp+B8h] [rbp-48h] BYREF
  EVENT_DESCRIPTOR v98; // [rsp+C8h] [rbp-38h] BYREF
  EVENT_DESCRIPTOR v99; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE TlsValue[144]; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+180h] [rbp+80h] BYREF
  void *v102; // [rsp+190h] [rbp+90h]
  int v103; // [rsp+198h] [rbp+98h]
  int v104; // [rsp+19Ch] [rbp+9Ch]
  __int64 *v105; // [rsp+1A0h] [rbp+A0h]
  __int64 v106; // [rsp+1A8h] [rbp+A8h]
  int *v107; // [rsp+1B0h] [rbp+B0h]
  __int64 v108; // [rsp+1B8h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v109; // [rsp+1C0h] [rbp+C0h] BYREF
  void *v110; // [rsp+1D0h] [rbp+D0h]
  int v111; // [rsp+1D8h] [rbp+D8h]
  int v112; // [rsp+1DCh] [rbp+DCh]
  char *v113; // [rsp+1E0h] [rbp+E0h]
  __int64 v114; // [rsp+1E8h] [rbp+E8h]
  int *v115; // [rsp+1F0h] [rbp+F0h]
  __int64 v116; // [rsp+1F8h] [rbp+F8h]
  struct _EVENT_DATA_DESCRIPTOR v117; // [rsp+200h] [rbp+100h] BYREF
  void *v118; // [rsp+210h] [rbp+110h]
  int v119; // [rsp+218h] [rbp+118h]
  int v120; // [rsp+21Ch] [rbp+11Ch]
  __int64 *v121; // [rsp+220h] [rbp+120h]
  __int64 v122; // [rsp+228h] [rbp+128h]
  unsigned int *v123; // [rsp+230h] [rbp+130h]
  __int64 v124; // [rsp+238h] [rbp+138h]
  struct _EVENT_DATA_DESCRIPTOR v125; // [rsp+240h] [rbp+140h] BYREF
  void *v126; // [rsp+250h] [rbp+150h]
  int v127; // [rsp+258h] [rbp+158h]
  int v128; // [rsp+25Ch] [rbp+15Ch]
  __int64 *v129; // [rsp+260h] [rbp+160h]
  __int64 v130; // [rsp+268h] [rbp+168h]
  int *v131; // [rsp+270h] [rbp+170h]
  __int64 v132; // [rsp+278h] [rbp+178h]
  struct _EVENT_DATA_DESCRIPTOR v133; // [rsp+280h] [rbp+180h] BYREF
  void *v134; // [rsp+290h] [rbp+190h]
  int v135; // [rsp+298h] [rbp+198h]
  int v136; // [rsp+29Ch] [rbp+19Ch]
  int *v137; // [rsp+2A0h] [rbp+1A0h]
  __int64 v138; // [rsp+2A8h] [rbp+1A8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 *v140; // [rsp+2C0h] [rbp+1C0h]
  __int64 v141; // [rsp+2C8h] [rbp+1C8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2D0h] [rbp+1D0h] BYREF
  char *v143; // [rsp+2F0h] [rbp+1F0h]
  __int64 v144; // [rsp+2F8h] [rbp+1F8h]
  int *v145; // [rsp+300h] [rbp+200h]
  __int64 v146; // [rsp+308h] [rbp+208h]

  v3 = a2;
  v91 = a2;
  memset_0(TlsValue, 0, 0x88uLL);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, TlsValue);
  }
  v5 = v3 + 64;
  v6 = *((_QWORD *)v3 + 4);
  v94 = *((_QWORD *)v3 + 6);
  v7 = 0;
  v90 = v6;
  if ( dword_1800AB2C0 > 4u )
  {
    v106 = 8LL;
    v105 = &v90;
    v82 = *((_DWORD *)v3 + 311);
    v107 = &v82;
    v108 = 4LL;
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800AB2C8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_1800AB2C8;
    v102 = &unk_180094D36;
    v104 = 1;
    UserData.Reserved = 2;
    v103 = 42;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  v8 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v8) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  CurrentThreadId = GetCurrentThreadId();
  v11 = HampLockTrackerId;
  dword_1800AC208 = CurrentThreadId;
  if ( HampLockTrackerId != -1 )
  {
    v12 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v11) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v12 |= 2uLL;
    ++v12[2];
  }
  RtlAcquireSRWLockExclusive(v3 + 64);
  *((_DWORD *)v3 + 18) = GetCurrentThreadId();
  *((_DWORD *)v3 + 176) = GetCurrentThreadId();
  while ( *((int *)v3 + 6) >= 0 )
  {
    v13 = (char *)*((_QWORD *)v5 + 75);
    v14 = 0LL;
    if ( v13 != v5 + 600 )
      v14 = v13 - 96;
    if ( v14 )
    {
      do
      {
        if ( v14[548] == 2 )
        {
          if ( v14[549] )
          {
            v57 = HampActTryStart(v14);
            if ( v57 )
            {
              if ( dword_1800AB2C0 > 5u )
              {
                v83 = v57;
                v113 = v14 + 40;
                v115 = &v83;
                v114 = 8LL;
                v116 = 4LL;
                *(_DWORD *)&v96.Level = 5;
                v109.Ptr = (ULONGLONG)off_1800AB2C8;
                *(_DWORD *)&v96.Id = 184549376;
                v96.Keyword = 0LL;
                v109.Size = *(unsigned __int16 *)off_1800AB2C8;
                v109.Reserved = 2;
                v110 = &unk_180098C31;
                v111 = 49;
                v112 = 1;
                EventWriteTransfer(RegHandle, &v96, 0LL, 0LL, 4u, &v109);
              }
            }
          }
        }
        v15 = *((_QWORD *)v14 + 12);
        v16 = *((_QWORD *)v14 + 10);
        v14 = 0LL;
        if ( v15 != v16 + 600 )
          v14 = (char *)(v15 - 96);
      }
      while ( v14 );
      v3 = v91;
      v5 = v91 + 64;
    }
    RmHamHostGetCurrentState(
      (struct _RM_HAM_ACTIVITY_HOST *)v5,
      (union _RM_OPTIMIZATION_STATE *)v84,
      (union _RM_OPTIMIZATION_STATE *)v85);
    v18 = *((_QWORD *)v5 + 81);
    switch ( (v18 >> 16) & 3 )
    {
      case 0uLL:
        goto LABEL_26;
      case 1uLL:
        if ( v84[0] >= 0 || v85[0] < 0 || (v18 & 0x40000000000LL) != 0 )
          goto LABEL_26;
        FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)v5);
        if ( FirstActivity )
        {
          while ( (*((_BYTE *)FirstActivity + 544) & 0x28) != 0
               || !HampActIsStartedOrReachedPendState((__int64)FirstActivity, 5u)
               || (*((_DWORD *)FirstActivity + 28) & 0x2000) == 0 )
          {
            FirstActivity = HampHostGetNextActivity(FirstActivity);
            if ( !FirstActivity )
              goto LABEL_159;
          }
          v18 = *((_QWORD *)v3 + 89);
          goto LABEL_26;
        }
LABEL_159:
        if ( (v18 & 0x800000000LL) == 0 )
        {
          IsSuspendWaiter = HampHostIsSuspendWaiter((struct _RM_HAM_ACTIVITY_HOST *)v5, v17);
          *((_QWORD *)v5 + 81) |= 0x800000000uLL;
          v71 = IsSuspendWaiter;
          if ( _InterlockedIncrement64((volatile signed __int64 *)v3 + 2) <= 1 )
            __fastfail(0xEu);
          TpPostWork(*((_QWORD *)v5 + 78));
          HampHostCheckUpdateSuspendWaitState((struct _RM_HAM_ACTIVITY_HOST *)v5, v71);
          v18 = *((_QWORD *)v3 + 89);
        }
        if ( (v18 & 0x30000) != 0 )
        {
          do
          {
            v92 = *((_QWORD *)v5 + 100);
            HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v5, v17);
            RmpReleaseGlobalLock();
            RtlWaitOnAddress(v5 + 800, &v92, 8LL);
            RmpAcquireGlobalLock();
            HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v5, 0);
          }
          while ( (*((_DWORD *)v5 + 162) & 0x30000) != 0 );
        }
        break;
      case 2uLL:
        if ( (v18 & 0x10000000000000LL) == 0 )
          goto LABEL_159;
        break;
      case 3uLL:
        goto LABEL_159;
      default:
LABEL_26:
        if ( (v18 & 0x10000000000000LL) != 0 )
        {
          HampHostCollectErrorReport((struct _RM_HAM_ACTIVITY_HOST *)v5);
        }
        else
        {
          v19 = *((_QWORD *)v5 + 97);
          if ( !HampAppCheckQueueLicenseUpgradeForHost(
                  (struct _HAM_APPLICATION *)v19,
                  (struct _RM_HAM_ACTIVITY_HOST *)v5) )
          {
            if ( (v3[1244] & 8) != 0 || (v5[772] & 1) == 0 )
              goto LABEL_41;
            v20 = HampLockTrackerId;
            v21 = *((_QWORD *)v5 + 81) >> 62;
            if ( HampLockTrackerId != -1 )
            {
              v22 = TlsGetValue(HampLockTrackerId);
              if ( (*(_QWORD *)TlsGetValue(v20) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
                __int2c();
              *v22 |= 0x20uLL;
              ++v22[6];
            }
            RtlAcquireSRWLockShared(v19 + 576);
            v23 = (int *)(v19 + 608);
            v24 = (*(_DWORD *)(v19 + 608) >> 23) & 3;
            if ( HampLockTrackerId != -1 )
            {
              v25 = TlsGetValue(HampLockTrackerId);
              if ( (*(_BYTE *)v25 & 0x20) == 0 )
                __int2c();
              v26 = v25[6]-- == 1LL;
              if ( v26 )
                *v25 &= ~0x20uLL;
            }
            RtlReleaseSRWLockShared(v19 + 576);
            if ( v24 < (unsigned int)v21 )
            {
              HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v5, v27);
              RmpReleaseGlobalLock();
              HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v19);
              v61 = *v23;
              if ( (((unsigned int)*v23 >> 23) & 3) < (unsigned int)v21 )
              {
                while ( ((v61 >> 21) & 3) >= (unsigned int)v21 )
                {
                  if ( (v61 & 0x100000) == 0 )
                  {
                    *v23 = v61 | 0x100000;
                    HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v19);
                    v63 = HampSystemEnsureStoreLicenseAcquisition((struct _HAM_APPLICATION *)v19, v62);
                    v79 = v63;
                    if ( dword_1800AB2C0 > 4u && (byte_1800AB2D0 & 8) != 0 && (qword_1800AB2D8 & 8) == qword_1800AB2D8 )
                    {
                      v138 = 4LL;
                      v137 = &v79;
                      TlgCreateWsz(&pDesc, (LPCWSTR)v5 + 12);
                      v65 = *((_QWORD *)v5 - 4);
                      v140 = &v93;
                      v93 = v65;
                      v141 = 8LL;
                      *(_DWORD *)&v97.Level = 4;
                      v133.Ptr = (ULONGLONG)off_1800AB2C8;
                      *(_DWORD *)&v97.Id = 184549376;
                      v97.Keyword = 8LL;
                      v133.Size = *(unsigned __int16 *)off_1800AB2C8;
                      v134 = &unk_18009949F;
                      v136 = 1;
                      v133.Reserved = 2;
                      v135 = 54;
                      EventWriteTransfer(RegHandle, &v97, 0LL, 0LL, 5u, &v133);
                      v63 = v79;
                    }
                    if ( v63 < 0 )
                      HampAppRequestLicensingActivityStops((struct _HAM_APPLICATION *)v19, v63);
                    HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v19);
                    *v23 &= ~0x100000u;
                    RtlWakeAddressAll(v19 + 608);
                    if ( v79 >= 0 )
                    {
                      *v23 &= 0xFE7FFFFF;
                      *v23 |= (_DWORD)v21 << 23;
                    }
                    HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v19);
                    HampAppCheckQueueHostWorkersPostLicensing(
                      (struct _HAM_APPLICATION *)v19,
                      (struct _RM_HAM_ACTIVITY_HOST *)v5);
                    goto LABEL_153;
                  }
                  HampAppTraceWaitForLicenseWorkerForHost((struct _RM_HAM_ACTIVITY_HOST *)v5);
                  HampAppWaitForFlagChange((struct _HAM_APPLICATION *)v19);
                  v61 = *v23;
                  if ( (((unsigned int)*v23 >> 23) & 3) >= (unsigned int)v21 )
                    break;
                }
              }
              HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v19);
LABEL_153:
              RmpAcquireGlobalLock();
              HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v5, 0);
              v7 = 0;
            }
            else
            {
              v7 = 0;
LABEL_41:
              if ( !HampAppCheckDowngradeLicense((struct _HAM_APPLICATION *)v19, (struct _RM_HAM_ACTIVITY_HOST *)v5) )
              {
                v28 = *((_DWORD *)v3 + 209);
                if ( (v28 & 1) != 0 )
                {
                  v29 = HampHostCheckUpdateEnforcementSettings((struct _RM_HAM_ACTIVITY_HOST *)v5);
                  v28 = *((_DWORD *)v3 + 209);
                }
                else
                {
                  v29 = 0;
                }
                v77 = v29;
                if ( (v28 & 1) == 0 )
                {
                  v34 = 0;
                  if ( !(unsigned int)RmpActivityHostGetResourceSetCount((struct _RM_ACTIVITY_HOST *)v3, 3) )
                    goto LABEL_75;
                  goto LABEL_73;
                }
                v30 = *((_QWORD *)v3 + 94);
                v81 = v30;
                if ( v30 )
                {
                  v31 = HampLockTrackerId;
                  if ( HampLockTrackerId != -1 )
                  {
                    v32 = TlsGetValue(HampLockTrackerId);
                    if ( (*(_QWORD *)TlsGetValue(v31) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
                      __int2c();
                    *v32 |= 8uLL;
                    ++v32[4];
                  }
                  RtlAcquireSRWLockExclusive(v30 + 8);
                  *(_DWORD *)(v30 + 16) = GetCurrentThreadId();
                  v33 = *((_QWORD *)v3 + 94);
                  v76 = 1;
                  LOBYTE(v7) = *(_QWORD *)(v33 + 104) < *((_QWORD *)v3 + 85);
                  v80 = *(_DWORD *)(v33 + 92) != 0;
                }
                else
                {
                  v80 = 0;
                  v76 = 0;
                }
                v34 = 0;
                if ( (v3[836] & 1) == 0 )
                {
                  v7 = 0;
                  v78 = 0;
                  goto LABEL_66;
                }
                RmHamHostGetCurrentState(
                  (struct _RM_HAM_ACTIVITY_HOST *)v5,
                  (union _RM_OPTIMIZATION_STATE *)&v78,
                  (union _RM_OPTIMIZATION_STATE *)v86);
                v35 = HampLockTrackerId;
                v36 = *(_QWORD *)(*((_QWORD *)v3 + 105) + 88LL);
                if ( HampLockTrackerId != -1 )
                {
                  v37 = TlsGetValue(HampLockTrackerId);
                  if ( (*(_QWORD *)TlsGetValue(v35) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
                    __int2c();
                  *v37 |= 0x40uLL;
                  ++v37[7];
                }
                RtlAcquireSRWLockShared(v36 + 304);
                v38 = (*(_DWORD *)(v36 + 340) & 2) != 0;
                if ( HampLockTrackerId != -1 )
                {
                  v39 = TlsGetValue(HampLockTrackerId);
                  if ( (*(_BYTE *)v39 & 0x40) == 0 )
                    __int2c();
                  v26 = v39[7]-- == 1LL;
                  if ( v26 )
                    *v39 &= ~0x40uLL;
                }
                RtlReleaseSRWLockShared(v36 + 304);
                if ( v38 )
                {
                  v72 = *((_QWORD *)v3 + 89);
                  if ( (v72 & 0x20000000000000LL) == 0 )
                  {
                    v73 = (v78 & 0x80u) == 0 && v86[0] >= 0;
                    if ( (v72 & 0x30000) == 0 && v73 )
                      goto LABEL_170;
                  }
                }
                if ( v7 )
                {
                  v34 = v78 & 0x188;
LABEL_170:
                  v30 = v81;
LABEL_122:
                  v29 = v77;
                  v7 = 0;
                  goto LABEL_66;
                }
                v40 = *((_QWORD *)v3 + 89);
                v30 = v81;
                if ( (v40 & 0x10000000000LL) == 0 )
                {
                  if ( v81 && *(_DWORD *)(v81 + 88) )
                    v34 = v78 & 0x100 | 0x80;
                  else
                    v34 = 384;
                  if ( (v40 & 0x2080000000000LL) == 0x2000000000000LL )
                    v34 |= (v34 >> 5) & 8;
                  goto LABEL_122;
                }
                v29 = v77;
                v7 = 0;
                if ( v80 )
                  v34 = v78;
LABEL_66:
                if ( v76 )
                {
                  *(_DWORD *)(v30 + 16) = 0;
                  RtlReleaseSRWLockExclusive(v30 + 8);
                  if ( HampLockTrackerId != -1 )
                  {
                    v41 = TlsGetValue(HampLockTrackerId);
                    if ( (*(_BYTE *)v41 & 8) == 0 )
                      __int2c();
                    v26 = v41[4]-- == 1LL;
                    if ( v26 )
                      *v41 &= ~8uLL;
                  }
                }
                if ( !*((_QWORD *)v3 + 82) )
                  goto LABEL_75;
LABEL_73:
                v42 = *((_DWORD *)v3 + 156);
                switch ( v42 )
                {
                  case 2:
                    goto LABEL_74;
                  case 4:
                    if ( (v3[1240] & 1) != 0 )
                      v34 |= 0x40u;
LABEL_74:
                    if ( (v34 & 8) != 0 )
                    {
                      v58 = *((_QWORD *)v3 + 6) + 400LL;
                      v59 = RmpPolicyComputeDesiredEmptyState(v58, v3, 0LL) | v34;
                      v34 = RmpPolicyGetDesiredEmptyOptimizationsForHost(v58, (__int64)v3) | v59;
                      if ( RmpPolicyIsHostCommitSaveEligible(
                             (struct _RM_POLICY *)v58,
                             (struct _RM_ACTIVITY_HOST *)v3,
                             v60) )
                      {
                        v34 ^= ((unsigned __int8)v34 ^ (unsigned __int8)(8 * *(_DWORD *)(v58 + 108))) & 0x10;
                      }
                    }
                    break;
                  case 8:
                    goto LABEL_74;
                }
LABEL_75:
                if ( (v3[1244] & 8) == 0
                  && (v34 & 8) != 0
                  && (*((_QWORD *)v5 + 81) & 0x200000000000LL) == 0
                  && !RmpPolicyIsActivityHostSwappable((struct _RM_ACTIVITY_HOST *)v3) )
                {
                  *((_QWORD *)v5 + 81) |= 0x200000000000uLL;
                }
                v43 = *((_DWORD *)v3 + 311);
                if ( v43 == v34 )
                {
                  if ( !v29 || RmpActivityHostCanDelete((struct _RM_ACTIVITY_HOST *)v3) )
                    goto LABEL_78;
                }
                else
                {
                  if ( dword_1800AB2C0 > 4u )
                  {
                    v122 = 8LL;
                    v121 = &v90;
                    v123 = &v87;
                    v87 = v34;
                    v124 = 4LL;
                    *(_DWORD *)&v98.Level = 4;
                    v117.Ptr = (ULONGLONG)off_1800AB2C8;
                    *(_DWORD *)&v98.Id = 184549376;
                    v98.Keyword = 0LL;
                    v117.Size = *(unsigned __int16 *)off_1800AB2C8;
                    v118 = &unk_180094E90;
                    v120 = 1;
                    v117.Reserved = 2;
                    v119 = 51;
                    EventWriteTransfer(RegHandle, &v98, 0LL, 0LL, 4u, &v117);
                    v43 = *((_DWORD *)v3 + 311);
                  }
                  if ( (v43 & v34) == v34 )
                    RmpEnforcementUnoptimizeHost((__int64)v3, ~(_BYTE)v34 & v43);
                  else
                    RmpEnforcementOptimizeHost((__int64)v3, v34 & ~v43);
                  RtlWakeAllConditionVariable(v3 + 1232);
                }
              }
            }
          }
        }
        break;
    }
  }
LABEL_78:
  v44 = (char *)*((_QWORD *)v5 + 75);
  v45 = 0LL;
  if ( v44 != v5 + 600 )
    v45 = v44 - 96;
  while ( v45 )
  {
    if ( v45[548] == 2 )
    {
      if ( v45[549] )
      {
        v69 = HampActTryStart(v45);
        if ( v69 )
        {
          if ( dword_1800AB2C0 > 5u )
          {
            v88 = v69;
            v143 = v45 + 40;
            v145 = &v88;
            v144 = 8LL;
            v146 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180098C26, 0LL, 0LL, 4u, &pData);
          }
        }
      }
    }
    v46 = *((_QWORD *)v45 + 12);
    v47 = *((_QWORD *)v45 + 10);
    v45 = 0LL;
    if ( v46 != v47 + 600 )
      v45 = (char *)(v46 - 96);
  }
  *((_DWORD *)v5 + 160) = 0;
  *((_QWORD *)v5 + 81) &= ~0x400000000uLL;
  v48 = RmpActivityHostCanDelete((struct _RM_ACTIVITY_HOST *)v3);
  if ( HampLockTrackerId != -1 )
  {
    v49 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v49 & 2) == 0 )
      __int2c();
    v26 = v49[2]-- == 1LL;
    if ( v26 )
      *v49 &= ~2uLL;
  }
  *((_DWORD *)v5 + 2) = 0;
  RtlReleaseSRWLockExclusive(v5);
  v26 = *((_QWORD *)v3 + 178) == 0LL;
  *((_DWORD *)v3 + 367) = 0;
  if ( !v26 )
    RmpActivityHostRemoveFromRemediationGroup(v3, 1u);
  v50 = *(_QWORD *)(v94 + 2624);
  v51 = *(_DWORD *)(v50 + 160);
  if ( (v51 & 3) == 0 )
  {
    *(_DWORD *)(v50 + 160) = v51 | 1;
    TpPostWork(*(_QWORD *)(v50 + 144));
  }
  if ( v48 )
    RmpActivityHostDelete((struct _RM_PARTITION **)v3);
  if ( dword_1800AB2C0 > 4u && (byte_1800AB2D0 & 8) != 0 && (qword_1800AB2D8 & 8) == qword_1800AB2D8 )
  {
    v130 = 8LL;
    v129 = &v90;
    v89 = *((_DWORD *)v3 + 311);
    v131 = &v89;
    v132 = 4LL;
    *(_DWORD *)&v99.Level = 516;
    v125.Ptr = (ULONGLONG)off_1800AB2C8;
    *(_DWORD *)&v99.Id = 184549376;
    v99.Keyword = 8LL;
    v125.Size = *(unsigned __int16 *)off_1800AB2C8;
    v126 = &unk_180094E5A;
    v128 = 1;
    v125.Reserved = 2;
    v127 = 42;
    EventWriteTransfer(RegHandle, &v99, 0LL, 0LL, 4u, &v125);
  }
  dword_1800AC208 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v52 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v52 & 1) == 0 )
      __int2c();
    v26 = v52[1]-- == 1LL;
    if ( v26 )
      *v52 &= ~1uLL;
  }
  RtlWakeAllConditionVariable(v3 + 1232);
  v53 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3 + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v54 = v53 <= 1;
  v55 = v53 - 1;
  if ( v54 )
  {
    if ( v55 )
      __fastfail(0xEu);
    v67 = *((_DWORD *)v3 + 10);
    if ( v67 )
    {
      v74 = v67 - 1;
      if ( v74 )
      {
        if ( v74 == 1 && !*((_DWORD *)v3 + 24) && !*((_DWORD *)v3 + 25) )
          NtDeleteWnfStateName(v3 + 96);
      }
      else
      {
        RmpPartitionRelease(*(struct _RM_PARTITION **)v5);
        v75 = (void *)*((_QWORD *)v3 + 9);
        if ( v75 )
          NtClose(v75);
      }
    }
    else
    {
      RmpEmptyWorkerCleanup((struct _RM_EMPTY_WORKER_CONTEXT *)(v3 + 1296));
      v68 = (struct _RM_PARTITION *)*((_QWORD *)v3 + 7);
      if ( v68 )
        RmpPartitionRelease(v68);
      HampHostCleanup((struct _RM_HAM_ACTIVITY_HOST *)v5);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  }
  v56 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v56, 0LL);
  }
}
