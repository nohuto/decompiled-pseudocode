/*
 * XREFs of ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803AF96C
 * Callers:
 *     ?RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1803B015C (-RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERN.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x180043688 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180054690 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?SetTargetViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x1800560B8 (-SetTargetViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActivation@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005C530 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActiv.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x180062270 (--$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18011E190 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801275FC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@PEAUHWND__@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x180151AC4 (-SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     Microsoft::WRL::Details::Make__ViewSizePreferenceHelpers::GetViewValueSetFromSite_::_47_::LaunchUIContext_Windows::Foundation::Collections::IPropertySet___ @ 0x1803AED54 (Microsoft--WRL--Details--Make__ViewSizePreferenceHelpers--GetViewValueSetFromSite_--_47_--Launch.c)
 *     _lambda_09d3c354ccd8b545e955a21e035f2e4b_::operator() @ 0x1803AF2BC (_lambda_09d3c354ccd8b545e955a21e035f2e4b_--operator().c)
 *     ?GetTargetViewSizePreferenceOrDefault@ViewSizePreferenceHelpers@@YA?AW4APPLICATION_VIEW_SIZE_PREFERENCE@@PEAUIUnknown@@@Z @ 0x1803AF8D8 (-GetTargetViewSizePreferenceOrDefault@ViewSizePreferenceHelpers@@YA-AW4APPLICATION_VIEW_SIZE_PRE.c)
 *     ?TryGetSourceViewSizePreference@ViewSizePreferenceHelpers@@YA_NPEAUIUnknown@@AEAW4APPLICATION_VIEW_SIZE_PREFERENCE@@AEAPEAUHWND__@@@Z @ 0x1803B069C (-TryGetSourceViewSizePreference@ViewSizePreferenceHelpers@@YA_NPEAUIUnknown@@AEAW4APPLICATION_VI.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall ViewSizePreferenceHelpers::GetViewValueSetFromSite(
        IUnknown *this,
        struct IUnknown *a2,
        struct Windows::Foundation::Collections::IPropertySet **a3)
{
  HRESULT v4; // eax
  HWND *v5; // r9
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  void *v9; // rbx
  int (__fastcall *v10)(void *, LPVOID *); // rdi
  HSTRING_HEADER *v11; // rbx
  HSTRING_HEADER *v12; // rax
  __int64 v13; // r8
  int v14; // eax
  void *v15; // rbx
  volatile int *v16; // rdx
  WCHAR *v17; // rbx
  __int64 (__fastcall *v18)(WCHAR *, GUID *, __int64 *); // rdi
  int v19; // eax
  int v20; // eax
  WCHAR *v22; // [rsp+38h] [rbp-69h] BYREF
  void *ppvOut; // [rsp+40h] [rbp-61h] BYREF
  IUnknown *punk; // [rsp+48h] [rbp-59h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-51h] BYREF
  LPVOID ppv; // [rsp+58h] [rbp-49h] BYREF
  __int64 v27; // [rsp+60h] [rbp-41h] BYREF
  void *v28; // [rsp+68h] [rbp-39h] BYREF
  void *v29; // [rsp+70h] [rbp-31h] BYREF
  struct IUnknown v30; // [rsp+78h] [rbp-29h] BYREF
  const WCHAR *v31[2]; // [rsp+80h] [rbp-21h] BYREF
  _QWORD v32[2]; // [rsp+90h] [rbp-11h] BYREF
  HSTRING_HEADER v33; // [rsp+A0h] [rbp-1h] BYREF
  HSTRING_HEADER v34; // [rsp+C0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v32[1] = -2LL;
  punk = this;
  a2->lpVtbl = 0LL;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v4 = CoCreateInstance(
         &GUID_f1c46d71_b791_4110_8d5c_7108f22c1010,
         0LL,
         1u,
         &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
         &ppv);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v22 = (WCHAR *)ppv;
    ppv = 0LL;
    if ( ViewSizePreferenceHelpers::TryGetSourceViewSizePreference(
           punk,
           &v30,
           (enum APPLICATION_VIEW_SIZE_PREFERENCE *)v32,
           v5) )
    {
      v7 = ViewSizePreferenceHelpers::SetSourceViewSizePreference(
             (Windows::Internal::ShellHelpers::PropertySetHelper *)&v22,
             v32[0],
             (unsigned int)v30.lpVtbl);
      v6 = v7;
      if ( v7 < 0 )
      {
        v8 = 260LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (__int64)"internal\\onecoreuapshell\\inc\\ViewSizePreference.h",
          (const char *)(unsigned int)v7);
LABEL_29:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)&v22);
        goto LABEL_30;
      }
    }
    else
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      if ( IUnknown_QueryService(
             punk,
             (const GUID *const)&SID_LaunchSourceAppUserModelId,
             &GUID_989191ac_28ff_4cf0_9584_e0d078bc2396,
             &ppvOut) >= 0 )
      {
        pv = 0LL;
        v9 = ppvOut;
        v10 = *(int (__fastcall **)(void *, LPVOID *))(*(_QWORD *)ppvOut + 24LL);
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          &pv,
          0LL);
        if ( v10(v9, &pv) >= 0 )
        {
          v31[0] = (const WCHAR *)pv;
          v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v33, v31);
          v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v34, (const WCHAR **)off_180451668);
          v14 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v22,
                  (HSTRING)v12[1].Reserved.Reserved1,
                  v13,
                  (__int64)v11[1].Reserved.Reserved1);
          v6 = v14;
          if ( v14 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x110,
              (__int64)"internal\\onecoreuapshell\\inc\\ViewSizePreference.h",
              (const char *)(unsigned int)v14);
            if ( pv )
              CoTaskMemFree(pv);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
            goto LABEL_29;
          }
        }
        if ( pv )
          CoTaskMemFree(pv);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    }
    if ( (unsigned int)ViewSizePreferenceHelpers::GetTargetViewSizePreferenceOrDefault(punk) )
    {
      v7 = ViewSizePreferenceHelpers::SetTargetViewSizePreference((Windows::Internal::ShellHelpers::PropertySetHelper *)&v22);
      v6 = v7;
      if ( v7 < 0 )
      {
        v8 = 280LL;
        goto LABEL_18;
      }
    }
    v29 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
    if ( IUnknown_QueryService(
           punk,
           &GUID_0d12c4c8_a3d9_4e24_94c1_0e20c5a956c4,
           &GUID_0d12c4c8_a3d9_4e24_94c1_0e20c5a956c4,
           &v29) >= 0 )
    {
      v31[0] = v22;
      Microsoft::WRL::Details::Make__ViewSizePreferenceHelpers::GetViewValueSetFromSite_::_47_::LaunchUIContext_Windows::Foundation::Collections::IPropertySet___(
        (__int64 *)&ppvOut,
        v31);
      v15 = ppvOut;
      if ( !ppvOut )
      {
        v6 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x132,
          (__int64)"internal\\onecoreuapshell\\inc\\ViewSizePreference.h",
          (const char *)0x8007000ELL);
LABEL_28:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)&v29);
        goto LABEL_29;
      }
      (*(void (__fastcall **)(void *, void *))(*(_QWORD *)v29 + 24LL))(v29, ppvOut);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDelayedAppActivation,Microsoft::WRL::FtmBase>::Release(
        (__int64)v15,
        v16);
    }
    v28 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
    if ( IUnknown_QueryService(punk, &stru_1804A54B8, &GUID_e1380b20_f578_40aa_bb7d_a22bd11b0836, &v28) >= 0 )
      (*(void (__fastcall **)(void *, WCHAR *))(*(_QWORD *)v28 + 24LL))(v28, v22);
    v31[0] = (const WCHAR *)&punk;
    v31[1] = (const WCHAR *)&v22;
    lambda_09d3c354ccd8b545e955a21e035f2e4b_::operator()((__int64)v31);
    v27 = 0LL;
    v17 = v22;
    v18 = **(__int64 (__fastcall ***)(WCHAR *, GUID *, __int64 *))v22;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    v19 = v18(v17, &GUID_deab70f3_3a9c_40e6_a680_2ee376c5eaed, &v27);
    if ( v19 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        337LL,
        (__int64)"internal\\onecoreuapshell\\inc\\ViewSizePreference.h",
        (const char *)(unsigned int)v19);
      __debugbreak();
    }
    v20 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 48LL))(v27, 1LL);
    if ( v20 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        338LL,
        (__int64)"internal\\onecoreuapshell\\inc\\ViewSizePreference.h",
        (const char *)(unsigned int)v20);
      __debugbreak();
    }
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
    a2->lpVtbl = (struct IUnknownVtbl *)v22;
    v6 = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFD,
    (__int64)"internal\\onecoreuapshell\\inc\\ViewSizePreference.h",
    (const char *)(unsigned int)v4);
LABEL_30:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)&ppv);
  return v6;
}
