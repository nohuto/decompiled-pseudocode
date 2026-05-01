/*
 * XREFs of ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800277F0
 * Callers:
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z @ 0x18000CE6C (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180011FDC (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180018F20 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KPEAU_RM_ACTIVATOR@@PEA_N6PEAPEAVResourceSet@2@@Z @ 0x18001DCA0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x1800229C0 (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180022D20 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180024040 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180026C40 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z @ 0x18002ACA0 (-OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x18002AFF0 (-MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18002BBF0 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002BDDC (-RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x18002C430 (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800390E4 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KK@Z @ 0x18003AFA0 (-HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampHostDelayedEnforcementTimerCallback@@YAXPEAX0@Z @ 0x18003B520 (-HampHostDelayedEnforcementTimerCallback@@YAXPEAX0@Z.c)
 *     ?RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180065828 (-RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180069B28 (-HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18006A5FC (-HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18006A800 (-HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18006DEE8 (-HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 * Callees:
 *     ?HampActIsIgnored@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x1800037C4 (-HampActIsIgnored@@YAKPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017F34 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180028F40 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18002BBCC (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18002C308 (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800499F6 (memcmp_0.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180049ACC (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     ?RmHamEnforcementEmptySignalAbort@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180062C74 (-RmHamEnforcementEmptySignalAbort@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampHostCheckQueueStateWorker(struct _RM_HAM_ACTIVITY_HOST *a1, char a2)
{
  unsigned int v3; // r12d
  int v4; // edi
  __int64 v5; // rdx
  __int64 v7; // rsi
  DWORD v8; // edi
  _QWORD *Value; // rbx
  __int64 v10; // rcx
  bool v11; // zf
  unsigned int v12; // ebx
  DWORD v13; // r14d
  struct _HAM_ACTIVITY *v14; // rdi
  _QWORD *v15; // rdi
  char *v16; // r14
  bool v17; // di
  _QWORD *v18; // rax
  __int64 v19; // rdx
  int v20; // ecx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  int v23; // r14d
  char v24; // di
  unsigned __int64 v25; // r8
  __int64 v26; // r13
  __int128 v27; // xmm1
  unsigned __int64 v28; // r13
  __int128 v29; // xmm1
  struct _HAM_ACTIVITY *FirstActivity; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // ebx
  int v34; // [rsp+30h] [rbp-D0h]
  int v35; // [rsp+34h] [rbp-CCh]
  int v36; // [rsp+34h] [rbp-CCh]
  BOOL v37; // [rsp+38h] [rbp-C8h] BYREF
  BOOL v38; // [rsp+3Ch] [rbp-C4h] BYREF
  int v39; // [rsp+40h] [rbp-C0h] BYREF
  int v40; // [rsp+44h] [rbp-BCh] BYREF
  int v41; // [rsp+48h] [rbp-B8h] BYREF
  char v42[4]; // [rsp+4Ch] [rbp-B4h] BYREF
  struct _HAM_ACTIVITY *v43; // [rsp+50h] [rbp-B0h] BYREF
  struct _HAM_ACTIVITY *v44; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v45; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v46; // [rsp+70h] [rbp-90h]
  __int128 v47; // [rsp+80h] [rbp-80h] BYREF
  __int128 v48; // [rsp+90h] [rbp-70h]
  _BYTE v49[16]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v50; // [rsp+B0h] [rbp-50h]
  __int64 v51; // [rsp+B8h] [rbp-48h]
  _BYTE v52[16]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v53; // [rsp+D0h] [rbp-30h]
  __int64 v54; // [rsp+D8h] [rbp-28h]
  _OWORD Buf2[2]; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD Buf1[2]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v57[2]; // [rsp+120h] [rbp+20h] BYREF
  _OWORD v58[2]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v59[32]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v60[32]; // [rsp+180h] [rbp+80h] BYREF

  v34 = a2 & 1;
  if ( (*((_BYTE *)a1 + 748) & 1) == 0 )
  {
    v3 = 0;
LABEL_3:
    v4 = v34;
    goto LABEL_4;
  }
  v7 = *((_QWORD *)a1 + 83);
  if ( v7 )
  {
    v8 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v8) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
        __int2c();
      *Value |= 8uLL;
      ++Value[4];
    }
    RtlAcquireSRWLockExclusive(v7 + 8);
    v35 = 1;
    *(_DWORD *)(v7 + 16) = GetCurrentThreadId();
    v10 = *((_QWORD *)a1 + 83);
    v11 = *(_DWORD *)(v10 + 92) == 0;
    v37 = *(_QWORD *)(v10 + 104) < *((_QWORD *)a1 + 75);
    v38 = !v11;
  }
  else
  {
    v37 = 0;
    v38 = 0;
    v35 = 0;
  }
  LOWORD(v12) = 0;
  if ( (*((_BYTE *)a1 + 748) & 1) != 0 )
  {
    RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v41, (union _RM_OPTIMIZATION_STATE *)v42);
    v13 = HampLockTrackerId;
    v14 = *(struct _HAM_ACTIVITY **)(*((_QWORD *)a1 + 94) + 88LL);
    v43 = v14;
    if ( HampLockTrackerId != -1 )
    {
      v15 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v13) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
        __int2c();
      *v15 |= 0x40uLL;
      ++v15[7];
      v14 = v43;
    }
    v16 = (char *)v14 + 304;
    RtlAcquireSRWLockShared((char *)v14 + 304);
    v17 = (*((_DWORD *)v14 + 85) & 2) != 0;
    if ( HampLockTrackerId != -1 )
    {
      v18 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v18 & 0x40) == 0 )
        __int2c();
      v11 = v18[7]-- == 1LL;
      if ( v11 )
        *v18 &= ~0x40uLL;
    }
    RtlReleaseSRWLockShared(v16);
    if ( !v17 )
      goto LABEL_34;
    v19 = *((_QWORD *)a1 + 79);
    if ( (v19 & 0x20000000000000LL) != 0 )
      goto LABEL_34;
    if ( (v41 & 0x80u) != 0 || (v20 = 1, v42[0] < 0) )
      v20 = 0;
    if ( (v19 & 0x30000) != 0 || !v20 )
    {
LABEL_34:
      if ( v37 )
      {
        LOWORD(v12) = v41 & 0x188;
      }
      else
      {
        v21 = *((_QWORD *)a1 + 79);
        if ( (v21 & 0x10000000000LL) != 0 )
        {
          if ( v38 )
            LOWORD(v12) = v41;
        }
        else
        {
          if ( v7 && *(_DWORD *)(v7 + 88) )
            v12 = v41 & 0x100 | 0x80;
          else
            v12 = 384;
          if ( (v21 & 0x80000000000LL) == 0 )
            v12 |= (v12 >> 5) & 8;
        }
      }
    }
  }
  if ( v35 )
  {
    *(_DWORD *)(v7 + 16) = 0;
    RtlReleaseSRWLockExclusive(v7 + 8);
    if ( HampLockTrackerId != -1 )
    {
      v22 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v22 & 8) == 0 )
        __int2c();
      v11 = v22[4]-- == 1LL;
      if ( v11 )
        *v22 &= ~8uLL;
    }
  }
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v39, (union _RM_OPTIMIZATION_STATE *)&v40);
  v23 = v39 & 0x188;
  v24 = v40 & 0x88;
  if ( (v12 & 0x188) != v23 )
    goto LABEL_70;
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v38, (union _RM_OPTIMIZATION_STATE *)&v37);
  v25 = *((_QWORD *)a1 + 79);
  if ( ((v25 >> 16) & 3) != 0 )
  {
    switch ( (*((_QWORD *)a1 + 79) >> 16) & 3LL )
    {
      case 1LL:
        if ( v38 >= 0 || v37 < 0 || (v25 & 0x40000000000LL) != 0 )
          break;
        FirstActivity = HampHostGetFirstActivity(a1);
        if ( !FirstActivity )
          goto LABEL_70;
        while ( 1 )
        {
          if ( !HampActIsIgnored(FirstActivity) )
          {
            LOBYTE(v31) = 4;
            if ( (unsigned int)HampActIsStartedOrReachedPendState(v32, v31) )
            {
              if ( (*(_DWORD *)(v32 + 112) & 0x2000) != 0 )
                break;
            }
          }
          FirstActivity = HampHostGetNextActivity((struct _HAM_ACTIVITY *)v32);
          if ( !FirstActivity )
            goto LABEL_70;
        }
        break;
      case 2LL:
        if ( (v25 & 0x10000000000000LL) == 0 )
          goto LABEL_70;
        break;
      case 3LL:
LABEL_70:
        v26 = *((_QWORD *)a1 + 79);
        v34 = 1;
        goto LABEL_71;
      default:
        break;
    }
  }
  if ( (v25 & 0x10000000000000LL) != 0 )
    goto LABEL_70;
  if ( (v25 & 0x80000000000000LL) != 0 )
    goto LABEL_70;
  if ( (v25 & 0x40000000000000LL) != 0 )
    goto LABEL_70;
  HampHostComputeStaticEnforcementSettings(
    a1,
    (struct _RM_ENFORCEMENT_SETTINGS *)&v45,
    (struct _RM_COMMIT_THRESHOLDS *)v59,
    (struct _RM_COMMIT_THRESHOLDS *)v49,
    &v43);
  v26 = *((_QWORD *)a1 + 79);
  if ( (v26 & 0x100000000000000LL) != 0 && (SDWORD2(v46) >= 2 || (BYTE12(v46) & 0x70) != 0 || (BYTE12(v46) & 8) != 0) )
    goto LABEL_70;
  if ( *((struct _HAM_ACTIVITY **)a1 + 122) != v43 )
    goto LABEL_70;
  v27 = *(_OWORD *)((char *)a1 + 1064);
  Buf1[0] = 0uLL;
  Buf1[1] = v27;
  Buf2[0] = 0uLL;
  Buf2[1] = v46;
  if ( memcmp_0(Buf1, Buf2, 0x20uLL)
    || v51 != *((_QWORD *)a1 + 103)
    || v50 != *((_QWORD *)a1 + 104)
    || memcmp_0(v59, (char *)a1 + 848, 0x20uLL) )
  {
    goto LABEL_70;
  }
LABEL_71:
  if ( (v26 & 0x10000000000000LL) == 0 || (v26 & 0xE0000000) == 0 || (v36 = 1, (v26 & 0xE0000000) == 0xA0000000LL) )
    v36 = 0;
  if ( (v26 & 0x80000000000000LL) != 0
    || (v26 & 0x40000000000000LL) != 0
    || (HampHostComputeStaticEnforcementSettings(
          a1,
          (struct _RM_ENFORCEMENT_SETTINGS *)&v47,
          (struct _RM_COMMIT_THRESHOLDS *)v60,
          (struct _RM_COMMIT_THRESHOLDS *)v52,
          &v44),
        v28 = *((_QWORD *)a1 + 79),
        (v28 & 0x100000000000000LL) != 0)
    && (SDWORD2(v48) >= 2 || (BYTE12(v48) & 0x70) != 0 || (BYTE12(v48) & 8) != 0)
    || *((struct _HAM_ACTIVITY **)a1 + 122) != v44
    || (v29 = *(_OWORD *)((char *)a1 + 1064),
        v58[0] = 0uLL,
        v58[1] = v29,
        v57[0] = 0uLL,
        v57[1] = v48,
        memcmp_0(v58, v57, 0x20uLL))
    || v54 != *((_QWORD *)a1 + 103)
    || v53 != *((_QWORD *)a1 + 104)
    || memcmp_0(v60, (char *)a1 + 848, 0x20uLL) )
  {
    v3 = 1;
    v33 = 1;
  }
  else
  {
    if ( (v12 & 0x80u) != 0 || ((v23 | v24) & 0x80u) == 0 )
    {
      if ( (v12 & 8) == 0 && ((v39 & 8) != 0 || (v40 & 8) != 0) )
        v3 = 1;
      else
        v3 = (v28 >> 52) & 1;
    }
    else
    {
      v3 = 1;
    }
    v33 = v36;
    if ( !v36 && !v3 )
      goto LABEL_3;
  }
  v4 = v34;
  if ( !v34 )
    return v3;
  if ( (*((_BYTE *)a1 + 1128) & 0x27) != 0 )
    RmHamEnforcementEmptySignalAbort(a1);
  if ( v33 )
    RtlWakeAllConditionVariable((char *)a1 + 656);
LABEL_4:
  if ( v4 )
  {
    v5 = *((_QWORD *)a1 + 79);
    if ( (v5 & 0x400000000LL) == 0 )
    {
      *((_QWORD *)a1 + 79) = v5 | 0x400000000LL;
      if ( _InterlockedIncrement64((volatile signed __int64 *)a1 - 6) <= 1 )
        __fastfail(0xEu);
      TpPostWork(*((_QWORD *)a1 + 77));
    }
  }
  return v3;
}
