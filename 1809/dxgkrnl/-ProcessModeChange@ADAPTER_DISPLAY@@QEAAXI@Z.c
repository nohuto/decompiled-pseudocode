/*
 * XREFs of ?ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0139ED8
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CF408 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C012B530 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 */

void __fastcall ADAPTER_DISPLAY::ProcessModeChange(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 2)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 5209LL;
    WdLogEvent5_WdAssertion(v5);
  }
  OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(*((OUTPUTDUPL_CONTEXT ***)this + 13), a2, 0LL, 0, 0, 11);
}
