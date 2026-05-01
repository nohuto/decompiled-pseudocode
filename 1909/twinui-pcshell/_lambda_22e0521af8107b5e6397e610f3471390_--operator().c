/*
 * XREFs of _lambda_22e0521af8107b5e6397e610f3471390_::operator() @ 0x1802FF9F0
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_eefbcc1106f688c692b0dd13ba0491ba___::Invoke @ 0x180302BA0 (CAsyncCallbackWithLambda__lambda_eefbcc1106f688c692b0dd13ba0491ba___--Invoke.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$query@UIAllUpViewHostInternal@@@?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAllUpViewHostInternal@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800A8734 (--$query@UIAllUpViewHostInternal@@@-$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802D2F90 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_22e0521af8107b5e6397e610f3471390_::operator()(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+48h] [rbp+10h]

  v1 = Platform::Details::ResolveWeakReference(&_uuidof__AVXamlAllUpViewController__, a1);
  v5 = v1;
  v2 = (_QWORD *)__abi_winrt_ptr_ctor(v1);
  v6 = v2;
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  if ( v2 )
  {
    v3 = (_QWORD *)wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::query<IAllUpViewHostInternal>(
                     v2 + 7,
                     (__int64)&v5);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 40LL))(*v3);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v5);
    (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
  }
  return 0LL;
}
