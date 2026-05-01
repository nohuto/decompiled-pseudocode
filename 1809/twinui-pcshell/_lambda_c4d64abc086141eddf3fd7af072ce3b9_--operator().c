/*
 * XREFs of _lambda_c4d64abc086141eddf3fd7af072ce3b9_::operator() @ 0x180090CDC
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c4d64abc086141eddf3fd7af072ce3b9___::Run @ 0x180091380 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_c4d64abc086141eddf3fd7af072ce3b9___--.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_c4d64abc086141eddf3fd7af072ce3b9_::operator()(
        _QWORD **a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rsi
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rcx
  int v10; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v5 = (_QWORD *)(*a1)[45];
  v6 = (_QWORD *)(*a1)[46];
  try
  {
    while ( v5 != v6 )
    {
      if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 280LL))(*v5) == *a1[1] )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 272LL))(*v5);
        v13 = 0LL;
        v8 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(*a1)[39] + 40LL))((*a1)[39], &v14);
        v9 = v13;
        v13 = 0LL;
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v8 + 56LL))(v8, v7, &v13);
        if ( v10 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            1789LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v10);
          JUMPOUT(0x180090DF5LL);
        }
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v14);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v13);
        break;
      }
      ++v5;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x702,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           a4);
  }
  return result;
}
