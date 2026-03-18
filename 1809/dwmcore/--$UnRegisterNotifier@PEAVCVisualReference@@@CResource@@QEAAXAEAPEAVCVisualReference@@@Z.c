/*
 * XREFs of ??$UnRegisterNotifier@PEAVCVisualReference@@@CResource@@QEAAXAEAPEAVCVisualReference@@@Z @ 0x180193CA0
 * Callers:
 *     ??_GCCursorVisual@@UEAAPEAXI@Z @ 0x180193CD0 (--_GCCursorVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CResource::UnRegisterNotifier<CVisualReference *>(CResource *a1, struct CResource **a2)
{
  CResource::UnRegisterNotifierInternal(a1, *a2);
  *a2 = 0LL;
}
