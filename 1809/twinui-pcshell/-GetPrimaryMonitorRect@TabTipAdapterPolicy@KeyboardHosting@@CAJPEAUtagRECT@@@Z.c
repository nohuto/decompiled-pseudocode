/*
 * XREFs of ?GetPrimaryMonitorRect@TabTipAdapterPolicy@KeyboardHosting@@CAJPEAUtagRECT@@@Z @ 0x1802CAAF8
 * Callers:
 *     ?IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x1802CB8D4 (-IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::GetPrimaryMonitorRect(struct tagRECT *a1)
{
  HMONITOR v2; // rbx
  __int64 result; // rax
  struct tagMONITORINFO mi; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a1 = 0u;
  v2 = MonitorFromWindow(0LL, 1u);
  memset_0(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  if ( GetMonitorInfoW(v2, &mi) )
  {
    result = 0LL;
    *a1 = mi.rcMonitor;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D0,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  return result;
}
