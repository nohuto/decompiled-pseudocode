/*
 * XREFs of ?QueryInterface@MPCConstantManagerClient@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE960
 * Callers:
 *     ?QueryInterface@MPCConstantManagerClient@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E8710 (-QueryInterface@MPCConstantManagerClient@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MPCConstantManagerClient::QueryInterface(__int64 this, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>::QueryInterface(
           this,
           a2,
           a3);
}
