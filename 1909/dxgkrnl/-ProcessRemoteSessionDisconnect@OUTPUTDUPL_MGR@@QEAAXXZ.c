/*
 * XREFs of ?ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C0274E90
 * Callers:
 *     DxgkSessionDisconnected @ 0x1C01408C0 (DxgkSessionDisconnected.c)
 * Callees:
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C0141A60 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessRemoteSessionDisconnect(OUTPUTDUPL_CONTEXT **this)
{
  unsigned int i; // ebx

  for ( i = 0; i < *((_DWORD *)this + 13); ++i )
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this, i, 0LL, 0, 0, 8);
}
