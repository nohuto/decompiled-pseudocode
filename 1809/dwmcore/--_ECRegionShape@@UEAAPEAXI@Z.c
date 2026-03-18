/*
 * XREFs of ??_ECRegionShape@@UEAAPEAXI@Z @ 0x180092630
 * Callers:
 *     ??1?$unique_ptr@VCRegionShape@@U?$default_delete@VCRegionShape@@@std@@@std@@QEAA@XZ @ 0x18004872C (--1-$unique_ptr@VCRegionShape@@U-$default_delete@VCRegionShape@@@std@@@std@@QEAA@XZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B6E30 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?reset@?$unique_ptr@VCRegionShape@@U?$default_delete@VCRegionShape@@@std@@@std@@QEAAXPEAVCRegionShape@@@Z @ 0x18021DF30 (-reset@-$unique_ptr@VCRegionShape@@U-$default_delete@VCRegionShape@@@std@@@std@@QEAAXPEAVCRegion.c)
 * Callees:
 *     ??1CRegionShape@@UEAA@XZ @ 0x18009266C (--1CRegionShape@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

CRegionShape *__fastcall CRegionShape::`vector deleting destructor'(CRegionShape *this, char a2)
{
  CRegionShape::~CRegionShape(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x60uLL);
  return this;
}
