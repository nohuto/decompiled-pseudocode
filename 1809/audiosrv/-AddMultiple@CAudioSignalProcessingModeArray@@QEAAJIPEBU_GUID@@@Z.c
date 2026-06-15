/*
 * XREFs of ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x18004E468
 * Callers:
 *     ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x18004D234 (-GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x18004E4CC (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x18004ECF4 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 *     ?GetAPOModesSupportedForStreaming@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagpropertykey@@_NPEAVCAudioSignalProcessingModeArray@@@Z @ 0x18004F7D8 (-GetAPOModesSupportedForStreaming@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagproper.c)
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x18010936C (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18004EC60 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioSignalProcessingModeArray::AddMultiple(
        CAudioSignalProcessingModeArray *this,
        unsigned int a2,
        const struct _GUID *a3)
{
  int v3; // ebx

  v3 = 0;
  if ( !a2 )
    return 0LL;
  while ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(this, &a3[v3]) )
  {
    if ( ++v3 >= a2 )
      return 0LL;
  }
  return 2147942414LL;
}
