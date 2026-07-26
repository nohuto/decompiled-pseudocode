/*
 * XREFs of _lambda_adb42f86cf839cbbe3c588eaa9665cd9_::_lambda_invoker_cdecl_ @ 0x1C00B3910
 * Callers:
 *     <none>
 * Callees:
 *     ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00BE458 (-DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00C0590 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 */

void __fastcall lambda_adb42f86cf839cbbe3c588eaa9665cd9_::_lambda_invoker_cdecl_(struct _NDIS_MINIPORT_BLOCK **a1)
{
  enum CallRunMode v2; // r8d

  Ndis::BindEngine::ApplyBindChanges(&(*a1)->BindEngine, RunSynchronous, 1);
  Ndis::Initmode::DisableIfNeeded(*a1, RunSynchronous, v2);
}
