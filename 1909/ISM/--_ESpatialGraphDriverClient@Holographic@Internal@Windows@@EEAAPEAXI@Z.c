/*
 * XREFs of ??_ESpatialGraphDriverClient@Holographic@Internal@Windows@@EEAAPEAXI@Z @ 0x180152C70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SpatialGraphDriverClient@Holographic@Internal@Windows@@EEAA@XZ @ 0x180151D10 (--1SpatialGraphDriverClient@Holographic@Internal@Windows@@EEAA@XZ.c)
 */

Windows::Internal::Holographic::SpatialGraphDriverClient *__fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::`vector deleting destructor'(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        void *a2)
{
  char v2; // bl

  v2 = (char)a2;
  Windows::Internal::Holographic::SpatialGraphDriverClient::~SpatialGraphDriverClient(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x180);
  return this;
}
