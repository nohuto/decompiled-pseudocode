/*
 * XREFs of MonitorFillMonitorDeviceInfo @ 0x1C0128F58
 * Callers:
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C0128DA8 (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0006884 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000D0E0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C01290D8 (-_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 */

__int64 __fastcall MonitorFillMonitorDeviceInfo(struct HDXGMONITOR__ *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  PZZWSTR v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _DEVICE_OBJECT *v9; // rdx
  NTSTATUS DeviceInterfaces; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edi
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
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
      v15 = WdLogNewEntry5_WdAssertion(v5, v4);
      WdLogEvent5_WdAssertion(v15);
      v18 = WdLogNewEntry5_WdAssertion(v17, v16);
      WdLogEvent5_WdAssertion(v18);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v6 + 148), 1u);
    if ( *((_DWORD *)v6 + 108) == 1 && (*((_DWORD *)v6 + 10) & 0x10) == 0 )
    {
      v19 = WdLogNewEntry5_WdDmmEvent(v8, v7);
      *(_QWORD *)(v19 + 24) = v6;
      WdLogEvent5_WdDmmEvent(v19);
      v13 = -1073741275;
    }
    else
    {
      memset((void *)(a2 + 164), 0, 0x100uLL);
      v9 = (struct _DEVICE_OBJECT *)*((_QWORD *)v6 + 7);
      if ( !v9 || !*((_QWORD *)v6 + 12) )
        goto LABEL_13;
      SymbolicLinkList = 0LL;
      DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, v9, 0, &SymbolicLinkList);
      v13 = DeviceInterfaces;
      if ( DeviceInterfaces < 0 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11) + 24) = DeviceInterfaces;
      }
      else
      {
        v13 = RtlStringCchCopyW((unsigned __int16 *)(a2 + 164), 0x80uLL, SymbolicLinkList);
        ExFreePoolWithTag(SymbolicLinkList, 0);
        if ( v13 >= 0 )
        {
          *(_WORD *)(a2 + 166) = 92;
LABEL_13:
          v13 = DXGMONITOR::_FillMonitorDeviceInfo((DXGMONITOR *)v6, (struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)a2);
          if ( v13 == -1071841279 )
            v13 = 0;
          if ( v13 >= 0 )
          {
            v14 = *(_DWORD *)(a2 + 20);
            if ( (v14 & 1) == 0 && !*(_WORD *)(a2 + 36) )
              *(_DWORD *)(a2 + 20) = v14 | 2;
          }
        }
      }
    }
    ExReleaseResourceLite((PERESOURCE)(v6 + 148));
    KeLeaveCriticalRegion();
    return (unsigned int)v13;
  }
  return result;
}
