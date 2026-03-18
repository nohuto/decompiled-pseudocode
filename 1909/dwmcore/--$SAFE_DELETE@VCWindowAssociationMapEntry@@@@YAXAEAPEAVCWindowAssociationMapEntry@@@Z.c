/*
 * XREFs of ??$SAFE_DELETE@VCWindowAssociationMapEntry@@@@YAXAEAPEAVCWindowAssociationMapEntry@@@Z @ 0x1801A9B9C
 * Callers:
 *     ?AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x18004D160 (-AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x1801A9C70 (-AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 * Callees:
 *     ??_GCWindowAssociationMapEntry@@QEAAPEAXI@Z @ 0x18004B428 (--_GCWindowAssociationMapEntry@@QEAAPEAXI@Z.c)
 */

CWindowAssociationMapEntry *__fastcall SAFE_DELETE<CWindowAssociationMapEntry>(CWindowAssociationMapEntry **a1)
{
  CWindowAssociationMapEntry *v2; // rcx
  CWindowAssociationMapEntry *result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CWindowAssociationMapEntry::`scalar deleting destructor'(v2);
    *a1 = 0LL;
  }
  return result;
}
