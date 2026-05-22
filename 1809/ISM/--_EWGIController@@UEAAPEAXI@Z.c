/*
 * XREFs of ??_EWGIController@@UEAAPEAXI@Z @ 0x18006CEA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1WGIController@@UEAA@XZ @ 0x18006CEDC (--1WGIController@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

WGIController *__fastcall WGIController::`vector deleting destructor'(WGIController *this, char a2)
{
  WGIController::~WGIController(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x100);
  return this;
}
