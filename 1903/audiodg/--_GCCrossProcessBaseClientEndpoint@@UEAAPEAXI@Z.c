/*
 * XREFs of ??_GCCrossProcessBaseClientEndpoint@@UEAAPEAXI@Z @ 0x14004E000
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015744 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CCrossProcessBaseClientEndpoint@@UEAA@XZ @ 0x14004D8E4 (--1CCrossProcessBaseClientEndpoint@@UEAA@XZ.c)
 */

CCrossProcessBaseClientEndpoint *__fastcall CCrossProcessBaseClientEndpoint::`scalar deleting destructor'(
        CCrossProcessBaseClientEndpoint *this,
        char a2)
{
  CCrossProcessBaseClientEndpoint::~CCrossProcessBaseClientEndpoint(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
