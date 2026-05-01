/*
 * XREFs of ?IsVisibleOnlyOnDesktop@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180406580
 * Callers:
 *     <none>
 * Callees:
 *     ?IsVisible@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18005E1B0 (-IsVisible@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVirtualDesktopVisibilityPolicy::IsVisibleOnlyOnDesktop(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  __int64 v3; // rax
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v17; // [rsp+20h] [rbp-30h] BYREF
  int v18; // [rsp+24h] [rbp-2Ch] BYREF
  _QWORD v19[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h] BYREF
  __int64 v21; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v3 = *(_QWORD *)a2;
  v17 = 0;
  v7 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(v3 + 216))(a2, &v17);
  if ( v7 >= 0 )
  {
    if ( !v17 )
      return 0;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4F,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v7);
  }
  v8 = *(_QWORD *)a2;
  v18 = 0;
  v9 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(v8 + 336))(a2, &v18);
  if ( v9 >= 0 )
  {
    if ( v18 )
      return 0;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x54,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v9);
  }
  v10 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, _QWORD *))(*(_QWORD *)a3 + 32LL))(a3, v19);
  if ( v10 >= 0 )
  {
    v11 = v19[0] - 0x4658059A45DB96FFLL;
    if ( v19[0] == 0x4658059A45DB96FFLL )
      v11 = v19[1] - 0x1012647F7CCD4687LL;
    if ( !v11 )
      return 0;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x59,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v10);
  }
  v12 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 200LL))(a2, &v20);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5E,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v12);
    return CVirtualDesktopVisibilityPolicy::IsVisible(this, a2, a3);
  }
  v13 = v20 - 0x4CF966F2C2DDEA68LL;
  if ( v20 == 0x4CF966F2C2DDEA68LL )
    v13 = v21 + 0x534404FF02E49B7ELL;
  if ( v13 )
  {
    v14 = v20 - 0x4AB24DE3BB64D5B7LL;
    if ( v20 == 0x4AB24DE3BB64D5B7LL )
      v14 = v21 + 0x235851FE89248358LL;
    if ( v14 )
    {
      v15 = v20 - 0x45D551C0B4620C71LL;
      if ( v20 == 0x45D551C0B4620C71LL )
        v15 = v21 + 0xC8183C556F22755LL;
      if ( v15 )
        return CVirtualDesktopVisibilityPolicy::IsVisible(this, a2, a3);
    }
  }
  return 0;
}
