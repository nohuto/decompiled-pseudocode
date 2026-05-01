/*
 * XREFs of ??$Make@VViewGroupManager@@AEAPEAUITitleBarController@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VViewGroupManager@@@12@AEAPEAUITitleBarController@@AEAPEAUITabViewManager@@@Z @ 0x1801F9954
 * Callers:
 *     ??$MakeOrThrow@VViewGroupManager@@AEAPEAUITitleBarController@@AEAPEAUITabViewManager@@@wil@@YA?AV?$ComPtr@VViewGroupManager@@@WRL@Microsoft@@AEAPEAUITitleBarController@@AEAPEAUITabViewManager@@@Z @ 0x1801F9A4C (--$MakeOrThrow@VViewGroupManager@@AEAPEAUITitleBarController@@AEAPEAUITabViewManager@@@wil@@YA-A.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIControlCenterExperienceManager@6789@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180069C60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNoti.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??0ViewGroupManager@@QEAA@PEAUITitleBarController@@PEAUITabViewManager@@@Z @ 0x1801F9F38 (--0ViewGroupManager@@QEAA@PEAUITitleBarController@@PEAUITabViewManager@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall Microsoft::WRL::Details::Make<ViewGroupManager,ITitleBarController * &,ITabViewManager * &>(
        __int64 *a1,
        struct ITitleBarController **a2,
        struct ITabViewManager **a3)
{
  ViewGroupManager *v6; // rax
  ViewGroupManager *v7; // rdi

  *a1 = 0LL;
  v6 = (ViewGroupManager *)operator new(0x110uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = ViewGroupManager::ViewGroupManager(v6, *a2, *a3);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::Release(*a1);
    *a1 = (__int64)v7;
  }
  return a1;
}
