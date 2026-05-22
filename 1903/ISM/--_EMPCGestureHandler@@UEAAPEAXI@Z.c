/*
 * XREFs of ??_EMPCGestureHandler@@UEAAPEAXI@Z @ 0x18008D300
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCGestureHandler@@UEAA@XZ @ 0x18008D11C (--1MPCGestureHandler@@UEAA@XZ.c)
 */

MPCGestureHandler *__fastcall MPCGestureHandler::`vector deleting destructor'(MPCGestureHandler *this, char a2)
{
  MPCGestureHandler::~MPCGestureHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x3F0);
  return this;
}
