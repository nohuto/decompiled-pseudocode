/*
 * XREFs of ??1CTouchPressHoldVisual@@MEAA@XZ @ 0x1800B08B0
 * Callers:
 *     ??_ECTouchPressHoldVisual@@MEAAPEAXI@Z @ 0x1800B08F0 (--_ECTouchPressHoldVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Stop@CTouchPressHoldVisual@@UEAAXXZ @ 0x1800B0EF0 (-Stop@CTouchPressHoldVisual@@UEAAXXZ.c)
 */

void __fastcall CTouchPressHoldVisual::~CTouchPressHoldVisual(CTouchPressHoldVisual *this)
{
  *(_QWORD *)this = &CTouchPressHoldVisual::`vftable';
  CTouchPressHoldVisual::Stop(this);
  *(_QWORD *)this = &CTouchVisual::`vftable';
  CRenderDataVisual::~CRenderDataVisual((CBaseObject **)this);
}
