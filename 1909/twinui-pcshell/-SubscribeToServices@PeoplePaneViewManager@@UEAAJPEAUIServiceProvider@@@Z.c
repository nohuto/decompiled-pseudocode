/*
 * XREFs of ?SubscribeToServices@PeoplePaneViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180242A10
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x180014CFC (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVPeoplePaneViewManager@@@SmartCookie@@QEAAJPEAUIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVPeoplePaneViewManager@@@Z @ 0x18023DB90 (--$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@E.c)
 *     ??$Register@UITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP81@EAAJK@ZPEAVPeoplePaneViewManager@@@SmartCookie@@QEAAJPEAUITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP81@EAAJK@ZPEAVPeoplePaneViewManager@@@Z @ 0x18023DC60 (--$Register@UITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP81@EAAJK@ZPEAV.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall PeoplePaneViewManager::SubscribeToServices(PeoplePaneViewManager *this, struct IServiceProvider *a2)
{
  __int64 *v4; // r14
  int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 *v23; // r14
  __int64 v24; // r8
  unsigned int v26; // [rsp+38h] [rbp-59h] BYREF
  __int64 v27; // [rsp+40h] [rbp-51h] BYREF
  __int64 v28; // [rsp+48h] [rbp-49h] BYREF
  __int64 v29[2]; // [rsp+50h] [rbp-41h] BYREF
  HSTRING_HEADER v30; // [rsp+60h] [rbp-31h] BYREF
  __int64 v31; // [rsp+78h] [rbp-19h]
  HSTRING_HEADER v32; // [rsp+80h] [rbp-11h] BYREF
  __int64 v33; // [rsp+98h] [rbp+7h]
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp+Fh] BYREF
  __int64 v35; // [rsp+B8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v29[1] = -2LL;
  v4 = (__int64 *)((char *)this + 320);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 40);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         v4);
  if ( v5 >= 0 )
  {
    v5 = SmartCookie::Register<IApplicationViewCollection,long (IApplicationViewCollection::*)(IApplicationViewChangeListener *,unsigned long *),long (IApplicationViewCollection::*)(unsigned long),PeoplePaneViewManager *>(
           (__int64)this + 328,
           *v4,
           v6);
    if ( v5 < 0 )
    {
      v7 = 107LL;
      goto LABEL_3;
    }
    v27 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           &unk_180519310,
           &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
           &v27);
    v5 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6E,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v8);
LABEL_41:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      return (unsigned int)v5;
    }
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.ShellExperience.PeopleBarFlyout",
      0x31u,
      0x30u);
    v9 = v27;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 63);
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v9 + 48LL))(v9, v35, (char *)this + 504);
    v5 = v10;
    if ( v10 < 0 )
    {
      v11 = 113LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_40:
      v35 = 0LL;
      goto LABEL_41;
    }
    v12 = *((_QWORD *)this + 63);
    v26 = 2;
    v28 = v12;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 64);
    v10 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            (_QWORD *)this + 64,
            (__int64)&GUID_1b7781cd_1b97_4728_8b6e_67a7e55cc53c,
            &v28,
            &v26);
    v5 = v10;
    if ( v10 < 0 )
    {
      v11 = 114LL;
      goto LABEL_12;
    }
    v33 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v32,
      L"Windows.Internal.ShellExperience.PeopleBarJumpView",
      0x33u,
      0x32u);
    v13 = v27;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 65);
    v14 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v13 + 48LL))(v13, v33, (char *)this + 520);
    v5 = v14;
    if ( v14 < 0 )
    {
      v15 = 117LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v14);
LABEL_39:
      v33 = 0LL;
      goto LABEL_40;
    }
    v16 = *((_QWORD *)this + 65);
    v26 = 2;
    v28 = v16;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 66);
    v14 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            (_QWORD *)this + 66,
            (__int64)&GUID_ab65b025_ff88_470a_9513_b62bcd7ce879,
            &v28,
            &v26);
    v5 = v14;
    if ( v14 < 0 )
    {
      v15 = 118LL;
      goto LABEL_17;
    }
    v31 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v30,
      L"Windows.Internal.ShellExperience.ShoulderTap",
      0x2Du,
      0x2Cu);
    v17 = v27;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 67);
    v18 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v17 + 48LL))(v17, v31, (char *)this + 536);
    v5 = v18;
    if ( v18 < 0 )
    {
      v19 = 121LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v18);
LABEL_38:
      v31 = 0LL;
      goto LABEL_39;
    }
    v20 = *((_QWORD *)this + 67);
    v26 = 2;
    v28 = v20;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 68);
    v18 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            (_QWORD *)this + 68,
            (__int64)&GUID_8667db0d_6960_465f_b9a4_c461863efa91,
            &v28,
            &v26);
    v5 = v18;
    if ( v18 < 0 )
    {
      v19 = 122LL;
      goto LABEL_22;
    }
    v29[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v29);
    v21 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
            a2,
            &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
            &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
            v29);
    v5 = v21;
    if ( v21 >= 0 )
    {
      v21 = (*(__int64 (__fastcall **)(__int64, const WCHAR *, __int64))(*(_QWORD *)v29[0] + 64LL))(
              v29[0],
              L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App",
              0x28800000168LL);
      v5 = v21;
      if ( v21 >= 0 )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 21);
        v21 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
                a2,
                &SID_IImmersiveMonitorService,
                &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
                (char *)this + 168);
        v5 = v21;
        if ( v21 >= 0 )
        {
          v23 = (__int64 *)((char *)this + 176);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 22);
          v21 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
                  a2,
                  &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
                  &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
                  (char *)this + 176);
          v5 = v21;
          if ( v21 >= 0 )
          {
            v21 = SmartCookie::Register<ITabletModeController,long (ITabletModeController::*)(ITabletModeChangeListener *,unsigned long *),long (ITabletModeController::*)(unsigned long),PeoplePaneViewManager *>(
                    (__int64)this + 192,
                    *v23,
                    v24);
            v5 = v21;
            if ( v21 >= 0 )
            {
              v21 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)*v23 + 24LL))(*v23, (char *)this + 184);
              v5 = v21;
              if ( v21 >= 0 )
              {
                v5 = 0;
                goto LABEL_37;
              }
              v22 = 136LL;
            }
            else
            {
              v22 = 135LL;
            }
          }
          else
          {
            v22 = 131LL;
          }
        }
        else
        {
          v22 = 129LL;
        }
      }
      else
      {
        v22 = 127LL;
      }
    }
    else
    {
      v22 = 126LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v21);
LABEL_37:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v29);
    goto LABEL_38;
  }
  v7 = 103LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
