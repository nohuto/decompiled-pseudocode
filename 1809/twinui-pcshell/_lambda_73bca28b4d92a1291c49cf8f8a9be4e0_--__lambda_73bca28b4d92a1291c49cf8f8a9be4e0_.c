/*
 * XREFs of _lambda_73bca28b4d92a1291c49cf8f8a9be4e0_::__lambda_73bca28b4d92a1291c49cf8f8a9be4e0_ @ 0x180089AF4
 * Callers:
 *     _lambda_613b54cc2e99550f8413255175a70a8b_::operator() @ 0x180089B74 (_lambda_613b54cc2e99550f8413255175a70a8b_--operator().c)
 *     ??_G?$CTaskWrapper@V_lambda_2aebaedc827852b96f950251c46b8204_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180089ED0 (--_G-$CTaskWrapper@V_lambda_2aebaedc827852b96f950251c46b8204_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     _CAppViewManager::Switch_::_1_::dtor$2 @ 0x18010F856 (_CAppViewManager--Switch_--_1_--dtor$2.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_73bca28b4d92a1291c49cf8f8a9be4e0_::__lambda_73bca28b4d92a1291c49cf8f8a9be4e0_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
