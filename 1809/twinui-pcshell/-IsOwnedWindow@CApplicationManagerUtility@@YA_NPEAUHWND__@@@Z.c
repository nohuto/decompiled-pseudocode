/*
 * XREFs of ?IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180050FF0
 * Callers:
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x180035340 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x18004F0E0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F3F40 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z @ 0x1800FB4A8 (-GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z.c)
 *     ShouldWindowBeConsideredForRecovery @ 0x1800FC5C4 (ShouldWindowBeConsideredForRecovery.c)
 * Callees:
 *     <none>
 */

bool __fastcall CApplicationManagerUtility::IsOwnedWindow(CApplicationManagerUtility *this, HWND a2)
{
  return GetWindow((HWND)this, 4u) != 0LL;
}
