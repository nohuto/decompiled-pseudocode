/*
 * XREFs of ??_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z @ 0x1800C2610
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x1800C264C (--1CPrimitiveGroupDrawListGenerator@@EEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

CPrimitiveGroupDrawListGenerator *__fastcall CPrimitiveGroupDrawListGenerator::`scalar deleting destructor'(
        CPrimitiveGroupDrawListGenerator *this,
        char a2)
{
  CPrimitiveGroupDrawListGenerator::~CPrimitiveGroupDrawListGenerator(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x90uLL);
  return this;
}
