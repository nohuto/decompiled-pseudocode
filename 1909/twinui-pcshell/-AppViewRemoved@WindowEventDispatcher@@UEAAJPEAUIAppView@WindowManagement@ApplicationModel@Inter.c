/*
 * XREFs of ?AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180018A40
 * Callers:
 *     ?PerformDelayedInitialization@WindowEventDispatcher@@UEAAJXZ @ 0x18029DF70 (-PerformDelayedInitialization@WindowEventDispatcher@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180018B50 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UpdateAudioState@WindowEventDispatcher@@AEAAXPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@W4HOSTED_APP_CHANGED@@@Z @ 0x180019B88 (-UpdateAudioState@WindowEventDispatcher@@AEAAXPEAUIAppView@WindowManagement@ApplicationModel@Int.c)
 *     ??$WindowEventDispatcher_OnAppViewRemoved@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z @ 0x180019CF8 (--$WindowEventDispatcher_OnAppViewRemoved@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z.c)
 *     ?RemoveCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UAppViewId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180019D7C (-RemoveCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_except.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180021994 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003072C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180085AAC (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800A7728 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$WindowEventDispatcher_OnAppViewRemoved@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QEAI@Z @ 0x180297728 (--$WindowEventDispatcher_OnAppViewRemoved@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QE.c)
 *     ?RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x18029E6E0 (-RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall WindowEventDispatcher::AppViewRemoved(
        WindowEventDispatcher *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *a2)
{
  RTL_SRWLOCK *v2; // rbx
  struct IUnknown *v3; // rdi
  char *v4; // r15
  int v7; // eax
  struct IUnknown **v8; // rax
  const char *v9; // r9
  __int64 result; // rax
  __int64 v11; // rax
  RTL_SRWLOCK *v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-58h] BYREF
  char *v14; // [rsp+28h] [rbp-50h] BYREF
  std::_Ref_count_base *v15; // [rsp+30h] [rbp-48h]
  __int64 v16; // [rsp+38h] [rbp-40h]
  std::_Ref_count_base *v17[2]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v19; // [rsp+88h] [rbp+10h] BYREF
  RTL_SRWLOCK *v20; // [rsp+90h] [rbp+18h] BYREF
  struct IUnknown *v21; // [rsp+98h] [rbp+20h] BYREF

  v16 = -2LL;
  try
  {
    v7 = (*(__int64 (**)(void))(*(_QWORD *)a2 + 48LL))();
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x238,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v7,
        v13);
    }
    else
    {
      v21 = 0LL;
      v2 = (RTL_SRWLOCK *)((char *)this + 440);
      AcquireSRWLockExclusive((PSRWLOCK)this + 55);
      v14 = (char *)this + 440;
      v4 = (char *)this - 16;
      v8 = (struct IUnknown **)WindowEventDispatcher::RemoveCachedView((char *)this - 16, &v20, v19);
      v3 = *v8;
      *v8 = 0LL;
      v21 = v3;
      wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v20);
      if ( !(unsigned int)SHIsSameObject(v3, *((struct IUnknown **)this + 53)) )
      {
LABEL_4:
        if ( v2 )
          ReleaseSRWLockExclusive(v2);
        if ( v3 )
        {
          *(_OWORD *)v17 = 0LL;
          AcquireSRWLockShared(v2);
          v20 = v2;
          v11 = ((__int64 (__fastcall *)(struct IUnknown *, char **))v3->lpVtbl[11].QueryInterface)(v3, &v14);
          std::shared_ptr<ViewEventRegistration>::operator=(v17, v11);
          if ( v15 )
            std::_Ref_count_base::_Decref(v15);
          if ( v2 )
            ReleaseSRWLockShared(v2);
          wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
            &v21,
            &v13);
          v12 = (RTL_SRWLOCK *)*((_QWORD *)v17[0] + 3);
          v20 = v12;
          if ( v12 )
            (*((void (__fastcall **)(RTL_SRWLOCK *))v12->Ptr + 1))(v12);
          WindowEventDispatcher::RaiseViewEvent(v4, v13, 4LL, &v20);
          LODWORD(v20) = ((__int64 (__fastcall *)(struct IUnknown *))v3->lpVtbl[12].QueryInterface)(v3);
          v14 = (char *)((__int64 (__fastcall *)(struct IUnknown *))v3->lpVtbl[11].AddRef)(v3);
          ViewManagerInteropTraceLogging::WindowEventDispatcher_OnAppViewRemoved<unsigned short const *,unsigned int>(
            &v14,
            &v20);
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v13);
          if ( v17[1] )
            std::_Ref_count_base::_Decref(v17[1]);
        }
        else
        {
          ViewManagerInteropTraceLogging::WindowEventDispatcher_OnAppViewRemoved<unsigned int &>(&v19);
          WindowEventDispatcher::UpdateAudioState(v4, a2, 3LL);
        }
        wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v21);
        return 0LL;
      }
    }
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((char *)this + 424);
    goto LABEL_4;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x260,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v9);
  }
  return result;
}
