/*
 * XREFs of ?WindowRemoved@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180018580
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180018B50 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x180018B70 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowEventDispatcher::WindowRemoved(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *a2)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v4; // rax
  __int64 (*v5)(void); // rax
  int v6; // eax
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rcx
  const struct _TlgProvider_t *v10; // rcx
  const char *v11; // r9
  __int64 result; // rax
  UINT32 cData; // [rsp+20h] [rbp-78h]
  WINBOOL fPending; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-64h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-60h] BYREF
  __int64 v17; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v18[2]; // [rsp+48h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-40h] BYREF
  unsigned int *v20; // [rsp+78h] [rbp-20h]
  int v21; // [rsp+80h] [rbp-18h]
  int v22; // [rsp+84h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v18[1] = -2LL;
  v4 = *(_QWORD *)a2;
  v17 = 0LL;
  v5 = *(__int64 (**)(void))(v4 + 112);
  try
  {
    v6 = v5();
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x662,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v6,
        cData);
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v17 + 48LL))(v17, &v15);
      v8 = retaddr;
      if ( v7 >= 0 )
      {
        v2 = this + 55;
        AcquireSRWLockExclusive(this + 55);
        Context = &this[55];
        WindowEventDispatcher::GetCachedView(&this[-2], v18, v15);
        v9 = v18[0];
        if ( !v18[0] )
          goto LABEL_5;
        goto LABEL_15;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x665,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v7,
      cData);
LABEL_15:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 224LL))(v9);
LABEL_5:
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_1805C2318;
      qword_1805C2318[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805C2330 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2318, qword_1805C2330);
      InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_1805C2318);
    }
    v10 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v10 > 5u )
    {
      v20 = &v15;
      v21 = 4;
      v22 = 0;
      TlgWrite(v10, &unk_1804F7243, 0LL, 0LL, 3u, &pData);
    }
    wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(v18);
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v17);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x672,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v11);
  }
  return result;
}
