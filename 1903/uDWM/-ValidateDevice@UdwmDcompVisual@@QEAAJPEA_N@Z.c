/*
 * XREFs of ?ValidateDevice@UdwmDcompVisual@@QEAAJPEA_N@Z @ 0x18000F13C
 * Callers:
 *     ?PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x18000CB08 (-PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 *     ?ValidateDevice@AcrylicHostBackdrop@@QEAAJXZ @ 0x18000D418 (-ValidateDevice@AcrylicHostBackdrop@@QEAAJXZ.c)
 * Callees:
 *     ??$As@UIDCompositionDevice@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000F200 (--$As@UIDCompositionDevice@@@-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV.c)
 *     ?ReleaseDCompResources@SharedDwmDcompVisual@@QEAAXXZ @ 0x18000FB08 (-ReleaseDCompResources@SharedDwmDcompVisual@@QEAAXXZ.c)
 *     ?GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ @ 0x18001262C (-GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180016C00 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800390F0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A568 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800781B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HandleInteropDeviceLost@CDesktopManager@@SAXXZ @ 0x18007FA0C (-HandleInteropDeviceLost@CDesktopManager@@SAXXZ.c)
 *     ?ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ @ 0x1800B38FC (-ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ.c)
 */

__int64 __fastcall UdwmDcompVisual::ValidateDevice(UdwmDcompVisual *this, bool *a2)
{
  char *v4; // r14
  struct IDCompositionDesktopDevicePartner *v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct CVisual *v11; // rdx
  int inserted; // eax
  int v13; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 )
    *a2 = 0;
  v4 = (char *)this + 96;
  v5 = (struct IDCompositionDesktopDevicePartner *)*((_QWORD *)this + 12);
  if ( !v5 || v5 != CDesktopManager::GetDCompositionInteropDevice() )
  {
    v15 = 0;
    goto LABEL_18;
  }
  v16 = 0LL;
  v15 = 1;
  v6 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<IDCompositionDevice>(v4, &v16);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = 351LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
      (const char *)(unsigned int)v6,
      v13);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v16);
    return v7;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v16 + 208LL))(v16, &v15);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = 353LL;
    goto LABEL_14;
  }
  if ( !v15 )
    CDesktopManager::HandleInteropDeviceLost();
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v16);
  if ( v15 )
    return 0LL;
LABEL_18:
  if ( a2 )
    *a2 = 1;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v4);
  SharedDwmDcompVisual::ReleaseDCompResources((UdwmDcompVisual *)((char *)this + 16));
  SharedDwmDcompVisual::ReleaseDCompResources((UdwmDcompVisual *)((char *)this + 56));
  v10 = *((_QWORD *)this + 2);
  if ( v10
    && (v11 = (struct CVisual *)*((_QWORD *)this + 7)) != 0LL
    && (inserted = VisualCollection::InsertRelative((VisualCollection *)(v10 + 32), v11, 0LL, 0, 1),
        v7 = inserted,
        inserted < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x53,
      (unsigned int)"windows\\dwm\\udwm\\udwmdcompvisual.h",
      (const char *)(unsigned int)inserted,
      v13);
  }
  else
  {
    v7 = 0;
  }
  if ( (v7 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16C,
      (unsigned int)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
      (const char *)v7,
      v13);
    return v7;
  }
  result = UdwmDcompVisual::ReinitializeDComp(this);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
