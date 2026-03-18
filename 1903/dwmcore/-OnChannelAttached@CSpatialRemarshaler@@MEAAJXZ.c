/*
 * XREFs of ?OnChannelAttached@CSpatialRemarshaler@@MEAAJXZ @ 0x1801FA7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x18017C308 (-RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 */

__int64 __fastcall CSpatialRemarshaler::OnChannelAttached(CSpatialRemarshaler *this)
{
  CSceneResourceManager::RegisterSceneListener(
    *(CSceneResourceManager **)(*((_QWORD *)this + 2) + 128LL),
    (struct ISceneNotificationListener *)(((unsigned __int64)this + 64) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  return 0LL;
}
