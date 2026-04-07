/*
 * XREFs of ?Initialize@UdwmDcompVisual@@QEAAJXZ @ 0x18000F2E8
 * Callers:
 *     ?Initialize@AcrylicHostBackdrop@@QEAAJXZ @ 0x180025314 (-Initialize@AcrylicHostBackdrop@@QEAAJXZ.c)
 *     ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180049510 (-CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?InitializeDComp@UdwmDcompVisual@@AEAAJPEAUIDCompositionDesktopDevicePartner@@@Z @ 0x18000F330 (-InitializeDComp@UdwmDcompVisual@@AEAAJPEAUIDCompositionDesktopDevicePartner@@@Z.c)
 *     ??4?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDCompositionDesktopDevicePartner@@@Z @ 0x18000F804 (--4-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDCompositionDes.c)
 *     ?GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ @ 0x18001262C (-GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800781B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall UdwmDcompVisual::Initialize(struct IDCompositionDesktopDevicePartner **this)
{
  struct IDCompositionDesktopDevicePartner *DCompositionInteropDevice; // rax
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  DCompositionInteropDevice = CDesktopManager::GetDCompositionInteropDevice();
  Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::operator=(this + 12, DCompositionInteropDevice);
  v3 = UdwmDcompVisual::InitializeDComp((UdwmDcompVisual *)this, this[12]);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2E,
    (unsigned int)"windows\\dwm\\udwm\\udwmdcompvisual.h",
    (const char *)(unsigned int)v3,
    v6);
  return v4;
}
