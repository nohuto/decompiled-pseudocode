/*
 * XREFs of MonitorIsMonitorVirtualModeDisabled @ 0x1C00E7EE8
 * Callers:
 *     _lambda_3a429c02e21bb855f1ec386a1cface2b_::operator() @ 0x1C00C3508 (_lambda_3a429c02e21bb855f1ec386a1cface2b_--operator().c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00D5770 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E8240 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C00EE55C (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 */

__int64 __fastcall MonitorIsMonitorVirtualModeDisabled(DXGADAPTER *a1, unsigned int a2, _BYTE *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  MONITOR_MGR *v11; // rcx
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  struct DXGMONITOR *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  struct DXGMONITOR *v20; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  if ( !a1 || a2 == -1 || !a3 )
    return 3221225485LL;
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  v9 = *((_QWORD *)a1 + 319);
  if ( !v9 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v10);
    v9 = *((_QWORD *)a1 + 319);
  }
  v11 = *(MONITOR_MGR **)(v9 + 96);
  if ( !v11 )
  {
    v18 = WdLogNewEntry5_WdError(0LL, v6, v8);
    *(_QWORD *)(v18 + 24) = a1;
    WdLogEvent5_WdError(v18);
    return 3221225485LL;
  }
  v20 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v11, v3, 1u, &v20);
  if ( (_DWORD)result == -1073741275 )
  {
    v15 = WdLogNewEntry5_WdDmmEvent(v14, v13);
    *(_QWORD *)(v15 + 24) = v3;
    *(_QWORD *)(v15 + 32) = a1;
    WdLogEvent5_WdDmmEvent(v15);
    return 3221225664LL;
  }
  else if ( (int)result >= 0 )
  {
    v16 = v20;
    if ( !v20 || *((_DWORD *)v20 + 108) != 1 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v14, v13);
      WdLogEvent5_WdAssertion(v19);
    }
    if ( !v16 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v14, v13);
      WdLogEvent5_WdAssertion(v17);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v16 + 296), 1u);
    *a3 = DXGMONITOR::_IsVirtualModeSuportDisabled(v16);
    ExReleaseResourceLite((PERESOURCE)((char *)v16 + 296));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
