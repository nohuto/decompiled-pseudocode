/*
 * XREFs of ??_ESipcServer@@EEAAPEAXI@Z @ 0x1800D4700
 * Callers:
 *     ??_ESipcServer@@GGA@EAAPEAXI@Z @ 0x180039220 (--_ESipcServer@@GGA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SipcServer@@EEAA@XZ @ 0x1800D43EC (--1SipcServer@@EEAA@XZ.c)
 */

SipcServer *__fastcall SipcServer::`vector deleting destructor'(SipcServer *this, char a2)
{
  SipcServer::~SipcServer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x108);
  return this;
}
