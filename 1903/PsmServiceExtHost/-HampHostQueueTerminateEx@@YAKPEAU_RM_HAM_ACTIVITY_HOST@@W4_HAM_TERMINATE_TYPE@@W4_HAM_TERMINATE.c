/*
 * XREFs of ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x18000D29C
 * Callers:
 *     ?HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000CF70 (-HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z @ 0x180012D8C (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x1800262D0 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800288A0 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002C380 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KK@Z @ 0x180035740 (-HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KK@.c)
 *     ?HampHostCommitQuiesceAction@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_HOST_QUIESCE_STATE@@@Z @ 0x180037F80 (-HampHostCommitQuiesceAction@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_HOST_QUIESCE_STATE@@@Z.c)
 *     ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KK@Z @ 0x18003F410 (-HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180068A38 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 *     ?HamSrvTerminateHostForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HAM_TERMINATE_REASON@@@Z @ 0x180075B50 (-HamSrvTerminateHostForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180076258 (-HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180076A90 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x180077E54 (-HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMI.c)
 *     ?HampHostTryEnterConnectedStandby@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180077F90 (-HampHostTryEnterConnectedStandby@@YA-AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x1800791CC (-HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@.c)
 * Callees:
 *     ?HampActRequestStopForTerminate@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180002984 (-HampActRequestStopForTerminate@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000ABD4 (-HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x18000CD40 (-HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z @ 0x18000D9EC (-HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000E090 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18000E0DC (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E230 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002A920 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002BED0 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002C140 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002ECA4 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002ECE8 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180030170 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z @ 0x18003057C (-HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800370A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall HampHostQueueTerminateEx(__int64 a1, unsigned int a2, int a3, __int64 a4, int a5, int a6)
{
  int v6; // r15d
  int v7; // r14d
  unsigned __int64 v8; // rbx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  unsigned __int8 v14; // r12
  unsigned int v15; // edx
  struct _HAM_ACTIVITY *FirstActivity; // rbx
  unsigned int IsSuspendWaiter; // eax
  unsigned int v18; // ebx
  unsigned int v19; // edx
  int v20; // r12d
  unsigned int v21; // ebx
  __int64 v22; // rdx
  int v23; // r9d
  __int64 v25; // rcx
  unsigned __int8 v26; // dl
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  char v29; // [rsp+30h] [rbp-D0h] BYREF
  char v30; // [rsp+31h] [rbp-CFh] BYREF
  int v31; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v32; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+40h] [rbp-C0h] BYREF
  int v34; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v38; // [rsp+90h] [rbp-70h]
  int v39; // [rsp+98h] [rbp-68h]
  int v40; // [rsp+9Ch] [rbp-64h]
  int *v41; // [rsp+A0h] [rbp-60h]
  int v42; // [rsp+A8h] [rbp-58h]
  int v43; // [rsp+ACh] [rbp-54h]
  unsigned __int64 *v44; // [rsp+B0h] [rbp-50h]
  int v45; // [rsp+B8h] [rbp-48h]
  int v46; // [rsp+BCh] [rbp-44h]
  char *v47; // [rsp+C0h] [rbp-40h]
  int v48; // [rsp+C8h] [rbp-38h]
  int v49; // [rsp+CCh] [rbp-34h]
  int *v50; // [rsp+D0h] [rbp-30h]
  int v51; // [rsp+D8h] [rbp-28h]
  int v52; // [rsp+DCh] [rbp-24h]
  __int64 v53; // [rsp+E0h] [rbp-20h]
  int v54; // [rsp+E8h] [rbp-18h]
  int v55; // [rsp+ECh] [rbp-14h]
  __int64 *v56; // [rsp+F0h] [rbp-10h]
  int v57; // [rsp+F8h] [rbp-8h]
  int v58; // [rsp+FCh] [rbp-4h]

  v6 = a5;
  v7 = 0;
  v8 = a2;
  v31 = a3;
  LODWORD(v33) = a2;
  if ( !a5 )
  {
    v7 = 1;
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
  }
  v11 = *(_QWORD *)(a1 + 648);
  v12 = *(_QWORD *)(a1 + 688);
  v13 = v11 >> 16;
  v32 = v12;
  if ( (BYTE2(v11) & 3u) >= v8 )
  {
    if ( dword_1800AB2C0 > 5u )
    {
      v27 = *(_QWORD *)(a1 - 32);
      pDesc.Reserved = 0;
      v40 = 0;
      v43 = 0;
      v32 = v27;
      pDesc.Ptr = (ULONGLONG)&v32;
      v38 = (__int64 *)&v30;
      v41 = (int *)&v29;
      pDesc.Size = 8;
      v30 = v8;
      v39 = 1;
      v29 = BYTE2(v11) & 3;
      v42 = 1;
      TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180098650, 0LL, 0LL, 5u, &pData);
    }
    goto LABEL_35;
  }
  if ( (v11 & 0x800000000LL) != 0 )
  {
    if ( dword_1800AB2C0 > 5u )
    {
      v28 = *(_QWORD *)(a1 - 32);
      pDesc.Reserved = 0;
      v32 = v28;
      pDesc.Ptr = (ULONGLONG)&v32;
      pDesc.Size = 8;
      TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180098D0C, 0LL, 0LL, 3u, &pData);
    }
    goto LABEL_35;
  }
  v14 = 80;
  FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)a1);
  if ( FirstActivity )
  {
    do
    {
      if ( HampActCanBeInvalidated(FirstActivity) && *((_BYTE *)FirstActivity + 548) == 3 )
      {
        v26 = v14;
        if ( v14 >= (unsigned __int8)HIBYTE(*((_DWORD *)FirstActivity + 106)) )
          v26 = HIBYTE(*((_DWORD *)FirstActivity + 106));
        v14 = v26;
        HampActRequestStopForTerminate(v25, v33);
      }
      FirstActivity = HampHostGetNextActivity(FirstActivity);
    }
    while ( FirstActivity );
    v12 = v32;
    v6 = a5;
  }
  IsSuspendWaiter = HampHostIsSuspendWaiter((struct _RM_HAM_ACTIVITY_HOST *)a1, v15);
  *(_QWORD *)(a1 + 648) &= 0xFFFFFFFFFFFCFFFFuLL;
  v18 = IsSuspendWaiter;
  LOWORD(IsSuspendWaiter) = v31;
  *(_QWORD *)(a1 + 648) |= (unsigned __int64)(v33 & 3) << 16;
  *(_WORD *)(a1 + 648) = IsSuspendWaiter;
  *(_QWORD *)(a1 + 648) &= 0xFFFFFFFFFC03FFFFuLL;
  *(_QWORD *)(a1 + 648) |= (unsigned __int64)v14 << 18;
  RtlQueryUnbiasedInterruptTime(&v32);
  *(_DWORD *)(a1 + 836) = v32 / 0x2710;
  *(_DWORD *)(a1 + 840) = a6;
  HampHostCheckUpdateSuspendWaitState((struct _RM_HAM_ACTIVITY_HOST *)a1, v18);
  if ( (_DWORD)v33 == 2 )
  {
    *(_QWORD *)(a1 + 648) |= 0x10000000000000uLL;
    if ( *(_DWORD *)(a1 + 640) != GetCurrentThreadId() )
      HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
  }
  else
  {
    HampHostCheckQueueTerminateWorker((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
  }
  if ( a4 )
    v20 = *(_DWORD *)(a4 + 140);
  else
    v20 = 0;
  if ( v12 )
  {
    if ( v6 == 2 )
    {
      ++*(_QWORD *)(v12 + 112);
      v21 = 0;
      goto LABEL_14;
    }
    HampDepGroupAcquireLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v12);
    if ( v6 == 3 )
    {
      HampDepGroupQueueWorker((struct _HAM_DEPENDENCY_GROUP *)v12);
      v21 = 0;
    }
    else
    {
      v21 = HampDepGroupTryEnterStateChange((struct _HAM_DEPENDENCY_GROUP *)v12, (unsigned __int64 *)(a1 + 616));
    }
    HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v12);
  }
  else
  {
    v21 = 0;
  }
  if ( v6 != 2 )
    HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
LABEL_14:
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 0x400000000008uLL) )
  {
    TlgCreateWsz(&pDesc, (LPCWSTR)(a1 + 24));
    v22 = *(_QWORD *)(a1 - 32);
    v40 = 0;
    v43 = 0;
    v46 = 0;
    v49 = 0;
    v52 = 0;
    v55 = 0;
    v58 = 0;
    v38 = &v35;
    v34 = *(_DWORD *)(a1 + 560);
    v41 = &v34;
    v44 = &v32;
    v29 = v33;
    v47 = &v29;
    v50 = &v31;
    v53 = a1 + 800;
    v56 = &v33;
    v35 = v22;
    v39 = 8;
    v42 = v23;
    LODWORD(v32) = v20;
    v45 = v23;
    v48 = 1;
    v51 = v23;
    v54 = 8;
    v33 = 0x1000000LL;
    v57 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180098876, 0LL, 0LL, 0xAu, &pData);
  }
  if ( v7 )
  {
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1, v19);
    v7 = 0;
    if ( v21 )
    {
      HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)v12);
LABEL_35:
      v21 = 0;
      if ( v7 )
        HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1, v13);
    }
  }
  return v21;
}
