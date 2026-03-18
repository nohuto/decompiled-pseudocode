/*
 * XREFs of ??_ECHolographicComposition@@MEAAPEAXI@Z @ 0x1802429C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800789F0 (--1CResource@@MEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CHolographicComposition *__fastcall CHolographicComposition::`vector deleting destructor'(
        CHolographicComposition *this,
        char a2)
{
  *((_QWORD *)this + 8) = &CHolographicComposition::`vftable'{for `IHolographicComposition'};
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
