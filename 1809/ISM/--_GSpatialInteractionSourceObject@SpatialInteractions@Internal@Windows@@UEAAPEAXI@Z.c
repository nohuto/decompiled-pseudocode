/*
 * XREFs of ??_GSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z @ 0x1800BAF70
 * Callers:
 *     <none>
 * Callees:
 *     ??1SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAA@XZ @ 0x1800BB008 (--1SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject *__fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::`scalar deleting destructor'(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject *this,
        char a2)
{
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::~SpatialInteractionSourceObject(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x98);
  return this;
}
