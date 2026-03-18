/*
 * XREFs of ?ProcessAdapterReset@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C023F0D4
 * Callers:
 *     _lambda_8c4f9d5363fac7cd16350590c99b22c5_::_lambda_invoker_cdecl_ @ 0x1C01C0580 (_lambda_8c4f9d5363fac7cd16350590c99b22c5_--_lambda_invoker_cdecl_.c)
 *     ?UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z @ 0x1C023FE10 (-UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C012B530 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessAdapterReset(OUTPUTDUPL_CONTEXT **this)
{
  OUTPUTDUPL_CONTEXT *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned int i; // edi

  v2 = *this;
  if ( v2 && !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)v2 + 2)) )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v4 + 24) = 1434LL;
    WdLogEvent5_WdAssertion(v4);
  }
  for ( i = 0; i < *((_DWORD *)this + 13); ++i )
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this, i, 0LL, 0, 0, 2);
}
