/*
 * XREFs of ?PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C0033EE8
 * Callers:
 *     ?DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z @ 0x1C003B120 (-DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z.c)
 *     ?DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z @ 0x1C003B180 (-DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiRequestDevicePowerState @ 0x1C004AA28 (DpiRequestDevicePowerState.c)
 *     DpiIsNeedWakeUpAdapter @ 0x1C004B3CC (DpiIsNeedWakeUpAdapter.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeDevicePowerRequiredCallback(DXGADAPTER *this, __int64 a2)
{
  unsigned int v3; // edi
  struct DXGGLOBAL *Global; // rax
  struct _IO_WORKITEM *WorkItem; // rax

  if ( *((_BYTE *)this + 180) )
  {
    if ( (_BYTE)a2 )
      PoFxReportDevicePoweredOn(*((_QWORD *)this + 325));
  }
  else
  {
    if ( (_BYTE)a2 )
    {
      Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
      v3 = 1;
      if ( *((_DWORD *)Global + 422)
        && *((_BYTE *)Global + 303824)
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
