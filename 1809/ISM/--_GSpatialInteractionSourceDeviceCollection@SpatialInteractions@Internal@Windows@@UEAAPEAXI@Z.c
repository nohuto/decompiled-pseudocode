/*
 * XREFs of ??_GSpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z @ 0x1800B6330
 * Callers:
 *     <none>
 * Callees:
 *     ??1SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAA@XZ @ 0x1800B636C (--1SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *__fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::`scalar deleting destructor'(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        char a2)
{
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::~SpatialInteractionSourceDeviceCollection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2B8);
  return this;
}
