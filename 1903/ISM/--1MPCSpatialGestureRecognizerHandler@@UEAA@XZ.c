/*
 * XREFs of ??1MPCSpatialGestureRecognizerHandler@@UEAA@XZ @ 0x18008F504
 * Callers:
 *     ??_GMPCSpatialGestureRecognizerHandler@@UEAAPEAXI@Z @ 0x18008F5A0 (--_GMPCSpatialGestureRecognizerHandler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?UnregisterSpatialEventHandlers@MPCSpatialGestureRecognizerHandler@@AEAAXXZ @ 0x18009155C (-UnregisterSpatialEventHandlers@MPCSpatialGestureRecognizerHandler@@AEAAXXZ.c)
 */

void __fastcall MPCSpatialGestureRecognizerHandler::~MPCSpatialGestureRecognizerHandler(
        MPCSpatialGestureRecognizerHandler *this)
{
  *(_QWORD *)this = &MPCSpatialGestureRecognizerHandler::`vftable';
  MPCSpatialGestureRecognizerHandler::UnregisterSpatialEventHandlers(this);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 14);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 2);
}
