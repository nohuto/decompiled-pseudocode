/*
 * XREFs of ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0062F84
 * Callers:
 *     VidMmOpenAdapter @ 0x1C0014DE0 (VidMmOpenAdapter.c)
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z @ 0x1C003B9B4 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z.c)
 *     ?VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE@@@Z @ 0x1C005EFD8 (-VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESS.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C005FB78 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1C0061AE0 (-Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z.c)
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C009090C (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001EB4 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003790 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C005D520 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?ComputeNewWorkingSet@VIDMM_SEGMENT@@QEAAXK@Z @ 0x1C00628D8 (-ComputeNewWorkingSet@VIDMM_SEGMENT@@QEAAXK@Z.c)
 *     ?ReportProcessAdapterBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C0080EA0 (-ReportProcessAdapterBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z.c)
 *     ?GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_BUDGET_VISIBILITY_STATE@@@Z @ 0x1C0081720 (-GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY.c)
 */

__int64 __fastcall VIDMM_PROCESS::OpenAdapter(struct _KTHREAD **this, struct VIDMM_GLOBAL *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rbp
  __int64 v6; // r8
  __int64 v7; // r14
  __int64 v8; // rcx
  struct VIDMM_PROCESS_ADAPTER_INFO *v10; // rax
  VIDMM_GLOBAL *v11; // rcx
  struct VIDMM_PROCESS_ADAPTER_INFO *v12; // rbp
  unsigned int v13; // r15d
  _DWORD *v14; // r12
  __int64 v15; // rax
  _BYTE v16[56]; // [rsp+20h] [rbp-38h] BYREF

  v2 = 0;
  v5 = *(unsigned int *)(*((_QWORD *)a2 + 3) + 208LL);
  if ( g_IsInternalReleaseOrDbg )
  {
    v15 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v15 + 24) = a2;
    *(_QWORD *)(v15 + 32) = this;
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v16, this + 30);
  v7 = v5;
  v8 = *((_QWORD *)this[2] + v5);
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  }
  else
  {
    v10 = VIDMM_PROCESS::InitializeProcessAdapterInfo(this, a2, v6);
    v12 = v10;
    if ( v10 )
    {
      *((_QWORD *)this[2] + v7) = v10;
      _InterlockedIncrement((volatile signed __int32 *)VIDMM_PROCESS::_pDxProcessPerAdapterCount + v7);
      v13 = 0;
      if ( *((_DWORD *)a2 + 926) )
      {
        v14 = VIDMM_PROCESS::_pDxProcessPerAdapterCount;
        do
          VIDMM_SEGMENT::ComputeNewWorkingSet(*(VIDMM_SEGMENT **)(*((_QWORD *)a2 + 464) + 8LL * v13++), v14[v7]);
        while ( v13 < *((_DWORD *)a2 + 926) );
      }
      if ( bTracingEnabled )
      {
        VIDMM_GLOBAL::GetProcessBudgetBandAndVisibility(
          v11,
          this[4],
          (struct VIDMM_PROCESS_ADAPTER_INFO *)((char *)v12 + 392),
          (struct VIDMM_PROCESS_ADAPTER_INFO *)((char *)v12 + 384));
        VIDMM_GLOBAL::ReportProcessAdapterBudget(a2, v12);
      }
    }
    else
    {
      v2 = -1073741801;
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  return v2;
}
