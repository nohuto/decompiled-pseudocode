/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@VCRegionShape@@U?$default_delete@VCRegionShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1800EBA94
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD330 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@VCRegionShape@@U?$default_delete@VCRegionShape@@@std@@@std@@QEAAXPEAVCRegionShape@@@Z @ 0x18024BE10 (-reset@-$unique_ptr@VCRegionShape@@U-$default_delete@VCRegionShape@@@std@@@std@@QEAAXPEAVCRegion.c)
 */

__int64 __fastcall wil::details::out_param_t<std::unique_ptr<CRegionShape>>::~out_param_t<std::unique_ptr<CRegionShape>>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return std::unique_ptr<CRegionShape>::reset(*(_QWORD *)a1, *(_QWORD *)(a1 + 8));
  return result;
}
