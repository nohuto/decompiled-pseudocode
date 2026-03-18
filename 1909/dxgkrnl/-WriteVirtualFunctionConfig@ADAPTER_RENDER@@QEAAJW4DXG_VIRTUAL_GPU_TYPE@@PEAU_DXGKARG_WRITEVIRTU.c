/*
 * XREFs of ?WriteVirtualFunctionConfig@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_WRITEVIRTUALFUNCTIONCONFIG@@@Z @ 0x1C020FFE0
 * Callers:
 *     DxgkDdiWriteVirtualFunctionConfig @ 0x1C0210ED4 (DxgkDdiWriteVirtualFunctionConfig.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000CE08 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@I@Z @ 0x1C003C4F8 (-GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@I@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::WriteVirtualFunctionConfig(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  DXGVIRTUALGPUMANAGER *v9; // rcx
  struct DXGK_VIRTUAL_GPU *VirtualGpuByIndex; // rax
  unsigned int v11; // ebx
  __int64 v12; // rax
  _BYTE v14[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 == 1 )
    v6 = *(_QWORD *)(a1 + 1504);
  else
    v6 = *(_QWORD *)(a1 + 1496);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v14, (struct _KTHREAD **)(v6 + 40));
  v8 = *(unsigned int *)(a3 + 8);
  if ( a2 == 1 )
    v9 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1504);
  else
    v9 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1496);
  if ( v9
    && (VirtualGpuByIndex = DXGVIRTUALGPUMANAGER::GetVirtualGpuByIndex(v9, v8, v7),
        (v7 = (__int64)VirtualGpuByIndex) != 0) )
  {
    v11 = (*(__int64 (__fastcall **)(struct DXGK_VIRTUAL_GPU *, __int64))(*(_QWORD *)VirtualGpuByIndex + 56LL))(
            VirtualGpuByIndex,
            a3);
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v9, v8, v7);
    *(_QWORD *)(v12 + 24) = *(unsigned int *)(a3 + 8);
    WdLogEvent5_WdError(v12);
    v11 = -1073741811;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  return v11;
}
