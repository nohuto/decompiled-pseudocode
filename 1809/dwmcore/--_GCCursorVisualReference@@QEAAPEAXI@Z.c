/*
 * XREFs of ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800EA37C
 * Callers:
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x18007AC24 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18008B288 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1800EA1EC (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CCursorVisualReference@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x1800EA2F0 (-Create@CCursorVisualReference@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x18014A94C (--1CComposition@@MEAA@XZ.c)
 *     ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18014BEA0 (-RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x18006E0A0 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     ?Restore@CCursorVisualReference@@QEAAXXZ @ 0x180161638 (-Restore@CCursorVisualReference@@QEAAXXZ.c)
 */

CCursorVisualReference *__fastcall CCursorVisualReference::`scalar deleting destructor'(CCursorVisualReference *this)
{
  if ( *((_DWORD *)this + 7) )
    CCursorVisualReference::Restore(this);
  ReleaseInterface<CDisplay>((__int64 *)this + 1);
  operator delete(this, 0x20uLL);
  return this;
}
