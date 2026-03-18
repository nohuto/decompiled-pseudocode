/*
 * XREFs of ??_GCRegion@@QEAAPEAXI@Z @ 0x180168A5C
 * Callers:
 *     ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x1800ABE08 (-PrepareData@CMegaRect@@QEAAJAEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x1800C264C (--1CPrimitiveGroupDrawListGenerator@@EEAA@XZ.c)
 *     ?_Destroy@?$_Ref_count_obj@VCRegion@@@std@@EEAAXXZ @ 0x18016C8F0 (-_Destroy@-$_Ref_count_obj@VCRegion@@@std@@EEAAXXZ.c)
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x18022AADC (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

void **__fastcall CRegion::`scalar deleting destructor'(void **this, char a2)
{
  FastRegion::CRegion::FreeMemory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
