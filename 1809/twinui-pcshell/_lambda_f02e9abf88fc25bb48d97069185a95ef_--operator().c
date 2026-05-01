/*
 * XREFs of _lambda_f02e9abf88fc25bb48d97069185a95ef_::operator() @ 0x18024F9E0
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f02e9abf88fc25bb48d97069185a95ef___::Run @ 0x180250CF0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_f02e9abf88fc25bb48d97069185a95ef___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_f02e9abf88fc25bb48d97069185a95ef_::operator()(__int64 a1)
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
          1103LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v2);
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x452,
                             (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                             v3);
    }
  }
  return 0LL;
}
