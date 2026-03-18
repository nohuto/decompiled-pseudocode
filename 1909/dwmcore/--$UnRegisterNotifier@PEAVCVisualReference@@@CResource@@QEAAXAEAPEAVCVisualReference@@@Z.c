/*
 * XREFs of ??$UnRegisterNotifier@PEAVCVisualReference@@@CResource@@QEAAXAEAPEAVCVisualReference@@@Z @ 0x1801C0B28
 * Callers:
 *     ??_GCCursorVisual@@UEAAPEAXI@Z @ 0x1802129C0 (--_GCCursorVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CResource::UnRegisterNotifier<CVisualReference *>(CResource *a1, struct CResource **a2)
{
  CResource::UnRegisterNotifierInternal(a1, *a2);
  *a2 = 0LL;
}
