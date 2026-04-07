/*
 * XREFs of ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x18009D580
 * Callers:
 *     ??1CTouchDragVisual@@MEAA@XZ @ 0x18009CBEC (--1CTouchDragVisual@@MEAA@XZ.c)
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009D034 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180019F10 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18004DE60 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     McTemplateU0 @ 0x18007E2D8 (McTemplateU0.c)
 */

void __fastcall CTouchDragVisual::Stop(CTouchDragVisual *this)
{
  int v2; // r8d

  CTouchVisual::UnRegisterGlobalTimer(this);
  CVisual::SetOpacity(this, 0.0);
  if ( !*((_BYTE *)this + 441) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
      McTemplateU0((int)&Microsoft_Windows_Dwm_Udwm_Provider_Context, (int)&UdwmTouchDragVisual_End, v2);
    *((_BYTE *)this + 441) = 1;
  }
}
