/*
 * XREFs of ?Initialize@UdwmDcompVisual@@QEAAJPEAUIDwmChannel@@@Z @ 0x1800223D4
 * Callers:
 *     ?Initialize@AcrylicHostBackdrop@@QEAAJPEAUIDwmChannel@@@Z @ 0x1800224A4 (-Initialize@AcrylicHostBackdrop@@QEAAJPEAUIDwmChannel@@@Z.c)
 *     ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180043E68 (-CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?InitializeDComp@UdwmDcompVisual@@AEAAJPEAUIDCompositionDesktopDevicePartner@@@Z @ 0x1800220B4 (-InitializeDComp@UdwmDcompVisual@@AEAAJPEAUIDCompositionDesktopDevicePartner@@@Z.c)
 *     ??4?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDCompositionDesktopDevicePartner@@@Z @ 0x180022420 (--4-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDCompositionDes.c)
 *     ?GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ @ 0x180022478 (-GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall UdwmDcompVisual::Initialize(UdwmDcompVisual *this, struct IDwmChannel *a2)
{
  struct IDCompositionDesktopDevicePartner *DCompositionInteropDevice; // rax
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_QWORD *)this + 13) = a2;
  DCompositionInteropDevice = CDesktopManager::GetDCompositionInteropDevice();
  Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::operator=((char *)this + 96, DCompositionInteropDevice);
  v4 = UdwmDcompVisual::InitializeDComp(this, *((struct IDCompositionDesktopDevicePartner **)this + 12));
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2D,
    (unsigned int)"windows\\dwm\\udwm\\udwmdcompvisual.h",
    (const char *)(unsigned int)v4,
    v7);
  return v5;
}
