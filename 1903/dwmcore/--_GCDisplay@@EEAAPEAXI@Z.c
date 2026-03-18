/*
 * XREFs of ??_GCDisplay@@EEAAPEAXI@Z @ 0x1800AF6F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ??1CDisplay@@EEAA@XZ @ 0x1800AF730 (--1CDisplay@@EEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CDisplay *__fastcall CDisplay::`scalar deleting destructor'(CDisplay *this, char a2)
{
  CDisplay::~CDisplay(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
