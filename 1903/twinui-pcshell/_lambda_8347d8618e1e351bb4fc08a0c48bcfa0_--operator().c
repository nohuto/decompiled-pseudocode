/*
 * XREFs of _lambda_8347d8618e1e351bb4fc08a0c48bcfa0_::operator() @ 0x1802A5F50
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8347d8618e1e351bb4fc08a0c48bcfa0___::Run @ 0x1802A77F0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_8347d8618e1e351bb4fc08a0c48bcfa0___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_8347d8618e1e351bb4fc08a0c48bcfa0_::operator()(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *(_QWORD *)(*(_QWORD *)a1 + 128LL);
  try
  {
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 144LL))(v1);
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1382LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v2);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x568,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v3);
  }
  return 0LL;
}
