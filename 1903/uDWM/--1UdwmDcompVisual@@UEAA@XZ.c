/*
 * XREFs of ??1UdwmDcompVisual@@UEAA@XZ @ 0x180026684
 * Callers:
 *     ??_EUdwmDcompVisual@@UEAAPEAXI@Z @ 0x180026700 (--_EUdwmDcompVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseResources@SharedDwmDcompVisual@@QEAAXXZ @ 0x18000FA80 (-ReleaseResources@SharedDwmDcompVisual@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800390F0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall UdwmDcompVisual::~UdwmDcompVisual(UdwmDcompVisual *this)
{
  *(_QWORD *)this = &UdwmDcompVisual::`vftable';
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 96);
  SharedDwmDcompVisual::ReleaseResources((UdwmDcompVisual *)((char *)this + 16));
  SharedDwmDcompVisual::ReleaseResources((UdwmDcompVisual *)((char *)this + 56));
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 96);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 72);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 64);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 32);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 24);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
