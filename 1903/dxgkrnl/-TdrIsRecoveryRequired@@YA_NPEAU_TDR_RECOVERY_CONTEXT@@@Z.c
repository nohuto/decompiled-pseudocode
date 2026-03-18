/*
 * XREFs of ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C023E040
 * Callers:
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1C027E2EC (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000C654 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01EDE88 (-PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C023CDB0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrHistoryIsLimitExhausted@@YA_NPEBU_TDR_HISTORY@@PEBU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C023DF20 (-TdrHistoryIsLimitExhausted@@YA_NPEBU_TDR_HISTORY@@PEBU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z @ 0x1C023DFF4 (-TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z.c)
 *     ?TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z @ 0x1C023E4E4 (-TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C023E590 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     TdrAllowToDebugTimeout @ 0x1C023E8F4 (TdrAllowToDebugTimeout.c)
 *     TdrBugcheckOnTimeout @ 0x1C023EA7C (TdrBugcheckOnTimeout.c)
 */

char __fastcall TdrIsRecoveryRequired(struct _TDR_RECOVERY_CONTEXT *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // rax
  unsigned int v7; // eax
  int v8; // ecx
  __int64 v9; // rax
  DXGADAPTER *v10; // rcx
  int v11; // eax
  unsigned int v12; // [rsp+38h] [rbp+10h] BYREF

  if ( !g_TdrConfig
    || (unsigned int)TdrAllowToDebugTimeout()
    || _InterlockedCompareExchange64((volatile signed __int64 *)&g_TdrRecoveryInProgress, (signed __int64)a1, 0LL) )
  {
    return 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql )
  {
    v5 = WdLogNewEntry5_WdCriticalError(v3, v2);
    *(_QWORD *)(v5 + 32) = CurrentIrql;
    *(_QWORD *)(v5 + 24) = a1;
    WdLogEvent5_WdCriticalError(v5);
    return 0;
  }
  if ( KeAreAllApcsDisabled() )
  {
    v7 = *((_DWORD *)a1 + 4);
    if ( v7 > 0xB || (v8 = 3730, !_bittest(&v8, v7)) )
    {
      TdrCollectDbgInfoStage1(a1, 0);
      TdrRetrieveSecondaryBucketingKey(a1, &v12);
      *((_QWORD *)a1 + 354) = 0LL;
      TdrBugcheckOnTimeout((ULONG_PTR)a1);
    }
    WdDiagNotifyUser(8LL, 2LL, 0LL, 0LL);
    return 0;
  }
  TdrUpdateDbgReport(a1, 1);
  v9 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 2560LL);
  if ( v9
    && (*(int (__fastcall **)(struct _TDR_RECOVERY_CONTEXT *))(*(_QWORD *)(*(_QWORD *)(v9 + 520) + 8LL) + 584LL))(a1) < 0 )
  {
    *((_QWORD *)a1 + 13) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 2560LL) + 520LL) + 8LL)
                                     + 584LL);
    TdrBugcheckOnTimeout((ULONG_PTR)a1);
  }
  TdrCollectDbgInfoStage1(a1, 1);
  if ( ((*((_DWORD *)a1 + 4) - 2) & 0xFFFFFFFB) == 0 && !*((_QWORD *)a1 + 9) && g_TdrDebugMode != 3 )
    TdrBugcheckOnTimeout((ULONG_PTR)a1);
  if ( TdrHistoryIsLimitExhausted((const struct _TDR_HISTORY *)&g_TdrHistory, a1, 0) && g_TdrDebugMode != 3 )
    TdrBugcheckOnTimeout((ULONG_PTR)a1);
  if ( g_TdrConfig == 1 )
    TdrBugcheckOnTimeout((ULONG_PTR)a1);
  if ( !TdrIsDisplayOnlyTdr(*((_DWORD *)a1 + 4)) && !DXGADAPTER::IsDxgmms2(*((DXGADAPTER **)a1 + 4)) )
  {
    v11 = DXGADAPTER::PrepareToReset(v10, a1);
    if ( v11 < 0 )
    {
      if ( v11 != -1073741643 )
        *((_QWORD *)a1 + 13) = -1LL;
      TdrBugcheckOnTimeout((ULONG_PTR)a1);
    }
  }
  return 1;
}
