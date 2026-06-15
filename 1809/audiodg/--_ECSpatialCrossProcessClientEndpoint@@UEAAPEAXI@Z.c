/*
 * XREFs of ??_ECSpatialCrossProcessClientEndpoint@@UEAAPEAXI@Z @ 0x14005A0C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001B8FC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CSpatialCrossProcessClientEndpoint@@UEAA@XZ @ 0x140059BEC (--1CSpatialCrossProcessClientEndpoint@@UEAA@XZ.c)
 */

CSpatialCrossProcessClientEndpoint *__fastcall CSpatialCrossProcessClientEndpoint::`vector deleting destructor'(
        CSpatialCrossProcessClientEndpoint *this,
        char a2)
{
  CSpatialCrossProcessClientEndpoint::~CSpatialCrossProcessClientEndpoint(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
