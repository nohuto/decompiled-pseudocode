/*
 * XREFs of ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002C140
 * Callers:
 *     ?HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000CF70 (-HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?HampDepGroupTryAddToExisting@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000D0FC (-HampDepGroupTryAddToExisting@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x18000D29C (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampDepGroupAddProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z @ 0x18000FA60 (-HampDepGroupAddProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z.c)
 *     ?HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18000FD54 (-HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     ?HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@Z @ 0x180010020 (-HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800121A8 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z @ 0x180012D8C (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z.c)
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x180024350 (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x1800252A0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x1800262D0 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800288A0 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18002EA90 (-HampDepGroupStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002FA28 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180034E10 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x180034FC0 (-HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 *     ?HampHostCheckWaitEnterDependencyStateChange@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180035448 (-HampHostCheckWaitEnterDependencyStateChange@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_.c)
 *     ?HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KK@Z @ 0x180035740 (-HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KK@.c)
 *     ?HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x18003C084 (-HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PE.c)
 *     ?HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x1800409CC (-HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180076A90 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800778EC (-HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x180077E54 (-HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMI.c)
 *     ?HampHostTryEnterConnectedStandby@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180077F90 (-HampHostTryEnterConnectedStandby@@YA-AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x1800781DC (-HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampDepGroupRemoveDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0W4_HAM_HOST_DEPENDENCY_TYPE@@@Z @ 0x1800787F4 (-HampDepGroupRemoveDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0W4_HAM_HOST_DEPENDENCY_TYPE@@@Z.c)
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180078BCC (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupVerifyHostDispositionAndEnterWorker@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180078F48 (-HampDepGroupVerifyHostDispositionAndEnterWorker@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEP.c)
 *     ?HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18007AC10 (-HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002C380 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180030510 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampManagerRemoveDependencyGroup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003E71C (-HampManagerRemoveDependencyGroup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

void __fastcall HampDepGroupRunStateChangeWorker(struct _HAM_DEPENDENCY_GROUP *a1)
{
  DWORD v2; // edi
  _QWORD *Value; // rbx
  _QWORD *v4; // rax
  bool v5; // zf
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  unsigned __int64 i; // rbx
  unsigned __int64 v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  signed __int64 v12; // rbp
  bool v13; // cc
  signed __int64 v14; // rbp
  __int64 v15; // rcx
  struct _HOST_ACTIVITY_MANAGER *v16; // rcx

  if ( *((_DWORD *)a1 + 32) != GetCurrentThreadId() )
    __int2c();
  while ( 1 )
  {
    v2 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
        __int2c();
      *Value |= 8uLL;
      ++Value[4];
    }
    RtlAcquireSRWLockExclusive((char *)a1 + 8);
    *((_DWORD *)a1 + 4) = GetCurrentThreadId();
    if ( *((_QWORD *)a1 + 14) == *((_QWORD *)a1 + 13) )
      break;
    *((_DWORD *)a1 + 4) = 0;
    RtlReleaseSRWLockExclusive((char *)a1 + 8);
    if ( HampLockTrackerId != -1 )
    {
      v4 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v4 & 8) == 0 )
        __int2c();
      v5 = v4[4]-- == 1LL;
      if ( v5 )
        *v4 &= ~8uLL;
    }
    HampDepGroupRunStateChangeWorkerIteration(a1);
  }
  v6 = *((_QWORD *)a1 + 10);
  if ( (v6 & 1) != 0 )
  {
    if ( v6 == 1 )
      v7 = 0LL;
    else
      v7 = v6 ^ (((unsigned __int64)a1 + 72) | 1);
  }
  else
  {
    v7 = *((_QWORD *)a1 + 10);
  }
  if ( v7 )
  {
    do
    {
      i = *(_QWORD *)(v7 + 8);
      v9 = v7;
      if ( i )
      {
        v10 = *(_QWORD **)i;
        if ( *(_QWORD *)i )
        {
          do
          {
            i = (unsigned __int64)v10;
            v10 = (_QWORD *)*v10;
          }
          while ( v10 );
        }
      }
      else
      {
        for ( i = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)i == v9 )
            break;
          v9 = i;
        }
      }
      if ( *(_QWORD *)(v7 + 64) == v7 + 64 && *(_QWORD *)(v7 + 80) == v7 + 80 )
      {
        RtlRbRemoveNode((char *)a1 + 72, v7);
        *(_QWORD *)(v7 + 16) = -1LL;
        HampDepGroupDereference(*(struct _HAM_DEPENDENCY_GROUP **)(v7 + 40));
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v7);
      }
      v7 = i;
    }
    while ( i );
  }
  *((_DWORD *)a1 + 32) = 0;
  *((_DWORD *)a1 + 4) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 8);
  if ( HampLockTrackerId != -1 )
  {
    v11 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v11 & 8) == 0 )
      __int2c();
    v5 = v11[4]-- == 1LL;
    if ( v5 )
      *v11 &= ~8uLL;
  }
  RtlWakeAllConditionVariable((char *)a1 + 24);
  v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 12, 0xFFFFFFFFFFFFFFFFuLL);
  v13 = v12 <= 1;
  v14 = v12 - 1;
  if ( v13 )
  {
    if ( v14 )
      __fastfail(0xEu);
    v15 = *((_QWORD *)a1 + 15);
    if ( v15 )
      TpReleaseWork(v15);
    v16 = (struct _HOST_ACTIVITY_MANAGER *)*((_QWORD *)a1 + 4);
    if ( v16 )
      HampManagerRemoveDependencyGroup(v16, a1);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
  }
}
