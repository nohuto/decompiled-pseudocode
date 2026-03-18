/*
 * XREFs of ??_GCSharedSectionAnimationPrimitiveBuffer@@UEAAPEAXI@Z @ 0x180033650
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CSharedSectionAnimationPrimitiveBuffer@@UEAA@XZ @ 0x18003368C (--1CSharedSectionAnimationPrimitiveBuffer@@UEAA@XZ.c)
 */

CSharedSectionAnimationPrimitiveBuffer *__fastcall CSharedSectionAnimationPrimitiveBuffer::`scalar deleting destructor'(
        CSharedSectionAnimationPrimitiveBuffer *this,
        char a2)
{
  CSharedSectionAnimationPrimitiveBuffer::~CSharedSectionAnimationPrimitiveBuffer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
