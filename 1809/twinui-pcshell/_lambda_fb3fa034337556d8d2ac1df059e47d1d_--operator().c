/*
 * XREFs of _lambda_fb3fa034337556d8d2ac1df059e47d1d_::operator() @ 0x18005CC04
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_fb3fa034337556d8d2ac1df059e47d1d___::Run @ 0x18005CBE0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_fb3fa034337556d8d2ac1df059e47d1d___--.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019F60 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@V?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@V12@AEBW4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAV?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@AEBW4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180247A24 (--$MakeAndInitialize@V-$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Inter.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_fb3fa034337556d8d2ac1df059e47d1d_::operator()(unsigned int **a1)
{
  __int64 v1; // rbx
  int v2; // r15d
  int *v4; // rdi
  __int64 (__fastcall ***v5)(_QWORD); // rcx
  int v6; // eax
  unsigned int *v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  int v11; // eax
  const char *v12; // r9
  __int64 v13; // r10
  __int64 v15; // rcx
  int v16; // eax
  int v17; // r14d
  int v18; // eax
  __int64 v19; // r14
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  unsigned int v26; // eax
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  ULONG UserDataCount; // [rsp+20h] [rbp-E8h]
  __int64 v31; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v32; // [rsp+38h] [rbp-D0h] BYREF
  int v33; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v34; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+48h] [rbp-C0h] BYREF
  int v36; // [rsp+50h] [rbp-B8h] BYREF
  WINBOOL fPending; // [rsp+54h] [rbp-B4h] BYREF
  int v38; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID Context; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+70h] [rbp-98h]
  __int64 v42; // [rsp+78h] [rbp-90h] BYREF
  __int64 v43; // [rsp+80h] [rbp-88h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-80h] BYREF
  __int64 v45; // [rsp+98h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-68h] BYREF
  void *v47; // [rsp+B0h] [rbp-58h]
  int v48; // [rsp+B8h] [rbp-50h]
  int v49; // [rsp+BCh] [rbp-4Ch]
  int *v50; // [rsp+C0h] [rbp-48h]
  __int64 v51; // [rsp+C8h] [rbp-40h]
  int *v52; // [rsp+D0h] [rbp-38h]
  __int64 v53; // [rsp+D8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  v45 = -2LL;
  v4 = (int *)**a1;
  v5 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)a1[1] + 6);
  try
  {
    v6 = (**v5)(v5);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x16A8,
        (unsigned int)"internal\\sdk\\inc\\wil\\ResultMacros.h",
        (const char *)(unsigned int)v6,
        UserDataCount);
LABEL_24:
      if ( *v7 == 3 )
      {
LABEL_28:
        v36 = 1;
        v1 = 0LL;
        v43 = 0LL;
        v34 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
        v17 = Microsoft::WRL::Details::MakeAndInitialize<details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>,details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>,enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState const &>(
                &v34,
                &v36);
        if ( v17 >= 0 )
        {
          v1 = v34;
          v34 = 0LL;
          v43 = v1;
          v17 = 0;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
        if ( v17 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xB2,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
            (const char *)(unsigned int)v17,
            UserDataCount);
        v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v41 + 56LL))(v41, (unsigned int)v4, v1);
        if ( v18 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xB3,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
            (const char *)(unsigned int)v18,
            UserDataCount);
        v19 = *((_QWORD *)a1[1] + 6);
        v20 = v31;
        v31 = 0LL;
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v19 + 48LL))(
                v19,
                (unsigned int)v4,
                0LL,
                &v31);
        if ( v21 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xB6,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
            (const char *)(unsigned int)v21,
            UserDataCount);
        if ( v1 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
        goto LABEL_8;
      }
      if ( *v7 == 5 )
        goto LABEL_8;
      goto LABEL_26;
    }
    v7 = a1[2];
    v2 = *v7;
    v31 = 0LL;
    if ( *v7 )
    {
      if ( (int)*v7 <= 0 )
      {
LABEL_26:
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xC8,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
          (const char *)0x8000FFFFLL,
          UserDataCount);
LABEL_27:
        wil::details::in1diag3::Throw_Hr(
          v10,
          (void *)0xBB,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
          (const char *)(unsigned int)v9,
          UserDataCount);
        goto LABEL_28;
      }
      if ( (int)*v7 > 2 )
      {
        if ( *v7 == 4 )
        {
          v8 = *((_QWORD *)a1[1] + 6);
          v31 = 0LL;
          v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v8 + 48LL))(
                 v8,
                 (unsigned int)v4,
                 1LL,
                 &v31);
          v10 = retaddr;
          if ( v9 >= 0 )
            goto LABEL_8;
          goto LABEL_27;
        }
        goto LABEL_24;
      }
      v15 = *((_QWORD *)a1[1] + 6);
      v31 = 0LL;
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v15 + 48LL))(
              v15,
              (unsigned int)v4,
              0LL,
              &v31);
      if ( v16 >= 0 )
        goto LABEL_8;
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xAB,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v16,
        UserDataCount);
    }
    (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(**((_QWORD **)a1[1] + 36) + 176LL))(
      *((_QWORD *)a1[1] + 36),
      &v42,
      (unsigned int)v4);
    v32 = 0;
    v22 = v42;
    if ( !v42 )
    {
      v35 = 0LL;
      v23 = *((_QWORD *)a1[1] + 6);
      v35 = 0LL;
      v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v23 + 80LL))(v23, (unsigned int)v4, &v35);
      if ( v24 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x91,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
          (const char *)(unsigned int)v24,
          UserDataCount);
LABEL_46:
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v35);
        v26 = v32;
LABEL_50:
        if ( v26 )
        {
          v1 = *((_QWORD *)a1[1] + 24);
          v28 = v31;
          v31 = 0LL;
          if ( v28 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
            v26 = v32;
          }
          v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v1 + 72LL))(v1, v26, &v31);
          if ( v29 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xA3,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
              (const char *)(unsigned int)v29,
              UserDataCount);
        }
        wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v42);
LABEL_8:
        if ( v2 == 3
          || (v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v41 + 56LL))(
                      v41,
                      (unsigned int)v4,
                      0LL),
              v11 >= 0) )
        {
          v1 = (__int64)a1[2];
          v4 = (int *)*a1;
          Context = 0LL;
          if ( !InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
            || !fPending )
          {
            goto LABEL_12;
          }
        }
        else
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xD0,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
            (const char *)(unsigned int)v11,
            UserDataCount);
        }
        Context = &qword_18050FB08;
        qword_18050FB08 = &ShellScreenClippingLogging::`vftable';
        qword_18050FB20 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050FB08, qword_18050FB20);
        InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &qword_18050FB08);
LABEL_12:
        v13 = *((_QWORD *)Context + 1);
        if ( *(_DWORD *)v13 > 5u
          && (*(_QWORD *)(v13 + 16) & 0x200000000000LL) != 0
          && (*(_QWORD *)(v13 + 24) & 0x200000000000LL) == *(_QWORD *)(v13 + 24) )
        {
          v38 = *v4;
          v50 = &v38;
          v51 = 4LL;
          v33 = *(_DWORD *)v1;
          v52 = &v33;
          v53 = 4LL;
          *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18045C8B5 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
          *(_DWORD *)&EventDescriptor.Level = 5;
          EventDescriptor.Keyword = 0x200000000000LL;
          UserData.Ptr = *(_QWORD *)(v13 + 8);
          UserData.Size = *(unsigned __int16 *)UserData.Ptr;
          UserData.Reserved = 2;
          v47 = &unk_18045C8C0;
          v48 = 49;
          v49 = 1;
          EventWriteTransfer(*(_QWORD *)(v13 + 32), &EventDescriptor, 0LL, 0LL, 4u, &UserData);
        }
        if ( v31 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
        if ( v41 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
        return 0LL;
      }
      v39 = 0LL;
      v25 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v35 + 72LL))(v35, &v39);
      if ( v25 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x94,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
          (const char *)(unsigned int)v25,
          UserDataCount);
LABEL_45:
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v39);
        goto LABEL_46;
      }
      v27 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v39 + 48LL))(v39, &v32);
      if ( v27 >= 0 )
        goto LABEL_45;
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x97,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v27,
        UserDataCount);
    }
    v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 240LL))(v22);
    v32 = v26;
    goto LABEL_50;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD5,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
                           v12);
  }
  return 0LL;
}
