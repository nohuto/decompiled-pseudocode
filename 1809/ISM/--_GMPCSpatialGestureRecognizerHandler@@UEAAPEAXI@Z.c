/*
 * XREFs of ??_GMPCSpatialGestureRecognizerHandler@@UEAAPEAXI@Z @ 0x18004F700
 * Callers:
 *     <none>
 * Callees:
 *     ??1MPCSpatialGestureRecognizerHandler@@UEAA@XZ @ 0x18004F73C (--1MPCSpatialGestureRecognizerHandler@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

MPCSpatialGestureRecognizerHandler *__fastcall MPCSpatialGestureRecognizerHandler::`scalar deleting destructor'(
        MPCSpatialGestureRecognizerHandler *this,
        char a2)
{
  MPCSpatialGestureRecognizerHandler::~MPCSpatialGestureRecognizerHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xD8);
  return this;
}
