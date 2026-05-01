/*
 * XREFs of ?OnViewAdded@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@PEAUIVirtualDesktopCollection@@@Z @ 0x18004C4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MoveViewToDesktopIfAllowed@CVirtualDesktopVisibilityPolicy@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@PEA_N@Z @ 0x18004C604 (-MoveViewToDesktopIfAllowed@CVirtualDesktopVisibilityPolicy@@AEAAJPEAUIApplicationView@@PEAUIVir.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopVisibilityPolicy::OnViewAdded(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3,
        struct IVirtualDesktopCollection *a4)
{
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rax
  struct IVirtualDesktop *v15; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD v19[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v20; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+38h] [rbp-28h]
  _QWORD v22[2]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v19[1] = -2LL;
  v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 200LL))(a2, &v20);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x97,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v8,
      v19[0]);
  }
  else
  {
    v19[0] = 0LL;
    v9 = v20 - 0x4CF966F2C2DDEA68LL;
    if ( v20 == 0x4CF966F2C2DDEA68LL )
      v9 = v21 + 0x534404FF02E49B7ELL;
    if ( !v9 )
      goto LABEL_27;
    v10 = v20 - 0x4AB24DE3BB64D5B7LL;
    if ( v20 == 0x4AB24DE3BB64D5B7LL )
      v10 = v21 + 0x235851FE89248358LL;
    if ( !v10 )
      goto LABEL_27;
    v11 = v20 - 0x45D551C0B4620C71LL;
    if ( v20 == 0x45D551C0B4620C71LL )
      v11 = v21 + 0xC8183C556F22755LL;
    if ( !v11 )
      goto LABEL_27;
    v12 = v20 - *(_QWORD *)&GUID_NULL.Data1;
    if ( v20 == *(_QWORD *)&GUID_NULL.Data1 )
      v12 = v21 - *(_QWORD *)GUID_NULL.Data4;
    if ( v12 )
    {
      v17 = v20 - 0x4658059A45DB96FFLL;
      if ( v20 == 0x4658059A45DB96FFLL )
        v17 = v21 - 0x1012647F7CCD4687LL;
      if ( v17 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
        if ( (*(int (__fastcall **)(struct IVirtualDesktopCollection *, __int64 *, _QWORD *))(*(_QWORD *)a4 + 88LL))(
               a4,
               &v20,
               v19) >= 0 )
        {
LABEL_27:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
          return 0LL;
        }
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
  }
  v13 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, _QWORD *))(*(_QWORD *)a3 + 32LL))(a3, v22);
  if ( v13 < 0 )
  {
    v18 = 167LL;
  }
  else
  {
    v14 = v22[0] - 0x4658059A45DB96FFLL;
    if ( v22[0] == 0x4658059A45DB96FFLL )
      v14 = v22[1] - 0x1012647F7CCD4687LL;
    v15 = 0LL;
    if ( v14 )
      v15 = a3;
    v13 = CVirtualDesktopVisibilityPolicy::MoveViewToDesktopIfAllowed(this, a2, v15, 0LL);
    if ( v13 >= 0 )
      return 0LL;
    v18 = 173LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
    (const char *)(unsigned int)v13);
  return (unsigned int)v13;
}
