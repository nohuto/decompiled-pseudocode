/*
 * XREFs of _lambda_c85953a4fcc4a2fc811c5b6ed2edb7aa_::__lambda_c85953a4fcc4a2fc811c5b6ed2edb7aa_ @ 0x180107958
 * Callers:
 *     _CAppViewManager::PrepareToSwitch_::_1_::dtor$2 @ 0x18010BAE5 (_CAppViewManager--PrepareToSwitch_--_1_--dtor$2.c)
 *     _CAppViewManager::ShowView_::_1_::dtor$2 @ 0x18010C141 (_CAppViewManager--ShowView_--_1_--dtor$2.c)
 *     _CAppViewManager::SwitchViews_::_1_::dtor$2 @ 0x18010F985 (_CAppViewManager--SwitchViews_--_1_--dtor$2.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_c85953a4fcc4a2fc811c5b6ed2edb7aa_::__lambda_c85953a4fcc4a2fc811c5b6ed2edb7aa_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 4);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
