/*
 * XREFs of ?GetLastActivationFILETIME@CWinRTApplicationView@@UEAAJPEAU_FILETIME@@@Z @ 0x18017C350
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWinRTApplicationView::GetLastActivationFILETIME(CWinRTApplicationView *this, struct _FILETIME *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  _QWORD v6[6]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a2 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 26) + 80LL))(*((_QWORD *)this + 26), v6);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *a2 = (struct _FILETIME)v6[2];
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28F,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
