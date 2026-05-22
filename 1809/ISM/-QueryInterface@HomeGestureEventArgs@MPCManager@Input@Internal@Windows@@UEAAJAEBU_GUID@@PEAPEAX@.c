/*
 * XREFs of ?QueryInterface@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DEC30
 * Callers:
 *     ?QueryInterface@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DEAB0 (-QueryInterface@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@W7EAAJAEBU_GUID@@PEAPEAX.c)
 *     ?QueryInterface@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DEC40 (-QueryInterface@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@WBA@EAAJAEBU_GUID@@PEAPE.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Internal::Input::MPCManager::HomeGestureEventArgs::QueryInterface(
        __int64 this,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IHomeGestureEventArgs,Microsoft::WRL::FtmBase>::QueryInterface(
           this,
           a2,
           a3);
}
