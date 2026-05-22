/*
 * XREFs of ?Release@MPCManagerClientFactory@@UEAAKXZ @ 0x1800DE320
 * Callers:
 *     ?Release@MPCManagerClientFactory@@W7EAAKXZ @ 0x1800DBC00 (-Release@MPCManagerClientFactory@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MPCManagerClientFactory::Release(__int64 this)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(this);
}
