/*
 * XREFs of ??_GSipcEndpoint@@MEAAPEAXI@Z @ 0x1800A1480
 * Callers:
 *     <none>
 * Callees:
 *     ??1SipcEndpoint@@MEAA@XZ @ 0x1800A14BC (--1SipcEndpoint@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

SipcEndpoint *__fastcall SipcEndpoint::`scalar deleting destructor'(SipcEndpoint *this, char a2)
{
  SipcEndpoint::~SipcEndpoint(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA0);
  return this;
}
