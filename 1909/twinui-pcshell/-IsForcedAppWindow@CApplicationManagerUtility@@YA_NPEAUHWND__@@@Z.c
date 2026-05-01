/*
 * XREFs of ?IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180080570
 * Callers:
 *     ?IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18008052C (-IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFlags@@@Z @ 0x180085804 (-IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFl.c)
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801384F0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z @ 0x1801409E8 (-GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z.c)
 *     ?RecoverApplicationWindows@@YAJPEAUIImmersiveShellHookNotification@@@Z @ 0x1801418C8 (-RecoverApplicationWindows@@YAJPEAUIImmersiveShellHookNotification@@@Z.c)
 *     ShouldWindowBeConsideredForRecovery @ 0x180141A84 (ShouldWindowBeConsideredForRecovery.c)
 * Callees:
 *     <none>
 */

bool __fastcall CApplicationManagerUtility::IsForcedAppWindow(CApplicationManagerUtility *this, HWND a2)
{
  return (GetWindowLongPtrW((HWND)this, -20) & 0x40000) != 0;
}
