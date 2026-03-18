/*
 * XREFs of MonitorGetPreferredScaleFactor @ 0x1C012A52C
 * Callers:
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1C012A478 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E8240 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetPreferredScaleFactor(DXGADAPTER *a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  struct _FAST_MUTEX *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGMONITOR *v14; // rbx
  int v15; // eax
  struct _ERESOURCE *v16; // rcx
  unsigned int v17; // ebx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  struct DXGMONITOR *v27; // [rsp+30h] [rbp+8h] BYREF

  v3 = (unsigned int)a2;
  if ( !a1 || (_DWORD)a2 == -1 )
  {
    v21 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    goto LABEL_18;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v19);
  }
  v9 = *((_QWORD *)a1 + 319);
  if ( !v9 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v20);
    v9 = *((_QWORD *)a1 + 319);
  }
  v10 = *(struct _FAST_MUTEX **)(v9 + 96);
  if ( !v10 )
  {
    v21 = WdLogNewEntry5_WdError(0LL, v6, v8);
    *(_QWORD *)(v21 + 24) = a1;
LABEL_18:
    WdLogEvent5_WdError(v21);
    return 3221225485LL;
  }
  v27 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v10, (unsigned int)v3, 1, &v27) < 0 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v13);
    v22[4] = a1;
    v17 = -1073741275;
    v22[5] = -1073741275LL;
    v22[3] = v3;
    WdLogEvent5_WdError(v22);
  }
  else
  {
    v14 = v27;
    if ( !v27 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v12, v11);
      WdLogEvent5_WdAssertion(v23);
      v26 = WdLogNewEntry5_WdAssertion(v25, v24);
      WdLogEvent5_WdAssertion(v26);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v14 + 296), 1u);
    v15 = *((_DWORD *)v14 + 147);
    if ( !v15 )
      v15 = *((_DWORD *)v14 + 146);
    *a3 = v15;
    v16 = (struct _ERESOURCE *)((char *)v14 + 296);
    v17 = v15 == 0 ? 0xC0000001 : 0;
    ExReleaseResourceLite(v16);
    KeLeaveCriticalRegion();
  }
  return v17;
}
