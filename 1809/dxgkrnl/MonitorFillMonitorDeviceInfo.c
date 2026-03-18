/*
 * XREFs of MonitorFillMonitorDeviceInfo @ 0x1C00BB6CC
 * Callers:
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00BB554 (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0003560 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0004D9C (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00BB858 (-_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 */

__int64 __fastcall MonitorFillMonitorDeviceInfo(struct HDXGMONITOR__ *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  PZZWSTR v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _DEVICE_OBJECT *v10; // rdx
  int v11; // edi
  int v12; // eax
  NTSTATUS DeviceInterfaces; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  PZZWSTR SymbolicLinkList; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  SymbolicLinkList = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, (struct DXGMONITOR **)&SymbolicLinkList);
  if ( (int)result >= 0 )
  {
    v5 = SymbolicLinkList;
    if ( !SymbolicLinkList )
    {
      v18 = WdLogNewEntry5_WdAssertion(v4);
      WdLogEvent5_WdAssertion(v18);
      v20 = WdLogNewEntry5_WdAssertion(v19);
      WdLogEvent5_WdAssertion(v20);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v5 + 148), 1u);
    if ( *((_DWORD *)v5 + 108) == 1 && (*((_DWORD *)v5 + 10) & 0x10) == 0 )
    {
      v21 = WdLogNewEntry5_WdDmmEvent(v7, v6, v8, v9);
      *(_QWORD *)(v21 + 24) = v5;
      WdLogEvent5_WdDmmEvent(v21);
      v11 = -1073741275;
      goto LABEL_14;
    }
    memset((void *)(a2 + 164), 0, 0x100uLL);
    v10 = (struct _DEVICE_OBJECT *)*((_QWORD *)v5 + 7);
    if ( v10 )
    {
      SymbolicLinkList = 0LL;
      DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, v10, 0, &SymbolicLinkList);
      v11 = DeviceInterfaces;
      if ( DeviceInterfaces < 0 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v14, v16, v17) + 24) = DeviceInterfaces;
        goto LABEL_14;
      }
      v11 = RtlStringCchCopyW((unsigned __int16 *)(a2 + 164), 0x80uLL, SymbolicLinkList);
      ExFreePoolWithTag(SymbolicLinkList, 0);
      if ( v11 < 0 )
      {
LABEL_14:
        ExReleaseResourceLite((PERESOURCE)(v5 + 148));
        KeLeaveCriticalRegion();
        return (unsigned int)v11;
      }
      *(_WORD *)(a2 + 166) = 92;
    }
    v11 = DXGMONITOR::_FillMonitorDeviceInfo((DXGMONITOR *)v5, (struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)a2);
    if ( v11 == -1071841279 )
      v11 = 0;
    if ( v11 >= 0 )
    {
      v12 = *(_DWORD *)(a2 + 20);
      if ( (v12 & 1) == 0 && !*(_WORD *)(a2 + 36) )
        *(_DWORD *)(a2 + 20) = v12 | 2;
    }
    goto LABEL_14;
  }
  return result;
}
