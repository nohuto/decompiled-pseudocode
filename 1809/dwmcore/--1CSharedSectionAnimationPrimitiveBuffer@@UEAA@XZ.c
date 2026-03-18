/*
 * XREFs of ??1CSharedSectionAnimationPrimitiveBuffer@@UEAA@XZ @ 0x180021D5C
 * Callers:
 *     ??_GCSharedSectionAnimationPrimitiveBuffer@@UEAAPEAXI@Z @ 0x180021D20 (--_GCSharedSectionAnimationPrimitiveBuffer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 */

void __fastcall CSharedSectionAnimationPrimitiveBuffer::~CSharedSectionAnimationPrimitiveBuffer(
        CSharedSectionAnimationPrimitiveBuffer *this)
{
  CGdiSpriteBitmap *v2; // rcx

  *(_QWORD *)this = &CSharedSectionAnimationPrimitiveBuffer::`vftable';
  v2 = (CGdiSpriteBitmap *)*((_QWORD *)this + 2);
  if ( v2 )
    CGdiSpriteBitmap::Release(v2);
  *(_QWORD *)this = &CAnimationPrimitiveBuffer::`vftable';
}
