/*
 * XREFs of _lambda_585f166517ad6215030a8574fdaaae07_::operator() @ 0x180065024
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_585f166517ad6215030a8574fdaaae07___::Run @ 0x180065000 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_585f166517ad6215030a8574fdaaae07___--.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180018B50 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@V?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@V12@AEBW4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAV?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@AEBW4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180079AFC (--$MakeAndInitialize@V-$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Inter.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIAppViewBehaviorStatics@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAppViewBehaviorStatics@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800A8448 (--$query@UIAppViewBehaviorStatics@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_585f166517ad6215030a8574fdaaae07_::operator()(unsigned int **a1)
{
  unsigned int *v1; // rbx
  __int64 v2; // r14
  __int64 (__fastcall *v3)(__int64, _QWORD, _QWORD, __int64 *); // r15
  _DWORD *v5; // rdi
  int *v6; // rax
  int v7; // r12d
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  int v12; // eax
  const char *v13; // r9
  const struct _TlgProvider_t *v14; // rcx
  const struct _TlgProvider_t *v16; // rcx
  int v17; // eax
  __int64 *v18; // rcx
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  __int64 *v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  wil::details::in1diag3 *v26; // rcx
  LPVOID v27; // rcx
  __int64 *v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rax
  int v32; // eax
  unsigned int v33; // eax
  int v34; // eax
  __int64 (__fastcall *v35)(unsigned int *, _QWORD, __int64 *); // r14
  __int64 v36; // rcx
  int v37; // eax
  UINT32 cData; // [rsp+20h] [rbp-C8h]
  WINBOOL fPending; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int *v40; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+40h] [rbp-A8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-A0h] BYREF
  __int64 *v43; // [rsp+50h] [rbp-98h] BYREF
  __int64 v44; // [rsp+58h] [rbp-90h]
  __int64 v45; // [rsp+60h] [rbp-88h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-78h] BYREF
  __int64 **v47; // [rsp+90h] [rbp-58h]
  __int64 v48; // [rsp+98h] [rbp-50h]
  __int64 *v49; // [rsp+A0h] [rbp-48h]
  __int64 v50; // [rsp+A8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v45 = -2LL;
  v5 = (_DWORD *)**a1;
  try
  {
    wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IAppViewBehaviorStatics>();
    v6 = (int *)a1[2];
    v7 = *v6;
    v41 = 0LL;
    if ( !*v6 )
    {
LABEL_39:
      (*(void (__fastcall **)(_QWORD, LPVOID *, _QWORD))(**((_QWORD **)a1[1] + 35) + 184LL))(
        *((_QWORD *)a1[1] + 35),
        &Context,
        (unsigned int)v5);
      fPending = 0;
      v27 = Context;
      if ( !Context )
      {
        v43 = 0LL;
        v28 = (__int64 *)*((_QWORD *)a1[1] + 6);
        v29 = *v28;
        v43 = 0LL;
        v30 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 **))(v29 + 80))(v28, (unsigned int)v5, &v43);
        if ( v30 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xAB,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
            (const char *)(unsigned int)v30,
            cData);
LABEL_45:
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v43);
          v33 = fPending;
LABEL_50:
          if ( v33 )
          {
            v1 = (unsigned int *)*((_QWORD *)a1[1] + 23);
            v35 = *(__int64 (__fastcall **)(unsigned int *, _QWORD, __int64 *))(*(_QWORD *)v1 + 72LL);
            v36 = v41;
            v41 = 0LL;
            if ( v36 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
              v33 = fPending;
            }
            v37 = v35(v1, v33, &v41);
            if ( v37 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0xBD,
                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
                (const char *)(unsigned int)v37,
                cData);
          }
          wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>((__int64 *)&Context);
LABEL_7:
          if ( v7 == 3
            || (v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v44 + 56LL))(
                        v44,
                        (unsigned int)v5,
                        0LL),
                v12 >= 0) )
          {
            v1 = a1[2];
            v5 = *a1;
            Context = 0LL;
            if ( !InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
              || !fPending )
            {
              goto LABEL_11;
            }
          }
          else
          {
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xEA,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
              (const char *)(unsigned int)v12,
              cData);
          }
          Context = qword_1805C2318;
          qword_1805C2318[0] = &ShellScreenClippingLogging::`vftable';
          qword_1805C2330 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2318, qword_1805C2330);
          InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_1805C2318);
LABEL_11:
          v14 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
          if ( *(_DWORD *)v14 > 5u && TlgKeywordOn(v14, 0x200000000000uLL) )
          {
            LODWORD(v43) = *v5;
            v47 = &v43;
            v48 = 4LL;
            LODWORD(v40) = *v1;
            v49 = (__int64 *)&v40;
            v50 = 4LL;
            TlgWrite(v16, &unk_1804F7CC6, 0LL, 0LL, 4u, &pData);
          }
          if ( v41 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
          if ( v44 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
          return 0LL;
        }
        v40 = 0LL;
        v31 = *v43;
        v40 = 0LL;
        v32 = (*(__int64 (__fastcall **)(__int64 *, unsigned int **))(v31 + 72))(v43, &v40);
        if ( v32 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xAE,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
            (const char *)(unsigned int)v32,
            cData);
LABEL_44:
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v40);
          goto LABEL_45;
        }
        if ( !v40 )
          goto LABEL_44;
        v34 = (*(__int64 (__fastcall **)(unsigned int *, WINBOOL *))(*(_QWORD *)v40 + 48LL))(v40, &fPending);
        if ( v34 >= 0 )
          goto LABEL_44;
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB1,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
          (const char *)(unsigned int)v34,
          cData);
      }
      v33 = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)v27 + 256LL))(v27);
      fPending = v33;
      goto LABEL_50;
    }
    if ( *v6 > 0 )
    {
      if ( *v6 <= 2 )
      {
        v23 = (__int64 *)*((_QWORD *)a1[1] + 6);
        v24 = *v23;
        v41 = 0LL;
        v25 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64 *))(v24 + 48))(
                v23,
                (unsigned int)v5,
                0LL,
                &v41);
        v26 = retaddr;
        if ( v25 >= 0 )
          goto LABEL_7;
LABEL_38:
        wil::details::in1diag3::Throw_Hr(
          v26,
          (void *)0xC5,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
          (const char *)(unsigned int)v25,
          cData);
        goto LABEL_39;
      }
      switch ( *v6 )
      {
        case 4:
          v8 = (__int64 *)*((_QWORD *)a1[1] + 6);
          v9 = *v8;
          v41 = 0LL;
          v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, __int64 *))(v9 + 48))(
                  v8,
                  (unsigned int)v5,
                  1LL,
                  &v41);
          v11 = retaddr;
          if ( v10 >= 0 )
            goto LABEL_7;
          goto LABEL_32;
        case 3:
          fPending = 1;
          v1 = 0LL;
          Context = 0LL;
          v40 = 0LL;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
          v17 = Microsoft::WRL::Details::MakeAndInitialize<details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>,details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>,enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState const &>(
                  &v40,
                  &fPending);
          v2 = (unsigned int)v17;
          v18 = (__int64 *)&v40;
          if ( v17 >= 0 )
          {
            v1 = v40;
            v40 = 0LL;
            Context = v1;
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
            v2 = 0LL;
            goto LABEL_22;
          }
LABEL_33:
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v18);
LABEL_22:
          if ( (int)v2 < 0 )
          {
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xCC,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
              (const char *)(unsigned int)v2,
              cData);
          }
          else
          {
            v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v44 + 56LL))(
                    v44,
                    (unsigned int)v5,
                    v1);
            v20 = retaddr;
            if ( v19 >= 0 )
            {
              v2 = *((_QWORD *)a1[1] + 6);
              v3 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v2 + 48LL);
              v21 = v41;
              v41 = 0LL;
              if ( !v21 )
              {
LABEL_25:
                v22 = v3(v2, (unsigned int)v5, 0LL, &v41);
                if ( v22 >= 0 )
                {
                  if ( v1 )
                    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v1 + 16LL))(v1);
                  goto LABEL_7;
                }
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0xD0,
                  (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
                  (const char *)(unsigned int)v22,
                  cData);
                goto LABEL_38;
              }
LABEL_36:
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
              goto LABEL_25;
            }
          }
          wil::details::in1diag3::Throw_Hr(
            v20,
            (void *)0xCD,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
            (const char *)(unsigned int)v19,
            cData);
          goto LABEL_36;
        case 5:
          goto LABEL_7;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE2,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)0x8000FFFFLL,
      cData);
LABEL_32:
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0xD5,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)v10,
      cData);
    goto LABEL_33;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xEF,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
                           v13);
  }
  return 0LL;
}
