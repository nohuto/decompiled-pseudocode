/*
 * XREFs of ??4?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDCompositionDesktopDevicePartner@@@Z @ 0x18000F804
 * Callers:
 *     ?Initialize@UdwmDcompVisual@@QEAAJXZ @ 0x18000F2E8 (-Initialize@UdwmDcompVisual@@QEAAJXZ.c)
 *     ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x1800405C8 (-InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ @ 0x1800B38FC (-ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800390F0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v2 = *a1;
    }
    v6 = v2;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
  }
  return a1;
}
