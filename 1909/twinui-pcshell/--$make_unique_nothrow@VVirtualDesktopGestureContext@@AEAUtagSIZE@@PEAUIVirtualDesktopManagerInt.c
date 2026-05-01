/*
 * XREFs of ??$make_unique_nothrow@VVirtualDesktopGestureContext@@AEAUtagSIZE@@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUIImmersiveMonitorManager@@@wil@@YA?AV?$unique_ptr@VVirtualDesktopGestureContext@@U?$default_delete@VVirtualDesktopGestureContext@@@wistd@@@wistd@@AEAUtagSIZE@@$$QEAPEAUIVirtualDesktopManagerInternal@@$$QEAPEAUISwitchThumbnailDeviceManager@@$$QEAPEAUIApplicationViewCollection@@$$QEAPEAUIImmersiveSettingsCache@@$$QEAPEAUIImmersiveMonitorManager@@@Z @ 0x180412C60
 * Callers:
 *     ?StartSwipe@VirtualDesktopGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x180415AB0 (-StartSwipe@VirtualDesktopGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0VirtualDesktopGestureContext@@QEAA@UtagSIZE@@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUIImmersiveMonitorManager@@@Z @ 0x180412DB4 (--0VirtualDesktopGestureContext@@QEAA@UtagSIZE@@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchT.c)
 */

VirtualDesktopGestureContext **__fastcall wil::make_unique_nothrow<VirtualDesktopGestureContext,tagSIZE &,IVirtualDesktopManagerInternal *,ISwitchThumbnailDeviceManager *,IApplicationViewCollection *,IImmersiveSettingsCache *,IImmersiveMonitorManager *>(
        VirtualDesktopGestureContext **a1,
        struct tagSIZE *a2,
        struct IVirtualDesktopManagerInternal **a3,
        struct ISwitchThumbnailDeviceManager **a4,
        struct IApplicationViewCollection **a5,
        struct IImmersiveSettingsCache **a6,
        struct IImmersiveMonitorManager **a7)
{
  VirtualDesktopGestureContext *v11; // rdi
  VirtualDesktopGestureContext *v12; // rax

  v11 = (VirtualDesktopGestureContext *)operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = 0LL;
  if ( v11 )
    v12 = VirtualDesktopGestureContext::VirtualDesktopGestureContext(v11, *a2, *a3, *a4, *a5, *a6, *a7);
  *a1 = v12;
  return a1;
}
