/*
 * XREFs of ?DetachFromChannel@CSpatialRemarshaler@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801F9080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSpatialRemarshaler::DetachFromChannel(CSpatialRemarshaler *this, struct CChannelContext *a2)
{
  CSceneResourceManager::UnregisterSceneListener(
    *(CSceneResourceManager **)(*((_QWORD *)this + 2) + 128LL),
    (struct ISceneNotificationListener *)(((unsigned __int64)this + 64) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
}
