/*
 * XREFs of _lambda_34b17e103c9e53767c239d4fd5bab5ae_::operator() @ 0x18009A988
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_34b17e103c9e53767c239d4fd5bab5ae___::Run @ 0x18009B2E0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_34b17e103c9e53767c239d4fd5bab5ae___--.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18027810C (--$WaitForCompletion@PEAU-$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU-$IAsyncO.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_34b17e103c9e53767c239d4fd5bab5ae_::operator()(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, _QWORD **); // rdi
  _QWORD *v5; // rcx
  int v6; // eax
  __int64 v7; // rbx
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  const char *v10; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = 0LL;
  v1 = *(_QWORD *)(*(_QWORD *)a1 + 296LL);
  try
  {
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 40LL))(v1);
    v3 = *(_QWORD *)v2;
    v4 = *(__int64 (__fastcall **)(__int64, _QWORD **))(**(_QWORD **)v2 + 64LL);
    v5 = v14;
    v14 = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v5 + 16LL))(v5, *v5);
    v6 = v4(v3, &v14);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2116LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v6);
    }
    else
    {
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v13);
      v7 = (__int64)v14;
      v8 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<bool> *>(v14);
      if ( v8 >= 0 )
        v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 64LL))(v7, &v13);
      v9 = retaddr;
      if ( v8 >= 0 )
      {
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v14);
        return 0LL;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v9,
      1587LL,
      (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)v8);
    JUMPOUT(0x18009AA7DLL);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x849,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v10);
  }
  return result;
}
