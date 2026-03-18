/*
 * XREFs of ??$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z @ 0x18002AEC8
 * Callers:
 *     ?UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ @ 0x180029A90 (-UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ.c)
 *     ?UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ @ 0x18002AE80 (-UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CResource::UnRegisterNotifier<CImageSource *>(CResource *a1, _QWORD *a2)
{
  CResource::UnRegisterNotifierInternal(
    a1,
    (struct CResource *)((*a2 + 16LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*a2 >> 64)));
  *a2 = 0LL;
}
