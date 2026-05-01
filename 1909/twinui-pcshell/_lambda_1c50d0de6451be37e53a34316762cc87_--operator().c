/*
 * XREFs of _lambda_1c50d0de6451be37e53a34316762cc87_::operator() @ 0x1802C50F8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1c50d0de6451be37e53a34316762cc87___::Run @ 0x1802C6C90 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_1c50d0de6451be37e53a34316762cc87___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_1c50d0de6451be37e53a34316762cc87_::operator()(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *(_QWORD *)(*(_QWORD *)a1 + 128LL);
  if ( v1 )
  {
    try
    {
      v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 200LL))(v1);
      if ( v2 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1216LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v2);
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x4C3,
                             (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                             v3);
    }
  }
  return 0LL;
}
