/*
 * XREFs of _lambda_f734c1787531bbb8bf09975f4ec8a2df_::operator() @ 0x180079DB4
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f734c1787531bbb8bf09975f4ec8a2df___::Run @ 0x180079D90 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_f734c1787531bbb8bf09975f4ec8a2df___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_f734c1787531bbb8bf09975f4ec8a2df_::operator()(__int64 **a1)
{
  __int64 v1; // rcx
  int v2; // eax
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = **a1;
  try
  {
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 208LL))(v1);
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xBB5,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v2,
        -2);
      JUMPOUT(0x1800F891CLL);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xBB7,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v3);
  }
  return result;
}
