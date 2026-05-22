/*
 * XREFs of ??_GSharedObjectBase@@MEAAPEAXI@Z @ 0x1800D4640
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SharedObjectBase@@MEAA@XZ @ 0x1800D4314 (--1SharedObjectBase@@MEAA@XZ.c)
 */

SharedObjectBase *__fastcall SharedObjectBase::`scalar deleting destructor'(SharedObjectBase *this, char a2)
{
  SharedObjectBase::~SharedObjectBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x10);
  return this;
}
