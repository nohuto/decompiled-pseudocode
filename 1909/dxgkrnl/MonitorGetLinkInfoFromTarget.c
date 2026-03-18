/*
 * XREFs of MonitorGetLinkInfoFromTarget @ 0x1C00EDC78
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00C806C (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C00C9660 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00EDEEC (-DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EC628 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetLinkInfoFromTarget(DXGADAPTER *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  struct _FAST_MUTEX *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGMONITOR *v15; // rdi
  int v16; // eax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  struct DXGMONITOR *v25; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v4 = (unsigned int)a2;
  if ( !a1 )
  {
    v18 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v18 + 24) = -1073741811LL;
LABEL_14:
    WdLogEvent5_WdError(v18);
    return 3221225485LL;
  }
  if ( (_DWORD)a2 == -1 )
    return 3221226021LL;
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  v10 = *((_QWORD *)a1 + 319);
  if ( !v10 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v20);
    v10 = *((_QWORD *)a1 + 319);
  }
  v11 = *(struct _FAST_MUTEX **)(v10 + 96);
  if ( !v11 )
  {
    v18 = WdLogNewEntry5_WdError(0LL, v7, v9);
    *(_QWORD *)(v18 + 24) = a1;
    goto LABEL_14;
  }
  v25 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v11, (unsigned int)v4, 1, &v25) < 0 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14);
    v19[3] = v4;
    v19[4] = a1;
    v19[5] = -1073741275LL;
    WdLogEvent5_WdError(v19);
    return 3221226021LL;
  }
  v15 = v25;
  if ( !v25 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v21);
    v24 = WdLogNewEntry5_WdAssertion(v23, v22);
    WdLogEvent5_WdAssertion(v24);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v15 + 296), 1u);
  if ( (*((_DWORD *)v15 + 10) & 0x400) != 0 )
  {
    *(_QWORD *)a3 = *(_QWORD *)((char *)v15 + 468);
    v16 = *((_DWORD *)v15 + 119);
  }
  else
  {
    v16 = 0;
    v3 = -1073741275;
    *(_QWORD *)a3 = 0LL;
  }
  *(_DWORD *)(a3 + 8) = v16;
  ExReleaseResourceLite((PERESOURCE)((char *)v15 + 296));
  KeLeaveCriticalRegion();
  return v3;
}
