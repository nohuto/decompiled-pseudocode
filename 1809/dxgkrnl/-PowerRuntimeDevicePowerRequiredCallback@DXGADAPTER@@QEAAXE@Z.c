/*
 * XREFs of ?PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C002E6A4
 * Callers:
 *     ?DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z @ 0x1C0034A80 (-DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z.c)
 *     ?DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z @ 0x1C0034AE0 (-DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiRequestDevicePowerState @ 0x1C0043520 (DpiRequestDevicePowerState.c)
 *     DpiIsNeedWakeUpAdapter @ 0x1C0043EE4 (DpiIsNeedWakeUpAdapter.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeDevicePowerRequiredCallback(DXGADAPTER *this, char a2)
{
  unsigned int v3; // edi
  struct DXGGLOBAL *Global; // rax
  struct _IO_WORKITEM *WorkItem; // rax

  if ( *((_BYTE *)this + 180) )
  {
    if ( a2 )
      PoFxReportDevicePoweredOn(*((_QWORD *)this + 321));
  }
  else
  {
    if ( a2 )
    {
      Global = DXGGLOBAL::GetGlobal((__int64)this);
      v3 = 1;
      if ( *((_DWORD *)Global + 430)
        && *((_DWORD *)Global + 431)
        && (unsigned __int8)DpiIsNeedWakeUpAdapter(*((_QWORD *)this + 24)) )
      {
        WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)this + 24));
        if ( WorkItem )
          IoQueueWorkItemEx(WorkItem, DXGGLOBAL::ReportGpuWakeupWorkItemCallback, DelayedWorkQueue, 0LL);
      }
    }
    else
    {
      v3 = 4;
    }
    DpiRequestDevicePowerState(*((_QWORD *)this + 24), v3);
  }
}
