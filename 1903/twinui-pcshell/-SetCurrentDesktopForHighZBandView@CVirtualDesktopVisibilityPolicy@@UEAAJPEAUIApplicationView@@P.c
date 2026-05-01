/*
 * XREFs of ?SetCurrentDesktopForHighZBandView@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1803E72E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopVisibilityPolicy::SetCurrentDesktopForHighZBandView(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rax
  _QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, _QWORD *))(*(_QWORD *)a3 + 32LL))(a3, v8);
  if ( v4 < 0 )
  {
    v5 = 266LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v6 = v8[0] - 0x4658059A45DB96FFLL;
  if ( v8[0] == 0x4658059A45DB96FFLL )
    v6 = v8[1] - 0x1012647F7CCD4687LL;
  if ( !v6 )
  {
    v4 = -2147024809;
    v5 = 271LL;
    goto LABEL_9;
  }
  v4 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD *))(*(_QWORD *)a2 + 208LL))(a2, v8);
  if ( v4 < 0 )
  {
    v5 = 274LL;
    goto LABEL_9;
  }
  return (unsigned int)v4;
}
