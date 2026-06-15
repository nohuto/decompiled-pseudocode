/*
 * XREFs of ??_GCSpatialCrossProcessServerEndpoint@@UEAAPEAXI@Z @ 0x14005A100
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001B8FC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x140059C78 (--1CSpatialCrossProcessServerEndpoint@@UEAA@XZ.c)
 */

CSpatialCrossProcessServerEndpoint *__fastcall CSpatialCrossProcessServerEndpoint::`scalar deleting destructor'(
        CSpatialCrossProcessServerEndpoint *this,
        char a2)
{
  CSpatialCrossProcessServerEndpoint::~CSpatialCrossProcessServerEndpoint(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
