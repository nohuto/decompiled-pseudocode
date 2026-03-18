/*
 * XREFs of DxgkReportCoreWakeupsDripsBlocker @ 0x1C0212B68
 * Callers:
 *     DpiCheckForOutstandingD3Requests @ 0x1C001DE80 (DpiCheckForOutstandingD3Requests.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXXZ @ 0x1C01C047C (-WakeUpAdapter@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReportGpuWakeupWorkItemCallback@DXGGLOBAL@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0211A40 (-ReportGpuWakeupWorkItemCallback@DXGGLOBAL@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReportDripsBlocker@DXGGLOBAL@@QEAAXW4_SLEEPSTUDY_CONNECTION_ID@@PEAU_DEVICE_OBJECT@@PEAU_EPROCESS@@_KI@Z @ 0x1C0211828 (-ReportDripsBlocker@DXGGLOBAL@@QEAAXW4_SLEEPSTUDY_CONNECTION_ID@@PEAU_DEVICE_OBJECT@@PEAU_EPROCE.c)
 */

void __fastcall DxgkReportCoreWakeupsDripsBlocker(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rcx
  struct DXGGLOBAL *v6; // rax

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  if ( *((_DWORD *)Global + 430) )
  {
    if ( *((_DWORD *)Global + 431) )
    {
      v6 = DXGGLOBAL::GetGlobal(v5);
      DXGGLOBAL::ReportDripsBlocker((__int64)v6, 0LL, a1, a2, 0LL);
    }
  }
}
