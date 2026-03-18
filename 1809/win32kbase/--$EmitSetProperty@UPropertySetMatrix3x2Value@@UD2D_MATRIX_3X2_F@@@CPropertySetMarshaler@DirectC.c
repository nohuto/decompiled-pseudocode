/*
 * XREFs of ??$EmitSetProperty@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x1C000A0EC
 * Callers:
 *     ?EmitSetProperties@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000BEB4 (-EmitSetProperties@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?SetMarshalStatus@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAXIW4MarshalStatus@@@Z @ 0x1C000BE04 (-SetMarshalStatus@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator.c)
 *     ??$GetPropertyValue@UD2DVector3@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAPEAUD2DVector3@@I@Z @ 0x1C000BE60 (--$GetPropertyValue@UD2DVector3@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKer.c)
 *     ?GetMarshalStatus@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAA?AW4MarshalStatus@@I@Z @ 0x1C000BFE4 (-GetMarshalStatus@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator.c)
 *     ?GetDataType@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAA?AW4DCOMPOSITION_EXPRESSION_TYPE@@I@Z @ 0x1C000C034 (-GetDataType@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@Q.c)
 *     ?GetLocalOffset@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAII@Z @ 0x1C000C080 (-GetLocalOffset@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000C0D4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C000E928 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

char __fastcall DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetMatrix3x2Value,D2D_MATRIX_3X2_F>(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        unsigned int a3)
{
  int v3; // ebp
  char v7; // si
  char *v8; // rdi
  __int64 Property; // rax
  void *v11; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  v7 = 1;
  if ( (unsigned __int64)(4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 17) + 40LL)) < 0x34
    && !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v11) )
  {
    return 0;
  }
  DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x34uLL, &v11);
  v8 = (char *)v11;
  *(_DWORD *)v11 = 52;
  *(_QWORD *)(v8 + 4) = 0LL;
  *(_QWORD *)(v8 + 12) = 0LL;
  *(_QWORD *)(v8 + 20) = 0LL;
  *((_DWORD *)v8 + 1) = 342;
  *((_DWORD *)v8 + 2) = *(_DWORD *)(a1 + 24);
  *((_DWORD *)v8 + 3) = a3;
  *((_DWORD *)v8 + 4) = PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetLocalOffset(
                          a1 + 56,
                          a3);
  *((_DWORD *)v8 + 5) = PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetDataType(
                          a1 + 56,
                          a3);
  LOBYTE(v3) = (unsigned int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetMarshalStatus(
                               a1 + 56,
                               a3) == 1;
  *((_DWORD *)v8 + 6) = v3;
  Property = PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetPropertyValue<D2DVector3>(
               a1 + 56,
               a3);
  *(_OWORD *)(v8 + 28) = *(_OWORD *)Property;
  *(_QWORD *)(v8 + 44) = *(_QWORD *)(Property + 16);
  PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::SetMarshalStatus(a1 + 56, a3, 0LL);
  return v7;
}
