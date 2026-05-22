/*
 * XREFs of ?Release@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@UEAAKXZ @ 0x180113980
 * Callers:
 *     ?Release@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@W7EAAKXZ @ 0x1800394D0 (-Release@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@W7EAAKXZ.c)
 *     ?Release@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@WBA@EAAKXZ @ 0x1800394E0 (-Release@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Internal::Input::MPCManager::HomeGestureEventArgs::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IHomeGestureEventArgs,Microsoft::WRL::FtmBase>::Release(this);
}
