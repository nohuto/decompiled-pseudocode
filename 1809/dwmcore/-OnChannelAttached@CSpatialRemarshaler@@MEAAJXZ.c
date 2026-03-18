/*
 * XREFs of ?OnChannelAttached@CSpatialRemarshaler@@MEAAJXZ @ 0x1801CD1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterSpatialListener@CSpatialResourceManager@@QEAAXPEAUISpatialNotificationListener@@@Z @ 0x180156F58 (-RegisterSpatialListener@CSpatialResourceManager@@QEAAXPEAUISpatialNotificationListener@@@Z.c)
 */

__int64 __fastcall CSpatialRemarshaler::OnChannelAttached(CSpatialRemarshaler *this)
{
  CSpatialResourceManager::RegisterSpatialListener(
    *(CSpatialResourceManager **)(*((_QWORD *)this + 2) + 136LL),
    (struct ISpatialNotificationListener *)(((unsigned __int64)this + 64) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  return 0LL;
}
