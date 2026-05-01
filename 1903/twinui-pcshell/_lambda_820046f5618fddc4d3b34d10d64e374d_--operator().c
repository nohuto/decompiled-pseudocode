/*
 * XREFs of _lambda_820046f5618fddc4d3b34d10d64e374d_::operator() @ 0x1802A3D2C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_820046f5618fddc4d3b34d10d64e374d___::Run @ 0x1802A40B0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_820046f5618fddc4d3b34d10d64e374d___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_820046f5618fddc4d3b34d10d64e374d_::operator()(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *(_QWORD *)(*(_QWORD *)a1 + 624LL);
  try
  {
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 160LL))(v1);
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        113LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v2);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x73,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
                           v3);
  }
  return 0LL;
}
