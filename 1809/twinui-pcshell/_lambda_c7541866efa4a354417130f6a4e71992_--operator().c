/*
 * XREFs of _lambda_c7541866efa4a354417130f6a4e71992_::operator() @ 0x18006E314
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c7541866efa4a354417130f6a4e71992___::Run @ 0x18006E2F0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_c7541866efa4a354417130f6a4e71992___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_c7541866efa4a354417130f6a4e71992_::operator()(_QWORD **a1)
{
  __int64 (__fastcall ***v2)(_QWORD); // rcx
  int v3; // eax
  int v4; // eax
  const char *v5; // r9
  wil::details::in1diag3 *v6; // rcx
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h]

  v8 = -2;
  v2 = (__int64 (__fastcall ***)(_QWORD))(*a1)[13];
  try
  {
    v3 = (**v2)(v2);
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x16A8,
        (unsigned int)"internal\\sdk\\inc\\wil\\ResultMacros.h",
        (const char *)(unsigned int)v3,
        -2);
    }
    else
    {
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 72LL))(v10, *a1[1], *a1[2]);
      v6 = retaddr;
      if ( v4 >= 0 )
      {
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        return 0LL;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x4F9,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v4,
      v8);
    JUMPOUT(0x1800D5313LL);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4FB,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v5);
  }
  return result;
}
