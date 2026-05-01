/*
 * XREFs of ?AppViewUniversalPropertyChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18001D9C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800349D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_1800349D0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$GetValueHelper@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@@@YA?AW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1800720D4 (--$GetValueHelper@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@@@.c)
 *     ?InternalRelease@?$ComPtr@VViewEventArgsForSelectTargetView@@@WRL@Microsoft@@IEAAKXZ @ 0x1800784D0 (-InternalRelease@-$ComPtr@VViewEventArgsForSelectTargetView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEAY0BC@$$CBG@wil@@YA?AV?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@AEAY0BC@$$CBG@Z @ 0x180099FC0 (--$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEAY0BC@$$CBG@wil@@YA-AV-$ComPtr@V.c)
 *     ??$query@U?$IReference@W4AppViewBackButtonVisibility@Core@UI@Windows@@@Foundation@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@U?$IReference@W4AppViewBackButtonVisibility@Core@UI@Windows@@@Foundation@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009A588 (--$query@U-$IReference@W4AppViewBackButtonVisibility@Core@UI@Windows@@@Foundation@Windows@@@-$co.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009A6C8 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$GetValueHelper@W4AppViewBackButtonVisibility@Core@UI@Windows@@@@YA?AW4AppViewBackButtonVisibility@Core@UI@Windows@@PEAUIInspectable@@@Z @ 0x180277044 (--$GetValueHelper@W4AppViewBackButtonVisibility@Core@UI@Windows@@@@YA-AW4AppViewBackButtonVisibi.c)
 *     ??$GetValueHelper@W4ApplicationWindowFrameStyleInternal@WindowManagement@ApplicationModel@Internal@Windows@@@@YA?AW4ApplicationWindowFrameStyleInternal@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1802770E4 (--$GetValueHelper@W4ApplicationWindowFrameStyleInternal@WindowManagement@ApplicationModel@Intern.c)
 *     ??$GetValueHelper@W4ApplicationWindowTitleBarVisibilityInternal@WindowManagement@ApplicationModel@Internal@Windows@@@@YA?AW4ApplicationWindowTitleBarVisibilityInternal@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180277190 (--$GetValueHelper@W4ApplicationWindowTitleBarVisibilityInternal@WindowManagement@ApplicationMode.c)
 *     ??$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEAY0M@$$CBG@wil@@YA?AV?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@AEAY0M@$$CBG@Z @ 0x180277DA8 (--$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEAY0M@$$CBG@wil@@YA-AV-$ComPtr@VV.c)
 *     ??$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEBQEBG@wil@@YA?AV?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@AEBQEBG@Z @ 0x180277E38 (--$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEBQEBG@wil@@YA-AV-$ComPtr@VViewEv.c)
 */

// Hidden C++ exception states: #wind=14 #try_helpers=1
__int64 __fastcall WindowEventDispatcher::AppViewUniversalPropertyChanged(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewUniversalPropertyChangedEventArgs *a2)
{
  std::_Ref_count_base *v2; // rdi
  RTL_SRWLOCK *v3; // rsi
  __int64 v4; // r12
  std::_Ref_count_base *v5; // r15
  __int64 v8; // rbx
  int v9; // eax
  int v10; // eax
  __int64 (__fastcall **v12)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewUniversalPropertyChangedEventArgs *, GUID *, __int64 **); // rax
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  int v19; // edi
  _QWORD *Ptr; // r15
  _QWORD *v21; // r12
  __int64 v22; // rcx
  __int64 v23; // rax
  std::_Ref_count_base *v24; // rcx
  bool v25; // zf
  __int64 v26; // rcx
  int v27; // eax
  __int64 (__fastcall **v28)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewUniversalPropertyChangedEventArgs *, GUID *, __int64 **); // rax
  int v29; // eax
  wil::details::in1diag3 *v30; // rcx
  int v31; // eax
  unsigned int v32; // eax
  int v33; // eax
  int v34; // eax
  wil::details::in1diag3 *v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdx
  int v38; // eax
  int v39; // eax
  unsigned int v40; // eax
  int v41; // eax
  unsigned int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45[2]; // [rsp+20h] [rbp-98h] BYREF
  std::_Ref_count_base *v46; // [rsp+28h] [rbp-90h]
  __int64 v47; // [rsp+30h] [rbp-88h] BYREF
  __int64 v48; // [rsp+38h] [rbp-80h] BYREF
  __int64 v49; // [rsp+40h] [rbp-78h] BYREF
  __int64 *v50; // [rsp+48h] [rbp-70h] BYREF
  __int64 v51; // [rsp+50h] [rbp-68h] BYREF
  RTL_SRWLOCK *v52; // [rsp+58h] [rbp-60h] BYREF
  std::_Ref_count_base *v53[2]; // [rsp+60h] [rbp-58h]
  __int64 v54; // [rsp+70h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  int v56; // [rsp+C8h] [rbp+10h] BYREF
  int v57; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v58; // [rsp+D8h] [rbp+20h] BYREF

  v54 = -2LL;
  v8 = 0LL;
  LODWORD(v58) = 0;
  v9 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewUniversalPropertyChangedEventArgs *, int *))(*(_QWORD *)a2 + 48LL))(
         a2,
         &v56);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4A6,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v9,
      v45[0]);
  }
  else
  {
    v10 = v56;
    if ( v56 >= 5 && v56 < 30 )
      return 0LL;
    if ( !v56 )
      goto LABEL_8;
    if ( v56 <= 2 )
      return 0LL;
    if ( v56 <= 4 )
      goto LABEL_8;
  }
  if ( v10 != 30 )
    return 0LL;
LABEL_8:
  v12 = *(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewUniversalPropertyChangedEventArgs *, GUID *, __int64 **))a2;
  v50 = 0LL;
  v13 = (*v12)(a2, &GUID_a5447aa8_063b_4ddc_8b81_021591a43bf1, &v50);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4B6,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v13,
      v45[0]);
    goto LABEL_52;
  }
  v49 = 0LL;
  v14 = *v50;
  v49 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v14 + 48))(v50, &v49);
  v16 = retaddr;
  if ( v15 < 0 )
  {
LABEL_52:
    wil::details::in1diag3::Throw_Hr(
      v16,
      (void *)0x4B9,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v15,
      v45[0]);
    goto LABEL_53;
  }
  v17 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v49 + 48LL))(v49, &v57);
  v18 = retaddr;
  if ( v17 < 0 )
  {
LABEL_53:
    wil::details::in1diag3::Throw_Hr(
      v18,
      (void *)0x4BC,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v17,
      v45[0]);
LABEL_54:
    std::_Ref_count_base::_Decref(v24);
    goto LABEL_32;
  }
  v51 = 0LL;
  *(_OWORD *)v53 = 0LL;
  v3 = this + 55;
  AcquireSRWLockShared(this + 55);
  v52 = this + 55;
  v19 = v57;
  *(_QWORD *)v45 = 0LL;
  LODWORD(v58) = 2;
  Ptr = this[42].Ptr;
  v21 = this[43].Ptr;
  while ( Ptr != v21 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*Ptr + 288LL))(*Ptr) == v19 )
    {
      v22 = *Ptr;
      v8 = v22;
      *(_QWORD *)v45 = *Ptr;
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
      break;
    }
    ++Ptr;
  }
  v51 = v8;
  v4 = 0LL;
  if ( !v8 )
  {
    v2 = v53[1];
    v5 = v53[0];
    goto LABEL_19;
  }
  v23 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 264LL))(v8, v45);
  v5 = *(std::_Ref_count_base **)v23;
  v2 = *(std::_Ref_count_base **)(v23 + 8);
  *(_QWORD *)v23 = 0LL;
  *(_QWORD *)(v23 + 8) = 0LL;
  v53[0] = v5;
  v24 = v53[1];
  v53[1] = v2;
  if ( v24 )
    goto LABEL_54;
LABEL_32:
  if ( v46 )
    std::_Ref_count_base::_Decref(v46);
LABEL_19:
  if ( v3 )
    ReleaseSRWLockShared(v3);
  if ( !v8 )
    goto LABEL_22;
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
    &v51,
    &v48);
  v58 = v4;
  v25 = *((_QWORD *)v5 + 3) == 0LL;
  v58 = v4;
  if ( v25 )
  {
    v27 = -2147024809;
  }
  else
  {
    v26 = *((_QWORD *)v5 + 3);
    if ( v26 )
      v27 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v26 + 24LL))(
              v26,
              &GUID_d599c413_e76f_5f6a_9087_21e6cb563ed9,
              &v58);
    else
      v27 = v4;
  }
  if ( v27 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4D0,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v27,
      v45[0]);
    goto LABEL_58;
  }
  v28 = *(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewUniversalPropertyChangedEventArgs *, GUID *, __int64 **))a2;
  v47 = v4;
  v29 = ((__int64 (__fastcall *)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewUniversalPropertyChangedEventArgs *, __int64 *))v28[7])(
          a2,
          &v47);
  v30 = retaddr;
  if ( v29 < 0 )
  {
LABEL_58:
    wil::details::in1diag3::Throw_Hr(
      v30,
      (void *)0x4D3,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v29,
      v45[0]);
    goto LABEL_59;
  }
  v31 = v56;
  if ( v56 == 3 )
  {
    v32 = GetValueHelper<enum Windows::Internal::ApplicationModel::WindowManagement::AppModelFrameworkKind>(v47);
    v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 192LL))(v8, v32);
    if ( v33 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x4E6,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v33,
        v45[0]);
    }
    else
    {
      wil::MakeAndInitializeOrThrow<ViewEventArgsForPropertyChanged,unsigned short const (&)[18]>(v45);
      v34 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v58 + 24LL))(v58, v48, *(_QWORD *)v45);
      v35 = retaddr;
      if ( v34 >= 0 )
      {
        v36 = *(_QWORD *)v45;
        if ( *(_QWORD *)v45 )
        {
          *(_QWORD *)v45 = v4;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>::Release(v36);
        }
        goto LABEL_44;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v35,
      (void *)0x4E9,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v34,
      v45[0]);
    __debugbreak();
    JUMPOUT(0x1800CE6CCLL);
  }
LABEL_59:
  switch ( v31 )
  {
    case 0:
      wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::Foundation::IReference<enum Windows::UI::Core::AppViewBackButtonVisibility>>(
        &v47,
        &v52);
      v42 = GetValueHelper<enum Windows::UI::Core::AppViewBackButtonVisibility>(v47);
      v43 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 184LL))(v8, v42);
      if ( v43 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x4DD,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v43,
          v45[0]);
      wil::MakeAndInitializeOrThrow<ViewEventArgsForPropertyChanged,unsigned short const (&)[12]>(v45);
      v44 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v58 + 24LL))(v58, v48, *(_QWORD *)v45);
      if ( v44 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x4E0,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v44,
          v45[0]);
      Microsoft::WRL::ComPtr<ViewEventArgsForSelectTargetView>::InternalRelease(v45);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v52);
      break;
    case 4:
      v40 = GetValueHelper<enum Windows::Internal::ApplicationModel::WindowManagement::ApplicationWindowFrameStyleInternal>(v47);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 200LL))(v8, v40);
      wil::MakeAndInitializeOrThrow<ViewEventArgsForPropertyChanged,unsigned short const * const &>(v45, off_180467C10);
      v41 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v58 + 24LL))(v58, v48, *(_QWORD *)v45);
      if ( v41 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x4F2,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v41,
          v45[0]);
      goto LABEL_66;
    case 30:
      LOBYTE(v37) = (unsigned int)GetValueHelper<enum Windows::Internal::ApplicationModel::WindowManagement::ApplicationWindowTitleBarVisibilityInternal>(v47) == 0;
      v38 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v48 + 296LL))(v48, v37);
      if ( v38 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x4F9,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v38,
          v45[0]);
      wil::MakeAndInitializeOrThrow<ViewEventArgsForPropertyChanged,unsigned short const * const &>(v45, off_180467C08);
      v39 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v58 + 24LL))(v58, v48, *(_QWORD *)v45);
      if ( v39 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x4FC,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v39,
          v45[0]);
LABEL_66:
      Microsoft::WRL::ComPtr<ViewEventArgsForSelectTargetView>::InternalRelease(v45);
      break;
  }
LABEL_44:
  if ( v47 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v58);
  if ( v48 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
LABEL_22:
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v49 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
  if ( v50 )
    (*(void (__fastcall **)(__int64 *))(*v50 + 16))(v50);
  return 0LL;
}
