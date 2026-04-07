/*
 * XREFs of ?StopDownTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x180044CC0
 * Callers:
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180044C70 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18009A00C (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateTransition@CDirectTouchVisual@@MEAAJXZ @ 0x18009A270 (-UpdateTransition@CDirectTouchVisual@@MEAAJXZ.c)
 * Callees:
 *     McTemplateU0 @ 0x18007E2D8 (McTemplateU0.c)
 */

void __fastcall CDirectTouchVisual::StopDownTimeline(CDirectTouchVisual *this)
{
  __int64 v1; // rax
  bool v3; // zf
  char v4; // al

  v1 = *((_QWORD *)this + 47);
  if ( v1 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
    {
      McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmDirectTouchDownAnimation_End);
      v1 = *((_QWORD *)this + 47);
    }
    if ( v1 )
    {
      v3 = (*(_DWORD *)(v1 + 8))-- == 1;
      v4 = CDesktopManager::s_fTimelineDirty;
      if ( v3 )
        v4 = 1;
      *((_QWORD *)this + 47) = 0LL;
      CDesktopManager::s_fTimelineDirty = v4;
    }
  }
}
