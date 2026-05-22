/*
 * XREFs of ??_EWGIController@@UEAAPEAXI@Z @ 0x1800A8E90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1WGIController@@UEAA@XZ @ 0x1800A8ABC (--1WGIController@@UEAA@XZ.c)
 */

WGIController *__fastcall WGIController::`vector deleting destructor'(WGIController *this, char a2)
{
  WGIController::~WGIController(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x120);
  return this;
}
