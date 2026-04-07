/*
 * XREFs of ?_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z @ 0x1800A64A8
 * Callers:
 *     ?_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A8340 (-_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A8570 (-_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CLaunchSwitchBase::_RecordMonitorRectForWindow(CLaunchSwitchBase *this, const struct CWindowData *a2)
{
  CTransitionVisualController::GetMonitorRectFromRectImpl(
    (const struct tagRECT *)((char *)a2 + ((*((_DWORD *)a2 + 151) & 0x1000000) != 0 ? 0x240 : 0) + 48),
    (struct tagRECT *)((char *)this + 152));
}
