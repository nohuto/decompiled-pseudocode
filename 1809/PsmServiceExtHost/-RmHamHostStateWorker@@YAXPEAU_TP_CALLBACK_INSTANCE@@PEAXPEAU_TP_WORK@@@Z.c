/*
 * XREFs of ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180024E90
 * Callers:
 *     <none>
 * Callees:
 *     ?HampActIsIgnored@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x1800037C4 (-HampActIsIgnored@@YAKPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?RmpActivityHostFinalCleanup@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800082CC (-RmpActivityHostFinalCleanup@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800083F0 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000CA50 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E910 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18001041C (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180011058 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017F34 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800184EC (-RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU.c)
 *     ?RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180024860 (-RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x1800248E0 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025B20 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180029CD0 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18002BBCC (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18002C308 (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002CAF0 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DABC (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyIsActivityHostSwappable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180036EAC (-RmpPolicyIsActivityHostSwappable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180038530 (-RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800391FC (-RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180049ACC (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x18005B9D0 (-RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     ?RmpSystemCloseHandle@@YAXPEAX@Z @ 0x18006621C (-RmpSystemCloseHandle@@YAXPEAX@Z.c)
 *     ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180069548 (-HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmHamHostStateWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  char *v3; // rsi
  DWORD v4; // ebx
  char *v5; // r14
  __int64 v6; // rax
  int v7; // r12d
  DWORD v8; // edi
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v11; // edi
  _QWORD *v12; // rbx
  __int64 v13; // rbx
  char *v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // edx
  unsigned __int64 v19; // r8
  struct _HAM_ACTIVITY *FirstActivity; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int IsSuspendWaiter; // eax
  unsigned int v24; // ebx
  int v25; // eax
  __int64 v26; // r13
  DWORD v27; // edi
  _QWORD *v28; // rbx
  __int64 v29; // rcx
  BOOL v30; // r15d
  unsigned int v31; // ebx
  __int64 v32; // rax
  DWORD v33; // esi
  __int64 v34; // r14
  _QWORD *v35; // rdi
  int v36; // esi
  _QWORD *v37; // rax
  bool v38; // zf
  unsigned __int64 v39; // rdx
  int v40; // ecx
  _QWORD *v41; // rax
  int v42; // eax
  int v43; // edi
  __int64 v44; // r14
  int v45; // esi
  __int16 v46; // cx
  int v47; // eax
  unsigned int v48; // r8d
  int v49; // edx
  __int64 v50; // rbx
  char *v51; // rcx
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  BOOL v55; // ebx
  _QWORD *v56; // rax
  __int64 v57; // rcx
  int v58; // eax
  _QWORD *v59; // rax
  signed __int64 v60; // rax
  bool v61; // cc
  signed __int64 v62; // rax
  int v63; // ecx
  int v64; // ecx
  void *v65; // rcx
  DWORD v66; // ebx
  unsigned int v68; // [rsp+38h] [rbp-C8h]
  int v69; // [rsp+3Ch] [rbp-C4h]
  int v70; // [rsp+40h] [rbp-C0h] BYREF
  int v71; // [rsp+44h] [rbp-BCh] BYREF
  char v72[4]; // [rsp+48h] [rbp-B8h] BYREF
  char v73[4]; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v74; // [rsp+50h] [rbp-B0h] BYREF
  char v75[4]; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v76; // [rsp+58h] [rbp-A8h] BYREF
  int v77; // [rsp+5Ch] [rbp-A4h] BYREF
  int v78; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v79; // [rsp+68h] [rbp-98h] BYREF
  __int64 v80; // [rsp+70h] [rbp-90h] BYREF
  __int64 v81; // [rsp+78h] [rbp-88h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR v83; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DESCRIPTOR v84; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE TlsValue[144]; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+140h] [rbp+40h] BYREF
  void *v87; // [rsp+150h] [rbp+50h]
  int v88; // [rsp+158h] [rbp+58h]
  int v89; // [rsp+15Ch] [rbp+5Ch]
  __int64 *v90; // [rsp+160h] [rbp+60h]
  __int64 v91; // [rsp+168h] [rbp+68h]
  int *v92; // [rsp+170h] [rbp+70h]
  __int64 v93; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v94; // [rsp+180h] [rbp+80h] BYREF
  void *v95; // [rsp+190h] [rbp+90h]
  int v96; // [rsp+198h] [rbp+98h]
  int v97; // [rsp+19Ch] [rbp+9Ch]
  __int64 *v98; // [rsp+1A0h] [rbp+A0h]
  __int64 v99; // [rsp+1A8h] [rbp+A8h]
  unsigned int *v100; // [rsp+1B0h] [rbp+B0h]
  __int64 v101; // [rsp+1B8h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v102; // [rsp+1C0h] [rbp+C0h] BYREF
  void *v103; // [rsp+1D0h] [rbp+D0h]
  int v104; // [rsp+1D8h] [rbp+D8h]
  int v105; // [rsp+1DCh] [rbp+DCh]
  __int64 *v106; // [rsp+1E0h] [rbp+E0h]
  __int64 v107; // [rsp+1E8h] [rbp+E8h]
  int *v108; // [rsp+1F0h] [rbp+F0h]
  __int64 v109; // [rsp+1F8h] [rbp+F8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+200h] [rbp+100h] BYREF
  __int64 v111; // [rsp+220h] [rbp+120h]
  __int64 v112; // [rsp+228h] [rbp+128h]
  int *v113; // [rsp+230h] [rbp+130h]
  __int64 v114; // [rsp+238h] [rbp+138h]
  EVENT_DATA_DESCRIPTOR v115; // [rsp+240h] [rbp+140h] BYREF
  __int64 v116; // [rsp+260h] [rbp+160h]
  __int64 v117; // [rsp+268h] [rbp+168h]
  int *v118; // [rsp+270h] [rbp+170h]
  __int64 v119; // [rsp+278h] [rbp+178h]

  v3 = a2;
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
  v7 = 0;
  v81 = *((_QWORD *)v3 + 6);
  v79 = v6;
  if ( hProvider > 4u )
  {
    v91 = 8LL;
    v90 = &v79;
    v70 = *((_DWORD *)v3 + 297);
    v92 = &v70;
    v93 = 4LL;
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_18009B0F8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180086F4E - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_18009B0F8;
    v87 = &unk_180086F59;
    UserData.Reserved = 2;
    v88 = 42;
    v89 = 1;
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
  dword_18009BF18 = CurrentThreadId;
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
  *((_DWORD *)v3 + 172) = GetCurrentThreadId();
  while ( *((int *)v3 + 6) >= 0 )
  {
    v13 = 0LL;
    v14 = (char *)*((_QWORD *)v5 + 73);
    if ( v14 != v5 + 584 )
      v13 = (__int64)(v14 - 96);
    while ( v13 )
    {
      if ( *(_BYTE *)(v13 + 548) == 2 )
      {
        if ( *(_BYTE *)(v13 + 549) )
        {
          v15 = HampActTryStart(v13);
          if ( v15 )
          {
            if ( hProvider > 5u )
            {
              v71 = v15;
              v111 = v13 + 40;
              v113 = &v71;
              v112 = 8LL;
              v114 = 4LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008B0D3, 0LL, 0LL, 4u, &pData);
            }
          }
        }
      }
      v16 = *(_QWORD *)(v13 + 96);
      v17 = *(_QWORD *)(v13 + 80);
      v13 = 0LL;
      if ( v16 != v17 + 584 )
        v13 = v16 - 96;
    }
    RmHamHostGetCurrentState(
      (struct _RM_HAM_ACTIVITY_HOST *)v5,
      (union _RM_OPTIMIZATION_STATE *)v72,
      (union _RM_OPTIMIZATION_STATE *)v73);
    v19 = *((_QWORD *)v5 + 79);
    if ( ((v19 >> 16) & 3) == 0 )
      goto LABEL_32;
    switch ( (*((_QWORD *)v5 + 79) >> 16) & 3LL )
    {
      case 1LL:
        if ( v72[0] >= 0 || v73[0] < 0 || (v19 & 0x40000000000LL) != 0 )
          goto LABEL_32;
        FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)v5);
        if ( FirstActivity )
        {
          while ( 1 )
          {
            if ( !HampActIsIgnored(FirstActivity) )
            {
              LOBYTE(v21) = 4;
              if ( (unsigned int)HampActIsStartedOrReachedPendState(v22, v21) )
              {
                if ( (*(_DWORD *)(v22 + 112) & 0x2000) != 0 )
                  goto LABEL_32;
              }
            }
            FirstActivity = HampHostGetNextActivity((struct _HAM_ACTIVITY *)v22);
            if ( !FirstActivity )
              goto LABEL_44;
          }
        }
        goto LABEL_44;
      case 2LL:
        if ( (v19 & 0x10000000000000LL) != 0 )
          goto LABEL_32;
LABEL_44:
        if ( (v19 & 0x800000000LL) == 0 )
        {
          IsSuspendWaiter = HampHostIsSuspendWaiter((struct _RM_HAM_ACTIVITY_HOST *)v5, v18);
          *((_QWORD *)v5 + 79) |= 0x800000000uLL;
          v24 = IsSuspendWaiter;
          if ( _InterlockedIncrement64((volatile signed __int64 *)v3 + 2) <= 1 )
            __fastfail(0xEu);
          TpPostWork(*((_QWORD *)v5 + 76));
          HampHostCheckUpdateSuspendWaitState((struct _RM_HAM_ACTIVITY_HOST *)v5, v24);
          v19 = *((_QWORD *)v3 + 87);
        }
        if ( (v19 & 0x30000) != 0 )
        {
          do
          {
            v80 = *((_QWORD *)v5 + 97);
            HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v5);
            RmpReleaseGlobalLock();
            RtlWaitOnAddress(v5 + 776, &v80, 8LL);
            RmpAcquireGlobalLock();
            HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v5, 0);
          }
          while ( (*((_DWORD *)v5 + 158) & 0x30000) != 0 );
        }
        break;
      case 3LL:
        goto LABEL_44;
      default:
LABEL_32:
        if ( (v19 & 0x10000000000000LL) != 0 )
        {
          HampHostCollectErrorReport((struct _RM_HAM_ACTIVITY_HOST *)v5);
        }
        else
        {
          v25 = *((_DWORD *)v3 + 203);
          if ( (v25 & 1) != 0 )
          {
            v68 = HampHostCheckUpdateEnforcementSettings((struct _RM_HAM_ACTIVITY_HOST *)v5);
            v25 = *((_DWORD *)v3 + 203);
          }
          else
          {
            v68 = 0;
          }
          if ( (v25 & 1) != 0 )
          {
            v26 = *((_QWORD *)v3 + 91);
            if ( v26 )
            {
              v27 = HampLockTrackerId;
              if ( HampLockTrackerId != -1 )
              {
                v28 = TlsGetValue(HampLockTrackerId);
                if ( (*(_QWORD *)TlsGetValue(v27) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
                  __int2c();
                *v28 |= 8uLL;
                ++v28[4];
              }
              RtlAcquireSRWLockExclusive(v26 + 8);
              v69 = 1;
              *(_DWORD *)(v26 + 16) = GetCurrentThreadId();
              v29 = *((_QWORD *)v3 + 91);
              v30 = *(_QWORD *)(v29 + 104) < *((_QWORD *)v3 + 83);
              LOBYTE(v7) = *(_DWORD *)(v29 + 92) != 0;
            }
            else
            {
              v30 = 0;
              v69 = 0;
            }
            v31 = 0;
            if ( (v3[812] & 1) != 0 )
            {
              RmHamHostGetCurrentState(
                (struct _RM_HAM_ACTIVITY_HOST *)v5,
                (union _RM_OPTIMIZATION_STATE *)&v74,
                (union _RM_OPTIMIZATION_STATE *)v75);
              v32 = *((_QWORD *)v3 + 102);
              v33 = HampLockTrackerId;
              v34 = *(_QWORD *)(v32 + 88);
              if ( HampLockTrackerId != -1 )
              {
                v35 = TlsGetValue(HampLockTrackerId);
                if ( (*(_QWORD *)TlsGetValue(v33) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
                  __int2c();
                *v35 |= 0x40uLL;
                ++v35[7];
              }
              RtlAcquireSRWLockShared(v34 + 304);
              v36 = *(_DWORD *)(v34 + 340);
              if ( HampLockTrackerId != -1 )
              {
                v37 = TlsGetValue(HampLockTrackerId);
                if ( (*(_BYTE *)v37 & 0x40) == 0 )
                  __int2c();
                v38 = v37[7]-- == 1LL;
                if ( v38 )
                  *v37 &= ~0x40uLL;
              }
              RtlReleaseSRWLockShared(v34 + 304);
              v39 = *((_QWORD *)a2 + 87);
              if ( (v36 & 2) == 0
                || ((v39 >> 53) & 1) != 0
                || ((v74 & 0x80u) != 0 || v75[0] < 0 ? (v40 = 0) : (v40 = 1), (v39 & 0x30000) != 0 || !v40) )
              {
                if ( v30 )
                {
                  v31 = v74 & 0x188;
                  goto LABEL_91;
                }
                if ( (v39 & 0x10000000000LL) == 0 )
                {
                  if ( v26 && *(_DWORD *)(v26 + 88) )
                    v31 = v74 & 0x100 | 0x80;
                  else
                    v31 = 384;
                  v3 = a2;
                  if ( (v39 & 0x80000000000LL) == 0 )
                    v31 |= (v31 >> 5) & 8;
                  goto LABEL_92;
                }
                if ( v7 )
                  v31 = v74;
              }
LABEL_91:
              v3 = a2;
            }
LABEL_92:
            v7 = 0;
            if ( v69 )
            {
              *(_DWORD *)(v26 + 16) = 0;
              RtlReleaseSRWLockExclusive(v26 + 8);
              if ( HampLockTrackerId != -1 )
              {
                v41 = TlsGetValue(HampLockTrackerId);
                if ( (*(_BYTE *)v41 & 8) == 0 )
                  __int2c();
                v38 = v41[4]-- == 1LL;
                if ( v38 )
                  *v41 &= ~8uLL;
              }
            }
            if ( !*((_QWORD *)v3 + 80) )
              goto LABEL_114;
            goto LABEL_101;
          }
          v31 = 0;
          if ( !RmpActivityHostGetResourceSetCount((struct _RM_ACTIVITY_HOST *)v3, 3u) )
            goto LABEL_114;
LABEL_101:
          v42 = *((_DWORD *)v3 + 156);
          if ( v42 != 2 )
          {
            if ( v42 == 4 )
            {
              if ( (v3[1184] & 1) != 0 )
                v31 |= 0x40u;
            }
            else if ( v42 != 8 )
            {
              goto LABEL_114;
            }
          }
          if ( (v31 & 8) == 0 )
            goto LABEL_119;
          v43 = 0;
          v44 = *((_QWORD *)v3 + 6);
          v45 = *((_DWORD *)v3 + 297);
          v46 = *((_WORD *)a2 + 704);
          if ( (v45 & 0x10) == 0 && (v46 & 0x200) == 0 )
          {
            v47 = *(_DWORD *)(v44 + 504);
            v43 = 2 * (v47 & 1);
            if ( (v46 & 0x100) == 0 )
              v43 |= 2 * (v47 & 2);
          }
          v31 |= RmpPolicyGetDesiredEmptyOptimizationsForHost(v44 + 400, (__int64)a2) | v43 | v45 & 0x27;
          v3 = a2;
          if ( RmpPolicyIsHostCommitSaveEligible((struct _RM_POLICY *)(v44 + 400), (struct _RM_ACTIVITY_HOST *)a2, v48) )
            v31 ^= ((unsigned __int8)v31 ^ (unsigned __int8)(8 * *(_DWORD *)(v44 + 508))) & 0x10;
LABEL_114:
          if ( (v31 & 8) != 0 )
          {
            v5 = v3 + 64;
            if ( (v3[1188] & 8) == 0
              && (*((_QWORD *)v3 + 87) & 0x200000000000LL) == 0
              && !RmpPolicyIsActivityHostSwappable((struct _RM_ACTIVITY_HOST *)v3) )
            {
              *((_QWORD *)v3 + 87) |= 0x200000000000uLL;
            }
            goto LABEL_120;
          }
LABEL_119:
          v5 = v3 + 64;
LABEL_120:
          v49 = *((_DWORD *)v3 + 297);
          if ( v49 == v31 )
          {
            if ( !v68 || RmpActivityHostCanDelete((struct _RM_ACTIVITY_HOST *)v3) )
              goto LABEL_123;
          }
          else
          {
            if ( hProvider > 4u )
            {
              v99 = 8LL;
              v98 = &v79;
              v100 = &v76;
              v76 = v31;
              v101 = 4LL;
              *(_DWORD *)&v83.Level = 4;
              v94.Ptr = (ULONGLONG)off_18009B0F8;
              *(_DWORD *)&v83.Id = ((unsigned int)&unk_180086FF2 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
              v83.Keyword = 0LL;
              v94.Size = *(unsigned __int16 *)off_18009B0F8;
              v95 = &unk_180086FFD;
              v94.Reserved = 2;
              v96 = 51;
              v97 = 1;
              EventWriteTransfer(RegHandle, &v83, 0LL, 0LL, 4u, &v94);
              v49 = *((_DWORD *)v3 + 297);
            }
            if ( (v31 & v49) == v31 )
              RmpEnforcementUnoptimizeHost((__int64)v3, ~(_BYTE)v31 & v49);
            else
              RmpEnforcementOptimizeHost((__int64)v3, v31 & ~v49);
            RtlWakeAllConditionVariable(v3 + 1176);
          }
        }
        break;
    }
  }
LABEL_123:
  v50 = 0LL;
  v51 = (char *)*((_QWORD *)v5 + 73);
  if ( v51 != v5 + 584 )
    v50 = (__int64)(v51 - 96);
  while ( v50 )
  {
    if ( *(_BYTE *)(v50 + 548) == 2 )
    {
      if ( *(_BYTE *)(v50 + 549) )
      {
        v52 = HampActTryStart(v50);
        if ( v52 )
        {
          if ( hProvider > 5u )
          {
            v77 = v52;
            v116 = v50 + 40;
            v118 = &v77;
            v117 = 8LL;
            v119 = 4LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008B0D3, 0LL, 0LL, 4u, &v115);
          }
        }
      }
    }
    v53 = *(_QWORD *)(v50 + 96);
    v54 = *(_QWORD *)(v50 + 80);
    v50 = 0LL;
    if ( v53 != v54 + 584 )
      v50 = v53 - 96;
  }
  *((_DWORD *)v5 + 156) = 0;
  *((_QWORD *)v5 + 79) &= ~0x400000000uLL;
  v55 = RmpActivityHostCanDelete((struct _RM_ACTIVITY_HOST *)v3);
  if ( HampLockTrackerId != -1 )
  {
    v56 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v56 & 2) == 0 )
      __int2c();
    v38 = v56[2]-- == 1LL;
    if ( v38 )
      *v56 &= ~2uLL;
  }
  *((_DWORD *)v5 + 2) = 0;
  RtlReleaseSRWLockExclusive(v5);
  v38 = *((_QWORD *)v3 + 171) == 0LL;
  *((_DWORD *)v3 + 353) = 0;
  if ( !v38 )
    RmpActivityHostRemoveFromRemediationGroup((struct _RM_ACTIVITY_HOST *)v3, 1u);
  v57 = *(_QWORD *)(v81 + 2688);
  v58 = *(_DWORD *)(v57 + 184);
  if ( (v58 & 3) == 0 )
  {
    *(_DWORD *)(v57 + 184) = v58 | 1;
    TpPostWork(*(_QWORD *)(v57 + 168));
  }
  if ( v55 )
    RmpActivityHostDelete((struct _RM_ACTIVITY_HOST *)v3);
  if ( hProvider > 4u && (byte_18009B100 & 8) != 0 && (qword_18009B108 & 8) == qword_18009B108 )
  {
    v107 = 8LL;
    v106 = &v79;
    v78 = *((_DWORD *)v3 + 297);
    v108 = &v78;
    v109 = 4LL;
    *(_DWORD *)&v84.Level = 516;
    v102.Ptr = (ULONGLONG)off_18009B0F8;
    *(_DWORD *)&v84.Id = ((unsigned int)&unk_180087031 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v84.Keyword = 8LL;
    v102.Size = *(unsigned __int16 *)off_18009B0F8;
    v103 = &unk_18008703C;
    v102.Reserved = 2;
    v104 = 42;
    v105 = 1;
    EventWriteTransfer(RegHandle, &v84, 0LL, 0LL, 4u, &v102);
  }
  dword_18009BF18 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v59 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v59 & 1) == 0 )
      __int2c();
    v38 = v59[1]-- == 1LL;
    if ( v38 )
      *v59 &= ~1uLL;
  }
  RtlWakeAllConditionVariable(v3 + 1176);
  v60 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3 + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v61 = v60 <= 1;
  v62 = v60 - 1;
  if ( v61 )
  {
    if ( v62 )
      __fastfail(0xEu);
    v63 = *((_DWORD *)v3 + 10);
    if ( v63 )
    {
      v64 = v63 - 1;
      if ( v64 )
      {
        if ( v64 == 1 && !*((_DWORD *)v3 + 24) && !*((_DWORD *)v3 + 25) )
          NtDeleteWnfStateName(v3 + 96);
      }
      else
      {
        RmpPartitionRelease(*(HANDLE **)v5);
        v65 = (void *)*((_QWORD *)v3 + 9);
        if ( v65 )
          RmpSystemCloseHandle(v65);
      }
    }
    else
    {
      RmpActivityHostFinalCleanup((struct _RM_ACTIVITY_HOST *)v3);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  }
  v66 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v66, 0LL);
  }
}
