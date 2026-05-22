/*
 * XREFs of ?Close@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXXZ @ 0x18015381C
 * Callers:
 *     ??1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ @ 0x180151BC8 (--1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ.c)
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x18015C010 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?UnregisterCmNotif@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAX_N@Z @ 0x18015FFEC (-UnregisterCmNotif@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAX_N@Z.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::Close(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *this)
{
  Windows::Internal::Holographic::HolographicDriverHandleWrapper::UnregisterCmNotif(this, 0);
  Windows::Internal::Holographic::HolographicDriverHandleWrapper::CloseDriverHandle(this, 6u);
}
