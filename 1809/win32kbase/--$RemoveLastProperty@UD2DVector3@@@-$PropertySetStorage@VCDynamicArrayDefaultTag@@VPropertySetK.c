/*
 * XREFs of ??$RemoveLastProperty@UD2DVector3@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAXXZ @ 0x1C00AE1CC
 * Callers:
 *     ??$AddProperty@UD2DVector3@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DVector3@@@Z @ 0x1C00ADEC8 (--$AddProperty@UD2DVector3@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@.c)
 * Callees:
 *     ?GetCount@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@QEBAIXZ @ 0x1C016D040 (-GetCount@-$CDynamicArray@UPropertyInfo@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VProperty.c)
 */

__int64 __fastcall PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::RemoveLastProperty<D2DVector3>(
        __int64 a1)
{
  int v1; // eax
  unsigned int v2; // edx
  __int64 result; // rax
  unsigned int Count; // eax

  v1 = *(_DWORD *)(a1 + 8);
  if ( !v1 || (v2 = *(_DWORD *)(a1 + 24), v2 < 0xC) )
  {
    Count = CDynamicArray<PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::PropertyInfo,2003858261>::GetCount();
    KeBugCheckEx(0x164u, 0x1EuLL, 0xFFFFFFFF8000FFFFuLL, 0LL, Count);
  }
  *(_DWORD *)(a1 + 8) = v1 - 1;
  result = v2 - 12;
  *(_DWORD *)(a1 + 24) = result;
  return result;
}
