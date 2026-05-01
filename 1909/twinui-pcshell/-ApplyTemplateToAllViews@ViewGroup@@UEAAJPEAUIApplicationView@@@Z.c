/*
 * XREFs of ?ApplyTemplateToAllViews@ViewGroup@@UEAAJPEAUIApplicationView@@@Z @ 0x18027E4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180069DE8 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180085AAC (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x180127714 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIViewGroupInternal@@UIViewGroup@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITitleBarRecovery@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180269090 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$Ch_ea_180269090.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_bdc3f85b4bc9e929848d1767baf75ca3___ @ 0x18027D7E4 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_bdc3f85b4bc9e929848d1767baf75ca3___.c)
 */

__int64 __fastcall ViewGroup::ApplyTemplateToAllViews(ViewGroup *this, struct IApplicationView *a2)
{
  volatile int *v3; // rdx
  __int64 *v4; // r11
  char *v5; // r10
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 *v13; // rdx
  const char *v14; // r9
  __int64 v15; // [rsp+0h] [rbp-48h] BYREF
  int v16[2]; // [rsp+20h] [rbp-28h]
  char *v17; // [rsp+28h] [rbp-20h] BYREF
  char *v18; // [rsp+30h] [rbp-18h]
  __int64 v19; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)v16 = -2LL;
  if ( *((_QWORD *)this + 23) > 1uLL )
  {
    v4 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
           &v21,
           (__int64)a2);
    v5 = (char *)this - 8;
    if ( this != (ViewGroup *)8 )
    {
      v6 = *((_QWORD *)v5 + 9);
      while ( v6 >= 0 )
      {
        if ( (_DWORD)v6 != 0x7FFFFFFF )
        {
          v7 = v6;
          v6 = _InterlockedCompareExchange64((volatile signed __int64 *)v5 + 9, v6 + 1, v6);
          if ( v7 != v6 )
            continue;
        }
        goto LABEL_9;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v6 + 16), v3);
    }
LABEL_9:
    v17 = v5;
    v18 = v5;
    v8 = *v4;
    *v4 = 0LL;
    v19 = v8;
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 28);
    v11 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_bdc3f85b4bc9e929848d1767baf75ca3___(
            v10,
            v9,
            (__int64)this + 224,
            &v17);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v19);
    if ( v18 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IViewGroupInternal,IViewGroup,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITitleBarRecovery,Microsoft::WRL::FtmBase>::Release((__int64)v18);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v21);
    if ( v11 < 0 )
    {
      try
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          651LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
          (const char *)(unsigned int)v11);
        __debugbreak();
_ViewGroup__ApplyTemplateToAllViews____1___catch$7:
        *((_DWORD *)v13 + 20) = wil::details::in1diag3::Return_CaughtException(
                                  (wil::details::in1diag3 *)v13[9],
                                  (void *)0x28F,
                                  (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
                                  v14);
        return (unsigned int)v21;
      }
      catch ( ... )
      {
        v13 = &v15;
        goto _ViewGroup__ApplyTemplateToAllViews____1___catch$7;
      }
    }
  }
  return 0LL;
}
