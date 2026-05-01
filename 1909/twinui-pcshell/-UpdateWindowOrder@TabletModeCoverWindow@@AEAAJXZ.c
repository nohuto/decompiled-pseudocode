/*
 * XREFs of ?UpdateWindowOrder@TabletModeCoverWindow@@AEAAJXZ @ 0x1803E8C4C
 * Callers:
 *     ?AppLayoutChanged@TabletModeCoverWindow@@UEAAJPEAUIAppLayout@@@Z @ 0x1803E7AC0 (-AppLayoutChanged@TabletModeCoverWindow@@UEAAJPEAUIAppLayout@@@Z.c)
 *     ?ShellTargetChanged@TabletModeCoverWindow@@UEAAJPEAUIApplicationView@@@Z @ 0x1803E8B40 (-ShellTargetChanged@TabletModeCoverWindow@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z @ 0x1803E8BA0 (-TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002B650 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?GetLowestLayoutView@TabletModeCoverWindow@@AEAAJPEAPEAUIApplicationView@@@Z @ 0x1803E82E4 (-GetLowestLayoutView@TabletModeCoverWindow@@AEAAJPEAPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall TabletModeCoverWindow::UpdateWindowOrder(HWND *this)
{
  __int64 v2; // rsi
  struct IApplicationView *v3; // rdx
  HWND WindowForView; // rax
  HWND v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  ApplicationViewHelpers *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 200) )
  {
    v10 = 0LL;
    v2 = 1LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
    if ( (int)TabletModeCoverWindow::GetLowestLayoutView((TabletModeCoverWindow *)this, &v10) >= 0 )
    {
      WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                              (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v10,
                              v3);
      v5 = WindowForView;
      if ( WindowForView )
      {
        v2 = -2LL;
        if ( (GetWindowLongW(WindowForView, -20) & 8) == 0 )
          v2 = (__int64)v5;
      }
    }
    if ( !IsWindowVisible(this[13]) )
      ShowWindow(this[13], 8);
    v6 = (*(__int64 (__fastcall **)(HWND, HWND, __int64))(*(_QWORD *)this[22] + 40LL))(this[22], this[13], v2);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B1,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
        (const char *)(unsigned int)v6);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
      return v7;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  }
  return 0LL;
}
