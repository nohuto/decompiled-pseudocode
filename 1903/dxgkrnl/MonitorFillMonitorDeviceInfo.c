/*
 * XREFs of MonitorFillMonitorDeviceInfo @ 0x1C00CFBF8
 * Callers:
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00CFA48 (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0002180 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0006314 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00CFD78 (-_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 */

__int64 __fastcall MonitorFillMonitorDeviceInfo(struct HDXGMONITOR__ *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  PZZWSTR v6; // rbx
  struct _DEVICE_OBJECT *v7; // rdx
  NTSTATUS DeviceInterfaces; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // edi
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  PZZWSTR SymbolicLinkList; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  SymbolicLinkList = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, (struct DXGMONITOR **)&SymbolicLinkList);
  if ( (int)result >= 0 )
  {
    v6 = SymbolicLinkList;
    if ( !SymbolicLinkList )
    {
      v13 = WdLogNewEntry5_WdAssertion(v5, v4);
      WdLogEvent5_WdAssertion(v13);
      v16 = WdLogNewEntry5_WdAssertion(v15, v14);
      WdLogEvent5_WdAssertion(v16);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v6 + 148), 1u);
    if ( *((_DWORD *)v6 + 108) == 1 && (*((_DWORD *)v6 + 10) & 0x10) == 0 )
    {
      v17 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v17 + 24) = v6;
      WdLogEvent5_WdDmmEvent(v17);
      v11 = -1073741275;
    }
    else
    {
      memset((void *)(a2 + 164), 0, 0x100uLL);
      v7 = (struct _DEVICE_OBJECT *)*((_QWORD *)v6 + 7);
      if ( !v7 || !*((_QWORD *)v6 + 12) )
        goto LABEL_13;
      SymbolicLinkList = 0LL;
      DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, v7, 0, &SymbolicLinkList);
      v11 = DeviceInterfaces;
      if ( DeviceInterfaces < 0 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9) + 24) = DeviceInterfaces;
      }
      else
      {
        v11 = RtlStringCchCopyW((unsigned __int16 *)(a2 + 164), 0x80uLL, SymbolicLinkList);
        ExFreePoolWithTag(SymbolicLinkList, 0);
        if ( v11 >= 0 )
        {
          *(_WORD *)(a2 + 166) = 92;
LABEL_13:
          v11 = DXGMONITOR::_FillMonitorDeviceInfo((DXGMONITOR *)v6, (struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)a2);
          if ( v11 == -1071841279 )
            v11 = 0;
          if ( v11 >= 0 )
          {
            v12 = *(_DWORD *)(a2 + 20);
            if ( (v12 & 1) == 0 && !*(_WORD *)(a2 + 36) )
              *(_DWORD *)(a2 + 20) = v12 | 2;
          }
        }
      }
    }
    ExReleaseResourceLite((PERESOURCE)(v6 + 148));
    KeLeaveCriticalRegion();
    return (unsigned int)v11;
  }
  return result;
}
