/*
 * XREFs of ?AppViewUniversalPropertyChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180033E90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180025E48 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180025ED4 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$MakeAndInitialize@VViewEventArgsForPropertyChanged@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEAY0BC@$$CBG@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEAY0BC@$$CBG@Z @ 0x18003DED4 (--$MakeAndInitialize@VViewEventArgsForPropertyChanged@@UIViewEventArgs@ViewManagerInterop@Shell@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@U?$IReference@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@@Foundation@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@U?$IReference@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@@Foundation@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009086C (--$query@U-$IReference@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Window.c)
 *     ??$query@U?$IReference@W4AppViewBackButtonVisibility@Core@UI@Windows@@@Foundation@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@U?$IReference@W4AppViewBackButtonVisibility@Core@UI@Windows@@@Foundation@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800908BC (--$query@U-$IReference@W4AppViewBackButtonVisibility@Core@UI@Windows@@@Foundation@Windows@@@-$co.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009090C (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VViewEventArgsForPropertyChanged@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEAY0M@$$CBG@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEAY0M@$$CBG@Z @ 0x180222478 (--$MakeAndInitialize@VViewEventArgsForPropertyChanged@@UIViewEventArgs@ViewManagerI_ea_180222478.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall WindowEventDispatcher::AppViewUniversalPropertyChanged(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewUniversalPropertyChangedEventArgs *a2)
{
  void *v2; // rbx
  RTL_SRWLOCK *v3; // rsi
  __int64 v6; // rdi
  int v7; // eax
  const char *v8; // r9
  __int64 result; // rax
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  int v16; // ebx
  _QWORD *Ptr; // r14
  _QWORD *v18; // r12
  __int64 v19; // rcx
  __int64 *v20; // rax
  std::_Ref_count_base *v21; // rcx
  int v22; // eax
  int v23; // eax
  wil::details::in1diag3 *v24; // rcx
  int v25; // eax
  wil::details::in1diag3 *v26; // rcx
  int v27; // eax
  wil::details::in1diag3 *v28; // rcx
  int v29; // eax
  wil::details::in1diag3 *v30; // rcx
  int v31; // eax
  wil::details::in1diag3 *v32; // rcx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  void *v39; // [rsp+20h] [rbp-98h] BYREF
  void *v40; // [rsp+28h] [rbp-90h] BYREF
  void *v41; // [rsp+30h] [rbp-88h] BYREF
  char *v42; // [rsp+38h] [rbp-80h] BYREF
  __int64 v43; // [rsp+40h] [rbp-78h] BYREF
  std::_Ref_count_base *v44; // [rsp+48h] [rbp-70h]
  __int64 v45; // [rsp+50h] [rbp-68h] BYREF
  __int64 v46; // [rsp+58h] [rbp-60h] BYREF
  __int64 v47; // [rsp+60h] [rbp-58h] BYREF
  std::_Ref_count_base *v48[2]; // [rsp+68h] [rbp-50h] BYREF
  __int64 v49; // [rsp+78h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  int v51; // [rsp+C8h] [rbp+10h]
  int v52; // [rsp+D0h] [rbp+18h] BYREF
  unsigned int v53; // [rsp+D8h] [rbp+20h] BYREF

  v49 = -2LL;
  v6 = 0LL;
  v53 = 0;
  try
  {
    v7 = (*(__int64 (**)(void))(*(_QWORD *)a2 + 48LL))();
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x46B,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v7,
        (int)v39);
    }
    else
    {
      if ( v51 && v51 != 3 )
        return 0LL;
      v46 = 0LL;
      v10 = (**(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewUniversalPropertyChangedEventArgs *, GUID *, __int64 *))a2)(
              a2,
              &GUID_a5447aa8_063b_4ddc_8b81_021591a43bf1,
              &v46);
      v11 = retaddr;
      if ( v10 >= 0 )
      {
        v45 = 0LL;
        v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v46 + 48LL))(v46, &v45);
        v13 = retaddr;
        if ( v12 >= 0 )
        {
          v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v45 + 48LL))(v45, &v52);
          v15 = retaddr;
          if ( v14 >= 0 )
          {
            v47 = 0LL;
            *(_OWORD *)v48 = 0LL;
            v3 = this + 56;
            AcquireSRWLockShared(this + 56);
            v42 = (char *)&this[56];
            v16 = v52;
            v43 = 0LL;
            v53 = 2;
            Ptr = this[43].Ptr;
            v18 = this[44].Ptr;
            while ( Ptr != v18 )
            {
              if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*Ptr + 272LL))(*Ptr) == v16 )
              {
                v19 = *Ptr;
                v6 = v19;
                v43 = *Ptr;
                if ( v19 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
                break;
              }
              ++Ptr;
            }
            v47 = v6;
            v2 = 0LL;
            if ( !v6
              || (v20 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 248LL))(v6, &v43),
                  std::shared_ptr<ViewEventRegistration>::operator=(v48, v20),
                  (v21 = v44) == 0LL) )
            {
LABEL_16:
              if ( v3 )
                ReleaseSRWLockShared(v3);
              if ( !v6 )
                goto LABEL_19;
              wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
                &v47,
                &v42);
              if ( !v51 )
                goto LABEL_57;
              if ( v51 != 3 )
              {
LABEL_44:
                if ( v42 )
                  (*(void (__fastcall **)(char *))(*(_QWORD *)v42 + 16LL))(v42);
LABEL_19:
                if ( v48[1] )
                  std::_Ref_count_base::_Decref(v48[1]);
                if ( v6 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
                if ( v45 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
                if ( v46 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
                return 0LL;
              }
              v40 = v2;
              v22 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewUniversalPropertyChangedEventArgs *, void **))(*(_QWORD *)a2 + 56LL))(
                      a2,
                      &v40);
              if ( v22 < 0 )
              {
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0x4A6,
                  (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                  (const char *)(unsigned int)v22,
                  (int)v39);
              }
              else
              {
                wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::Foundation::IReference<enum Windows::Internal::ApplicationModel::WindowManagement::AppModelFrameworkKind>>(
                  &v40,
                  &v43);
                v23 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v43 + 48LL))(v43, &v53);
                v24 = retaddr;
                if ( v23 >= 0 )
                {
                  v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 184LL))(v6, v53);
                  v26 = retaddr;
                  if ( v25 >= 0 )
                  {
                    v41 = v2;
                    v27 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForPropertyChanged,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,unsigned short const (&)[18]>(&v41);
                    v28 = retaddr;
                    if ( v27 >= 0 )
                    {
                      v39 = v2;
                      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
                      v29 = AgileGitPtr::CopyLocal(
                              (std::_Ref_count_base *)((char *)v48[0] + 24),
                              &GUID_485d880d_3bd2_519f_b754_8b2e73798d3e,
                              &v39);
                      v30 = retaddr;
                      if ( v29 >= 0 )
                      {
                        v2 = v41;
                        v31 = (*(__int64 (__fastcall **)(void *, char *, void *))(*(_QWORD *)v39 + 24LL))(v39, v42, v41);
                        v32 = retaddr;
                        if ( v31 >= 0 )
                        {
                          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
                          if ( v2 )
                            (*(void (__fastcall **)(void *))(*(_QWORD *)v2 + 16LL))(v2);
                          if ( v43 )
                            (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
                          if ( v40 )
                            (*(void (__fastcall **)(void *))(*(_QWORD *)v40 + 16LL))(v40);
                          goto LABEL_44;
                        }
                        goto LABEL_56;
                      }
LABEL_55:
                      wil::details::in1diag3::Throw_Hr(
                        v30,
                        (void *)0x4B2,
                        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                        (const char *)(unsigned int)v29,
                        (int)v39);
LABEL_56:
                      wil::details::in1diag3::Throw_Hr(
                        v32,
                        (void *)0x4B3,
                        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                        (const char *)(unsigned int)v31,
                        (int)v39);
LABEL_57:
                      v41 = v2;
                      v33 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewUniversalPropertyChangedEventArgs *, void **))(*(_QWORD *)a2 + 56LL))(
                              a2,
                              &v41);
                      if ( v33 < 0 )
                        wil::details::in1diag3::Throw_Hr(
                          retaddr,
                          (void *)0x493,
                          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                          (const char *)(unsigned int)v33,
                          (int)v39);
                      wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::Foundation::IReference<enum Windows::UI::Core::AppViewBackButtonVisibility>>(
                        &v41,
                        &v43);
                      v34 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v43 + 48LL))(v43, &v53);
                      if ( v34 < 0 )
                        wil::details::in1diag3::Throw_Hr(
                          retaddr,
                          (void *)0x498,
                          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                          (const char *)(unsigned int)v34,
                          (int)v39);
                      v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 176LL))(v6, v53);
                      if ( v35 < 0 )
                        wil::details::in1diag3::Throw_Hr(
                          retaddr,
                          (void *)0x499,
                          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                          (const char *)(unsigned int)v35,
                          (int)v39);
                      v40 = v2;
                      v36 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForPropertyChanged,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,unsigned short const (&)[12]>(&v40);
                      if ( v36 < 0 )
                        wil::details::in1diag3::Throw_Hr(
                          retaddr,
                          (void *)0x49C,
                          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                          (const char *)(unsigned int)v36,
                          (int)v39);
                      v39 = v2;
                      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
                      v37 = AgileGitPtr::CopyLocal(
                              (std::_Ref_count_base *)((char *)v48[0] + 24),
                              &GUID_485d880d_3bd2_519f_b754_8b2e73798d3e,
                              &v39);
                      if ( v37 < 0 )
                        wil::details::in1diag3::Throw_Hr(
                          retaddr,
                          (void *)0x49F,
                          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                          (const char *)(unsigned int)v37,
                          (int)v39);
                      v38 = (*(__int64 (__fastcall **)(void *, char *, void *))(*(_QWORD *)v39 + 24LL))(v39, v42, v40);
                      if ( v38 < 0 )
                        wil::details::in1diag3::Throw_Hr(
                          retaddr,
                          (void *)0x4A0,
                          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                          (const char *)(unsigned int)v38,
                          (int)v39);
                      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
                      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v40);
                      if ( v43 )
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
                      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v41);
                      goto LABEL_44;
                    }
LABEL_54:
                    wil::details::in1diag3::Throw_Hr(
                      v28,
                      (void *)0x4AF,
                      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                      (const char *)(unsigned int)v27,
                      (int)v39);
                    goto LABEL_55;
                  }
LABEL_53:
                  wil::details::in1diag3::Throw_Hr(
                    v26,
                    (void *)0x4AC,
                    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                    (const char *)(unsigned int)v25,
                    (int)v39);
                  goto LABEL_54;
                }
              }
              wil::details::in1diag3::Throw_Hr(
                v24,
                (void *)0x4AB,
                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                (const char *)(unsigned int)v23,
                (int)v39);
              goto LABEL_53;
            }
LABEL_50:
            std::_Ref_count_base::_Decref(v21);
            goto LABEL_16;
          }
LABEL_49:
          wil::details::in1diag3::Throw_Hr(
            v15,
            (void *)0x47B,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v14,
            (int)v39);
          goto LABEL_50;
        }
LABEL_48:
        wil::details::in1diag3::Throw_Hr(
          v13,
          (void *)0x478,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v12,
          (int)v39);
        goto LABEL_49;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0x475,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v10,
      (int)v39);
    goto LABEL_48;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4BD,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v8);
  }
  return result;
}
