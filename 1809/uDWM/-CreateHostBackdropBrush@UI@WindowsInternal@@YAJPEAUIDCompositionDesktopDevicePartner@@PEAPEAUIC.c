/*
 * XREFs of ?CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@1Windows@@@Z @ 0x18003B8D8
 * Callers:
 *     ?UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ @ 0x180024B68 (-UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037508 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003852C (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180039A24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@VGaussianBlurEffect@Effects@Composition@UI@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x18003AD80 (-InternalRelease@-$ComPtr@VGaussianBlurEffect@Effects@Composition@UI@Microsoft@@@WRL@Microsoft@@.c)
 *     ?InternalAddRef@?$ComPtr@UIGraphicsEffectSource@Effects@Graphics@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18003ADA4 (-InternalAddRef@-$ComPtr@UIGraphicsEffectSource@Effects@Graphics@Windows@@@WRL@Microsoft@@IEBAXX.c)
 *     ??$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Microsoft@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGaussianBlurEffect@Effects@Composition@UI@2@@Z @ 0x18003BD88 (--$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Microsoft@@V12345@$$V@Details@WR.c)
 *     ?put_BlurAmount@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJM@Z @ 0x18003BF40 (-put_BlurAmount@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJM@Z.c)
 *     ??$As@UICompositionBrush@Composition@UI@Windows@@@?$ComPtr@UICompositionBackdropBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004530C (--$As@UICompositionBrush@Composition@UI@Windows@@@-$ComPtr@UICompositionBackdropBrush@Compositio.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowsInternal::UI::CreateHostBackdropBrush(
        WindowsInternal::UI *this,
        struct IDCompositionDesktopDevicePartner *a2,
        struct Windows::UI::Composition::ICompositionBrush **a3)
{
  __int64 v5; // rbx
  int ActivationFactory; // eax
  unsigned int v7; // ebx
  __int64 v8; // rbx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rbx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rbx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // [rsp+20h] [rbp-49h] BYREF
  __int64 (__fastcall ***v28)(_QWORD, GUID *, struct IDCompositionDesktopDevicePartner *); // [rsp+28h] [rbp-41h] BYREF
  __int64 v29; // [rsp+30h] [rbp-39h] BYREF
  __int64 v30; // [rsp+38h] [rbp-31h] BYREF
  __int64 v31; // [rsp+40h] [rbp-29h] BYREF
  __int64 v32; // [rsp+48h] [rbp-21h] BYREF
  __int64 v33; // [rsp+50h] [rbp-19h] BYREF
  __int64 (__fastcall ***v34)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-11h] BYREF
  __int64 v35; // [rsp+60h] [rbp-9h] BYREF
  __int64 v36; // [rsp+68h] [rbp-1h] BYREF
  __int64 v37; // [rsp+70h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v39; // [rsp+90h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  *(_QWORD *)a2 = 0LL;
  v35 = 0LL;
  v39 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.UI.Composition.CompositionEffectSourceParameter",
    0x38u,
    0x37u);
  v5 = v39;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v35);
  ActivationFactory = RoGetActivationFactory(v5, &GUID_b3d9f276_aba3_4724_acf3_d0397464db1c, &v35);
  v7 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10,
      (unsigned int)"internal\\onecoreuapshell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)ActivationFactory,
      v27);
    goto LABEL_25;
  }
  v8 = v35;
  v34 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v34);
  v39 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"source", 7u, 6u);
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v8 + 48LL))(v8, v39, &v34);
  v7 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13,
      (unsigned int)"internal\\onecoreuapshell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v9,
      v27);
    goto LABEL_24;
  }
  v33 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v33);
  v10 = (**v34)(v34, &GUID_2d8f9ddc_4339_4eb9_9216_f9deb75658a2, &v33);
  v7 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (unsigned int)"internal\\onecoreuapshell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v10,
      v27);
    goto LABEL_23;
  }
  v32 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v32);
  v11 = (**(__int64 (__fastcall ***)(WindowsInternal::UI *, GUID *, __int64 *))this)(
          this,
          &GUID_735081dc_5e24_45da_a38f_e32cc349a9a0,
          &v32);
  v7 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17,
      (unsigned int)"internal\\onecoreuapshell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v11,
      v27);
    goto LABEL_22;
  }
  v12 = v32;
  v31 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v31);
  v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 64LL))(v12, &v31);
  v7 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A,
      (unsigned int)"internal\\onecoreuapshell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v13,
      v27);
    goto LABEL_21;
  }
  v37 = 0LL;
  v14 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionBackdropBrush>::As<Windows::UI::Composition::ICompositionBrush>(
          &v31,
          &v37);
  v7 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (unsigned int)"internal\\onecoreuapshell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v14,
      v27);
    goto LABEL_20;
  }
  v28 = 0LL;
  v27 = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::UI::Composition::Effects::GaussianBlurEffect>::InternalRelease(&v27);
  v15 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::UI::Composition::Effects::GaussianBlurEffect,Microsoft::UI::Composition::Effects::GaussianBlurEffect,>(&v27);
  v7 = v15;
  if ( v15 < 0 )
  {
    v25 = 34LL;
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (unsigned int)"internal\\onecoreuapshell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v15,
      v27);
    goto LABEL_19;
  }
  *(_DWORD *)(v27 + 76) = 0;
  v15 = Microsoft::UI::Composition::Effects::GaussianBlurEffect::put_BlurAmount(
          (Microsoft::UI::Composition::Effects::GaussianBlurEffect *)(v27 + 32),
          30.0);
  v7 = v15;
  if ( v15 < 0 )
  {
    v25 = 37LL;
    goto LABEL_34;
  }
  v16 = v27;
  v17 = v33;
  if ( *(_QWORD *)(v27 + 64) != v33 )
  {
    v36 = v33;
    Microsoft::WRL::ComPtr<Windows::Graphics::Effects::IGraphicsEffectSource>::InternalAddRef(&v36);
    v36 = *(_QWORD *)(v16 + 64);
    *(_QWORD *)(v16 + 64) = v17;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v36);
  }
  v30 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v30);
  v18 = (**(__int64 (__fastcall ***)(WindowsInternal::UI *, GUID *, __int64 *))this)(
          this,
          &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8,
          &v30);
  v7 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29,
      (unsigned int)"internal\\onecoreuapshell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v18,
      v27);
    goto LABEL_18;
  }
  v19 = v30;
  v29 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v29);
  v20 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v19 + 88LL))(v19, v27, &v29);
  v7 = v20;
  if ( v20 < 0 )
  {
    v26 = 44LL;
LABEL_40:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (unsigned int)"internal\\onecoreuapshell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v20,
      v27);
    goto LABEL_17;
  }
  v21 = v29;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v28);
  v20 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, struct IDCompositionDesktopDevicePartner *)))(*(_QWORD *)v21 + 48LL))(
          v21,
          &v28);
  v7 = v20;
  if ( v20 < 0 )
  {
    v26 = 45LL;
    goto LABEL_40;
  }
  v22 = (__int64)v28;
  v23 = v37;
  v39 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"source", 7u, 6u);
  v20 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v22 + 56LL))(v22, v39, v23);
  v7 = v20;
  if ( v20 < 0 )
  {
    v26 = 47LL;
    goto LABEL_40;
  }
  v20 = (**v28)(v28, &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46, a2);
  v7 = v20;
  if ( v20 < 0 )
  {
    v26 = 49LL;
    goto LABEL_40;
  }
  v7 = 0;
LABEL_17:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v29);
LABEL_18:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v30);
LABEL_19:
  Microsoft::WRL::ComPtr<Microsoft::UI::Composition::Effects::GaussianBlurEffect>::InternalRelease(&v27);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v28);
LABEL_20:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v37);
LABEL_21:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v31);
LABEL_22:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v32);
LABEL_23:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v33);
LABEL_24:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v34);
LABEL_25:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v35);
  return v7;
}
