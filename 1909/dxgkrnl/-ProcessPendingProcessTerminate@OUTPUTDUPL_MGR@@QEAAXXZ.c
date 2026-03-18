/*
 * XREFs of ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C014197C
 * Callers:
 *     OutputDuplProcessTerminate @ 0x1C00D1BF4 (OutputDuplProcessTerminate.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E94A8 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     _lambda_77b62ca48c87c620acb82d9376f9f1ce_::_lambda_invoker_cdecl_ @ 0x1C01503F0 (_lambda_77b62ca48c87c620acb82d9376f9f1ce_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C00E9DA0 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C0141A60 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessPendingProcessTerminate(OUTPUTDUPL_MGR *this)
{
  unsigned int i; // edi

  for ( i = 0; i < *((_DWORD *)this + 13); ++i )
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this, i, 0LL, 1LL, 0, 3);
  OUTPUTDUPL_MGR::ProcessPendingDestroy(this, 0LL, 0);
}
