/*
 * XREFs of ?QueryMitigatedRangeCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_QUERYMITIGATEDRANGECOUNT@@@Z @ 0x1C01DFDB0
 * Callers:
 *     DxgkDdiQueryMitigatedRangeCount @ 0x1C01E0D74 (DxgkDdiQueryMitigatedRangeCount.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@I@Z @ 0x1C0035F78 (-GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@I@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::QueryMitigatedRangeCount(__int64 a1, int a2, unsigned int *a3)
{
  __int64 v6; // rdx
  DXGVIRTUALGPUMANAGER *v7; // rcx
  struct DXGK_VIRTUAL_GPU *VirtualGpuByIndex; // rax
  unsigned int v9; // ebx
  __int64 v10; // rax
  _BYTE v12[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 == 1 )
    v6 = *(_QWORD *)(a1 + 1504);
  else
    v6 = *(_QWORD *)(a1 + 1496);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v12, (struct DXGPUSHLOCK *const)(v6 + 40));
  if ( a2 == 1 )
    v7 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1504);
  else
    v7 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1496);
  if ( v7 && (VirtualGpuByIndex = DXGVIRTUALGPUMANAGER::GetVirtualGpuByIndex(v7, *a3)) != 0LL )
  {
    v9 = (*(__int64 (__fastcall **)(struct DXGK_VIRTUAL_GPU *, unsigned int *))(*(_QWORD *)VirtualGpuByIndex + 128LL))(
           VirtualGpuByIndex,
           a3);
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v10 + 24) = *a3;
    WdLogEvent5_WdError(v10);
    v9 = -1073741811;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
  return v9;
}
