/*
 * XREFs of ??1?$unique_ptr@VCRegionShape@@U?$default_delete@VCRegionShape@@@std@@@std@@QEAA@XZ @ 0x1800AE384
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD330 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CRegionShape *__fastcall std::unique_ptr<CRegionShape>::~unique_ptr<CRegionShape>(CRegionShape **a1)
{
  CRegionShape *v1; // rcx
  CRegionShape *result; // rax

  v1 = *a1;
  if ( v1 )
    return CRegionShape::`vector deleting destructor'(v1, 1);
  return result;
}
