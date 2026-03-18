/*
 * XREFs of ?DetachFromChannel@CSpatialRemarshaler@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801CD1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSpatialRemarshaler::DetachFromChannel(CSpatialRemarshaler *this, struct CChannelContext *a2)
{
  CSpatialResourceManager::UnregisterSpatialListener(
    *(CSpatialResourceManager **)(*((_QWORD *)this + 2) + 136LL),
    (struct ISpatialNotificationListener *)(((unsigned __int64)this + 64) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
}
