/*
 * XREFs of ?CreateHotKeyHandler@TabViewManager@@AEAAJXZ @ 0x1801D961C
 * Callers:
 *     ?PerformDelayedInitialization@TabViewManager@@UEAAJXZ @ 0x1801E2D30 (-PerformDelayedInitialization@TabViewManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?TabShellHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIApplicationViewCollection@@PEAUITabViewManager@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabController@5678@PEAUITitleBarController@@AEBU_GUID@@PEAPEAX@Z @ 0x180203490 (-TabShellHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIApplicationVi.c)
 */

__int64 __fastcall TabViewManager::CreateHotKeyHandler(TabViewManager *this)
{
  void **v1; // rbx
  int Instance; // eax
  unsigned int v4; // ebx
  const struct _GUID *v6; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = (void **)((char *)this + 1392);
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 174);
  Instance = TabShellHotKeyHandler_CreateInstance(
               *((struct IImmersiveWindowMessageService **)this + 48),
               *((struct IApplicationViewCollection **)this + 143),
               (TabViewManager *)((char *)this + 136),
               *((struct Windows::Internal::ComposableShell::Tabs::ITabDataModel **)this + 146),
               *((struct Windows::Internal::ComposableShell::Tabs::ITabController **)this + 145),
               *((struct ITitleBarController **)this + 172),
               v6,
               v1);
  v4 = Instance;
  if ( Instance >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFAD,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)Instance);
  return v4;
}
