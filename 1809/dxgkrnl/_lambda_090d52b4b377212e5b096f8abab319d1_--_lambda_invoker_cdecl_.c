/*
 * XREFs of _lambda_090d52b4b377212e5b096f8abab319d1_::_lambda_invoker_cdecl_ @ 0x1C023BBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C00E1440 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C012B530 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 */

__int64 __fastcall lambda_090d52b4b377212e5b096f8abab319d1_::_lambda_invoker_cdecl_(
        OUTPUTDUPL_CONTEXT **this,
        __int64 a2)
{
  OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(
    this,
    *(_DWORD *)(a2 + 4),
    0LL,
    *(_DWORD *)(a2 + 8) == 0,
    0,
    *(_DWORD *)(a2 + 8) != 0 ? 9 : 0);
  OUTPUTDUPL_MGR::ProcessPendingDestroy((OUTPUTDUPL_MGR *)this, 0LL, 0);
  return 0LL;
}
