/*
 * XREFs of wil::details::lambda_call__lambda_20e2f10f5a8b71244438683d67afebd1___::_lambda_call__lambda_20e2f10f5a8b71244438683d67afebd1___ @ 0x180066F50
 * Callers:
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x180002AB4 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     _CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings_::_1_::dtor$5 @ 0x18006C946 (_CEndpointCharacteristics--SetDeviceFormatAndSpatialSettings_--_1_--dtor$5.c)
 * Callees:
 *     _lambda_20e2f10f5a8b71244438683d67afebd1_::operator() @ 0x180066FC0 (_lambda_20e2f10f5a8b71244438683d67afebd1_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_20e2f10f5a8b71244438683d67afebd1___::_lambda_call__lambda_20e2f10f5a8b71244438683d67afebd1___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    return lambda_20e2f10f5a8b71244438683d67afebd1_::operator()();
  }
  return result;
}
