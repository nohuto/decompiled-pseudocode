/*
 * XREFs of ??_GDesktopVisibilityChangeListener@CImmersiveMode@@QEAAPEAXI@Z @ 0x180100D4C
 * Callers:
 *     ??1?$CAutoMemPtr@UDesktopVisibilityChangeListener@CImmersiveMode@@@@QEAA@XZ @ 0x1801007B4 (--1-$CAutoMemPtr@UDesktopVisibilityChangeListener@CImmersiveMode@@@@QEAA@XZ.c)
 *     ?RegisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJW4DESKTOP_VISIBILITY_NOTIFICATION_TYPE@@PEAUIDesktopVisibilityChangesNotification@@PEAK@Z @ 0x180101720 (-RegisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJW4DESKTOP_VISIBILITY_NOTIFICATION_TYPE.c)
 *     ?UnregisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJK@Z @ 0x180101980 (-UnregisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJK@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Revoke@GlobalInterfaceTable@@SAXK@Z @ 0x1800E71AC (-Revoke@GlobalInterfaceTable@@SAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
CImmersiveMode::DesktopVisibilityChangeListener *__fastcall CImmersiveMode::DesktopVisibilityChangeListener::`scalar deleting destructor'(
        CImmersiveMode::DesktopVisibilityChangeListener *this)
{
  unsigned int v2; // ecx

  v2 = *(_DWORD *)this;
  if ( v2 )
    GlobalInterfaceTable::Revoke(v2);
  operator delete(this, (const struct std::nothrow_t *)8);
  return this;
}
