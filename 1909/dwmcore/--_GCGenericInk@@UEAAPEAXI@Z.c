/*
 * XREFs of ??_GCGenericInk@@UEAAPEAXI@Z @ 0x18019D740
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CGenericInk@@UEAA@XZ @ 0x18021333C (--1CGenericInk@@UEAA@XZ.c)
 */

CGenericInk *__fastcall CGenericInk::`scalar deleting destructor'(CGenericInk *this, char a2)
{
  CGenericInk::~CGenericInk(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
