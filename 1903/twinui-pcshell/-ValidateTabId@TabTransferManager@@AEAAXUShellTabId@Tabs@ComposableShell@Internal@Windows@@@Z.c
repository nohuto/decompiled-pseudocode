/*
 * XREFs of ?ValidateTabId@TabTransferManager@@AEAAXUShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18025A37C
 * Callers:
 *     _lambda_101c7afbd5e76fc2a50976d3f19be39a_::operator() @ 0x180255F9C (_lambda_101c7afbd5e76fc2a50976d3f19be39a_--operator().c)
 *     _lambda_63df1022615e5d58b392f54f931127cc_::operator() @ 0x180256440 (_lambda_63df1022615e5d58b392f54f931127cc_--operator().c)
 *     _lambda_6fa5311f677dfb1ca9719d5bf83446d7_::operator() @ 0x18025672C (_lambda_6fa5311f677dfb1ca9719d5bf83446d7_--operator().c)
 *     _lambda_9e85f7730accfb574b1a6ae66a739164_::operator() @ 0x180256944 (_lambda_9e85f7730accfb574b1a6ae66a739164_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c0a2f07679fb06ed1e26642539d8e628___::Run @ 0x180258D50 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c0a2f07679fb06ed1e26642539d8e628___--Run.c)
 * Callees:
 *     ?PerformCancel@TabTransferManager@@AEAAX_N@Z @ 0x180257DC0 (-PerformCancel@TabTransferManager@@AEAAX_N@Z.c)
 */

void __fastcall TabTransferManager::ValidateTabId(TabTransferManager *a1, _QWORD *a2)
{
  __int64 v2; // rax

  v2 = *a2 - *((_QWORD *)a1 + 24);
  if ( *a2 == *((_QWORD *)a1 + 24) )
    v2 = a2[1] - *((_QWORD *)a1 + 25);
  if ( v2 )
    TabTransferManager::PerformCancel(a1, 0);
}
