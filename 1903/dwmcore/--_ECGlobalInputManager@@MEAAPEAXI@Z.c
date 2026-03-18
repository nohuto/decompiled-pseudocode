/*
 * XREFs of ??_ECGlobalInputManager@@MEAAPEAXI@Z @ 0x180237430
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CGlobalInputManager@@MEAA@XZ @ 0x180237228 (--1CGlobalInputManager@@MEAA@XZ.c)
 */

CGlobalInputManager *__fastcall CGlobalInputManager::`vector deleting destructor'(CGlobalInputManager *this, char a2)
{
  CGlobalInputManager::~CGlobalInputManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
