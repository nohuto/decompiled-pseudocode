/*
 * XREFs of ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x18016EF00
 * Callers:
 *     <none>
 * Callees:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x180018C04 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18001B5FC (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180027064 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18003EC80 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x180071804 (--$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$ActivateInstance@V?$ComPtr@UIJumpViewParams@JumpView@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIJumpViewParams@JumpView@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18016B8EC (--$ActivateInstance@V-$ComPtr@UIJumpViewParams@JumpView@Shell@Internal@Windows@@@WRL@Microsoft@@.c)
 *     ??1ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ @ 0x18016C880 (--1ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ.c)
 *     ??4ShowJumpViewActivity@JumpViewProvider@@QEAAAEAV01@$$QEAV01@@Z @ 0x18016CA74 (--4ShowJumpViewActivity@JumpViewProvider@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?BeginJumpViewTelemetryTimeout@CJumpViewExperienceManager@@AEAAXXZ @ 0x18016CCBC (-BeginJumpViewTelemetryTimeout@CJumpViewExperienceManager@@AEAAXXZ.c)
 *     ?BeginTelemetryActivity@CJumpViewExperienceManager@@AEAA?AVShowJumpViewActivity@JumpViewProvider@@PEAUIJumpViewParams@JumpView@Shell@Internal@Windows@@@Z @ 0x18016CD3C (-BeginTelemetryActivity@CJumpViewExperienceManager@@AEAA-AVShowJumpViewActivity@JumpViewProvider.c)
 *     ?EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ @ 0x18016D330 (-EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ.c)
 *     ?Split@ShowJumpViewActivity@JumpViewProvider@@QEAA?AV12@XZ @ 0x18016F30C (-Split@ShowJumpViewActivity@JumpViewProvider@@QEAA-AV12@XZ.c)
 *     ?Stop@?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18016F58C (-Stop@-$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803AE9B8 (-NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Shell@Intern.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CJumpViewExperienceManager::Show(CJumpViewExperienceManager *this, HSTRING a2)
{
  _QWORD *v4; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  HSTRING_HEADER *v14; // rax
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rdx
  char *v18; // rcx
  HSTRING_HEADER *v19; // rax
  __int64 v20; // [rsp+48h] [rbp-C0h] BYREF
  HSTRING v21; // [rsp+50h] [rbp-B8h] BYREF
  HSTRING v22; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v23[2]; // [rsp+60h] [rbp-A8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-98h] BYREF
  __int64 v25; // [rsp+88h] [rbp-80h]
  _BYTE v26[320]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v27[320]; // [rsp+1D8h] [rbp+D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+340h] [rbp+238h]

  v23[1] = -2LL;
  v21 = a2;
  if ( *((_DWORD *)this + 48) != 2 )
  {
    v4 = (_QWORD *)((char *)this + 344);
    v5 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 43, &v21);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x121,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
    v20 = 0LL;
    v25 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.Shell.JumpView.JumpViewParams",
      0x2Fu,
      0x2Eu);
    v8 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Internal::Shell::JumpView::IJumpViewParams>>(
           v25,
           &v20);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 292LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
LABEL_32:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
      return v6;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 56LL))(v20, *v4);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 293LL;
      goto LABEL_13;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v20 + 272LL))(v20, (char *)this + 484);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 294LL;
      goto LABEL_13;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v20 + 304LL))(v20, v23);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 297LL;
      goto LABEL_13;
    }
    v10 = 6;
    if ( SLODWORD(v23[0]) > 0 )
      v10 = v23[0];
    *((_DWORD *)this + 122) = v10;
    CJumpViewExperienceManager::BeginTelemetryActivity((__int64)this, (struct wil::details::IFailureCallback *)v26, v20);
    v11 = JumpViewProvider::ShowJumpViewActivity::Split(v26, v27);
    JumpViewProvider::ShowJumpViewActivity::operator=((__int64)this + 512, v11);
    JumpViewProvider::ShowJumpViewActivity::~ShowJumpViewActivity((JumpViewProvider::ShowJumpViewActivity *)v27);
    CJumpViewExperienceManager::BeginJumpViewTelemetryTimeout((struct _TP_TIMER **)this);
    v12 = CJumpViewExperienceManager::EnsureActivationArgs((HSTRING *)this);
    v6 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x137,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
LABEL_31:
      JumpViewProvider::ShowJumpViewActivity::~ShowJumpViewActivity((JumpViewProvider::ShowJumpViewActivity *)v26);
      goto LABEL_32;
    }
    v22 = 0LL;
    v25 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v13 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
            v25,
            &v22);
    v6 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13A,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
LABEL_30:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
      goto LABEL_31;
    }
    v21 = v22;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
    v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)&JumpViewExperienceEvents::Param_LaunchArgumentString);
    v16 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v21,
            (HSTRING)v14[1].Reserved.Reserved1,
            v15,
            (__int64)a2);
    v6 = v16;
    if ( v16 < 0 )
    {
      v17 = 316LL;
LABEL_29:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
      goto LABEL_30;
    }
    v18 = (char *)this + 152;
    if ( *((_DWORD *)this + 48) )
    {
      v16 = CSingleViewShellExperience::NavigateView(v18, 3LL);
      v6 = v16;
      if ( v16 < 0 )
      {
        v17 = 326LL;
        goto LABEL_29;
      }
      v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
              &hstringHeader,
              (const WCHAR **)&JumpViewExperienceEvents::NotifyLaunchArguments);
      v16 = ExperienceManagerUtils::RaiseReactivatedEvent(
              *((ExperienceManagerUtils **)this + 22),
              (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 70),
              *((HSTRING *)this + 20),
              *((HSTRING *)this + 21),
              (HSTRING)v19[1].Reserved.Reserved1,
              v22);
      v6 = v16;
      if ( v16 < 0 )
      {
        v17 = 328LL;
        goto LABEL_29;
      }
      *((_BYTE *)this + 492) = 1;
    }
    else
    {
      v16 = CSingleViewShellExperience::Show(
              (__int64)v18,
              (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)4);
      v6 = v16;
      if ( v16 < 0 )
      {
        v17 = 321LL;
        goto LABEL_29;
      }
    }
    wil::ActivityBase<JumpViewProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v26);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    JumpViewProvider::ShowJumpViewActivity::~ShowJumpViewActivity((JumpViewProvider::ShowJumpViewActivity *)v26);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  }
  return 0LL;
}
