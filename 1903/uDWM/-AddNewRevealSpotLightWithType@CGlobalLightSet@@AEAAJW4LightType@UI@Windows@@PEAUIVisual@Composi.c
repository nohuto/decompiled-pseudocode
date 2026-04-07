/*
 * XREFs of ?AddNewRevealSpotLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composition@34@PEAUIExpressionAnimation@634@@Z @ 0x180048DC0
 * Callers:
 *     ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x1800489AC (-Initialize@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ @ 0x18001262C (-GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800390F0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A568 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180040BF8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??$As@UICompositionLight@Composition@UI@Windows@@@?$ComPtr@UISpotLight@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionLight@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180049158 (--$As@UICompositionLight@Composition@UI@Windows@@@-$ComPtr@UISpotLight@Composition@UI@Windows@@@.c)
 *     ?AttachExpressionAnimationToRevealSpotLight@CGlobalLightSet@@AEBAJPEAUISpotLight@Composition@UI@Windows@@PEAUIExpressionAnimation@345@@Z @ 0x1800493C0 (-AttachExpressionAnimationToRevealSpotLight@CGlobalLightSet@@AEBAJPEAUISpotLight@Composition@UI@.c)
 *     ??$As@UICompositorPartner2@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositorPartner2@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800494CC (--$As@UICompositorPartner2@Composition@UI@Windows@@@-$ComPtr@UIDCompositionDesktopDevicePartner@.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800781B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CGlobalLightSet::AddNewRevealSpotLightWithType(
        __int64 a1,
        int a2,
        __int64 a3,
        struct Windows::UI::Composition::IExpressionAnimation *a4)
{
  __int64 v5; // rsi
  struct IDCompositionDesktopDevicePartner *DCompositionInteropDevice; // rax
  struct IDCompositionDesktopDevicePartner *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rdi
  int v13; // eax
  CGlobalLightSet *v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v21; // r9
  __int64 v22; // rdx
  unsigned __int64 v23; // r9
  __int64 v24; // rdx
  int v25; // [rsp+20h] [rbp-40h]
  struct Windows::UI::Composition::ISpotLight *v26; // [rsp+28h] [rbp-38h] BYREF
  __int64 v27; // [rsp+30h] [rbp-30h] BYREF
  HANDLE hObject; // [rsp+38h] [rbp-28h] BYREF
  __int64 v29; // [rsp+40h] [rbp-20h] BYREF
  struct IDCompositionDesktopDevicePartner *v30; // [rsp+48h] [rbp-18h] BYREF
  int Buffer; // [rsp+50h] [rbp-10h] BYREF
  __int64 v32; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v5 = a2;
  DCompositionInteropDevice = CDesktopManager::GetDCompositionInteropDevice((CDesktopManager *)a1);
  v30 = DCompositionInteropDevice;
  v9 = DCompositionInteropDevice;
  if ( DCompositionInteropDevice )
    (*(void (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)DCompositionInteropDevice + 8LL))(DCompositionInteropDevice);
  v29 = 0LL;
  v10 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::ICompositorPartner2>(
          &v30,
          &v29);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC4,
      (unsigned int)"windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v10,
      v25);
    goto LABEL_25;
  }
  v26 = 0LL;
  v12 = v29;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v26);
  v13 = (*(__int64 (__fastcall **)(__int64, struct Windows::UI::Composition::ISpotLight **))(*(_QWORD *)v12 + 256LL))(
          v12,
          &v26);
  v11 = v13;
  if ( v13 < 0 )
  {
    v22 = 200LL;
    goto LABEL_49;
  }
  v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *, __int64))(*(_QWORD *)v26 + 72LL))(
          v26,
          a3);
  v11 = v13;
  if ( v13 < 0 )
  {
    v22 = 201LL;
    goto LABEL_49;
  }
  if ( (_DWORD)v5 == 1 )
  {
    v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *))(*(_QWORD *)v26 + 56LL))(v26);
    v11 = v13;
    if ( v13 < 0 )
    {
      v22 = 207LL;
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *))(*(_QWORD *)v26 + 152LL))(v26);
      v11 = v13;
      if ( v13 < 0 )
      {
        v22 = 208LL;
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *))(*(_QWORD *)v26 + 120LL))(v26);
        v11 = v13;
        if ( v13 < 0 )
        {
          v22 = 209LL;
        }
        else
        {
          v25 = -1;
          v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *, __int64))(*(_QWORD *)v26
                                                                                                  + 136LL))(
                  v26,
                  0xFFFFFFFFLL);
          v11 = v13;
          if ( v13 < 0 )
          {
            v22 = 210LL;
          }
          else
          {
            v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *))(*(_QWORD *)v26 + 200LL))(v26);
            v11 = v13;
            if ( v13 < 0 )
            {
              v22 = 211LL;
            }
            else
            {
              v25 = -1;
              v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *, __int64))(*(_QWORD *)v26 + 216LL))(
                      v26,
                      0xFFFFFFFFLL);
              v11 = v13;
              if ( v13 >= 0 )
                goto LABEL_14;
              v22 = 212LL;
            }
          }
        }
      }
    }
    goto LABEL_49;
  }
  if ( (_DWORD)v5 == 2 )
  {
    v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *))(*(_QWORD *)v26 + 56LL))(v26);
    v11 = v13;
    if ( v13 < 0 )
    {
      v22 = 216LL;
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *))(*(_QWORD *)v26 + 152LL))(v26);
      v11 = v13;
      if ( v13 < 0 )
      {
        v22 = 217LL;
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *))(*(_QWORD *)v26 + 120LL))(v26);
        v11 = v13;
        if ( v13 < 0 )
        {
          v22 = 218LL;
        }
        else
        {
          v25 = -1;
          v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *, __int64))(*(_QWORD *)v26
                                                                                                  + 136LL))(
                  v26,
                  0xFFFFFFFFLL);
          v11 = v13;
          if ( v13 < 0 )
          {
            v22 = 219LL;
          }
          else
          {
            v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *))(*(_QWORD *)v26 + 200LL))(v26);
            v11 = v13;
            if ( v13 < 0 )
            {
              v22 = 220LL;
            }
            else
            {
              v25 = -1;
              v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *, __int64))(*(_QWORD *)v26 + 216LL))(
                      v26,
                      0xFFFFFFFFLL);
              v11 = v13;
              if ( v13 >= 0 )
              {
LABEL_14:
                v13 = CGlobalLightSet::AttachExpressionAnimationToRevealSpotLight(v14, v26, a4);
                v11 = v13;
                if ( v13 >= 0 )
                {
                  v27 = 0LL;
                  v15 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpotLight>::As<Windows::UI::Composition::ICompositionLight>(
                          &v26,
                          &v27);
                  v11 = v15;
                  if ( v15 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0xE9,
                      (unsigned int)"windows\\dwm\\udwm\\globallightset.cpp",
                      (const char *)(unsigned int)v15,
                      -1);
LABEL_22:
                    v19 = v27;
                    if ( v27 )
                    {
                      v27 = 0LL;
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
                    }
                    goto LABEL_24;
                  }
                  hObject = 0LL;
                  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
                    &hObject,
                    0LL);
                  v16 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *, __int64, HANDLE *))(*(_QWORD *)v9 + 224LL))(
                          v9,
                          v27,
                          &hObject);
                  v11 = v16;
                  if ( v16 < 0 )
                  {
                    v23 = (unsigned int)v16;
                    v24 = 237LL;
                  }
                  else
                  {
                    v17 = NtDCompositionSetMaterialProperty(*(_QWORD *)(a1 + 88), v5, hObject);
                    v11 = v17 | 0x10000000;
                    if ( v17 < 0 )
                    {
                      v24 = 238LL;
                    }
                    else
                    {
                      v18 = v27;
                      v27 = 0LL;
                      Buffer = v5;
                      v32 = v18;
                      if ( RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)(a1 + 16), &Buffer, 0x10u, 0LL) )
                      {
                        v11 = 0;
                        goto LABEL_20;
                      }
                      v11 = -2147024882;
                      v24 = 243LL;
                    }
                    v23 = v11;
                  }
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v24,
                    (unsigned int)"windows\\dwm\\udwm\\globallightset.cpp",
                    (const char *)v23,
                    -1);
LABEL_20:
                  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
                    CloseHandle(hObject);
                  goto LABEL_22;
                }
                v22 = 229LL;
                goto LABEL_49;
              }
              v22 = 221LL;
            }
          }
        }
      }
    }
LABEL_49:
    v21 = (unsigned int)v13;
    goto LABEL_50;
  }
  v11 = -2147024809;
  v22 = 225LL;
  v21 = 2147942487LL;
LABEL_50:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v22,
    (unsigned int)"windows\\dwm\\udwm\\globallightset.cpp",
    (const char *)v21,
    v25);
LABEL_24:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v26);
LABEL_25:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v29);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v30);
  return v11;
}
