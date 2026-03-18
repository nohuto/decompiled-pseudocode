/*
 * XREFs of ??_GCRenderTargetManager@@EEAAPEAXI@Z @ 0x180188D20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CRenderTargetManager@@EEAA@XZ @ 0x180188CDC (--1CRenderTargetManager@@EEAA@XZ.c)
 */

void **__fastcall CRenderTargetManager::`scalar deleting destructor'(void **this, char a2)
{
  CRenderTargetManager::~CRenderTargetManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse((CSwRenderTargetGetBounds *)this);
    else
      operator delete(this);
  }
  return this;
}
