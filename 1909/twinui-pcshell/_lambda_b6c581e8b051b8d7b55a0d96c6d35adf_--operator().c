/*
 * XREFs of _lambda_b6c581e8b051b8d7b55a0d96c6d35adf_::operator() @ 0x1802FFCF0
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_cb78687b7bdc42262abcee4de17fcb7b___::Invoke @ 0x180302B40 (CAsyncCallbackWithLambda__lambda_cb78687b7bdc42262abcee4de17fcb7b___--Invoke.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIAllUpViewHost@@@?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAllUpViewHost@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800A86E4 (--$query@UIAllUpViewHost@@@-$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802D2F90 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_b6c581e8b051b8d7b55a0d96c6d35adf_::operator()(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 *v10; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v11; // [rsp+48h] [rbp+10h]

  v2 = Platform::Details::ResolveWeakReference(&_uuidof__AVXamlAllUpViewController__, a1);
  v10 = (__int64 *)v2;
  v3 = (_QWORD *)__abi_winrt_ptr_ctor(v2);
  v11 = v3;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( v3 )
  {
    wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::query<IAllUpViewHost>(v3 + 7, (__int64)&v10);
    v4 = *v10;
    if ( *(_BYTE *)(a1 + 8) )
    {
      v5 = (*(__int64 (__fastcall **)(__int64 *))(v4 + 64))(v10);
      v6 = retaddr;
      if ( v5 < 0 )
      {
        v7 = 195LL;
LABEL_9:
        wil::details::in1diag3::_Log_Hr(
          v6,
          (void *)v7,
          (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
          (const char *)(unsigned int)v5);
      }
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(__int64 *))(v4 + 40))(v10);
      v6 = retaddr;
      if ( v5 < 0 )
      {
        v7 = 199LL;
        goto LABEL_9;
      }
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v10);
  }
  if ( v3 )
    (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
  return 0LL;
}
