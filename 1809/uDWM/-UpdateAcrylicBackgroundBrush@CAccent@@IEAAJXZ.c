/*
 * XREFs of ?UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ @ 0x180024B68
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18000B500 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180022CA0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180020378 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?ValidateDevice@AcrylicHostBackdrop@@QEAAJXZ @ 0x180024B34 (-ValidateDevice@AcrylicHostBackdrop@@QEAAJXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180024D50 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@CAX_NW4Rep.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037508 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003852C (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@1Windows@@@Z @ 0x18003B8D8 (-CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUIC.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateSolidColorBrush@CAccent@@KAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@UI@Windows@@@Z @ 0x180084AC4 (-CreateSolidColorBrush@CAccent@@KAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBru.c)
 */

__int64 __fastcall CAccent::UpdateAcrylicBackgroundBrush(struct Windows::UI::Composition::ICompositionBrush **this)
{
  AcrylicHostBackdrop *v2; // rcx
  WindowsInternal::UI *v3; // rdi
  __int64 result; // rax
  __int64 v5; // rbx
  WindowsInternal::UI *v6; // rbx
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rdi
  int SolidColorBrush; // eax
  struct Windows::UI::Composition::ICompositionBrush **v9; // r8
  int v10; // edi
  int HostBackdropBrush; // eax
  struct Windows::UI::Composition::ICompositionBrush *v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // r9
  int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v17; // [rsp+38h] [rbp+10h] BYREF
  WindowsInternal::UI *v18; // [rsp+40h] [rbp+18h] BYREF

  wil::Feature<__WilFeatureTraits_Feature_AcrylicForEveryone>::ReportUsageToService();
  CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
  v2 = this[46];
  if ( v2 )
  {
    v3 = *(WindowsInternal::UI **)(*((_QWORD *)v2 + 2) + 96LL);
    result = AcrylicHostBackdrop::ValidateDevice(v2);
    if ( (int)result < 0 )
      return result;
    v5 = *((_QWORD *)this[46] + 2);
    if ( *(_QWORD *)(v5 + 24) )
    {
      v6 = *(WindowsInternal::UI **)(v5 + 96);
      v18 = v6;
      if ( v6 )
        (*(void (__fastcall **)(WindowsInternal::UI *))(*(_QWORD *)v6 + 8LL))(v6);
      if ( v6 != v3 )
      {
        v12 = this[44];
        if ( v12 )
        {
          (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionBrush *))(*(_QWORD *)v12 + 16LL))(v12);
          this[44] = 0LL;
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(this + 45);
      }
      if ( !v6 )
        goto LABEL_16;
      v17 = 0LL;
      v7 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this[46] + 2) + 24LL);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v17);
      SolidColorBrush = (**v7)(v7, &GUID_bbed8da5_977f_42cb_9b28_f0ceebced3a7, &v17);
      v10 = SolidColorBrush;
      if ( SolidColorBrush < 0 )
      {
        v13 = 1767LL;
      }
      else if ( *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61) + 601LL) )
      {
        if ( this[44]
          || (HostBackdropBrush = WindowsInternal::UI::CreateHostBackdropBrush(
                                    v6,
                                    (struct IDCompositionDesktopDevicePartner *)(this + 44),
                                    v9),
              v10 = HostBackdropBrush,
              HostBackdropBrush >= 0) )
        {
          v10 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1FF,
            (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
            (const char *)(unsigned int)HostBackdropBrush,
            v15);
        }
        if ( v10 < 0 )
        {
          v14 = (unsigned int)v10;
          v13 = 1771LL;
LABEL_33:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v13,
            (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
            (const char *)v14,
            v15);
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v17);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
          return (unsigned int)v10;
        }
        SolidColorBrush = (*(__int64 (__fastcall **)(__int64, struct Windows::UI::Composition::ICompositionBrush *))(*(_QWORD *)v17 + 48LL))(
                            v17,
                            this[44]);
        v10 = SolidColorBrush;
        if ( SolidColorBrush >= 0 )
          goto LABEL_14;
        v13 = 1772LL;
      }
      else
      {
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(this + 45);
        SolidColorBrush = CAccent::CreateSolidColorBrush(v6, this + 45);
        v10 = SolidColorBrush;
        if ( SolidColorBrush >= 0 )
        {
          SolidColorBrush = (*(__int64 (__fastcall **)(__int64, struct Windows::UI::Composition::ICompositionBrush *))(*(_QWORD *)v17 + 48LL))(
                              v17,
                              this[45]);
          v10 = SolidColorBrush;
          if ( SolidColorBrush >= 0 )
          {
LABEL_14:
            SolidColorBrush = (*(__int64 (__fastcall **)(WindowsInternal::UI *))(*(_QWORD *)v6 + 24LL))(v6);
            v10 = SolidColorBrush;
            if ( SolidColorBrush >= 0 )
            {
              Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v17);
LABEL_16:
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
              return 0LL;
            }
            v13 = 1779LL;
            goto LABEL_32;
          }
          v13 = 1777LL;
        }
        else
        {
          v13 = 1776LL;
        }
      }
LABEL_32:
      v14 = (unsigned int)SolidColorBrush;
      goto LABEL_33;
    }
  }
  return 0LL;
}
