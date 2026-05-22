/*
 * XREFs of ??_GSipcEndpoint@@EEAAPEAXI@Z @ 0x1800D4440
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SipcEndpoint@@EEAA@XZ @ 0x1800D40F8 (--1SipcEndpoint@@EEAA@XZ.c)
 */

SipcEndpoint *__fastcall SipcEndpoint::`scalar deleting destructor'(SipcEndpoint *this, char a2)
{
  SipcEndpoint::~SipcEndpoint(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xC0);
  return this;
}
