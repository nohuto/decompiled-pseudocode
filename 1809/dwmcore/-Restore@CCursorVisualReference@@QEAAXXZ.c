/*
 * XREFs of ?Restore@CCursorVisualReference@@QEAAXXZ @ 0x180161638
 * Callers:
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18008B288 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800EA37C (--_GCCursorVisualReference@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x18009E3AC (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

void __fastcall CCursorVisualReference::Restore(CCursorVisualReference *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( v2 && *((_DWORD *)this + 7) )
    *(_BYTE *)(v2 + 94) ^= (*(_BYTE *)(v2 + 94) ^ (16 * *((_BYTE *)this + 24))) & 0x10;
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    *(_QWORD *)(v3 + 72) = 0LL;
    CResource::NotifyOnChanged(v3, 0, 0LL);
    ReleaseInterface<CCompositionSurfaceInfo>((CGdiSpriteBitmap **)this + 2);
  }
  *((_DWORD *)this + 7) = 0;
}
