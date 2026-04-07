/*
 * XREFs of ?AddNewRevealAmbientLight@CGlobalLightSet@@AEAAJXZ @ 0x1800486DC
 * Callers:
 *     ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x1800489AC (-Initialize@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ @ 0x18001262C (-GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800390F0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A568 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180040BF8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??$As@UICompositorPartner2@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositorPartner2@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800494CC (--$As@UICompositorPartner2@Composition@UI@Windows@@@-$ComPtr@UIDCompositionDesktopDevicePartner@.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800781B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CGlobalLightSet::AddNewRevealAmbientLight(CGlobalLightSet *this)
{
  struct IDCompositionDesktopDevicePartner *DCompositionInteropDevice; // rax
  struct IDCompositionDesktopDevicePartner *v3; // rbx
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rdi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  HANDLE hObject; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+28h] [rbp-28h] BYREF
  struct IDCompositionDesktopDevicePartner *v19; // [rsp+30h] [rbp-20h] BYREF
  int Buffer; // [rsp+38h] [rbp-18h] BYREF
  __int64 v21; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v23; // [rsp+80h] [rbp+30h] BYREF
  __int64 v24; // [rsp+88h] [rbp+38h] BYREF

  DCompositionInteropDevice = CDesktopManager::GetDCompositionInteropDevice(this);
  v19 = DCompositionInteropDevice;
  v3 = DCompositionInteropDevice;
  if ( DCompositionInteropDevice )
    (*(void (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)DCompositionInteropDevice + 8LL))(DCompositionInteropDevice);
  v18 = 0LL;
  v4 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::ICompositorPartner2>(
         &v19,
         &v18);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFC,
      (unsigned int)"windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v4,
      (int)hObject);
    goto LABEL_16;
  }
  v24 = 0LL;
  v6 = v18;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v24);
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 232LL))(v6, &v24);
  v5 = v7;
  if ( v7 < 0 )
  {
    v14 = 256LL;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 56LL))(v24, 0xFFFFFFFFLL);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v23 = 0LL;
      v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v24)(
             v24,
             &GUID_41a6d7c2_2e5d_4bc1_b09e_8f0a03e3d8d3,
             &v23);
      v5 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x107,
          (unsigned int)"windows\\dwm\\udwm\\globallightset.cpp",
          (const char *)(unsigned int)v8,
          (int)hObject);
LABEL_13:
        v12 = v23;
        if ( v23 )
        {
          v23 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
        goto LABEL_15;
      }
      hObject = 0LL;
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        &hObject,
        0LL);
      v9 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *, __int64, HANDLE *))(*(_QWORD *)v3 + 224LL))(
             v3,
             v23,
             &hObject);
      v5 = v9;
      if ( v9 < 0 )
      {
        v15 = (unsigned int)v9;
        v16 = 267LL;
      }
      else
      {
        v10 = NtDCompositionSetMaterialProperty(*((_QWORD *)this + 11), 0LL, hObject);
        v5 = v10 | 0x10000000;
        if ( v10 < 0 )
        {
          v16 = 268LL;
        }
        else
        {
          v11 = v23;
          Buffer = 0;
          v23 = 0LL;
          v21 = v11;
          if ( RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 16), &Buffer, 0x10u, 0LL) )
          {
            v5 = 0;
            goto LABEL_11;
          }
          v5 = -2147024882;
          v16 = 273LL;
        }
        v15 = v5;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (unsigned int)"windows\\dwm\\udwm\\globallightset.cpp",
        (const char *)v15,
        (int)hObject);
LABEL_11:
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      goto LABEL_13;
    }
    v14 = 259LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (unsigned int)"windows\\dwm\\udwm\\globallightset.cpp",
    (const char *)(unsigned int)v7,
    (int)hObject);
LABEL_15:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v24);
LABEL_16:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
  return v5;
}
