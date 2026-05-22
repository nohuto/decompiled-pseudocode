/*
 * XREFs of ??_ESpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z @ 0x1800EB4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AEA0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@MEAA@XZ @ 0x1800EA9EC (--1SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@MEAA@XZ.c)
 */

Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice *__fastcall Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice::`vector deleting destructor'(
        Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice *this,
        char a2)
{
  std::_Ref_count_base *v4; // rcx

  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 28);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 26);
  Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::~SpatialInteractionObjectDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF0);
  return this;
}
