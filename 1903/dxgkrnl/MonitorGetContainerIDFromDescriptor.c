/*
 * XREFs of MonitorGetContainerIDFromDescriptor @ 0x1C0171BCC
 * Callers:
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C0171834 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E8240 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorContainerID@DXGMONITOR@@QEAAJPEAU_GUID@@@Z @ 0x1C0171CA8 (-_GetMonitorContainerID@DXGMONITOR@@QEAAJPEAU_GUID@@@Z.c)
 */

__int64 __fastcall MonitorGetContainerIDFromDescriptor(DXGADAPTER *a1, __int64 a2, struct _GUID *a3)
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
  unsigned int MonitorContainerID; // eax
  struct _ERESOURCE *v16; // rcx
  unsigned int v17; // ebx
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  struct DXGMONITOR *v26; // [rsp+30h] [rbp+8h] BYREF

  v3 = (unsigned int)a2;
  if ( !a1 )
  {
    v19 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v19 + 24) = -1073741811LL;
LABEL_12:
    WdLogEvent5_WdError(v19);
    return 3221225485LL;
  }
  if ( (_DWORD)a2 == -1 )
    return 3221226021LL;
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  v9 = *((_QWORD *)a1 + 319);
  if ( !v9 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v21);
    v9 = *((_QWORD *)a1 + 319);
  }
  v10 = *(struct _FAST_MUTEX **)(v9 + 96);
  if ( !v10 )
  {
    v19 = WdLogNewEntry5_WdError(0LL, v6, v8);
    *(_QWORD *)(v19 + 24) = a1;
    goto LABEL_12;
  }
  v26 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v10, (unsigned int)v3, 1, &v26) < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v13);
    v20[3] = v3;
    v20[4] = a1;
    v20[5] = -1073741275LL;
    WdLogEvent5_WdError(v20);
    return 3221226021LL;
  }
  v14 = v26;
  if ( !v26 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v22);
    v25 = WdLogNewEntry5_WdAssertion(v24, v23);
    WdLogEvent5_WdAssertion(v25);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v14 + 296), 1u);
  MonitorContainerID = DXGMONITOR::_GetMonitorContainerID(v14, a3);
  v16 = (struct _ERESOURCE *)((char *)v14 + 296);
  v17 = MonitorContainerID;
  ExReleaseResourceLite(v16);
  KeLeaveCriticalRegion();
  return v17;
}
