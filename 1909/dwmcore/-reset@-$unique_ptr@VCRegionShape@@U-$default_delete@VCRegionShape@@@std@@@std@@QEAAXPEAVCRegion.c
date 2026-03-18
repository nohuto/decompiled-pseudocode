/*
 * XREFs of ?reset@?$unique_ptr@VCRegionShape@@U?$default_delete@VCRegionShape@@@std@@@std@@QEAAXPEAVCRegionShape@@@Z @ 0x18024A700
 * Callers:
 *     ??1?$out_param_t@V?$unique_ptr@VCRegionShape@@U?$default_delete@VCRegionShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1800EDC74 (--1-$out_param_t@V-$unique_ptr@VCRegionShape@@U-$default_delete@VCRegionShape@@@std@@@std@@@deta.c)
 * Callees:
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18004AF40 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 */

CRegionShape *__fastcall std::unique_ptr<CRegionShape>::reset(CRegionShape **a1, CRegionShape *a2)
{
  CRegionShape *result; // rax

  result = *a1;
  *a1 = a2;
  if ( result )
    return CRegionShape::`vector deleting destructor'(result, 1);
  return result;
}
