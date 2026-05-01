/*
 * XREFs of ?Prelaunch@XamlLauncher@@UEAAJXZ @ 0x1802F4680
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetExistingEvent@@YAXPEBG@Z @ 0x180082A08 (-SetExistingEvent@@YAXPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncher::Prelaunch(XamlLauncher *this, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  LOBYTE(a2) = 1;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 48LL))(*((_QWORD *)this + 12), a2);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xEF,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v3);
    SetExistingEvent(L"ShellStartReadyEvent");
  }
  LOBYTE(v4) = 1;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 13) + 48LL))(*((_QWORD *)this + 13), v4);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xF5,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v5);
    SetExistingEvent(L"ShellSearchReadyEvent");
  }
  return 0LL;
}
