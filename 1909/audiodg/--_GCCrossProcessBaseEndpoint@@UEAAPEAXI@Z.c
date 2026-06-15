/*
 * XREFs of ??_GCCrossProcessBaseEndpoint@@UEAAPEAXI@Z @ 0x14004DF20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015B54 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CCrossProcessBaseEndpoint@@UEAA@XZ @ 0x14004D820 (--1CCrossProcessBaseEndpoint@@UEAA@XZ.c)
 */

CCrossProcessBaseEndpoint *__fastcall CCrossProcessBaseEndpoint::`scalar deleting destructor'(
        CCrossProcessBaseEndpoint *this,
        int a2,
        int a3)
{
  char v3; // bl

  v3 = a2;
  CCrossProcessBaseEndpoint::~CCrossProcessBaseEndpoint(this, a2, a3);
  if ( (v3 & 1) != 0 )
    operator delete(this);
  return this;
}
