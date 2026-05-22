/*
 * XREFs of ?Release@MPCManagerClientFactory@@UEAAKXZ @ 0x180113AC0
 * Callers:
 *     ?Release@MPCManagerClientFactory@@W7EAAKXZ @ 0x180039A60 (-Release@MPCManagerClientFactory@@W7EAAKXZ.c)
 *     ?Release@MPCManagerClientFactory@@WCI@EAAKXZ @ 0x180039A70 (-Release@MPCManagerClientFactory@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MPCManagerClientFactory::Release(__int64 this)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::Input::MPCManager::IMPCManagerClientStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(this);
}
