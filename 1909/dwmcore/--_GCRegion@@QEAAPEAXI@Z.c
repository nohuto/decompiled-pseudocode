/*
 * XREFs of ??_GCRegion@@QEAAPEAXI@Z @ 0x18018233C
 * Callers:
 *     ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18003B430 (-PrepareData@CMegaRect@@QEAAJAEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x18007AD3C (--1CPrimitiveGroupDrawListGenerator@@EEAA@XZ.c)
 *     ?_Destroy@?$_Ref_count_obj@VCRegion@@@std@@EEAAXXZ @ 0x1801860C0 (-_Destroy@-$_Ref_count_obj@VCRegion@@@std@@EEAAXXZ.c)
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x180256C00 (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BA758 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

void **__fastcall CRegion::`scalar deleting destructor'(void **this, char a2)
{
  FastRegion::CRegion::FreeMemory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
