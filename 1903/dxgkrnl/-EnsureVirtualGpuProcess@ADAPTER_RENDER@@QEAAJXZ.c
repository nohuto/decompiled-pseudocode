/*
 * XREFs of ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C020E6DC
 * Callers:
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C020DCF0 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@.c)
 *     ?SetGpuPartitionCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_SETGPUPARTITIONCOUNT@@E@Z @ 0x1C020F6B4 (-SetGpuPartitionCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_SETGPUPARTITIONC.c)
 * Callees:
 *     DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1C02109C8 (DxgkpCheckProcessForVirtualMachineManagementAccess.c)
 */

__int64 __fastcall ADAPTER_RENDER::EnsureVirtualGpuProcess(ADAPTER_RENDER *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rax

  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 192LL) + 64LL) + 5524LL)
    || (unsigned __int8)DxgkpCheckProcessForVirtualMachineManagementAccess() )
  {
    return 0LL;
  }
  v4 = WdLogNewEntry5_WdError(v2, v1, v3);
  *(_QWORD *)(v4 + 24) = 144LL;
  WdLogEvent5_WdError(v4);
  return 3221225485LL;
}
