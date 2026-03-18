/*
 * XREFs of MonitorGetCCDMonitorID @ 0x1C00C3268
 * Callers:
 *     ?Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z @ 0x1C00B7DA0 (-Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z.c)
 *     ?DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@3PEAE4@Z @ 0x1C00BE898 (-DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TEC.c)
 *     _lambda_2b22dbeadb19a6eea2c92cf183f0ad41_::operator() @ 0x1C00BFFC0 (_lambda_2b22dbeadb19a6eea2c92cf183f0ad41_--operator().c)
 *     ?DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z @ 0x1C00C30F0 (-DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C00C3480 (DxgkGetMonitorInternalInfo.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C00CE078 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x1C01382CC (-GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0004D9C (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ @ 0x1C0004F08 (-_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ.c)
 *     ?_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z @ 0x1C00C3344 (-_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z.c)
 */

__int64 __fastcall MonitorGetCCDMonitorID(struct HDXGMONITOR__ *a1, unsigned int a2, unsigned __int16 *a3)
{
  __int64 result; // rax
  __int64 v6; // rcx
  DXGMONITOR *AttachedPhysicalMonitor; // rbx
  unsigned int MonitorCCDMonitorID; // eax
  struct _ERESOURCE *v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  DXGMONITOR *v14; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v14 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v14);
  if ( (int)result >= 0 )
  {
    AttachedPhysicalMonitor = v14;
    if ( *((_DWORD *)v14 + 108) != 1 && DXGMONITOR::_GetAttachedPhysicalMonitor(v14) )
      AttachedPhysicalMonitor = DXGMONITOR::_GetAttachedPhysicalMonitor(AttachedPhysicalMonitor);
    if ( !AttachedPhysicalMonitor )
    {
      v11 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v11);
      v13 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v13);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 296), 1u);
    MonitorCCDMonitorID = DXGMONITOR::_GetMonitorCCDMonitorID(AttachedPhysicalMonitor, 1u, a2, a3);
    v9 = (struct _ERESOURCE *)((char *)AttachedPhysicalMonitor + 296);
    v10 = MonitorCCDMonitorID;
    ExReleaseResourceLite(v9);
    KeLeaveCriticalRegion();
    return v10;
  }
  return result;
}
