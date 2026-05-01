/*
 * XREFs of ?BeginDragVisualHandoff@TabletModeViewManagerProxy@@UEAAJPEAUIApplicationView@@PEAUtagRECT@@PEAUtagPOINT@@PEAUITabletModeInputSource@@@Z @ 0x180365390
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?GetTabletModeViewManager@TabletModeViewManagerProxy@@AEAAJPEAPEAUITabletModeViewManager@@@Z @ 0x180365564 (-GetTabletModeViewManager@TabletModeViewManagerProxy@@AEAAJPEAPEAUITabletModeViewManager@@@Z.c)
 */

__int64 __fastcall TabletModeViewManagerProxy::BeginDragVisualHandoff(
        TabletModeViewManagerProxy *this,
        struct IApplicationView *a2,
        struct tagRECT *a3,
        struct tagPOINT *a4,
        struct ITabletModeInputSource *a5)
{
  int TabletModeViewManager; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct ITabletModeViewManager *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  TabletModeViewManager = TabletModeViewManagerProxy::GetTabletModeViewManager(
                            (TabletModeViewManagerProxy *)((char *)this - 8),
                            &v13);
  v10 = TabletModeViewManager;
  if ( TabletModeViewManager >= 0 )
    v10 = (*(__int64 (__fastcall **)(struct ITabletModeViewManager *, struct IApplicationView *, struct tagRECT *, struct tagPOINT *, struct ITabletModeInputSource *))(*(_QWORD *)v13 + 40LL))(
            v13,
            a2,
            a3,
            a4,
            a5);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\tabletmodeviewmanagerproxy.cpp",
      (const char *)(unsigned int)TabletModeViewManager);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  return v10;
}
