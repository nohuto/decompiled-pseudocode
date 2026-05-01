/*
 * XREFs of wil::details::ScopeExitFn__lambda_1372dfa2d4d0c821b8f89fb0228e97e4___::_ScopeExitFn__lambda_1372dfa2d4d0c821b8f89fb0228e97e4___ @ 0x1800925DC
 * Callers:
 *     __lambda_a6e83045e007bd3aeabbed1653bdb15e_::operator()_::_1_::dtor$1 @ 0x180093531 (__lambda_a6e83045e007bd3aeabbed1653bdb15e_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_1372dfa2d4d0c821b8f89fb0228e97e4___::_ScopeExitFn__lambda_1372dfa2d4d0c821b8f89fb0228e97e4___(
        _BYTE *a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[8] )
  {
    a1[8] = 0;
    v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(***(_QWORD ***)a1 + 392LL))(**(_QWORD **)a1, 0LL);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        2073LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v1);
  }
}
