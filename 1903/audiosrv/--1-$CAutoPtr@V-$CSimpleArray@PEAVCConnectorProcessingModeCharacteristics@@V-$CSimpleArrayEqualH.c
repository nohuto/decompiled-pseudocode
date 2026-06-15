/*
 * XREFs of ??1?$CAutoPtr@V?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x180115194
 * Callers:
 *     _CEndpointCharacteristics::GetProcessingModeCharacteristicsFromPropertyStore_::_1_::dtor$0 @ 0x180071972 (_CEndpointCharacteristics--GetProcessingModeCharacteristicsFromPropertyStore_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::GetProcessingModeCharacteristicsFromPropertyStore_::_1_::dtor$1 @ 0x180071984 (_CEndpointCharacteristics--GetProcessingModeCharacteristicsFromPropertyStore_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$7 @ 0x180071A5F (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$7.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$8 @ 0x180071A78 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$8.c)
 *     _CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics_::_1_::dtor$0 @ 0x180116E34 (_CEndpointCharacteristics--DiscoverConnectorProcessingModeCharacteristics_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ATL::CAutoPtr<ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>>::~CAutoPtr<ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>>(
        __int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    if ( *(_QWORD *)v1 )
    {
      free(*(void **)v1);
      *(_QWORD *)v1 = 0LL;
    }
    *(_DWORD *)(v1 + 8) = 0;
    *(_DWORD *)(v1 + 12) = 0;
    operator delete((void *)v1, (const struct std::nothrow_t *)0x10);
  }
  *a1 = 0LL;
}
