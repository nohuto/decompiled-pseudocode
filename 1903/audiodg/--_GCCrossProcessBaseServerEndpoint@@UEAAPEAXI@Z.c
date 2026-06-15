/*
 * XREFs of ??_GCCrossProcessBaseServerEndpoint@@UEAAPEAXI@Z @ 0x14004E080
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015744 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x14004D9F4 (--1CCrossProcessBaseServerEndpoint@@UEAA@XZ.c)
 */

CCrossProcessBaseServerEndpoint *__fastcall CCrossProcessBaseServerEndpoint::`scalar deleting destructor'(
        CCrossProcessBaseServerEndpoint *this,
        int a2,
        int a3)
{
  char v3; // bl

  v3 = a2;
  CCrossProcessBaseServerEndpoint::~CCrossProcessBaseServerEndpoint(this, a2, a3);
  if ( (v3 & 1) != 0 )
    operator delete(this);
  return this;
}
