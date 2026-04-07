/*
 * XREFs of ?CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@1Windows@@@Z @ 0x18003DC54
 * Callers:
 *     ?UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ @ 0x18000D29C (-UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800390F0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A568 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18003BC3C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@VGaussianBlurEffect@Effects@Composition@UI@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x18003CEFC (-InternalRelease@-$ComPtr@VGaussianBlurEffect@Effects@Composition@UI@Microsoft@@@WRL@Microsoft@@.c)
 *     ?InternalAddRef@?$ComPtr@UIGraphicsEffectSource@Effects@Graphics@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18003CF20 (-InternalAddRef@-$ComPtr@UIGraphicsEffectSource@Effects@Graphics@Windows@@@WRL@Microsoft@@IEBAXX.c)
 *     ??$As@UICompositionBrush@Composition@UI@Windows@@@?$ComPtr@UICompositionBackdropBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003DFC8 (--$As@UICompositionBrush@Composition@UI@Windows@@@-$ComPtr@UICompositionBackdropBrush@Compositio.c)
 *     ??$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Microsoft@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGaussianBlurEffect@Effects@Composition@UI@2@@Z @ 0x18003E018 (--$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Microsoft@@V12345@$$V@Details@WR.c)
 *     ?put_BlurAmount@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJM@Z @ 0x18003E1C0 (-put_BlurAmount@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJM@Z.c)
 *     ??$As@UIGraphicsEffectSource@Effects@Graphics@Windows@@@?$ComPtr@UICompositionEffectSourceParameter@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIGraphicsEffectSource@Effects@Graphics@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003E1EC (--$As@UIGraphicsEffectSource@Effects@Graphics@Windows@@@-$ComPtr@UICompositionEffectSourceParame.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800781B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowsInternal::UI::CreateHostBackdropBrush(
        __int64 (__fastcall ***this)(WindowsInternal::UI *, GUID *, __int64 *),
        struct IDCompositionDesktopDevicePartner *a2,
        struct Windows::UI::Composition::ICompositionBrush **a3)
{
  __int64 v5; // rbx
  int ActivationFactory; // eax
  unsigned int v7; // ebx
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __int64 (__fastcall *v10)(_QWORD *, __int64, __int64 *); // rdi
  int v11; // eax
  int v12; // eax
  __int64 (__fastcall **v13)(WindowsInternal::UI *, GUID *, __int64 *); // rax
  __int64 (__fastcall *v14)(WindowsInternal::UI *, GUID *, __int64 *); // rbx
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int64 *); // rdi
  int v18; // eax
  int v19; // eax
  int v20; // eax
  volatile signed __int64 *v21; // rdi
  __int64 v22; // rbx
  __int64 (__fastcall **v23)(WindowsInternal::UI *, GUID *, __int64 *); // rax
  __int64 (__fastcall *v24)(WindowsInternal::UI *, GUID *, __int64 *); // rbx
  int v25; // eax
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, volatile signed __int64 *, __int64 *); // rdi
  int v28; // eax
  __int64 v29; // rbx
  __int64 (__fastcall *v30)(__int64, _QWORD **); // rdi
  _QWORD *v31; // rbx
  __int64 (__fastcall **v32)(_QWORD, _QWORD, _QWORD); // rax
  __int64 (__fastcall *v33)(_QWORD *, __int64, __int64); // rdi
  __int64 v35; // rdx
  __int64 v36; // rdx
  volatile signed __int64 *v37; // [rsp+20h] [rbp-49h] BYREF
  _QWORD *v38; // [rsp+28h] [rbp-41h] BYREF
  __int64 v39; // [rsp+30h] [rbp-39h] BYREF
  __int64 v40; // [rsp+38h] [rbp-31h] BYREF
  __int64 v41; // [rsp+40h] [rbp-29h] BYREF
  __int64 v42; // [rsp+48h] [rbp-21h] BYREF
  __int64 v43; // [rsp+50h] [rbp-19h] BYREF
  _QWORD *v44; // [rsp+58h] [rbp-11h] BYREF
  __int64 v45; // [rsp+60h] [rbp-9h] BYREF
  __int64 v46; // [rsp+68h] [rbp-1h] BYREF
  __int64 v47; // [rsp+70h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v49; // [rsp+90h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  *(_QWORD *)a2 = 0LL;
  v44 = 0LL;
  v49 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.UI.Composition.CompositionEffectSourceParameter",
    0x38u,
    0x37u);
  v5 = v49;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v44);
  ActivationFactory = RoGetActivationFactory(v5, &GUID_b3d9f276_aba3_4724_acf3_d0397464db1c, &v44);
  v7 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10,
      (unsigned int)"internal\\onecoreuapshell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)ActivationFactory,
      (int)v37);
    goto LABEL_25;
  }
  v8 = v44;
  v43 = 0LL;
  v9 = *v44;
  v49 = 0LL;
  v10 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(v9 + 48);
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"source", 7u, 6u);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v43);
  v11 = v10(v8, v49, &v43);
  v7 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13,
      (unsigned int)"internal\\onecoreuapshell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v11,
      (int)v37);
    goto LABEL_24;
  }
  v47 = 0LL;
  v12 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameter>::As<Windows::Graphics::Effects::IGraphicsEffectSource>(
          &v43,
          &v47);
  v7 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (unsigned int)"internal\\onecoreuapshell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v12,
      (int)v37);
    goto LABEL_23;
  }
  v13 = *this;
  v42 = 0LL;
  v14 = *v13;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v42);
  v15 = v14((WindowsInternal::UI *)this, &GUID_735081dc_5e24_45da_a38f_e32cc349a9a0, &v42);
  v7 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17,
      (unsigned int)"internal\\onecoreuapshell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v15,
      (int)v37);
    goto LABEL_22;
  }
  v16 = v42;
  v41 = 0LL;
  v17 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v42 + 64LL);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v41);
  v18 = v17(v16, &v41);
  v7 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A,
      (unsigned int)"internal\\onecoreuapshell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v18,
      (int)v37);
    goto LABEL_21;
  }
  v46 = 0LL;
  v19 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionBackdropBrush>::As<Windows::UI::Composition::ICompositionBrush>(
          &v41,
          &v46);
  v7 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (unsigned int)"internal\\onecoreuapshell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v19,
      (int)v37);
    goto LABEL_20;
  }
  v38 = 0LL;
  v37 = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::UI::Composition::Effects::GaussianBlurEffect>::InternalRelease(&v37);
  v20 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::UI::Composition::Effects::GaussianBlurEffect,Microsoft::UI::Composition::Effects::GaussianBlurEffect,>(&v37);
  v7 = v20;
  if ( v20 < 0 )
  {
    v35 = 34LL;
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v35,
      (unsigned int)"internal\\onecoreuapshell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v20,
      (int)v37);
    goto LABEL_19;
  }
  *((_DWORD *)v37 + 19) = 0;
  v20 = Microsoft::UI::Composition::Effects::GaussianBlurEffect::put_BlurAmount(
          (Microsoft::UI::Composition::Effects::GaussianBlurEffect *)(v37 + 4),
          30.0);
  v7 = v20;
  if ( v20 < 0 )
  {
    v35 = 37LL;
    goto LABEL_34;
  }
  v21 = v37;
  v22 = v47;
  if ( *((_QWORD *)v37 + 8) != v47 )
  {
    v45 = v47;
    Microsoft::WRL::ComPtr<Windows::Graphics::Effects::IGraphicsEffectSource>::InternalAddRef(&v45);
    v45 = *((_QWORD *)v21 + 8);
    *((_QWORD *)v21 + 8) = v22;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v45);
  }
  v23 = *this;
  v40 = 0LL;
  v24 = *v23;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v40);
  v25 = v24((WindowsInternal::UI *)this, &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8, &v40);
  v7 = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29,
      (unsigned int)"internal\\onecoreuapshell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v25,
      (int)v37);
    goto LABEL_18;
  }
  v26 = v40;
  v39 = 0LL;
  v27 = *(__int64 (__fastcall **)(__int64, volatile signed __int64 *, __int64 *))(*(_QWORD *)v40 + 88LL);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v39);
  v28 = v27(v26, v37, &v39);
  v7 = v28;
  if ( v28 < 0 )
  {
    v36 = 44LL;
LABEL_40:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v36,
      (unsigned int)"internal\\onecoreuapshell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v28,
      (int)v37);
    goto LABEL_17;
  }
  v29 = v39;
  v30 = *(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v39 + 48LL);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v38);
  v28 = v30(v29, &v38);
  v7 = v28;
  if ( v28 < 0 )
  {
    v36 = 45LL;
    goto LABEL_40;
  }
  v31 = v38;
  v32 = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))*v38;
  v49 = 0LL;
  v33 = (__int64 (__fastcall *)(_QWORD *, __int64, __int64))v32[7];
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"source", 7u, 6u);
  v28 = v33(v31, v49, v46);
  v7 = v28;
  if ( v28 < 0 )
  {
    v36 = 47LL;
    goto LABEL_40;
  }
  v28 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, struct IDCompositionDesktopDevicePartner *))*v38)(
          v38,
          &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46,
          a2);
  v7 = v28;
  if ( v28 < 0 )
  {
    v36 = 49LL;
    goto LABEL_40;
  }
  v7 = 0;
LABEL_17:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v39);
LABEL_18:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v40);
LABEL_19:
  Microsoft::WRL::ComPtr<Microsoft::UI::Composition::Effects::GaussianBlurEffect>::InternalRelease(&v37);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v38);
LABEL_20:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v46);
LABEL_21:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v41);
LABEL_22:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v42);
LABEL_23:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v47);
LABEL_24:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v43);
LABEL_25:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v44);
  return v7;
}
