/*
 * XREFs of ??_ESpatialGraphDriverClient@Holographic@Internal@Windows@@EEAAPEAXI@Z @ 0x180111AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SpatialGraphDriverClient@Holographic@Internal@Windows@@EEAA@XZ @ 0x1801117F0 (--1SpatialGraphDriverClient@Holographic@Internal@Windows@@EEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

Windows::Internal::Holographic::SpatialGraphDriverClient *__fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::`vector deleting destructor'(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        char a2)
{
  Windows::Internal::Holographic::SpatialGraphDriverClient::~SpatialGraphDriverClient(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x180);
  return this;
}
