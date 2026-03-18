/*
 * XREFs of ?CopyRegionShape@CRegionShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800EDC98
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004D4E0 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008EE90 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CRegionShape::CopyRegionShape(
        CRegionShape *this,
        const struct CMILMatrix *a2,
        struct CRegionShape **a3)
{
  __int64 result; // rax
  struct CShape *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  result = CShape::CopyShape(this, a2, &v5);
  *a3 = v5;
  return result;
}
