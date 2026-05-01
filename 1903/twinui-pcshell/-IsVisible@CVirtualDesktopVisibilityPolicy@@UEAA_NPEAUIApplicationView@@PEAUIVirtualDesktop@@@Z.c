/*
 * XREFs of ?IsVisible@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18005EDA0
 * Callers:
 *     ?IsVisibleOnlyOnDesktop@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1803E6ED0 (-IsVisibleOnlyOnDesktop@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtua.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVirtualDesktopVisibilityPolicy::IsVisible(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  char v5; // bl
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-30h] BYREF
  int v17; // [rsp+24h] [rbp-2Ch] BYREF
  __int64 v18; // [rsp+28h] [rbp-28h] BYREF
  __int64 v19; // [rsp+30h] [rbp-20h]
  __int64 v20; // [rsp+38h] [rbp-18h] BYREF
  __int64 v21; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v5 = 0;
  v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 216LL))(a2, &v16);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2C,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v6,
      v16);
  }
  else if ( !v16 )
  {
    return 1;
  }
  v7 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 336LL))(a2, &v17);
  if ( v7 >= 0 )
  {
    if ( !v17 )
      goto LABEL_5;
    return 1;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x34,
    (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
    (const char *)(unsigned int)v7,
    v16);
LABEL_5:
  v8 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, __int64 *))(*(_QWORD *)a3 + 32LL))(a3, &v18);
  if ( v8 < 0 )
  {
    v15 = 58LL;
LABEL_28:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v8,
      v16);
    return v5;
  }
  v9 = v18 - 0x4658059A45DB96FFLL;
  if ( v18 == 0x4658059A45DB96FFLL )
    v9 = v19 - 0x1012647F7CCD4687LL;
  if ( !v9 )
    return 1;
  v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 200LL))(a2, &v20);
  if ( v8 < 0 )
  {
    v15 = 67LL;
    goto LABEL_28;
  }
  v10 = v20 - 0x4CF966F2C2DDEA68LL;
  if ( v20 == 0x4CF966F2C2DDEA68LL )
    v10 = v21 + 0x534404FF02E49B7ELL;
  if ( !v10 )
    return 1;
  v11 = v20 - 0x4AB24DE3BB64D5B7LL;
  if ( v20 == 0x4AB24DE3BB64D5B7LL )
    v11 = v21 + 0x235851FE89248358LL;
  if ( !v11 )
    return 1;
  v12 = v20 - 0x45D551C0B4620C71LL;
  if ( v20 == 0x45D551C0B4620C71LL )
    v12 = v21 + 0xC8183C556F22755LL;
  if ( !v12 )
    return 1;
  v13 = v20 - v18;
  if ( v20 == v18 )
    v13 = v21 - v19;
  if ( !v13 )
    return 1;
  return v5;
}
