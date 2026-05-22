/*
 * XREFs of ??1SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x1800EAB3C
 * Callers:
 *     ??1SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAA@XZ @ 0x1800EAB78 (--1SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAA@XZ.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SpatialInteractionSourceController_::_1_::dtor$1 @ 0x1801630C2 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--Spatia_ea_1801630C2.c)
 *     ??1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x1801632C0 (--1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::~SpatialInteractionSourceDevice(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *this)
{
  WindowsDeleteString(*((HSTRING *)this + 12));
  *((_QWORD *)this + 12) = 0LL;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 11);
  WindowsDeleteString(*((HSTRING *)this + 5));
  *((_QWORD *)this + 5) = 0LL;
}
