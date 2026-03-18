/*
 * XREFs of ?GetVirtualGpuInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETVIRTUALGPUINFO@@PEAU_LUID@@PEAU_GUID@@@Z @ 0x1C01DFAF0
 * Callers:
 *     DxgkDdiGetVirtualGpuInfo @ 0x1C01E0C2C (DxgkDdiGetVirtualGpuInfo.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@I@Z @ 0x1C0035F78 (-GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@I@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetVirtualGpuInfo(__int64 a1, int a2, unsigned int *a3, _QWORD *a4, _OWORD *a5)
{
  __int64 v9; // rdx
  struct DXGK_VIRTUAL_GPU *v10; // r8
  __int64 v11; // rdx
  DXGVIRTUALGPUMANAGER *v12; // rcx
  struct DXGK_VIRTUAL_GPU *VirtualGpuByIndex; // rax
  unsigned int v14; // ebx
  __int64 v15; // rax
  _BYTE v17[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 == 1 )
    v9 = *(_QWORD *)(a1 + 1504);
  else
    v9 = *(_QWORD *)(a1 + 1496);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v17, (struct DXGPUSHLOCK *const)(v9 + 40));
  v11 = *a3;
  if ( a2 == 1 )
    v12 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1504);
  else
    v12 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1496);
  if ( v12
    && (VirtualGpuByIndex = DXGVIRTUALGPUMANAGER::GetVirtualGpuByIndex(v12, v11), (v10 = VirtualGpuByIndex) != 0LL) )
  {
    *a4 = *(_QWORD *)((char *)VirtualGpuByIndex + 28);
    *a5 = *(_OWORD *)((char *)VirtualGpuByIndex + 36);
    v14 = (*(__int64 (__fastcall **)(struct DXGK_VIRTUAL_GPU *, unsigned int *))(*(_QWORD *)VirtualGpuByIndex + 120LL))(
            VirtualGpuByIndex,
            a3);
  }
  else
  {
    v15 = WdLogNewEntry5_WdWarning(v12, v11, v10);
    *(_QWORD *)(v15 + 24) = *a3;
    WdLogEvent5_WdWarning(v15);
    v14 = -1073741811;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  return v14;
}
