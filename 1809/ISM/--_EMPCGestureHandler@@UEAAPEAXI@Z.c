/*
 * XREFs of ??_EMPCGestureHandler@@UEAAPEAXI@Z @ 0x18004D3D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1MPCGestureHandler@@UEAA@XZ @ 0x18004D418 (--1MPCGestureHandler@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

MPCGestureHandler *__fastcall MPCGestureHandler::`vector deleting destructor'(MPCGestureHandler *this, char a2)
{
  MPCGestureHandler::~MPCGestureHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x3E8);
  return this;
}
