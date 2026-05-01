/*
 * XREFs of ?OnTitleBarsCreated@TitleBarController@@AEAAJXZ @ 0x18026859C
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::_)(IInspectable___IInspectable__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_IInspectable____Microsoft::WRL::FtmBase___lambda_0cfb907d4b1fa4e1c73686f042101db7___1_IInspectable___IInspectable___::Invoke @ 0x180268320 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEven_ea_180268320.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x180269BE0 (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall TitleBarController::OnTitleBarsCreated(TitleBarController *this)
{
  struct IWeakReference *v1; // rcx
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = (struct IWeakReference *)*((_QWORD *)this + 25);
  if ( v1 )
  {
    wil::details::weak_query_policy::query(v1, &GUID_0cf8429a_8037_4ebd_83fd_6471d78ca4eb, &v6);
    v1 = (struct IWeakReference *)v6;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v1 && (v2 = ((__int64 (__fastcall *)(struct IWeakReference *))v1->lpVtbl[1].QueryInterface)(v1), v3 = v2, v2 < 0) )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x246,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
      (const char *)(unsigned int)v2);
  else
    v3 = 0;
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v6);
  return v3;
}
