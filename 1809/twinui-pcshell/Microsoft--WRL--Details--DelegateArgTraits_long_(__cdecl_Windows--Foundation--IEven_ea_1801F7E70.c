/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable_____ptr64_::_)(IInspectable_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_IInspectable_____ptr64__Microsoft::WRL::FtmBase___lambda_f8512defb81b80cdd5799a3f81e33f8d___1_IInspectable_____ptr64_IInspectable_____ptr64_::Invoke @ 0x1801F7E70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1800ED98C (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     ?OnTitleBarsLost@TitleBarController@@AEAAJXZ @ 0x1801F80E8 (-OnTitleBarsLost@TitleBarController@@AEAAJXZ.c)
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1801F982C (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_IInspectable_____ptr64_::___IInspectable_____ptr64_IInspectable_____ptr64____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_IInspectable_____ptr64__Microsoft::WRL::FtmBase___lambda_f8512defb81b80cdd5799a3f81e33f8d___1_IInspectable_____ptr64_IInspectable_____ptr64_::Invoke(
        __int64 a1,
        __int64 a2,
        void *a3)
{
  struct IWeakReference *v4; // rcx
  void *v5; // rax
  int v6; // eax
  signed int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = a3;
  v4 = *(struct IWeakReference **)(a1 + 72);
  if ( v4 )
  {
    wil::details::weak_query_policy::query(v4, &GUID_e3138dbc_72e8_40ac_a99a_52b78e942e7c, &v10);
    v5 = v10;
  }
  else
  {
    v5 = 0LL;
    v10 = 0LL;
  }
  if ( v5 && (v6 = TitleBarController::OnTitleBarsLost(*(TitleBarController **)(a1 + 64)), v7 = v6, v6 < 0) )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C1,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
      (const char *)(unsigned int)v6);
  else
    v7 = 0;
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v10);
  if ( v7 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v7);
  return (unsigned int)v7;
}
