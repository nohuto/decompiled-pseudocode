/*
 * XREFs of DxgkDdiSetVirtualGpuVmBus @ 0x1C02107B4
 * Callers:
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C004B958 (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C003C3E0 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x1C020E738 (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUI.c)
 */

__int64 __fastcall DxgkDdiSetVirtualGpuVmBus(_QWORD *a1, int a2, struct _LUID *a3, int *a4)
{
  struct DXGK_VIRTUAL_GPU *VirtualGpuByLuid; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned int v10; // ebx
  int v12; // [rsp+28h] [rbp-10h]

  VirtualGpuByLuid = ADAPTER_RENDER::FindVirtualGpuByLuid(a1[320], a2, a3);
  if ( VirtualGpuByLuid )
  {
    v10 = (*(__int64 (__fastcall **)(struct DXGK_VIRTUAL_GPU *, int *))(*(_QWORD *)VirtualGpuByLuid + 24LL))(
            VirtualGpuByLuid,
            a4);
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(0LL, v7, v8);
    *(_QWORD *)(v9 + 24) = 1515LL;
    WdLogEvent5_WdError(v9);
    v10 = -1073741811;
  }
  if ( bTracingEnabled )
  {
    v12 = *a4;
    VgpuTrace(1, v10, a1, L"DxgkDdiSetVirtualGpuVmBus", (wchar_t *)L"%d", v12);
  }
  return v10;
}
