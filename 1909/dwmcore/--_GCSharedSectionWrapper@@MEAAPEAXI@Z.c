/*
 * XREFs of ??_GCSharedSectionWrapper@@MEAAPEAXI@Z @ 0x1801F8E40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800789F0 (--1CResource@@MEAA@XZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800AC000 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CSharedSectionWrapper *__fastcall CSharedSectionWrapper::`scalar deleting destructor'(
        CSharedSectionWrapper *this,
        char a2)
{
  CGdiSpriteBitmap *v4; // rcx

  v4 = (CGdiSpriteBitmap *)*((_QWORD *)this + 7);
  if ( v4 )
    CGdiSpriteBitmap::Release(v4);
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
