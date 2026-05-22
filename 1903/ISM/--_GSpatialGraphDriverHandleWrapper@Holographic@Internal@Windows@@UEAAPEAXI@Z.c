/*
 * XREFs of ??_GSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAAPEAXI@Z @ 0x180152CC0
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@EEAAXXZ @ 0x180160460 (-_Destroy@-$_Ref_count_obj@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ @ 0x180151FD4 (--1SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ.c)
 */

Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *__fastcall Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::`scalar deleting destructor'(
        Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *this,
        char a2)
{
  Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::~SpatialGraphDriverHandleWrapper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE8);
  return this;
}
