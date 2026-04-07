/*
 * XREFs of ?IsGhostWindow@CWindowData@@QEBA_NPEAPEAUHWND__@@@Z @ 0x18002E87C
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18002D768 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800AB0D0 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     <none>
 */

bool __fastcall CWindowData::IsGhostWindow(HWND *this, HWND *a2)
{
  return GetPropW(this[5], L"ImmersiveGhostWindowProp") != 0LL;
}
