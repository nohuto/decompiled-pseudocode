/*
 * XREFs of ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180011058
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180024E90 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@W4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800058B4 (-HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_ST.c)
 *     ?HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AB6C (-HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000CA50 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@@Z @ 0x18000CC30 (-RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E910 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampHostChangeApplicationExternalState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x180013DA4 (-HampHostChangeApplicationExternalState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_EXTERNAL_APPLICATI.c)
 *     ?RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18001447C (-RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017F34 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B4C4 (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180023DD0 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180029CD0 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18002BBCC (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002CAF0 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckWaitForQuiesceTurn@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002CBD4 (-HampHostCheckWaitForQuiesceTurn@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z @ 0x18002EE10 (-HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z.c)
 *     ?RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z @ 0x18003AE5C (-RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z.c)
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180049B20 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18005BC74 (-RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180060BBC (-RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180060CA0 (-RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x180066418 (-RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 */

void __fastcall RmpEnforcementOptimizeHost(__int64 a1, int a2)
{
  char v2; // bl
  __int64 v3; // rsi
  int updated; // ebx
  __int64 v6; // rax
  struct _HAM_ACTIVITY *i; // rax
  struct _HAM_ACTIVITY *v8; // rbx
  unsigned int v9; // edx
  struct _HAM_DEPENDENCY_GROUP *v10; // rbx
  unsigned int IsSuspendWaiter; // eax
  unsigned int v12; // ebx
  unsigned int v13; // eax
  unsigned __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v16; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v2 = a2;
  v3 = a1 + 64;
  if ( ((a2 - 1) & a2) == 0 && (a2 & 0x10) != 0 )
  {
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64));
    RmpActivityHostSetCommitSavings((struct _RM_ACTIVITY_HOST *)a1, 1u);
    goto LABEL_21;
  }
  if ( (a2 & 0x80u) == 0 )
  {
    if ( (a2 & 0x100) != 0 )
    {
      *(_DWORD *)(a1 + 1192) |= 0x100u;
      HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64));
      RmpReleaseGlobalLock();
      RmpSystemChangePsmApplicationState(a1, 2);
      HampHostChangeApplicationExternalState(v3, 2LL);
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, 0);
      *(_DWORD *)(a1 + 1192) &= ~0x100u;
      *(_DWORD *)(a1 + 1188) |= 0x100u;
    }
    else if ( (a2 & 0x40) != 0 )
    {
      *(_DWORD *)(a1 + 1192) |= 0x40u;
      HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64));
      RmpReleaseGlobalLock();
      RmpSystemFreezeHostJob((struct _RM_ACTIVITY_HOST *)a1, (v2 & 0x40) != 0);
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, 0);
      *(_DWORD *)(a1 + 1192) &= ~0x40u;
      *(_DWORD *)(a1 + 1188) |= 0x40u;
    }
    else if ( (a2 & 8) != 0 )
    {
      if ( (*(_QWORD *)(a1 + 696) & 0x200000000000LL) != 0 )
      {
        *(_DWORD *)(a1 + 1188) |= 8u;
      }
      else
      {
        *(_DWORD *)(a1 + 1192) |= 8u;
        HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64));
        RmpReleaseGlobalLock();
        updated = RmpEnforcementUpdateSwapState((struct _RM_ACTIVITY_HOST *)a1, 1u);
        RmpAcquireGlobalLock();
        HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, 0);
        *(_DWORD *)(a1 + 1188) |= 8u;
        *(_DWORD *)(a1 + 1192) &= ~8u;
        if ( updated < 0 )
          *(_QWORD *)(v3 + 632) |= 0x200000000000uLL;
      }
    }
    else
    {
      v12 = a2 & 0x27;
      if ( (a2 & 0x27) != 0 && *(int *)(a1 + 24) >= 0 )
      {
        *(_DWORD *)(a1 + 1192) |= v12;
        NtClearEvent(*(HANDLE *)(a1 + 1248));
        if ( !*(_DWORD *)(a1 + 1264) || RmpEmptyWorkerWaitForCompleteOrAbort((struct _RM_ACTIVITY_HOST *)a1) )
        {
          if ( *(int *)(a1 + 24) >= 0 )
          {
            RmpEmptyWorkerRun(a1, v12);
            v13 = RmpEmptyWorkerWaitForCompleteOrAbort((struct _RM_ACTIVITY_HOST *)a1);
            *(_DWORD *)(a1 + 1192) &= ~v12;
            if ( v13 )
              *(_DWORD *)(a1 + 1188) |= v12;
          }
        }
        else
        {
          *(_DWORD *)(a1 + 1192) &= ~v12;
        }
      }
    }
    return;
  }
  if ( !HampHostCheckWaitForQuiesceTurn((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64)) )
  {
    *(_DWORD *)(a1 + 1192) |= 0x80u;
    v6 = *(_QWORD *)(v3 + 632);
    *(_DWORD *)(v3 + 644) = 0;
    *(_DWORD *)(v3 + 648) = 0;
    *(_QWORD *)(v3 + 632) = v6 & 0xFFFFBFFF1FFFFFFFuLL | 0x20000000;
    for ( i = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)v3); ; i = HampHostGetNextActivity(v8) )
    {
      v8 = i;
      if ( !i )
        break;
      if ( (*((_BYTE *)i + 120) & 0x80) != 0 && (unsigned __int8)(*((_BYTE *)i + 548) - 2) <= 1u )
        HampActRequestStop((__int64)i, 1u, 9, 6656, 0, 0LL);
    }
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3);
    RmpReleaseGlobalLock();
    HampUtilQueryQuiesceTimeouts(&v15, 0LL);
    v17 = 0LL;
    v14 = v15;
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, 0);
    *(_DWORD *)(v3 + 648) = v14;
    RtlQueryUnbiasedInterruptTime(&v16);
    *(_DWORD *)(v3 + 644) = v16 / 0x2710;
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3);
    HampHostChangeApplicationExternalState(v3, 1LL);
    RmpSystemChangePsmApplicationState(a1, 1);
    RmpSystemResourceTimerSet((struct _RM_HAM_ACTIVITY_HOST *)v3, v14, *(void **)(v3 + 768));
    RmHamHostStateWorkerWaitForQuiesce((struct _RM_HAM_ACTIVITY_HOST *)v3, &v14, &v17);
    if ( (*(_BYTE *)(a1 + 1188) & 0x80) == 0 )
    {
      IsSuspendWaiter = HampHostIsSuspendWaiter((struct _RM_HAM_ACTIVITY_HOST *)v3, v9);
      *(_DWORD *)(a1 + 1192) &= ~0x80u;
      HampHostCheckUpdateSuspendWaitState((struct _RM_HAM_ACTIVITY_HOST *)v3, IsSuspendWaiter);
    }
    *(_QWORD *)(v3 + 632) &= ~0x800000000000000uLL;
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3);
    ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(
      *(ExecutionModel::ResourceManager **)(*(_QWORD *)(a1 + 48) + 2688LL),
      (struct _RM_ACTIVITY_HOST *)a1);
    SetEvent(*(HANDLE *)(*(_QWORD *)(a1 + 56) + 88LL));
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, 0);
    v10 = HampHostCheckEnterDependencyWorker((struct _RM_HAM_ACTIVITY_HOST *)v3);
    if ( v10 )
    {
      HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3);
      RmpReleaseGlobalLock();
      HampDepGroupRunStateChangeWorker(v10);
      RmpAcquireGlobalLock();
LABEL_21:
      HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, 0);
    }
  }
}
