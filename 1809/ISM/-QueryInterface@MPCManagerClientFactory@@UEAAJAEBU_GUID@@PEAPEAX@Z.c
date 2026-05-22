/*
 * XREFs of ?QueryInterface@MPCManagerClientFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DBEB0
 * Callers:
 *     ?QueryInterface@MPCManagerClientFactory@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DBCF0 (-QueryInterface@MPCManagerClientFactory@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MPCManagerClientFactory::QueryInterface(__int64 this, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::QueryInterface(
           this,
           a2,
           a3);
}
