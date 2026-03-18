/*
 * XREFs of ??_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z @ 0x18007AE90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x18007AD3C (--1CPrimitiveGroupDrawListGenerator@@EEAA@XZ.c)
 */

CPrimitiveGroupDrawListGenerator *__fastcall CPrimitiveGroupDrawListGenerator::`scalar deleting destructor'(
        CPrimitiveGroupDrawListGenerator *this,
        char a2)
{
  CPrimitiveGroupDrawListGenerator::~CPrimitiveGroupDrawListGenerator(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
