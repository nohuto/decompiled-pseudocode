/*
 * XREFs of ?Stop@CPressTapVisual@@UEAAXXZ @ 0x18009FC00
 * Callers:
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x18009F878 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x18009FCA0 (-UpdateTransition@CPressTapVisual@@MEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180019F10 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     McTemplateU0 @ 0x18007E2D8 (McTemplateU0.c)
 *     ?StopTimer@CPressTapVisual@@MEAAJXZ @ 0x18009FC50 (-StopTimer@CPressTapVisual@@MEAAJXZ.c)
 */

void __fastcall CPressTapVisual::Stop(CPressTapVisual *this)
{
  int v2; // r8d

  CPressTapVisual::StopTimer(this);
  CVisual::SetOpacity(this, 0.0);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0((int)&Microsoft_Windows_Dwm_Udwm_Provider_Context, (int)&UdwmPressTapVisual_End, v2);
}
