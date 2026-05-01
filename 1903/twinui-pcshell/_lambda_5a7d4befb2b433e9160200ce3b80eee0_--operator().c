/*
 * XREFs of _lambda_5a7d4befb2b433e9160200ce3b80eee0_::operator() @ 0x1802ADCD4
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_5a7d4befb2b433e9160200ce3b80eee0___::Run @ 0x1802AF480 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_5a7d4befb2b433e9160200ce3b80eee0___--.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_5a7d4befb2b433e9160200ce3b80eee0_::operator()(_DWORD **a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rcx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  const char *v12; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = 0LL;
  v2 = *((_QWORD *)*a1 + 10);
  try
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
    v4 = v15;
    v15 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 48LL))(v3, &v15);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        56LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v5);
    v6 = *a1[1];
    if ( !v6 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*a1 + 8) + 64LL))(*((_QWORD *)*a1 + 8), 0LL);
      if ( v7 >= 0 )
      {
LABEL_16:
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 56LL))(v15);
        if ( v11 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            74LL,
            (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
            (const char *)(unsigned int)v11);
        (*a1)[23] = *a1[1];
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v15);
        return 0LL;
      }
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        60LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v7);
    }
    if ( (v6 & 1) == 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        64LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)0x80070057LL);
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)*a1 + 8) + 64LL))(*((_QWORD *)*a1 + 8));
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        66LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v8);
    if ( (*(_BYTE *)a1[1] & 2) != 0 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)*a1 + 10) + 24LL))(*((_QWORD *)*a1 + 10));
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 96LL))(v9, *((_QWORD *)*a1 + 8));
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          70LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v10);
    }
    goto LABEL_16;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4E,
                           (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
                           v12);
  }
  return result;
}
