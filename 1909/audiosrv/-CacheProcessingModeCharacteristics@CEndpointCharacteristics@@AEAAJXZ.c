/*
 * XREFs of ?CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x180115C14
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x1800524FC (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18011A8FC (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?WriteProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x18011B18C (-WriteProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengi.c)
 */

__int64 __fastcall CEndpointCharacteristics::CacheProcessingModeCharacteristics(CEndpointCharacteristics *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*((_QWORD *)this + 25)
    || (result = CEndpointCharacteristics::WriteProcessingModeCharacteristics(this, 3LL), (int)result >= 0) )
  {
    if ( *((_QWORD *)this + 24) )
      return CEndpointCharacteristics::WriteProcessingModeCharacteristics(this, 0LL);
  }
  return result;
}
