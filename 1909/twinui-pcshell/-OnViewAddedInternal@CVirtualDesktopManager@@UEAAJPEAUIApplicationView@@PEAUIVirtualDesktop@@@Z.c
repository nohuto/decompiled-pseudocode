/*
 * XREFs of ?OnViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18006F830
 * Callers:
 *     ?OnViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18006F800 (-OnViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     CVirtualDesktopManager::_OnViewAdded__lambda_ceeac1ba8e7a7665bc74ec0b2f20c435___ @ 0x18006F8A4 (CVirtualDesktopManager--_OnViewAdded__lambda_ceeac1ba8e7a7665bc74ec0b2f20c435___.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopManager::OnViewAddedInternal(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, struct IVirtualDesktop *))(**((_QWORD **)this + 9) + 32LL))(
          *((_QWORD *)this + 9),
          a3) )
  {
    v4 = -2147024809;
    v6 = 517LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)v4,
      v7);
    return v4;
  }
  v7 = (_DWORD)this - 8;
  v4 = CVirtualDesktopManager::_OnViewAdded__lambda_ceeac1ba8e7a7665bc74ec0b2f20c435___(
         (CVirtualDesktopManager *)((char *)this - 8),
         a2);
  if ( (v4 & 0x80000000) != 0 )
  {
    v6 = 523LL;
    goto LABEL_6;
  }
  return v4;
}
