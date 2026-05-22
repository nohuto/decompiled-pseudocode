/*
 * XREFs of ?QueryInterface@MPCManagerClient@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE200
 * Callers:
 *     ?QueryInterface@MPCManagerClient@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DBBD0 (-QueryInterface@MPCManagerClient@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCManagerClient@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DBC70 (-QueryInterface@MPCManagerClient@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCManagerClient@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DBCB0 (-QueryInterface@MPCManagerClient@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCManagerClient@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DBD10 (-QueryInterface@MPCManagerClient@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MPCManagerClient::QueryInterface(__int64 this, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>::QueryInterface(
           this,
           a2,
           a3);
}
