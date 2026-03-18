/*
 * XREFs of ??_GCDcompRenderTargetGroup@@MEAAPEAXI@Z @ 0x1800D63B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ??1CDcompRenderTargetGroup@@MEAA@XZ @ 0x1800D63F0 (--1CDcompRenderTargetGroup@@MEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CDcompRenderTargetGroup *__fastcall CDcompRenderTargetGroup::`scalar deleting destructor'(
        CDcompRenderTargetGroup *this,
        char a2)
{
  CDcompRenderTargetGroup::~CDcompRenderTargetGroup(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
