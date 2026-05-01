/*
 * XREFs of ?GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z @ 0x180079E74
 * Callers:
 *     ?SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z @ 0x180079D80 (-SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z.c)
 *     ?SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z @ 0x180140EFC (-SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z.c)
 *     ?SwitchToLastActiveApp@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x180149B50 (-SwitchToLastActiveApp@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?SwitchToThisApp@CClassicWindowManager@@UEAAJPEBG@Z @ 0x180149BF0 (-SwitchToThisApp@CClassicWindowManager@@UEAAJPEBG@Z.c)
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
