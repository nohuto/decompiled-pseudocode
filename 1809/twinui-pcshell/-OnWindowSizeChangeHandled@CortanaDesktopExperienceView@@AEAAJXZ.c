/*
 * XREFs of ?OnWindowSizeChangeHandled@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180078D8C
 * Callers:
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800259FC (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 * Callees:
 *     ?EnsureForegroundRightsForAmbientModeIfNeeded@CortanaDesktopExperienceView@@AEAAXXZ @ 0x180078DE0 (-EnsureForegroundRightsForAmbientModeIfNeeded@CortanaDesktopExperienceView@@AEAAXXZ.c)
 *     ?SetZBand@CortanaDesktopExperienceView@@AEAAJW4ZBID@@@Z @ 0x180078ED4 (-SetZBand@CortanaDesktopExperienceView@@AEAAJW4ZBID@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x180188184 (CortanaHelpers--AllowCortanaAboveLock.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnWindowSizeChangeHandled(CortanaDesktopExperienceView *this)
{
  unsigned int v2; // edi
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 13;
  if ( (unsigned int)(*((_DWORD *)this + 35) - 3) <= 1 && *((_BYTE *)this + 226) )
    v2 = (unsigned __int8)CortanaHelpers::AllowCortanaAboveLock(this) != 0 ? 18 : 13;
  v3 = CortanaDesktopExperienceView::SetZBand(this, v2);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4EE,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v3,
      v5);
  CortanaDesktopExperienceView::EnsureForegroundRightsForAmbientModeIfNeeded(this);
  return 0LL;
}
