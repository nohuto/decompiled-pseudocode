/*
 * XREFs of ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002BED0
 * Callers:
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x18000D29C (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z @ 0x18000D9EC (-HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z.c)
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000DA90 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z @ 0x18000DEEC (-HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800121A8 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180026B20 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029C90 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x1800493C0 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180077258 (-HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180012CCC (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180013024 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002ECA4 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002ECE8 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180035404 (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampHostIsQuiesceSerialized@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003BC50 (-HampHostIsQuiesceSerialized@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003D4C4 (-HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x18004936C (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

void __fastcall HampHostCheckUpdateSuspendWaitState(struct _RM_HAM_ACTIVITY_HOST *a1, int a2)
{
  int v4; // r14d
  __int64 v5; // rax
  __int64 v6; // rdi
  struct _HAM_PACKAGE *v7; // rdi
  char v8; // [rsp+30h] [rbp-49h] BYREF
  __int64 v9; // [rsp+38h] [rbp-41h] BYREF
  char v10[16]; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v12; // [rsp+70h] [rbp-9h]
  __int64 v13; // [rsp+78h] [rbp-1h]
  __int64 *v14; // [rsp+80h] [rbp+7h]
  __int64 v15; // [rsp+88h] [rbp+Fh]
  char *v16; // [rsp+90h] [rbp+17h]
  __int64 v17; // [rsp+98h] [rbp+1Fh]
  char *v18; // [rsp+A0h] [rbp+27h]
  __int64 v19; // [rsp+A8h] [rbp+2Fh]

  if ( (*((_QWORD *)a1 + 81) & 0x10000000000LL) != 0 )
  {
    v4 = 0;
  }
  else
  {
    RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v9, (union _RM_OPTIMIZATION_STATE *)v10);
    if ( (v9 & 0x80u) == 0LL || v10[0] < 0 )
    {
      if ( (v9 & 0x100) == 0 || (*(_WORD *)v10 & 0x100) != 0 )
      {
        v5 = *((_QWORD *)a1 + 81);
        v4 = (v5 & 0x800000000LL) == 0 && ((v5 & 0x40000000000LL) == 0 || (v5 & 0x30000) == 0);
      }
      else
      {
        v4 = 0;
      }
    }
    else
    {
      v4 = 0;
    }
  }
  if ( a2 != v4 )
  {
    if ( !v4 )
    {
      if ( a2 )
      {
        HampPdcSignalWorker(
          (struct _HAM_PDC_CONTEXT *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 97) + 88LL)
                                                                          + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                             + 120)
                                                 + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                    + 168),
          0);
        if ( HampHostIsQuiesceSerialized(a1) )
        {
          if ( HampHostIsResumed(a1) )
          {
            v7 = *(struct _HAM_PACKAGE **)(*((_QWORD *)a1 + 97) + 88LL);
            HampPkgAcquireLockExclusive(v7);
            HampPkgReleaseLockExclusive(v7);
            RtlWakeAllConditionVariable((char *)v7 + 320);
          }
        }
      }
    }
    v6 = *((_QWORD *)a1 + 86);
    if ( v6 )
    {
      HampDepGroupAcquireLockExclusive(*((struct _HAM_DEPENDENCY_GROUP **)a1 + 86));
      if ( !a2 || v4 )
        ++*(_DWORD *)(v6 + 88);
      else
        --*(_DWORD *)(v6 + 88);
      if ( dword_1800AB2C0 > 5u )
      {
        LODWORD(v9) = *(_DWORD *)(v6 + 88);
        v14 = &v9;
        *(_QWORD *)v10 = *((_QWORD *)a1 - 4);
        v16 = v10;
        v18 = &v8;
        v12 = (__int64 *)v6;
        v13 = 8LL;
        v15 = 4LL;
        v17 = 8LL;
        v8 = v4;
        v19 = 1LL;
        TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180099166, 0LL, 0LL, 6u, &pData);
      }
      HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v6);
    }
    else if ( dword_1800AB2C0 > 5u )
    {
      v9 = *((_QWORD *)a1 - 4);
      v12 = &v9;
      v14 = (__int64 *)&v8;
      v13 = 8LL;
      v8 = v4;
      v15 = 1LL;
      TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_18009876D, 0LL, 0LL, 4u, &pData);
    }
  }
}
