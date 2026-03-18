/*
 * XREFs of ??_ECSpatialRemarshaler@@UEAAPEAXI@Z @ 0x1801F9020
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800789F0 (--1CResource@@MEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CSpatialRemarshaler *__fastcall CSpatialRemarshaler::`vector deleting destructor'(CSpatialRemarshaler *this, char a2)
{
  *((_QWORD *)this + 8) = &CSpatialRemarshaler::`vftable'{for `ISceneNotificationListener'};
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
