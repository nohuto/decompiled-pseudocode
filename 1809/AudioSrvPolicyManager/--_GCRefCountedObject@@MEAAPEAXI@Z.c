/*
 * XREFs of ??_GCRefCountedObject@@MEAAPEAXI@Z @ 0x18001B1A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800370D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CRefCountedObject *__fastcall CRefCountedObject::`scalar deleting destructor'(CRefCountedObject *this, char a2)
{
  *(_QWORD *)this = &CRefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x10);
  return this;
}
