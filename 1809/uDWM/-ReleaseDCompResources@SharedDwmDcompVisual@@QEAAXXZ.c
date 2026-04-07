/*
 * XREFs of ?ReleaseDCompResources@SharedDwmDcompVisual@@QEAAXXZ @ 0x180072B1C
 * Callers:
 *     ?ValidateDevice@UdwmDcompVisual@@QEAAJXZ @ 0x180023B34 (-ValidateDevice@UdwmDcompVisual@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037508 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall SharedDwmDcompVisual::ReleaseDCompResources(SharedDwmDcompVisual *this)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 2);
  CloseHandle(*((HANDLE *)this + 4));
}
