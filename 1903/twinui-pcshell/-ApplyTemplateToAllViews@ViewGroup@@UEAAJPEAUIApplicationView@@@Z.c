/*
 * XREFs of ?ApplyTemplateToAllViews@ViewGroup@@UEAAJPEAUIApplicationView@@@Z @ 0x18025EEF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18000B7EC (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIViewGroupInternal@@UIViewGroup@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITitleBarRecovery@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180249A80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$Ch_ea_180249A80.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_bdc3f85b4bc9e929848d1767baf75ca3___ @ 0x18025E234 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_bdc3f85b4bc9e929848d1767baf75ca3___.c)
 */

__int64 __fastcall ViewGroup::ApplyTemplateToAllViews(ViewGroup *this, struct IApplicationView *a2)
{
  __int64 *v3; // r8
  char *v4; // rdx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  const char *v11; // r9
  char *v13; // [rsp+28h] [rbp-20h] BYREF
  volatile signed __int64 *v14; // [rsp+30h] [rbp-18h]
  __int64 v15; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 23) > 1uLL )
  {
    v3 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
           &v17,
           (__int64)a2);
    v4 = (char *)this - 8;
    if ( this != (ViewGroup *)8 )
    {
      v5 = *((_QWORD *)v4 + 9);
      while ( v5 >= 0 )
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 9, v5 + 1, v5);
        if ( v6 == v5 )
          goto LABEL_8;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v5 + 16));
    }
LABEL_8:
    v13 = (char *)this - 8;
    v14 = (volatile signed __int64 *)((char *)this - 8);
    v7 = *v3;
    *v3 = 0LL;
    v15 = v7;
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 28);
    v10 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_bdc3f85b4bc9e929848d1767baf75ca3___(
            v9,
            v8,
            (__int64)this + 224,
            &v13);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v15);
    if ( v14 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IViewGroupInternal,IViewGroup,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITitleBarRecovery,Microsoft::WRL::FtmBase>::Release(v14);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v17);
    if ( v10 < 0 )
    {
      try
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          651LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
          (const char *)(unsigned int)v10);
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x28F,
                               (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
                               v11);
      }
    }
  }
  return 0LL;
}
