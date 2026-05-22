/*
 * XREFs of ?Release@MPCConstantManagerClient@@UEAAKXZ @ 0x1800DEDE0
 * Callers:
 *     ?Release@MPCConstantManagerClient@@W7EAAKXZ @ 0x1800E8B60 (-Release@MPCConstantManagerClient@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MPCConstantManagerClient::Release(volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>::Release(this);
}
