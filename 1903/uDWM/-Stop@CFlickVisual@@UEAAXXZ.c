/*
 * XREFs of ?Stop@CFlickVisual@@UEAAXXZ @ 0x18009F070
 * Callers:
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x18009EC10 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?UpdateTransition@CFlickVisual@@MEAAJXZ @ 0x18009F130 (-UpdateTransition@CFlickVisual@@MEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180019F10 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     McTemplateU0d @ 0x18007E318 (McTemplateU0d.c)
 *     ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z @ 0x180098A5C (-PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z.c)
 *     ?StopTimer@CFlickVisual@@MEAAJXZ @ 0x18009F0E0 (-StopTimer@CFlickVisual@@MEAAJXZ.c)
 */

void __fastcall CFlickVisual::Stop(CFlickVisual *this)
{
  __int64 v2; // rcx

  CFlickVisual::StopTimer(this);
  CContactManager::PostFlickFeedbackUpdate(
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23),
    *((_DWORD *)this + 74),
    *((_DWORD *)this + 75),
    (_QWORD *)this + 39,
    0);
  CVisual::SetOpacity(this, 0.0);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
    McTemplateU0d(v2, (int)&UdwmFlickVisual_End, *((_DWORD *)this + 75));
}
