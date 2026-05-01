/*
 * XREFs of ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x18001F15C
 * Callers:
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18001ED38 (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ @ 0x18001F0B8 (-PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ.c)
 *     ?AddSessionIdleTaskCompletion@WindowWrapperBase@@UEAAXXZ @ 0x18024FE90 (-AddSessionIdleTaskCompletion@WindowWrapperBase@@UEAAXXZ.c)
 *     ?RemoveSessionIdleTaskCompletion@WindowWrapperBase@@UEAAXXZ @ 0x180250830 (-RemoveSessionIdleTaskCompletion@WindowWrapperBase@@UEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180065968 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18006FCC0 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18023FBA8 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0Is_ea_18023FBA8.c)
 *     ??1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1802401D8 (--1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ??1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180240204 (--1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ?StartActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z @ 0x1802446EC (-StartActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z.c)
 *     ?StartActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z @ 0x180244838 (-StartActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_17e5788b5f1f3671ca96ac0fccb032fc___ @ 0x18024E950 (Windows--Internal--ComTaskPool--QueueTask__lambda_17e5788b5f1f3671ca96ac0fccb032fc___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_6e3ab6272f90947ba1cd229626024096___ @ 0x18024E9D8 (Windows--Internal--ComTaskPool--QueueTask__lambda_6e3ab6272f90947ba1cd229626024096___.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall WindowWrapperBase::ReconcileSessionIdleTaskCompletion(WindowWrapperBase *this)
{
  int v2; // eax
  const char *v3; // r9
  HWND v4; // rsi
  bool v5; // cl
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  DWORD dwProcessId; // [rsp+20h] [rbp-2D8h] BYREF
  __int64 v16[3]; // [rsp+28h] [rbp-2D0h] BYREF
  WindowWrapperBase *v17; // [rsp+40h] [rbp-2B8h] BYREF
  __int64 v18; // [rsp+48h] [rbp-2B0h] BYREF
  void **v19; // [rsp+50h] [rbp-2A8h] BYREF
  DWORD v20; // [rsp+58h] [rbp-2A0h]
  _QWORD v21[40]; // [rsp+60h] [rbp-298h] BYREF
  _QWORD v22[40]; // [rsp+1A0h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2F8h] [rbp+0h]

  v16[1] = -2LL;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 200LL))(*((_QWORD *)this + 35));
  try
  {
    v2 = (*(__int64 (__fastcall **)(WindowWrapperBase *))(*(_QWORD *)this + 128LL))(this);
    v4 = (HWND)*((int *)this + 74);
    v5 = (unsigned int)(v2 - 3) <= 2;
    v6 = *((_DWORD *)this + 45);
    if ( (v6 & 1) != 0 && *((_DWORD *)this + 74) && v5 )
    {
      if ( (v6 & 2) == 0 )
      {
        v7 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 272LL))((char *)this + 16);
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v22);
        v22[0] = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
        ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::StartActivity(
          (ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)v22,
          v7);
        if ( !GetWindowThreadProcessId(v4, &dwProcessId) )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x9F1,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
            (const char *)0x80070578LL,
            dwProcessId);
        wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
          v16,
          this);
        v17 = this;
        wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
          &v18,
          v16[0]);
        v19 = (void **)v4;
        v20 = dwProcessId;
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v21);
        v21[0] = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
        v10 = Windows::Internal::ComTaskPool::QueueTask__lambda_6e3ab6272f90947ba1cd229626024096___(
                v9,
                v8,
                *((unsigned int *)this + 62),
                &v17);
        if ( v10 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xA07,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
            (const char *)(unsigned int)v10,
            dwProcessId);
        ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::~AddSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)v21);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v18);
        *((_DWORD *)this + 45) |= 2u;
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v16);
        ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::~AddSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)v22);
      }
    }
    else if ( (v6 & 2) != 0 )
    {
      v11 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 272LL))((char *)this + 16);
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v22);
      v22[0] = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
      ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::StartActivity(
        (ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)v22,
        v11);
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        v16,
        this);
      v17 = this;
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        &v18,
        v16[0]);
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)&v19);
      v19 = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
      v14 = Windows::Internal::ComTaskPool::QueueTask__lambda_17e5788b5f1f3671ca96ac0fccb032fc___(
              v13,
              v12,
              *((unsigned int *)this + 62),
              &v17);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xA1E,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v14,
          dwProcessId);
      ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::~RemoveSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)&v19);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v18);
      *((_DWORD *)this + 45) &= ~2u;
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v16);
      ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::~RemoveSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)v22);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xA23,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      v3);
  }
}
