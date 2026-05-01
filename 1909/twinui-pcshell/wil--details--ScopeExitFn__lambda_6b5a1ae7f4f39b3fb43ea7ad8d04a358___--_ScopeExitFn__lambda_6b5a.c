/*
 * XREFs of wil::details::ScopeExitFn__lambda_6b5a1ae7f4f39b3fb43ea7ad8d04a358___::_ScopeExitFn__lambda_6b5a1ae7f4f39b3fb43ea7ad8d04a358___ @ 0x18033D43C
 * Callers:
 *     _KeyboardHosting::TabTipAdapter::OnInputAppRequestedResize_::_1_::dtor$1 @ 0x180341A75 (_KeyboardHosting--TabTipAdapter--OnInputAppRequestedResize_--_1_--dtor$1.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_6b5a1ae7f4f39b3fb43ea7ad8d04a358___::_ScopeExitFn__lambda_6b5a1ae7f4f39b3fb43ea7ad8d04a358___(
        __int64 *a1)
{
  _BYTE *v2; // rdx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    v2 = (_BYTE *)a1[1];
    LOBYTE(v2) = *v2;
    v3 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*a1 + 464LL))(*a1, v2);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2FD,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v3);
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
