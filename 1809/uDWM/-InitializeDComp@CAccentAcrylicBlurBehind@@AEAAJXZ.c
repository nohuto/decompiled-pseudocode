/*
 * XREFs of ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180043308
 * Callers:
 *     ?Initialize@CAccentAcrylicBlurBehind@@EEAAJPEAUIDwmChannel@@@Z @ 0x1800432C0 (-Initialize@CAccentAcrylicBlurBehind@@EEAAJPEAUIDwmChannel@@@Z.c)
 *     ?ValidateDevice@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180044BD4 (-ValidateDevice@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ??4?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDCompositionDesktopDevicePartner@@@Z @ 0x180022420 (--4-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDCompositionDes.c)
 *     ?GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ @ 0x180022478 (-GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ.c)
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180027090 (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037508 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003852C (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?WrapExistingResource@CVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x18003B220 (-WrapExistingResource@CVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180043E08 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??$As@UIDCompositionVisualPartnerWinRTInterop@@@?$ComPtr@UIDCompositionVisual2@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompositionVisualPartnerWinRTInterop@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004474C (--$As@UIDCompositionVisualPartnerWinRTInterop@@@-$ComPtr@UIDCompositionVisual2@@@WRL@Microsoft@@.c)
 *     ??$As@UICompositor@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositor@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180045350 (--$As@UICompositor@Composition@UI@Windows@@@-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Mi.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAccentAcrylicBlurBehind::InitializeDComp(CAccentAcrylicBlurBehind *this)
{
  __int64 *v2; // rsi
  struct IDCompositionDesktopDevicePartner *DCompositionInteropDevice; // rax
  __int64 v4; // rbx
  _QWORD *v5; // r12
  int v6; // ebx
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rbx
  int inserted; // eax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+40h]
  __int64 v22; // [rsp+80h] [rbp+48h] BYREF
  __int64 v23; // [rsp+88h] [rbp+50h] BYREF
  __int64 v24; // [rsp+90h] [rbp+58h] BYREF
  __int64 v25; // [rsp+98h] [rbp+60h] BYREF

  v2 = (__int64 *)((char *)this + 288);
  DCompositionInteropDevice = CDesktopManager::GetDCompositionInteropDevice(this);
  Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::operator=(v2, (__int64)DCompositionInteropDevice);
  v4 = *v2;
  if ( !*v2 )
    return 2147500037LL;
  if ( *((_QWORD *)this + 35) )
    return 0LL;
  v5 = (_QWORD *)((char *)this + 296);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 37);
  v6 = (*(__int64 (__fastcall **)(__int64, GUID *, char *))(*(_QWORD *)v4 + 216LL))(
         v4,
         &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89,
         (char *)this + 296);
  if ( v6 < 0 )
  {
    v16 = 1834LL;
  }
  else
  {
    v7 = *v2;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (char *)this + 344,
      0LL);
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v7 + 224LL))(v7, *v5, (char *)this + 344);
    if ( v6 >= 0 )
    {
      v25 = 0LL;
      v8 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::ICompositor>(
             v2,
             &v25);
      v6 = v8;
      if ( v8 < 0 )
      {
        v18 = 1841LL;
      }
      else
      {
        v9 = v25;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 41);
        v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 176LL))(v9, (char *)this + 328);
        v6 = v8;
        if ( v8 >= 0 )
        {
          v24 = 0LL;
          v10 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
                  (_QWORD *)this + 41,
                  (__int64)&v24);
          v6 = v10;
          if ( v10 < 0 )
          {
            v19 = 1847LL;
          }
          else
          {
            v11 = *v2;
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 38);
            v10 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 48LL))(v11, (char *)this + 304);
            v6 = v10;
            if ( v10 < 0 )
            {
              v19 = 1850LL;
            }
            else
            {
              v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v2 + 24LL))(*v2);
              v6 = v10;
              if ( v10 >= 0 )
              {
                v23 = 0LL;
                v12 = Microsoft::WRL::ComPtr<IDCompositionVisual2>::As<IDCompositionVisualPartnerWinRTInterop>(
                        (char *)this + 304,
                        &v23);
                v6 = v12;
                if ( v12 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x73F,
                    (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
                    (const char *)(unsigned int)v12,
                    v20);
                }
                else
                {
                  v22 = 0LL;
                  v13 = v23;
                  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v22);
                  inserted = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 384LL))(v13, &v22);
                  v6 = inserted;
                  if ( inserted < 0 )
                  {
                    v17 = 1857LL;
                  }
                  else
                  {
                    inserted = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 72LL))(v22, v24);
                    v6 = inserted;
                    if ( inserted < 0 )
                    {
                      v17 = 1858LL;
                    }
                    else
                    {
                      inserted = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 24LL))(
                                   *v5,
                                   *((_QWORD *)this + 38));
                      v6 = inserted;
                      if ( inserted < 0 )
                      {
                        v17 = 1861LL;
                      }
                      else
                      {
                        inserted = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL)
                                                                                              + 120LL))(
                                     *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
                                     *((_QWORD *)this + 43),
                                     38LL,
                                     (char *)this + 336);
                        v6 = inserted;
                        if ( inserted < 0 )
                        {
                          v17 = 1865LL;
                        }
                        else
                        {
                          inserted = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 24LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL));
                          v6 = inserted;
                          if ( inserted < 0 )
                          {
                            v17 = 1866LL;
                          }
                          else
                          {
                            inserted = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v2 + 24LL))(*v2);
                            v6 = inserted;
                            if ( inserted < 0 )
                            {
                              v17 = 1868LL;
                            }
                            else
                            {
                              inserted = CVisual::WrapExistingResource(
                                           *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL),
                                           *((_DWORD *)this + 84),
                                           (struct CResource ***)this + 35);
                              v6 = inserted;
                              if ( inserted < 0 )
                              {
                                v17 = 1871LL;
                              }
                              else
                              {
                                inserted = VisualCollection::InsertRelative(
                                             (CAccentAcrylicBlurBehind *)((char *)this + 32),
                                             *((struct CVisual **)this + 35),
                                             0LL,
                                             0,
                                             1);
                                v6 = inserted;
                                if ( inserted >= 0 )
                                {
                                  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v22);
                                  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v23);
                                  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v24);
                                  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v25);
                                  return 0LL;
                                }
                                v17 = 1874LL;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v17,
                    (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
                    (const char *)(unsigned int)inserted,
                    v20);
                  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v22);
                }
                Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v23);
                goto LABEL_28;
              }
              v19 = 1851LL;
            }
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v19,
            (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
            (const char *)(unsigned int)v10,
            v20);
LABEL_28:
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v24);
LABEL_29:
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v25);
          return (unsigned int)v6;
        }
        v18 = 1844LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)v8,
        v20);
      goto LABEL_29;
    }
    v16 = 1837LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
    (const char *)(unsigned int)v6,
    v20);
  return (unsigned int)v6;
}
