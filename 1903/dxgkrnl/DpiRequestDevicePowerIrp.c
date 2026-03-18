/*
 * XREFs of DpiRequestDevicePowerIrp @ 0x1C004A86C
 * Callers:
 *     ?PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C0033E80 (-PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER@@QEAAXE@Z.c)
 *     DpiRequestDevicePowerState @ 0x1C004AA28 (DpiRequestDevicePowerState.c)
 *     ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C004B1CC (-DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0xq @ 0x1C003566C (McTemplateK0xq.c)
 */

NTSTATUS __fastcall DpiRequestDevicePowerIrp(__int64 a1, int a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  const GUID *v7; // r8
  struct DXGGLOBAL *Global; // rax
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  NTSTATUS result; // eax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax

  v2 = a2;
  v4 = (_QWORD *)WdLogNewEntry5_WdPower();
  v4[5] = 0LL;
  v4[3] = a1;
  v4[4] = v2;
  WdLogEvent5_WdPower(v4);
  if ( (_DWORD)v2 == 4 )
  {
    Global = DXGGLOBAL::GetGlobal(v6, v5);
    if ( *((_DWORD *)Global + 422) )
    {
      if ( *((_BYTE *)Global + 303824) )
      {
        WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 24));
        if ( WorkItem )
          IoQueueWorkItemEx(WorkItem, DpiReportDevicePowerStateDownWorkItemCallback, DelayedWorkQueue, 0LL);
      }
    }
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    McTemplateK0xq(v6, &Dxgk_DpiRequestDevicePowerIrp, v7, *(_QWORD *)(a1 + 3896), v2);
  v10 = *(unsigned int *)(a1 + 4300);
  if ( (unsigned int)v10 >= 3 )
  {
    *(_DWORD *)(a1 + 4300) = 0;
    v10 = 0LL;
  }
  v11 = a1 + 8 * (v10 + 2 * (v10 + 269));
  *(_DWORD *)(v11 + 20) = 0;
  *(_QWORD *)(v11 + 8) = 0LL;
  *(_DWORD *)(v11 + 16) = v2;
  *(_QWORD *)v11 = MEMORY[0xFFFFF78000000014];
  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 64), 0LL, File, 1u, 0x20u);
  if ( result >= 0 )
  {
    result = PoRequestPowerIrp(
               *(PDEVICE_OBJECT *)(a1 + 24),
               2u,
               (POWER_STATE)v2,
               (PREQUEST_POWER_COMPLETE)DpiRuntimePowerIrpCompletion,
               (PVOID)v11,
               0LL);
    v13 = result;
    if ( result != 259 )
    {
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 64), 0LL, 0x20u);
      *(_QWORD *)(v11 + 8) = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)(v11 + 20) = v13;
      v17 = WdLogNewEntry5_WdError(v15, v14, v16);
      *(_QWORD *)(v17 + 24) = v13;
      result = WdLogEvent5_WdError(v17);
    }
    ++*(_DWORD *)(a1 + 4300);
  }
  return result;
}
