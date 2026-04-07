/*
 * XREFs of ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x18009D220
 * Callers:
 *     ??1CTouchDragVisual@@MEAA@XZ @ 0x18009C88C (--1CTouchDragVisual@@MEAA@XZ.c)
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009CCD4 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18001AAC0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18004DD10 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     McTemplateU0 @ 0x18007DF78 (McTemplateU0.c)
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
