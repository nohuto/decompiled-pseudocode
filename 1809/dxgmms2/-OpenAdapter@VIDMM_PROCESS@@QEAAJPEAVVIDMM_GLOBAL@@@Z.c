/*
 * XREFs of ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C006E300
 * Callers:
 *     VidMmOpenAdapter @ 0x1C000FEB0 (VidMmOpenAdapter.c)
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z @ 0x1C003AFD4 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z.c)
 *     ?VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE@@@Z @ 0x1C006BE08 (-VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESS.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1C006D4E0 (-Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C006E96C (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C008D070 (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00023E8 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00029E0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_BUDGET_VISIBILITY_STATE@@@Z @ 0x1C006BAC0 (-GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY.c)
 *     ?ReportProcessAdapterBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C006BB00 (-ReportProcessAdapterBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z.c)
 *     ?ComputeNewWorkingSet@VIDMM_SEGMENT@@QEAAXK@Z @ 0x1C006D0C8 (-ComputeNewWorkingSet@VIDMM_SEGMENT@@QEAAXK@Z.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C007A130 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 */

__int64 __fastcall VIDMM_PROCESS::OpenAdapter(struct _KTHREAD **this, struct VIDMM_GLOBAL *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v7; // rcx
  struct VIDMM_PROCESS_ADAPTER_INFO *v9; // rax
  VIDMM_GLOBAL *v10; // rcx
  struct VIDMM_PROCESS_ADAPTER_INFO *v11; // rbp
  unsigned int v12; // r15d
  _DWORD *v13; // r12
  __int64 v14; // rax
  _BYTE v15[56]; // [rsp+20h] [rbp-38h] BYREF

  v2 = 0;
  v5 = *(unsigned int *)(*((_QWORD *)a2 + 3) + 208LL);
  if ( g_IsInternalReleaseOrDbg )
  {
    v14 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v14 + 24) = a2;
    *(_QWORD *)(v14 + 32) = this;
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v15, this + 30);
  v6 = v5;
  v7 = *((_QWORD *)this[2] + v5);
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  }
  else
  {
    v9 = VIDMM_PROCESS::InitializeProcessAdapterInfo((VIDMM_PROCESS *)this, a2);
    v11 = v9;
    if ( v9 )
    {
      *((_QWORD *)this[2] + v6) = v9;
      _InterlockedIncrement((volatile signed __int32 *)VIDMM_PROCESS::_pDxProcessPerAdapterCount + v6);
      v12 = 0;
      if ( *((_DWORD *)a2 + 926) )
      {
        v13 = VIDMM_PROCESS::_pDxProcessPerAdapterCount;
        do
          VIDMM_SEGMENT::ComputeNewWorkingSet(*(VIDMM_SEGMENT **)(*((_QWORD *)a2 + 464) + 8LL * v12++), v13[v6]);
        while ( v12 < *((_DWORD *)a2 + 926) );
      }
      if ( bTracingEnabled )
      {
        VIDMM_GLOBAL::GetProcessBudgetBandAndVisibility(
          v10,
          this[4],
          (struct VIDMM_PROCESS_ADAPTER_INFO *)((char *)v11 + 392),
          (struct VIDMM_PROCESS_ADAPTER_INFO *)((char *)v11 + 384));
        VIDMM_GLOBAL::ReportProcessAdapterBudget(a2, (struct _KTHREAD **)v11);
      }
    }
    else
    {
      v2 = -1073741801;
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  return v2;
}
