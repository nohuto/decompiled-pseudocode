/*
 * XREFs of ?IsViewPinned@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEA_N@Z @ 0x18005DE70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVirtualDesktopVisibilityPolicy::IsViewPinned(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        bool *a3)
{
  char v4; // bl
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  bool v9; // cl
  __int64 v10; // rcx
  __int64 v11; // rax
  int v13[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0;
  if ( a3 )
    *a3 = 0;
  *(_QWORD *)v13 = 0LL;
  v14 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 200LL))(a2, v13);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x11F,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v5,
      v13[0]);
    v7 = v14;
    v6 = *(_QWORD *)v13;
  }
  else
  {
    v6 = *(_QWORD *)v13;
    v7 = v14;
    v8 = *(_QWORD *)v13 - 0x4AB24DE3BB64D5B7LL;
    if ( *(_QWORD *)v13 == 0x4AB24DE3BB64D5B7LL )
      v8 = v14 + 0x235851FE89248358LL;
    v9 = v8 == 0;
    if ( a3 )
      *a3 = v9;
  }
  v10 = v6 - 0x4CF966F2C2DDEA68LL;
  if ( v6 == 0x4CF966F2C2DDEA68LL )
    v10 = v7 + 0x534404FF02E49B7ELL;
  if ( !v10 )
    return 1;
  v11 = v6 - 0x4AB24DE3BB64D5B7LL;
  if ( !v11 )
    v11 = v7 + 0x235851FE89248358LL;
  if ( !v11 )
    return 1;
  return v4;
}
