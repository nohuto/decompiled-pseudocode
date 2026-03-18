/*
 * XREFs of ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01419D8
 * Callers:
 *     OutputDuplProcessDestroyDevice @ 0x1C0124C14 (OutputDuplProcessDestroyDevice.c)
 *     _lambda_55055bd30a6c367c9479cf67f85e47ac_::_lambda_invoker_cdecl_ @ 0x1C014F1B0 (_lambda_55055bd30a6c367c9479cf67f85e47ac_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C00E9DA0 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C0141A60 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessDestroyDevice(OUTPUTDUPL_MGR *this, struct DXGDEVICE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int i; // esi
  __int64 v8; // rax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax

  v4 = *(_QWORD *)this;
  if ( v4 && !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v4 + 16)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v8 + 24) = 1474LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !*((_DWORD *)a2 + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)a2 + 13)) )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
    if ( *(struct _KTHREAD **)(v10 + 128) != CurrentThread )
    {
      v11 = WdLogNewEntry5_WdAssertion(v10, CurrentThread);
      *(_QWORD *)(v11 + 24) = 1475LL;
      WdLogEvent5_WdAssertion(v11);
    }
  }
  for ( i = 0; i < *((_DWORD *)this + 13); ++i )
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this, i, a2, 0LL, 0, 5);
  OUTPUTDUPL_MGR::ProcessPendingDestroy(this, a2, 0);
}
