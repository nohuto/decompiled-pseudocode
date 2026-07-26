/*
 * XREFs of _lambda_3586b9b7f2fd6000f93b66a493a8f736_::_lambda_invoker_cdecl_ @ 0x1C00BE420
 * Callers:
 *     <none>
 * Callees:
 *     ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00BE458 (-DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00C0590 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 */

void __fastcall lambda_3586b9b7f2fd6000f93b66a493a8f736_::_lambda_invoker_cdecl_(struct NDIS_BIND_LINK_BASE *a1)
{
  enum CallRunMode v2; // r8d

  Ndis::BindEngine::ApplyBindChanges(&a1->BindState.Miniport->BindEngine, RunAsynchronous, 0);
  Ndis::Initmode::DisableIfNeeded(a1->BindState.Miniport, RunAsynchronous, v2);
}
