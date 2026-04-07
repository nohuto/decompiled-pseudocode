/*
 * XREFs of ?Stop@CPenPressHoldVisual@@UEAAXXZ @ 0x18009F1A0
 * Callers:
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009EFC4 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18001AAC0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     McTemplateU0d @ 0x18007DFB8 (McTemplateU0d.c)
 *     ?StopTimer@CPenPressHoldVisual@@MEAAJXZ @ 0x18009F1E0 (-StopTimer@CPenPressHoldVisual@@MEAAJXZ.c)
 */

void __fastcall CPenPressHoldVisual::Stop(CPenPressHoldVisual *this)
{
  __int64 v2; // rcx

  CPenPressHoldVisual::StopTimer(this);
  CVisual::SetOpacity(this, 0.0);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
    McTemplateU0d(v2, (int)&UdwmPenPressHoldVisual_End, 0);
}
