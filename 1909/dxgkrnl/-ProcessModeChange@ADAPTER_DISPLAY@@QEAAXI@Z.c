/*
 * XREFs of ?ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C014E718
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01284EC (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C0141A60 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 */

void __fastcall ADAPTER_DISPLAY::ProcessModeChange(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 2)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v6 + 24) = 5444LL;
    WdLogEvent5_WdAssertion(v6);
  }
  OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(*((OUTPUTDUPL_CONTEXT ***)this + 13), a2, 0LL, 0, 0, 11);
}
