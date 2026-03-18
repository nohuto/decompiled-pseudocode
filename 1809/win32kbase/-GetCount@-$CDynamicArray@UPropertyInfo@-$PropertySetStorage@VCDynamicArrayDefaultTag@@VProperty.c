/*
 * XREFs of ?GetCount@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@QEBAIXZ @ 0x1C016D040
 * Callers:
 *     ?SetMarshalStatus@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAXIW4MarshalStatus@@@Z @ 0x1C000BE04 (-SetMarshalStatus@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator.c)
 *     ??$GetPropertyValue@UD2DVector3@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAPEAUD2DVector3@@I@Z @ 0x1C000BE60 (--$GetPropertyValue@UD2DVector3@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKer.c)
 *     ?GetMarshalStatus@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAA?AW4MarshalStatus@@I@Z @ 0x1C000BFE4 (-GetMarshalStatus@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator.c)
 *     ?GetDataType@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAA?AW4DCOMPOSITION_EXPRESSION_TYPE@@I@Z @ 0x1C000C034 (-GetDataType@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@Q.c)
 *     ?GetLocalOffset@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAII@Z @ 0x1C000C080 (-GetLocalOffset@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@.c)
 *     ??$RemoveLastProperty@M@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAXXZ @ 0x1C00AE06C (--$RemoveLastProperty@M@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAll.c)
 *     ??$RemoveLastProperty@UD2DMatrix@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAXXZ @ 0x1C00AE0C4 (--$RemoveLastProperty@UD2DMatrix@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKe.c)
 *     ??$RemoveLastProperty@UD2DVector4@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAXXZ @ 0x1C00AE11C (--$RemoveLastProperty@UD2DVector4@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetK.c)
 *     ??$RemoveLastProperty@UD2DVector2@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAXXZ @ 0x1C00AE174 (--$RemoveLastProperty@UD2DVector2@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetK.c)
 *     ??$RemoveLastProperty@UD2DVector3@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAXXZ @ 0x1C00AE1CC (--$RemoveLastProperty@UD2DVector3@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetK.c)
 *     ??$RemoveLastProperty@UD2D_MATRIX_3X2_F@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAXXZ @ 0x1C00AE224 (--$RemoveLastProperty@UD2D_MATRIX_3X2_F@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VProper.c)
 *     ??$RemoveLastProperty@_N@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAXXZ @ 0x1C00AE27C (--$RemoveLastProperty@_N@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDynamicArray<PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::PropertyInfo,2003858261>::GetCount(
        __int64 a1)
{
  return *(unsigned int *)(a1 + 8);
}
