/*
 * XREFs of ?Shutdown@VirtualDesktopAcessibility@@UEAAXXZ @ 0x18038D180
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800E75AC (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

void __fastcall VirtualDesktopAcessibility::Shutdown(VirtualDesktopAcessibility *this)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = SmartCookie::Unregister((VirtualDesktopAcessibility *)((char *)this + 48));
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      98LL,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopaccessibility.cpp",
      (const char *)(unsigned int)v1);
}
