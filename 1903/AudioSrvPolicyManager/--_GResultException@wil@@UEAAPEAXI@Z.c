/*
 * XREFs of ??_GResultException@wil@@UEAAPEAXI@Z @ 0x180002320
 * Callers:
 *     <none>
 * Callees:
 *     ??1ResultException@wil@@UEAA@XZ @ 0x18000235C (--1ResultException@wil@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180034AC4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

wil::ResultException *__fastcall wil::ResultException::`scalar deleting destructor'(
        wil::ResultException *this,
        char a2)
{
  wil::ResultException::~ResultException(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xC8);
  return this;
}
