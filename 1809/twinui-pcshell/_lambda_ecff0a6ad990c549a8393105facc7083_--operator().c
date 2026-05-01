/*
 * XREFs of _lambda_ecff0a6ad990c549a8393105facc7083_::operator() @ 0x18024F948
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ecff0a6ad990c549a8393105facc7083___::Run @ 0x180250CC0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_ecff0a6ad990c549a8393105facc7083___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_ecff0a6ad990c549a8393105facc7083_::operator()(__int64 a1)
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
        1251LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v2);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4E5,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v3);
  }
  return 0LL;
}
