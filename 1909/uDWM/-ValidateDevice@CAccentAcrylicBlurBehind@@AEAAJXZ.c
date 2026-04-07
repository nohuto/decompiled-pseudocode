/*
 * XREFs of ?ValidateDevice@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180042930
 * Callers:
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@@Z @ 0x18004250C (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@@Z.c)
 * Callees:
 *     ??$As@UIDCompositionDevice@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000B2C4 (--$As@UIDCompositionDevice@@@-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV.c)
 *     ?GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ @ 0x1800126BC (-GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180039BF8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180040488 (-InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?ReleaseResources@CAccentAcrylicBlurBehind@@AEAAXXZ @ 0x180040968 (-ReleaseResources@CAccentAcrylicBlurBehind@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HandleInteropDeviceLost@CDesktopManager@@SAXXZ @ 0x18007F6AC (-HandleInteropDeviceLost@CDesktopManager@@SAXXZ.c)
 */

__int64 __fastcall CAccentAcrylicBlurBehind::ValidateDevice(CAccentAcrylicBlurBehind *this)
{
  _QWORD *v1; // rsi
  struct IDCompositionDesktopDevicePartner *v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v1 = (_QWORD *)((char *)this + 288);
  v3 = (struct IDCompositionDesktopDevicePartner *)*((_QWORD *)this + 36);
  if ( !v3 || v3 != CDesktopManager::GetDCompositionInteropDevice(this) )
  {
    v10 = 0;
    goto LABEL_14;
  }
  v11 = 0LL;
  v10 = 1;
  v4 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<IDCompositionDevice>(v1, (__int64)&v11);
  v5 = v4;
  if ( v4 < 0 )
  {
    v7 = 2046LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v4,
      v8);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v11);
    return v5;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 208LL))(v11, &v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    v7 = 2048LL;
    goto LABEL_13;
  }
  if ( !v10 )
    CDesktopManager::HandleInteropDeviceLost();
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v11);
  if ( v10 )
    return 0LL;
LABEL_14:
  CAccentAcrylicBlurBehind::ReleaseResources(this);
  result = CAccentAcrylicBlurBehind::InitializeDComp(this);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
