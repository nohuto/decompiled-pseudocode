/*
 * XREFs of MonitorGetLinkInfoFromTarget @ 0x1C00C2FD0
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00B1BB0 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00C2F7C (-DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E2274 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetLinkInfoFromTarget(DXGADAPTER *a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rbp
  __int64 v7; // rcx
  __int64 v8; // rax
  MONITOR_MGR *v9; // rcx
  __int64 v10; // rcx
  struct DXGMONITOR *v11; // rdi
  int v12; // eax
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  struct DXGMONITOR *v20; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v4 = a2;
  if ( !a1 )
  {
    v15 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
LABEL_16:
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  if ( a2 == -1 )
    return 3221226021LL;
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  v8 = *((_QWORD *)a1 + 315);
  if ( !v8 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v16);
    v8 = *((_QWORD *)a1 + 315);
  }
  v9 = *(MONITOR_MGR **)(v8 + 96);
  if ( !v9 )
  {
    v15 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v15 + 24) = a1;
    goto LABEL_16;
  }
  v20 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v9, v4, 1u, &v20) < 0 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v14[3] = v4;
    v14[4] = a1;
    v14[5] = -1073741275LL;
    WdLogEvent5_WdError(v14);
    return 3221226021LL;
  }
  v11 = v20;
  if ( !v20 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v17);
    v19 = WdLogNewEntry5_WdAssertion(v18);
    WdLogEvent5_WdAssertion(v19);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v11 + 296), 1u);
  if ( (*((_DWORD *)v11 + 10) & 0x400) != 0 )
  {
    v12 = *((_DWORD *)v11 + 119);
    *(_QWORD *)a3 = *(_QWORD *)((char *)v11 + 468);
  }
  else
  {
    v12 = 0;
    v3 = -1073741275;
    *(_QWORD *)a3 = 0LL;
  }
  *(_DWORD *)(a3 + 8) = v12;
  ExReleaseResourceLite((PERESOURCE)((char *)v11 + 296));
  KeLeaveCriticalRegion();
  return v3;
}
