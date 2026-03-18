/*
 * XREFs of ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800DDB9C
 * Callers:
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x180023B50 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1800D684C (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CCursorVisualReference@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x1800D6948 (-Create@CCursorVisualReference@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800D9098 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801753B4 (--1CComposition@@MEAA@XZ.c)
 *     ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x1801764F8 (-RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x180025538 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ?Restore@CCursorVisualReference@@QEAAXXZ @ 0x18018B8A8 (-Restore@CCursorVisualReference@@QEAAXXZ.c)
 */

CCursorVisualReference *__fastcall CCursorVisualReference::`scalar deleting destructor'(CCursorVisualReference *this)
{
  if ( *((_DWORD *)this + 7) )
    CCursorVisualReference::Restore(this);
  ReleaseInterface<CDisplay>((__int64 *)this + 1);
  operator delete(this);
  return this;
}
