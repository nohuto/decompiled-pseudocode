/*
 * XREFs of ??$MakeAndInitialize@VTabViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180225ED0
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VTabViewManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18022D760 (-CreateInstance@-$SimpleClassFactory@VTabViewManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEB.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0TabViewManager@@QEAA@XZ @ 0x1802297F4 (--0TabViewManager@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@UIWeakReferenceSource@@UIApplicationViewChangeListener@@UIWindowManagementShowMoveSizeEvents@@UITabViewManager@@UITabDragHandler@@UITabGroupManager@@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@UITitleBarRecovery@@UIPrivilegedOperationsConsumer@@UIShellTabsSource@@UIImmersiveShellHookNotification@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18022C928 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$Impleme_ea_18022C928.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationViewChangeListener@@UIWindowManagementShowMoveSizeEvents@@UITabViewManager@@UITabDragHandler@@UITabGroupManager@@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@UITitleBarRecovery@@UIPrivilegedOperationsConsumer@@UIShellTabsSource@@UIImmersiveShellHookNotification@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180236AB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_180236AB0.c)
 *     ?RuntimeClassInitialize@TabViewManager@@QEAAJXZ @ 0x180237560 (-RuntimeClassInitialize@TabViewManager@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TabViewManager,IUnknown,>(TabViewManager **a1)
{
  TabViewManager *v2; // rax
  int CanCastTo; // edi
  TabViewManager *v4; // rbx
  _DWORD *v5; // rcx
  __int64 v6; // r9

  *a1 = 0LL;
  v2 = (TabViewManager *)operator new(0x5B0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = TabViewManager::TabViewManager(v2);
    CanCastTo = TabViewManager::RuntimeClassInitialize(v4);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046)
        || InlineIsEqualGUID(v5, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
      {
        *a1 = v4;
        (*(void (__fastcall **)(TabViewManager *))(*(_QWORD *)v4 + 8LL))(v4);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,IApplicationViewChangeListener,IWindowManagementShowMoveSizeEvents,ITabViewManager,ITabDragHandler,ITabGroupManager,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter,ITitleBarRecovery,IPrivilegedOperationsConsumer,IShellTabsSource,IImmersiveShellHookNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::CanCastTo(
                      (char *)v4 + 8,
                      v6,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(TabViewManager *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationViewChangeListener,IWindowManagementShowMoveSizeEvents,ITabViewManager,ITabDragHandler,ITabGroupManager,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter,ITitleBarRecovery,IPrivilegedOperationsConsumer,IShellTabsSource,IImmersiveShellHookNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::Release(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
