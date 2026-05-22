/*
 * XREFs of ??_GSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@MEAAPEAXI@Z @ 0x180117C00
 * Callers:
 *     <none>
 * Callees:
 *     ??1SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@MEAA@XZ @ 0x180117B7C (--1SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::~SpatialGraphNodeReferenceFactory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x88);
  return this;
}
