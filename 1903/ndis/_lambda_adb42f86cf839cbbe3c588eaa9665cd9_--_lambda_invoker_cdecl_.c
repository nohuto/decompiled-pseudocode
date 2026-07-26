/*
 * XREFs of _lambda_adb42f86cf839cbbe3c588eaa9665cd9_::_lambda_invoker_cdecl_ @ 0x1C010C4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FCE84 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0108308 (-DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 */

void __fastcall lambda_adb42f86cf839cbbe3c588eaa9665cd9_::_lambda_invoker_cdecl_(Ndis::Initmode **a1)
{
  enum CallRunMode v2; // r8d

  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)((char *)*a1 + 5104), RunSynchronous, 1);
  Ndis::Initmode::DisableIfNeeded(*a1, 0LL, v2);
}
