/*
 * XREFs of ??1UdwmDcompVisual@@UEAA@XZ @ 0x1800234F8
 * Callers:
 *     ??_EUdwmDcompVisual@@UEAAPEAXI@Z @ 0x180023620 (--_EUdwmDcompVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseResources@SharedDwmDcompVisual@@QEAAXPEAUIDwmChannel@@@Z @ 0x18002357C (-ReleaseResources@SharedDwmDcompVisual@@QEAAXPEAUIDwmChannel@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037508 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall UdwmDcompVisual::~UdwmDcompVisual(struct IDwmChannel **this)
{
  *this = (struct IDwmChannel *)&UdwmDcompVisual::`vftable';
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(this + 12);
  SharedDwmDcompVisual::ReleaseResources((SharedDwmDcompVisual *)(this + 2), this[13]);
  SharedDwmDcompVisual::ReleaseResources((SharedDwmDcompVisual *)(this + 7), this[13]);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(this + 12);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(this + 9);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(this + 8);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(this + 4);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(this + 3);
  *this = (struct IDwmChannel *)&CGlassColorizationResources::`vftable';
}
