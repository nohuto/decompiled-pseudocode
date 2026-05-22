/*
 * XREFs of ??_ESipcServer@@MEAAPEAXI@Z @ 0x1800A19E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SipcServer@@MEAA@XZ @ 0x1800A1A1C (--1SipcServer@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

SipcServer *__fastcall SipcServer::`vector deleting destructor'(SipcServer *this, char a2)
{
  SipcServer::~SipcServer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xC8);
  return this;
}
