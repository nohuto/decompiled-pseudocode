/*
 * XREFs of ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x18002C430
 * Callers:
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z @ 0x18000CE6C (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z.c)
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18001041C (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180024040 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025B20 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180026C40 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KK@Z @ 0x18002D75C (-HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KK@.c)
 *     ?HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18002E1E0 (-HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KK@Z @ 0x18003AFA0 (-HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampHostCommitQuiesceAction@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_HOST_QUIESCE_STATE@@@Z @ 0x18003C004 (-HampHostCommitQuiesceAction@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_HOST_QUIESCE_STATE@@@Z.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18005BA38 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 *     ?HamSrvTerminateHostForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HAM_TERMINATE_REASON@@@Z @ 0x180068384 (-HamSrvTerminateHostForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180068774 (-HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180068FC0 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x18006A298 (-HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMI.c)
 *     ?HampHostTryEnterConnectedStandby@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18006A3CC (-HampHostTryEnterConnectedStandby@@YA-AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18006B870 (-HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@.c)
 * Callees:
 *     ?HampActRequestStopForTerminate@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180005844 (-HampActRequestStopForTerminate@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000CA50 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z @ 0x18000D4F0 (-HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E910 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F4FC (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F540 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017F34 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180023DD0 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800277F0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180029CD0 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18002BBCC (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z @ 0x18002C7DC (-HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002CAF0 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x18002CDB0 (-HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002F5C4 (-HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall HampHostQueueTerminateEx(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6)
{
  int v6; // r12d
  int v7; // r15d
  unsigned __int64 v8; // rbx
  struct _RM_HAM_ACTIVITY_HOST *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rsi
  unsigned int v13; // edx
  struct _HAM_ACTIVITY *FirstActivity; // r14
  unsigned int IsSuspendWaiter; // eax
  int v16; // ebx
  unsigned __int64 v17; // rcx
  int v18; // r14d
  unsigned int v19; // ebx
  __int64 v20; // r9
  int v21; // r10d
  unsigned __int8 v23; // r12
  __int64 v24; // rcx
  int v25; // ebx
  unsigned __int8 v26; // cl
  struct _RM_HAM_ACTIVITY_HOST *v27; // rax
  struct _RM_HAM_ACTIVITY_HOST *v28; // rax
  unsigned __int8 v29; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v30[3]; // [rsp+31h] [rbp-CFh] BYREF
  unsigned int v31; // [rsp+34h] [rbp-CCh] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v32; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v33; // [rsp+40h] [rbp-C0h]
  __int64 v34; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int8 *v38; // [rsp+90h] [rbp-70h]
  int v39; // [rsp+98h] [rbp-68h]
  int v40; // [rsp+9Ch] [rbp-64h]
  __int64 *v41; // [rsp+A0h] [rbp-60h]
  int v42; // [rsp+A8h] [rbp-58h]
  int v43; // [rsp+ACh] [rbp-54h]
  struct _RM_HAM_ACTIVITY_HOST **v44; // [rsp+B0h] [rbp-50h]
  int v45; // [rsp+B8h] [rbp-48h]
  int v46; // [rsp+BCh] [rbp-44h]
  _BYTE *v47; // [rsp+C0h] [rbp-40h]
  int v48; // [rsp+C8h] [rbp-38h]
  int v49; // [rsp+CCh] [rbp-34h]
  unsigned int *v50; // [rsp+D0h] [rbp-30h]
  int v51; // [rsp+D8h] [rbp-28h]
  int v52; // [rsp+DCh] [rbp-24h]
  char *v53; // [rsp+E0h] [rbp-20h]
  int v54; // [rsp+E8h] [rbp-18h]
  int v55; // [rsp+ECh] [rbp-14h]

  v6 = a5;
  v7 = 0;
  v8 = a2;
  v31 = a3;
  v10 = a1;
  v33 = a2;
  v32 = a1;
  if ( !a5 )
  {
    v7 = 1;
    HampHostAcquireLockExclusiveEx(a1, 0);
  }
  v11 = *((_QWORD *)v10 + 79);
  v12 = *((_QWORD *)v10 + 83);
  v34 = v12;
  if ( (BYTE2(v11) & 3u) >= v8 )
  {
    if ( hProvider > 5u )
    {
      v27 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)v10 - 4);
      pDesc.Reserved = 0;
      v40 = 0;
      v43 = 0;
      v32 = v27;
      pDesc.Ptr = (ULONGLONG)&v32;
      v38 = &v29;
      v41 = (__int64 *)v30;
      pDesc.Size = 8;
      v29 = v8;
      v39 = 1;
      v30[0] = BYTE2(v11) & 3;
      v42 = 1;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008AA51, 0LL, 0LL, 5u, &pData);
    }
    goto LABEL_34;
  }
  if ( (v11 & 0x800000000LL) != 0 )
  {
    if ( hProvider > 5u )
    {
      v28 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)v10 - 4);
      pDesc.Reserved = 0;
      v32 = v28;
      pDesc.Ptr = (ULONGLONG)&v32;
      pDesc.Size = 8;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008B172, 0LL, 0LL, 3u, &pData);
    }
    goto LABEL_34;
  }
  v29 = 80;
  FirstActivity = HampHostGetFirstActivity(v10);
  if ( FirstActivity )
  {
    v23 = 80;
    do
    {
      if ( HampActCanBeInvalidated(FirstActivity) && *((_BYTE *)FirstActivity + 548) == 3 )
      {
        v25 = HIBYTE(*((_DWORD *)FirstActivity + 106));
        HampActRequestStopForTerminate(v24, v33, v31, a4);
        v26 = v25;
        if ( v23 < (unsigned __int8)v25 )
          v26 = v23;
        v23 = v26;
      }
      FirstActivity = HampHostGetNextActivity(FirstActivity);
    }
    while ( FirstActivity );
    v10 = v32;
    v12 = v34;
    v29 = v23;
    v6 = a5;
  }
  IsSuspendWaiter = HampHostIsSuspendWaiter(v10, v13);
  *((_QWORD *)v10 + 79) &= 0xFFFFFFFFFFFCFFFFuLL;
  v16 = IsSuspendWaiter;
  LOWORD(IsSuspendWaiter) = v31;
  *((_QWORD *)v10 + 79) |= (unsigned __int64)(v33 & 3) << 16;
  v17 = (unsigned __int64)v29 << 18;
  *((_WORD *)v10 + 316) = IsSuspendWaiter;
  *((_QWORD *)v10 + 79) &= 0xFFFFFFFFFC03FFFFuLL;
  *((_QWORD *)v10 + 79) |= v17;
  RtlQueryUnbiasedInterruptTime(&v32);
  *((_DWORD *)v10 + 203) = (unsigned __int64)v32 / 0x2710;
  *((_DWORD *)v10 + 204) = a6;
  HampHostCheckUpdateSuspendWaitState(v10, v16);
  if ( v33 == 2 )
  {
    *((_QWORD *)v10 + 79) |= 0x10000000000000uLL;
    if ( *((_DWORD *)v10 + 156) != GetCurrentThreadId() )
      HampHostCheckQueueStateWorker(v10, 0);
  }
  else
  {
    HampHostCheckQueueTerminateWorker(v10, 0);
  }
  if ( a4 )
    v18 = *(_DWORD *)(a4 + 136);
  else
    v18 = 0;
  if ( v12 )
  {
    if ( v6 == 2 )
    {
      ++*(_QWORD *)(v12 + 112);
      v19 = 0;
      goto LABEL_14;
    }
    HampDepGroupAcquireLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v12);
    if ( v6 == 3 )
    {
      HampDepGroupQueueWorker((struct _HAM_DEPENDENCY_GROUP *)v12);
      v19 = 0;
    }
    else
    {
      v19 = HampDepGroupTryEnterStateChange((struct _HAM_DEPENDENCY_GROUP *)v12, (unsigned __int64 *)v10 + 75);
    }
    HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v12);
  }
  else
  {
    v19 = 0;
  }
  if ( v6 != 2 )
    HampHostCheckQueueStateWorker(v10, 0);
LABEL_14:
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000008uLL) )
  {
    TlgCreateWsz(&pDesc, (LPCWSTR)v10 + 12);
    v20 = *((_QWORD *)v10 - 4);
    v40 = 0;
    v43 = 0;
    v46 = 0;
    v49 = 0;
    v52 = 0;
    v55 = 0;
    v38 = (unsigned __int8 *)&v35;
    LODWORD(v34) = *((_DWORD *)v10 + 140);
    v41 = &v34;
    v44 = &v32;
    v30[0] = v33;
    v47 = v30;
    v50 = &v31;
    v53 = (char *)v10 + 776;
    v35 = v20;
    v39 = 8;
    v42 = v21;
    LODWORD(v32) = v18;
    v45 = v21;
    v48 = 1;
    v51 = v21;
    v54 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008ACA8, 0LL, 0LL, 9u, &pData);
  }
  if ( v7 )
  {
    HampHostReleaseLockExclusiveEx(v10);
    v7 = 0;
    if ( v19 )
    {
      HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)v12);
LABEL_34:
      v19 = 0;
      if ( v7 )
        HampHostReleaseLockExclusiveEx(v10);
    }
  }
  return v19;
}
