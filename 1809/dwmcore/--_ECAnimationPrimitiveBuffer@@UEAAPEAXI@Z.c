/*
 * XREFs of ??_ECAnimationPrimitiveBuffer@@UEAAPEAXI@Z @ 0x1801D4700
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

CAnimationPrimitiveBuffer *__fastcall CAnimationPrimitiveBuffer::`vector deleting destructor'(
        CAnimationPrimitiveBuffer *this,
        char a2)
{
  *(_QWORD *)this = &CAnimationPrimitiveBuffer::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
