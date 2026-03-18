/*
 * XREFs of ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C02715BC
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F6790 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C0114BB0 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00E9A20 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C00E9DA0 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 */

void __fastcall OUTPUTDUPL_MGR::CleanUpPendingList(OUTPUTDUPL_MGR *this, PERESOURCE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax

  v4 = *(_QWORD *)this;
  if ( v4 && !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v4 + 16)) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v7 + 24) = 1496LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !*((_DWORD *)a2 + 18) )
    ExIsResourceAcquiredExclusiveLite(a2[13]);
  OUTPUTDUPL_MGR::ProcessPendingDestroy(this, (struct DXGDEVICE *)a2, 0);
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(v9, v8);
  if ( RemoteOutputDuplMgr )
    OUTPUTDUPL_MGR::ProcessPendingDestroy(RemoteOutputDuplMgr, (struct DXGDEVICE *)a2, 0);
}
