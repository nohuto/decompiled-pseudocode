/*
 * XREFs of ??_GCPrimitiveColor@@MEAAPEAXI@Z @ 0x18019F79C
 * Callers:
 *     ??_ECPrimitiveColor@@O7EAAPEAXI@Z @ 0x1800ECFC0 (--_ECPrimitiveColor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CPrimitiveColor@@MEAA@XZ @ 0x1801EF4BC (--1CPrimitiveColor@@MEAA@XZ.c)
 */

CPrimitiveColor *__fastcall CPrimitiveColor::`scalar deleting destructor'(CPrimitiveColor *this, char a2)
{
  CPrimitiveColor::~CPrimitiveColor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
