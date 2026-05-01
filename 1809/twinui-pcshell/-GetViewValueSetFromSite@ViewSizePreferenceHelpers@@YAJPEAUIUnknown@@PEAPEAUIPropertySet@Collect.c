/*
 * XREFs of ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18032FF1C
 * Callers:
 *     ?RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x180330760 (-RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERN.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004D38C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?SetTargetViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x18004E904 (-SetTargetViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActivation@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800596E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActiv.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x18005EDB8 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x180071804 (--$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800E62AC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@PEAUHWND__@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x18010BDCC (-SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     Microsoft::WRL::Details::Make__ViewSizePreferenceHelpers::GetViewValueSetFromSite_::_47_::LaunchUIContext_Windows::Foundation::Collections::IPropertySet_____ptr64_ @ 0x18032F010 (Microsoft--WRL--Details--Make__ViewSizePreferenceHelpers--GetViewValueSetFromSite_--_47_--Launch.c)
 *     _lambda_09d3c354ccd8b545e955a21e035f2e4b_::operator() @ 0x18032F6E8 (_lambda_09d3c354ccd8b545e955a21e035f2e4b_--operator().c)
 *     ?GetTargetViewSizePreferenceOrDefault@ViewSizePreferenceHelpers@@YA?AW4APPLICATION_VIEW_SIZE_PREFERENCE@@PEAUIUnknown@@@Z @ 0x18032FE88 (-GetTargetViewSizePreferenceOrDefault@ViewSizePreferenceHelpers@@YA-AW4APPLICATION_VIEW_SIZE_PRE.c)
 *     ?TryGetSourceViewSizePreference@ViewSizePreferenceHelpers@@YA_NPEAUIUnknown@@AEAW4APPLICATION_VIEW_SIZE_PREFERENCE@@AEAPEAUHWND__@@@Z @ 0x180330BE8 (-TryGetSourceViewSizePreference@ViewSizePreferenceHelpers@@YA_NPEAUIUnknown@@AEAW4APPLICATION_VI.c)
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
  HSTRING_HEADER *v10; // rbx
  HSTRING_HEADER *v11; // rax
  __int64 v12; // r8
  int v13; // eax
  void *v14; // rbx
  volatile int *v15; // rdx
  int v16; // eax
  int v17; // eax
  WCHAR *v19; // [rsp+38h] [rbp-59h] BYREF
  void *ppvOut; // [rsp+40h] [rbp-51h] BYREF
  IUnknown *punk; // [rsp+48h] [rbp-49h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-41h] BYREF
  LPVOID ppv; // [rsp+58h] [rbp-39h] BYREF
  __int64 v24; // [rsp+60h] [rbp-31h] BYREF
  void *v25; // [rsp+68h] [rbp-29h] BYREF
  void *v26; // [rsp+70h] [rbp-21h] BYREF
  struct IUnknown v27; // [rsp+78h] [rbp-19h] BYREF
  const WCHAR *v28[2]; // [rsp+80h] [rbp-11h] BYREF
  _QWORD v29[2]; // [rsp+90h] [rbp-1h] BYREF
  HSTRING_HEADER v30; // [rsp+A0h] [rbp+Fh] BYREF
  HSTRING_HEADER v31; // [rsp+C0h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v29[1] = -2LL;
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
    v19 = (WCHAR *)ppv;
    ppv = 0LL;
    if ( ViewSizePreferenceHelpers::TryGetSourceViewSizePreference(
           punk,
           &v27,
           (enum APPLICATION_VIEW_SIZE_PREFERENCE *)v29,
           v5) )
    {
      v7 = ViewSizePreferenceHelpers::SetSourceViewSizePreference(
             (Windows::Internal::ShellHelpers::PropertySetHelper *)&v19,
             v29[0],
             (unsigned int)v27.lpVtbl);
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
LABEL_31:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
        goto LABEL_32;
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
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
          &pv,
          0LL);
        if ( (*(int (__fastcall **)(void *, LPVOID *))(*(_QWORD *)v9 + 24LL))(v9, &pv) >= 0 )
        {
          v28[0] = (const WCHAR *)pv;
          v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v30, v28);
          v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v31, (const WCHAR **)off_1804003F0);
          v13 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v19,
                  (HSTRING)v11[1].Reserved.Reserved1,
                  v12,
                  (__int64)v10[1].Reserved.Reserved1);
          v6 = v13;
          if ( v13 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x110,
              (__int64)"internal\\onecoreuapshell\\inc\\ViewSizePreference.h",
              (const char *)(unsigned int)v13);
            if ( pv )
              CoTaskMemFree(pv);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
            goto LABEL_31;
          }
        }
        if ( pv )
          CoTaskMemFree(pv);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    }
    if ( (unsigned int)ViewSizePreferenceHelpers::GetTargetViewSizePreferenceOrDefault(punk) )
    {
      v7 = ViewSizePreferenceHelpers::SetTargetViewSizePreference((Windows::Internal::ShellHelpers::PropertySetHelper *)&v19);
      v6 = v7;
      if ( v7 < 0 )
      {
        v8 = 280LL;
        goto LABEL_18;
      }
    }
    v26 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
    if ( IUnknown_QueryService(
           punk,
           &GUID_0d12c4c8_a3d9_4e24_94c1_0e20c5a956c4,
           &GUID_0d12c4c8_a3d9_4e24_94c1_0e20c5a956c4,
           &v26) >= 0 )
    {
      v28[0] = v19;
      Microsoft::WRL::Details::Make__ViewSizePreferenceHelpers::GetViewValueSetFromSite_::_47_::LaunchUIContext_Windows::Foundation::Collections::IPropertySet_____ptr64_(
        (__int64 *)&ppvOut,
        v28);
      v14 = ppvOut;
      if ( !ppvOut )
      {
        v6 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x132,
          (__int64)"internal\\onecoreuapshell\\inc\\ViewSizePreference.h",
          (const char *)0x8007000ELL);
LABEL_30:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
        goto LABEL_31;
      }
      (*(void (__fastcall **)(void *, void *))(*(_QWORD *)v26 + 24LL))(v26, ppvOut);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDelayedAppActivation,Microsoft::WRL::FtmBase>::Release(
        (__int64)v14,
        v15);
    }
    v25 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
    if ( IUnknown_QueryService(punk, &stru_180483140, &GUID_e1380b20_f578_40aa_bb7d_a22bd11b0836, &v25) >= 0 )
      (*(void (__fastcall **)(void *, WCHAR *))(*(_QWORD *)v25 + 24LL))(v25, v19);
    v28[0] = (const WCHAR *)&punk;
    v28[1] = (const WCHAR *)&v19;
    lambda_09d3c354ccd8b545e955a21e035f2e4b_::operator()((__int64)v28);
    v24 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    v16 = (**(__int64 (__fastcall ***)(WCHAR *, GUID *, __int64 *))v19)(
            v19,
            &GUID_deab70f3_3a9c_40e6_a680_2ee376c5eaed,
            &v24);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        337LL,
        (__int64)"internal\\onecoreuapshell\\inc\\ViewSizePreference.h",
        (const char *)(unsigned int)v16);
      __debugbreak();
    }
    v17 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 48LL))(v24, 1LL);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        338LL,
        (__int64)"internal\\onecoreuapshell\\inc\\ViewSizePreference.h",
        (const char *)(unsigned int)v17);
      __debugbreak();
    }
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
    a2->lpVtbl = (struct IUnknownVtbl *)v19;
    v6 = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
    goto LABEL_30;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFD,
    (__int64)"internal\\onecoreuapshell\\inc\\ViewSizePreference.h",
    (const char *)(unsigned int)v4);
LABEL_32:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return v6;
}
