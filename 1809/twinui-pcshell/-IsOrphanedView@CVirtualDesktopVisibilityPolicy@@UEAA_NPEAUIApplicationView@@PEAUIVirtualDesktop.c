/*
 * XREFs of ?IsOrphanedView@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktopCollection@@@Z @ 0x180380D70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CVirtualDesktopVisibilityPolicy::IsOrphanedView(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        struct IVirtualDesktopCollection *a3)
{
  int v5; // eax
  char v6; // bl
  int v7; // eax
  int v8; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // [rsp+20h] [rbp-30h] BYREF
  int v14; // [rsp+24h] [rbp-2Ch] BYREF
  __int64 v15[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v16; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v15[1] = -2LL;
  v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 216LL))(a2, &v13);
  v6 = 0;
  if ( v5 >= 0 )
  {
    if ( !v13 )
      return 0;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      188LL,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v5);
  }
  v7 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 336LL))(a2, &v14);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      189LL,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_7;
  }
  if ( v14 )
    return 0;
LABEL_7:
  v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 200LL))(a2, &v16);
  if ( v8 >= 0 )
  {
    v15[0] = 0LL;
    v10 = v16 - 0x4CF966F2C2DDEA68LL;
    if ( v16 == 0x4CF966F2C2DDEA68LL )
      v10 = v17 + 0x534404FF02E49B7ELL;
    if ( v10 )
    {
      v11 = v16 - 0x4AB24DE3BB64D5B7LL;
      if ( v16 == 0x4AB24DE3BB64D5B7LL )
        v11 = v17 + 0x235851FE89248358LL;
      if ( v11 )
      {
        v12 = v16 - 0x45D551C0B4620C71LL;
        if ( v16 == 0x45D551C0B4620C71LL )
          v12 = v17 + 0xC8183C556F22755LL;
        if ( v12 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
          if ( (*(int (__fastcall **)(struct IVirtualDesktopCollection *, __int64 *, __int64 *))(*(_QWORD *)a3 + 88LL))(
                 a3,
                 &v16,
                 v15) < 0 )
            v6 = 1;
        }
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
    return v6;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      194LL,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v8);
    return 1;
  }
}
