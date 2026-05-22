/*
 * XREFs of ?QueryInterface@ServerConnectionArgs@MPCManager@Input@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE850
 * Callers:
 *     ?QueryInterface@ServerConnectionArgs@MPCManager@Input@Internal@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE6D0 (-QueryInterface@ServerConnectionArgs@MPCManager@Input@Internal@Windows@@W7EAAJAEBU_GUID@@PEAPEAX.c)
 *     ?QueryInterface@ServerConnectionArgs@MPCManager@Input@Internal@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE860 (-QueryInterface@ServerConnectionArgs@MPCManager@Input@Internal@Windows@@WBA@EAAJAEBU_GUID@@PEAPE.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Internal::Input::MPCManager::ServerConnectionArgs::QueryInterface(
        __int64 this,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IServerConnectionArgs,Microsoft::WRL::FtmBase>::QueryInterface(
           this,
           a2,
           a3);
}
