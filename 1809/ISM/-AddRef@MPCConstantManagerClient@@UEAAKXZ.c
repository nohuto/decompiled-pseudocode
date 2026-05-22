/*
 * XREFs of ?AddRef@MPCConstantManagerClient@@UEAAKXZ @ 0x1800E8E40
 * Callers:
 *     ?AddRef@MPCConstantManagerClient@@W7EAAKXZ @ 0x1800E8BB0 (-AddRef@MPCConstantManagerClient@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MPCConstantManagerClient::AddRef(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>::AddRef(this);
}
