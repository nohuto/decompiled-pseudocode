/*
 * XREFs of ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800FAA4C
 * Callers:
 *     ?UncloakWindow@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x1800F5B00 (-UncloakWindow@CApplicationManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?GetHostId@CWin32ApplicationView@@UEAAJPEA_K@Z @ 0x180131790 (-GetHostId@CWin32ApplicationView@@UEAAJPEA_K@Z.c)
 *     ?RuntimeClassInitialize@RetailDemoExperienceManager@@QEAAJXZ @ 0x18018578C (-RuntimeClassInitialize@RetailDemoExperienceManager@@QEAAJXZ.c)
 *     ?StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ @ 0x180192450 (-StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ.c)
 *     ?SubscribeToServices@LockScreenDirectorServiceProviderImpl@@UEAAJPEAUIServiceProvider@@@Z @ 0x180193290 (-SubscribeToServices@LockScreenDirectorServiceProviderImpl@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@RecentAppsCache@Discover@PenWorkspace@@QEAAJXZ @ 0x18019B804 (-RuntimeClassInitialize@RecentAppsCache@Discover@PenWorkspace@@QEAAJXZ.c)
 *     ?CreateDwmSharedThumbnailVisual@TabViewManager@@AEAA?AU?$pair@V?$com_ptr_t@UIVisual@Composition@UI@Windows@@Uerr_exception_policy@wil@@@wil@@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@@std@@PEAUICompositor@Composition@UI@Windows@@PEAUIShellTab@Tabs@ComposableShell@Internal@7@PEAUHWND__@@AEBUSize@Foundation@7@@Z @ 0x1801D9414 (-CreateDwmSharedThumbnailVisual@TabViewManager@@AEAA-AU-$pair@V-$com_ptr_t@UIVisual@Composition@.c)
 *     ?IsWindowRunningInElevatedToken@TabViewManager@@CA_NPEAUHWND__@@@Z @ 0x1801DE904 (-IsWindowRunningInElevatedToken@TabViewManager@@CA_NPEAUHWND__@@@Z.c)
 *     ?v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180221180 (-v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     ?v_PublishServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18022DA20 (-v_PublishServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     _lambda_a3aeb034ce425ddb7d0e73cd92572bd8_::operator() @ 0x18023CE30 (_lambda_a3aeb034ce425ddb7d0e73cd92572bd8_--operator().c)
 *     _lambda_41ea728de8cee2282d4ec3314b3d541b_::operator() @ 0x18024D338 (_lambda_41ea728de8cee2282d4ec3314b3d541b_--operator().c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x1803A2668 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x1803A2748 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 *     ?GetDesktopBrokerProcessHandle@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJPEAPEAX@Z @ 0x1803A5800 (-GetDesktopBrokerProcessHandle@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Win.c)
 *     ?RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJAEAUComponentInfo@12345@I@Z @ 0x1803A7214 (-RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows.c)
 *     ?SetViewEventHandle@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIW4_CUI_VIEW_EVENT_TYPE@@PEAX@Z @ 0x1803A7CA0 (-SetViewEventHandle@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        void **a1,
        void *a2)
{
  void *v2; // rbp
  DWORD LastError; // ebx

  v2 = *a1;
  if ( (char *)*a1 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    LastError = GetLastError();
    CloseHandle(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
