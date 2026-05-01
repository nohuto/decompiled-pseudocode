/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMessageProxyReconnectAdapter@@UIMessageProxyListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18027B180
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPositionAdjustmentHistory@@UIPositionAdjustmentHistoryTestHook@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800DB010 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPositionAdjustm.c)
 *     ??$MakeAndInitialize@VTabShellHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabViewManager@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabController@6789@AEAPEAUITitleBarController@@@Details@WRL@Microsoft@@YAJPEAPEAVTabShellHotKeyHandler@@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabViewManager@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabController@89Internal@Windows@@AEAPEAUITitleBarController@@@Z @ 0x180279D14 (--$MakeAndInitialize@VTabShellHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIA.c)
 *     ??1?$com_ptr_t@VTabShellHotKeyHandler@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180279E78 (--1-$com_ptr_t@VTabShellHotKeyHandler@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TabShellHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIApplicationViewCollection@@PEAUITabViewManager@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabController@5678@PEAUITitleBarController@@AEBU_GUID@@PEAPEAX@Z @ 0x18027B2B8 (-TabShellHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIApplicationVi.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x180367FA4 (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18008E7A0 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMessageProxyReconnectAdapter,IMessageProxyListener>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r10

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 20), a2);
  if ( !v2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 32LL))(v3, v2 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
