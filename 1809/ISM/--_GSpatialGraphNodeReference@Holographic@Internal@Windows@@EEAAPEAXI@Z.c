/*
 * XREFs of ??_GSpatialGraphNodeReference@Holographic@Internal@Windows@@EEAAPEAXI@Z @ 0x180115FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ @ 0x180115D18 (--1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

Windows::Internal::Holographic::SpatialGraphNodeReference *__fastcall Windows::Internal::Holographic::SpatialGraphNodeReference::`scalar deleting destructor'(
        Windows::Internal::Holographic::SpatialGraphNodeReference *this,
        char a2)
{
  Windows::Internal::Holographic::SpatialGraphNodeReference::~SpatialGraphNodeReference(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x80);
  return this;
}
