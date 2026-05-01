/*
 * XREFs of ?GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z @ 0x180076E64
 * Callers:
 *     ?SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z @ 0x180076D70 (-SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z.c)
 *     ?SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z @ 0x180121AB0 (-SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z.c)
 *     ?SwitchToLastActiveApp@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x18012A630 (-SwitchToLastActiveApp@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?SwitchToThisApp@CClassicWindowManager@@UEAAJPEBG@Z @ 0x18012A6D0 (-SwitchToThisApp@CClassicWindowManager@@UEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

CApplicationManagerUtility *__fastcall CApplicationManagerUtility::GetLastActiveVisiblePopupOrSelf(
        CApplicationManagerUtility *this,
        HWND a2)
{
  CApplicationManagerUtility *v2; // rdi
  HWND LastActivePopup; // rbx

  v2 = this;
  LastActivePopup = GetLastActivePopup((HWND)this);
  if ( IsWindowVisible(LastActivePopup) )
    return (CApplicationManagerUtility *)LastActivePopup;
  return v2;
}
