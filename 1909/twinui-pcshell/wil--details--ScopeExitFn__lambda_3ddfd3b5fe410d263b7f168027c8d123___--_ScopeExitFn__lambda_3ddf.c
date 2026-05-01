/*
 * XREFs of wil::details::ScopeExitFn__lambda_3ddfd3b5fe410d263b7f168027c8d123___::_ScopeExitFn__lambda_3ddfd3b5fe410d263b7f168027c8d123___ @ 0x1800A77D0
 * Callers:
 *     _WindowEventDispatcher::RecoverViews_::_1_::dtor$5 @ 0x18029EC64 (_WindowEventDispatcher--RecoverViews_--_1_--dtor$5.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_3ddfd3b5fe410d263b7f168027c8d123___::_ScopeExitFn__lambda_3ddfd3b5fe410d263b7f168027c8d123___(
        __int64 a1)
{
  _QWORD *v1; // rax
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 8) )
  {
    v1 = *(_QWORD **)a1;
    *(_BYTE *)(a1 + 8) = 0;
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v1 + 392LL))(*v1, 0LL);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7C5,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v2);
  }
}
