/*
 * XREFs of ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18013FB90
 * Callers:
 *     ?UncloakWindow@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x18013A210 (-UncloakWindow@CApplicationManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?GetHostId@CWin32ApplicationView@@UEAAJPEA_K@Z @ 0x18017A4C0 (-GetHostId@CWin32ApplicationView@@UEAAJPEA_K@Z.c)
 *     ?RuntimeClassInitialize@RetailDemoExperienceManager@@QEAAJXZ @ 0x1801D4E6C (-RuntimeClassInitialize@RetailDemoExperienceManager@@QEAAJXZ.c)
 *     ?OnMessage@PriorityBoostHelper@@UEAAJI_K_J@Z @ 0x1801DFA20 (-OnMessage@PriorityBoostHelper@@UEAAJI_K_J@Z.c)
 *     ?OnViewCreated@PriorityBoostHelper@@QEAAJXZ @ 0x1801DFA98 (-OnViewCreated@PriorityBoostHelper@@QEAAJXZ.c)
 *     ?StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ @ 0x1801F84A0 (-StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ.c)
 *     ?SubscribeToServices@LockScreenDirectorServiceProviderImpl@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801F9430 (-SubscribeToServices@LockScreenDirectorServiceProviderImpl@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@RecentAppsCache@Discover@PenWorkspace@@QEAAJXZ @ 0x180201914 (-RuntimeClassInitialize@RecentAppsCache@Discover@PenWorkspace@@QEAAJXZ.c)
 *     ?CreateDwmSharedThumbnailVisual@TabViewManager@@AEAA?AU?$pair@V?$com_ptr_t@UIVisual@Composition@UI@Windows@@Uerr_exception_policy@wil@@@wil@@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@@std@@PEAUICompositor@Composition@UI@Windows@@PEAUIShellTab@Tabs@ComposableShell@Internal@7@PEAUHWND__@@AEBUSize@Foundation@7@@Z @ 0x18024CA68 (-CreateDwmSharedThumbnailVisual@TabViewManager@@AEAA-AU-$pair@V-$com_ptr_t@UIVisual@Composition@.c)
 *     ?IsWindowRunningInElevatedToken@TabViewManager@@CA_NPEAUHWND__@@@Z @ 0x180251544 (-IsWindowRunningInElevatedToken@TabViewManager@@CA_NPEAUHWND__@@@Z.c)
 *     ?v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180295A30 (-v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     ?v_PublishServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1802A2130 (-v_PublishServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     _lambda_858eee636f27872cdf74bbc97c00a8bc_::operator() @ 0x1802B2490 (_lambda_858eee636f27872cdf74bbc97c00a8bc_--operator().c)
 *     _lambda_795e02c192f463c18ca265aec6362396_::operator() @ 0x1802C2E84 (_lambda_795e02c192f463c18ca265aec6362396_--operator().c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x1804279CC (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x180427AAC (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
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
