/*
 * XREFs of ??_ECRegionShape@@UEAAPEAXI@Z @ 0x180028290
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800677D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??1?$unique_ptr@VCRegionShape@@U?$default_delete@VCRegionShape@@@std@@@std@@QEAA@XZ @ 0x1800AE384 (--1-$unique_ptr@VCRegionShape@@U-$default_delete@VCRegionShape@@@std@@@std@@QEAA@XZ.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x18024B38C (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 *     ?reset@?$unique_ptr@VCRegionShape@@U?$default_delete@VCRegionShape@@@std@@@std@@QEAAXPEAVCRegionShape@@@Z @ 0x18024BE10 (-reset@-$unique_ptr@VCRegionShape@@U-$default_delete@VCRegionShape@@@std@@@std@@QEAAXPEAVCRegion.c)
 * Callees:
 *     ??1CRegionShape@@UEAA@XZ @ 0x1800282CC (--1CRegionShape@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

CRegionShape *__fastcall CRegionShape::`vector deleting destructor'(CRegionShape *this, char a2)
{
  CRegionShape::~CRegionShape(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x60uLL);
  return this;
}
