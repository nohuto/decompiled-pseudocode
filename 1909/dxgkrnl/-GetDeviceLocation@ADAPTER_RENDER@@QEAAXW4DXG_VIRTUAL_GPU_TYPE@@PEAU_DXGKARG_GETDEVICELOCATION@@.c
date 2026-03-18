/*
 * XREFs of ?GetDeviceLocation@ADAPTER_RENDER@@QEAAXW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETDEVICELOCATION@@@Z @ 0x1C020EF3C
 * Callers:
 *     DxgkDdiGetDeviceLocation @ 0x1C02102BC (DxgkDdiGetDeviceLocation.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000CE08 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@I@Z @ 0x1C003C4F8 (-GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@I@Z.c)
 */

void __fastcall ADAPTER_RENDER::GetDeviceLocation(__int64 a1, int a2, unsigned int *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  DXGVIRTUALGPUMANAGER *v9; // rcx
  struct DXGK_VIRTUAL_GPU *VirtualGpuByIndex; // rax
  __int64 v11; // rax
  _BYTE v12[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 == 1 )
    v6 = *(_QWORD *)(a1 + 1504);
  else
    v6 = *(_QWORD *)(a1 + 1496);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v12, (struct _KTHREAD **)(v6 + 40));
  v8 = *a3;
  if ( a2 == 1 )
    v9 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1504);
  else
    v9 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1496);
  if ( v9
    && (VirtualGpuByIndex = DXGVIRTUALGPUMANAGER::GetVirtualGpuByIndex(v9, v8, v7),
        (v7 = (__int64)VirtualGpuByIndex) != 0) )
  {
    (*(void (__fastcall **)(struct DXGK_VIRTUAL_GPU *, unsigned int *))(*(_QWORD *)VirtualGpuByIndex + 88LL))(
      VirtualGpuByIndex,
      a3);
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v9, v8, v7);
    *(_QWORD *)(v11 + 24) = *a3;
    WdLogEvent5_WdError(v11);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
}
