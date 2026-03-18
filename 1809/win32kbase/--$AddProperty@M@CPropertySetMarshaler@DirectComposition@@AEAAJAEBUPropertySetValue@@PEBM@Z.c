/*
 * XREFs of ??$AddProperty@M@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBM@Z @ 0x1C00ADC98
 * Callers:
 *     ?SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C006A8B0 (-SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX.c)
 * Callees:
 *     ?SetMarshalStatus@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAXIW4MarshalStatus@@@Z @ 0x1C000BE04 (-SetMarshalStatus@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator.c)
 *     ?GetLocalOffset@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAII@Z @ 0x1C000C080 (-GetLocalOffset@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@.c)
 *     ??$RemoveLastProperty@M@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAXXZ @ 0x1C00AE06C (--$RemoveLastProperty@M@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAll.c)
 *     ??$AddProperty@M@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBMPEAI@Z @ 0x1C016C924 (--$AddProperty@M@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@.c)
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::AddProperty<float>(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rdi
  unsigned int v5; // ebx
  unsigned int v6; // esi
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = (__int64 *)(a1 + 56);
  v5 = 0;
  if ( (int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::AddProperty<float>(
              a1 + 56,
              *(unsigned int *)(a2 + 8),
              a3,
              &v8) >= 0 )
  {
    v6 = v8;
    if ( __PAIR64__(
           PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetLocalOffset((__int64)v3, v8),
           v6) == *(_QWORD *)a2 )
    {
      PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::SetMarshalStatus(v3, v6, 1);
    }
    else
    {
      v5 = -1073741811;
      PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::RemoveLastProperty<float>(v3);
    }
  }
  else
  {
    return (unsigned int)-1073741684;
  }
  return v5;
}
