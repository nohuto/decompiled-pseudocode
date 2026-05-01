/*
 * XREFs of ?UpdateOffset@VirtualDesktopGestureWindow@@QEAAXM@Z @ 0x180391238
 * Callers:
 *     ?UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z @ 0x180390FF0 (-UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VirtualDesktopGestureWindow::UpdateOffset(VirtualDesktopGestureWindow *this, float a2)
{
  int v2; // eax
  __int64 v3; // r10
  int v4; // eax
  _DWORD v5[4]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *((_DWORD *)this + 44) - *((_DWORD *)this + 42);
  v3 = *((_QWORD *)this + 20);
  v5[1] = 0;
  v5[3] = 1;
  v5[0] = (int)(float)((float)v2 * a2);
  v5[2] = v5[0] + 1;
  v4 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, v5, 0LL, 0LL);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      279LL,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v4);
}
