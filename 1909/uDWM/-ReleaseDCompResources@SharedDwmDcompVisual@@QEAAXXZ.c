/*
 * XREFs of ?ReleaseDCompResources@SharedDwmDcompVisual@@QEAAXXZ @ 0x180024C3C
 * Callers:
 *     ?ValidateDevice@UdwmDcompVisual@@QEAAJPEA_N@Z @ 0x18000B200 (-ValidateDevice@UdwmDcompVisual@@QEAAJPEA_N@Z.c)
 *     ?ReleaseResources@SharedDwmDcompVisual@@QEAAXXZ @ 0x180024BB4 (-ReleaseResources@SharedDwmDcompVisual@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180038228 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall SharedDwmDcompVisual::ReleaseDCompResources(SharedDwmDcompVisual *this)
{
  void *v2; // rcx

  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 8);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 16);
  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 4) = 0LL;
  }
}
