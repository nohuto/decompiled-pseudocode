/*
 * XREFs of ?GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z @ 0x1801409E8
 * Callers:
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x18002A3E0 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?_HideApplication@CImmersiveApp@@AEAA?AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x18016A498 (-_HideApplication@CImmersiveApp@@AEAA-AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z.c)
 * Callees:
 *     ?IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800534FC (-IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18008052C (-IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180080570 (-IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsGhostWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180140AD4 (-IsGhostWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CApplicationManagerUtility::GetVisibleRootOwner(HWND a1, int a2)
{
  CApplicationManagerUtility *v3; // rbx
  BOOL v4; // eax
  HWND Window; // rax
  HWND v6; // rdx
  HWND v7; // rdi

  v3 = 0LL;
  while ( 1 )
  {
    Window = GetWindow(a1, 4u);
    v7 = Window;
    if ( !Window )
      break;
    v4 = IsWindowVisible(Window);
    a1 = v7;
    if ( v4 )
      v3 = (CApplicationManagerUtility *)v7;
  }
  if ( !a2 )
  {
    if ( !v3 )
      return (__int64)v3;
    if ( !CApplicationManagerUtility::IsForcedAppWindow(v3, v6)
      && (!CApplicationManagerUtility::IsTrayWindowStyleCheck(v3, v6)
       || CApplicationManagerUtility::IsOwnedWindow(v3, v6)) )
    {
      v3 = 0LL;
    }
  }
  if ( v3 && CApplicationManagerUtility::IsGhostWindow((HWND)v3, v6) )
    return HungWindowFromGhostWindow(v3);
  return (__int64)v3;
}
