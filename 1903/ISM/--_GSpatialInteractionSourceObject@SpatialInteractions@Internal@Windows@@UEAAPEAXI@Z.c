/*
 * XREFs of ??_GSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z @ 0x1800EB820
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAA@XZ @ 0x1800EADA8 (--1SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAA@XZ.c)
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
