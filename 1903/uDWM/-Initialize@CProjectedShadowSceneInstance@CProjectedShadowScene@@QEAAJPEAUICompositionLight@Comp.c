/*
 * XREFs of ?Initialize@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUICompositionLight@Composition@UI@Windows@@W4ProjectedShadowSceneType@5WindowsInternal@@@Z @ 0x1800B4E44
 * Callers:
 *     ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x1800B4BDC (-Initialize@CProjectedShadowScene@@QEAAJ_K@Z.c)
 * Callees:
 *     ?GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ @ 0x18001262C (-GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800390F0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A568 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800781B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConfigureProjectedShadowScene@UI@WindowsInternal@@YAJPEAUICompositionProjectedShadow@Composition@1Windows@@W4ProjectedShadowSceneType@12@@Z @ 0x1800B46E0 (-ConfigureProjectedShadowScene@UI@WindowsInternal@@YAJPEAUICompositionProjectedShadow@Compositio.c)
 */

__int64 __fastcall CProjectedShadowScene::CProjectedShadowSceneInstance::Initialize(__int64 *a1, __int64 a2, int a3)
{
  struct IDCompositionDesktopDevicePartner *DCompositionInteropDevice; // rax
  struct IDCompositionDesktopDevicePartner *v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IDCompositionDesktopDevicePartner *v14; // [rsp+40h] [rbp+8h] BYREF

  DCompositionInteropDevice = CDesktopManager::GetDCompositionInteropDevice((CDesktopManager *)a1);
  v14 = DCompositionInteropDevice;
  v7 = DCompositionInteropDevice;
  if ( DCompositionInteropDevice )
    (*(void (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)DCompositionInteropDevice + 8LL))(DCompositionInteropDevice);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(a1 + 11);
  v8 = (**(__int64 (__fastcall ***)(struct IDCompositionDesktopDevicePartner *, GUID *, __int64))v7)(
         v7,
         &GUID_a2e6330e_8a60_5a38_bb85_b44ea901677c,
         (__int64)(a1 + 11));
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = a1[11];
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(a1 + 12);
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 56LL))(v11, a1 + 12);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1[12] + 80LL))(a1[12], a2);
      v9 = v8;
      if ( v8 >= 0 )
      {
        v8 = WindowsInternal::UI::ConfigureProjectedShadowScene(a1[12], a3);
        v9 = v8;
        if ( v8 >= 0 )
        {
          v9 = 0;
          goto LABEL_13;
        }
        v10 = 200LL;
      }
      else
      {
        v10 = 199LL;
      }
    }
    else
    {
      v10 = 198LL;
    }
  }
  else
  {
    v10 = 195LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"windows\\dwm\\udwm\\projectedshadowscene.cpp",
    (const char *)(unsigned int)v8);
LABEL_13:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
  return v9;
}
