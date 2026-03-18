/*
 * XREFs of ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800DCF2C
 * Callers:
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x1800B46D4 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1800D659C (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CCursorVisualReference@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x1800D6698 (-Create@CCursorVisualReference@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800D896C (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180176B24 (--1CComposition@@MEAA@XZ.c)
 *     ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x180177C68 (-RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x18002B298 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     ?Restore@CCursorVisualReference@@QEAAXXZ @ 0x18018CF88 (-Restore@CCursorVisualReference@@QEAAXXZ.c)
 */

CCursorVisualReference *__fastcall CCursorVisualReference::`scalar deleting destructor'(CCursorVisualReference *this)
{
  if ( *((_DWORD *)this + 7) )
    CCursorVisualReference::Restore(this);
  ReleaseInterface<CDisplay>((__int64 *)this + 1);
  operator delete(this);
  return this;
}
