/*
 * XREFs of ??$Make@VDefaultIconManager@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@AEAPEAUIImmersiveWindowMessageService@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VDefaultIconManager@@@12@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@AEAPEAUIImmersiveWindowMessageService@@@Z @ 0x18024E3E4
 * Callers:
 *     ??$MakeOrThrow@VDefaultIconManager@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@AEAPEAUIImmersiveWindowMessageService@@@wil@@YA?AV?$ComPtr@VDefaultIconManager@@@WRL@Microsoft@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@AEAPEAUIImmersiveWindowMessageService@@@Z @ 0x18024E6E0 (--$MakeOrThrow@VDefaultIconManager@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??0DefaultIconManager@@QEAA@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@PEAUIImmersiveWindowMessageService@@@Z @ 0x18025055C (--0DefaultIconManager@@QEAA@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabVie.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDefaultIconManager@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180253040 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDe_ea_180253040.c)
 */

// Hidden C++ exception states: #wind=3
DefaultIconManager **__fastcall Microsoft::WRL::Details::Make<DefaultIconManager,Windows::Internal::ComposableShell::Tabs::ITabDataModel * &,ITabViewManager * &,IImmersiveWindowMessageService * &>(
        DefaultIconManager **a1,
        struct Windows::Internal::ComposableShell::Tabs::ITabDataModel **a2,
        struct ITabViewManager **a3,
        struct IImmersiveWindowMessageService **a4)
{
  DefaultIconManager *v8; // rax
  DefaultIconManager *v9; // rdi

  *a1 = 0LL;
  v8 = (DefaultIconManager *)operator new(0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v9 = DefaultIconManager::DefaultIconManager(v8, *a2, *a3, *a4);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDefaultIconManager,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::Release(*a1);
    *a1 = v9;
  }
  return a1;
}
