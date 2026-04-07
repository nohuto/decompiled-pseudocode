/*
 * XREFs of ?ValidateDevice@UdwmDcompVisual@@QEAAJXZ @ 0x180023B34
 * Callers:
 *     ?ValidateDevice@AcrylicHostBackdrop@@QEAAJXZ @ 0x180024B34 (-ValidateDevice@AcrylicHostBackdrop@@QEAAJXZ.c)
 *     ?PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180026F08 (-PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ @ 0x180022478 (-GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ.c)
 *     ??$As@UIDCompositionDevice@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@@Details@12@@Z @ 0x180023BF0 (--$As@UIDCompositionDevice@@@-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037508 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003852C (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReleaseDCompResources@SharedDwmDcompVisual@@QEAAXXZ @ 0x180072B1C (-ReleaseDCompResources@SharedDwmDcompVisual@@QEAAXXZ.c)
 *     ?HandleInteropDeviceLost@CDesktopManager@@SAXXZ @ 0x180079328 (-HandleInteropDeviceLost@CDesktopManager@@SAXXZ.c)
 *     ?ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ @ 0x1800AF53C (-ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ.c)
 */

__int64 __fastcall UdwmDcompVisual::ValidateDevice(UdwmDcompVisual *this)
{
  char *v1; // rdi
  struct IDCompositionDesktopDevicePartner *v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  __int64 v7; // rdx
  int inserted; // eax
  int v9; // [rsp+20h] [rbp-18h]
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v1 = (char *)this + 96;
  v3 = (struct IDCompositionDesktopDevicePartner *)*((_QWORD *)this + 12);
  if ( !v3 || v3 != CDesktopManager::GetDCompositionInteropDevice(this) )
  {
    v12 = 0;
    goto LABEL_16;
  }
  v13 = 0LL;
  v12 = 1;
  v4 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<IDCompositionDevice>(v1, &v13);
  v5 = v4;
  if ( v4 < 0 )
  {
    v7 = 366LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
      (const char *)(unsigned int)v4,
      v9);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v13);
    return v5;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v13 + 208LL))(v13, &v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    v7 = 368LL;
    goto LABEL_13;
  }
  if ( !v12 )
    CDesktopManager::HandleInteropDeviceLost();
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v13);
  if ( v12 )
    return 0LL;
LABEL_16:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v1);
  SharedDwmDcompVisual::ReleaseDCompResources((UdwmDcompVisual *)((char *)this + 16));
  SharedDwmDcompVisual::ReleaseDCompResources((UdwmDcompVisual *)((char *)this + 56));
  inserted = VisualCollection::InsertRelative(
               (VisualCollection *)(*((_QWORD *)this + 2) + 32LL),
               *((struct CVisual **)this + 7),
               0LL,
               0,
               1);
  v5 = inserted;
  if ( inserted >= 0 )
    v5 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (unsigned int)"windows\\dwm\\udwm\\udwmdcompvisual.h",
      (const char *)(unsigned int)inserted,
      v10);
  if ( (v5 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17A,
      (unsigned int)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
      (const char *)v5,
      v10);
    return v5;
  }
  result = UdwmDcompVisual::ReinitializeDComp(this);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
