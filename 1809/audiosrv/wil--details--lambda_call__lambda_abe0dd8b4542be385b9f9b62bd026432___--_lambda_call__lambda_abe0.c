/*
 * XREFs of wil::details::lambda_call__lambda_abe0dd8b4542be385b9f9b62bd026432___::_lambda_call__lambda_abe0dd8b4542be385b9f9b62bd026432___ @ 0x1800CE8DC
 * Callers:
 *     _CPolicyConfig::SetDeviceFormatSwAudioEngine_::_1_::dtor$0 @ 0x1800D4F02 (_CPolicyConfig--SetDeviceFormatSwAudioEngine_--_1_--dtor$0.c)
 * Callees:
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x180109250 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_abe0dd8b4542be385b9f9b62bd026432___::_lambda_call__lambda_abe0dd8b4542be385b9f9b62bd026432___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return CEndpointCharacteristics::ClearMixFormatCache(**(_QWORD **)a1, 0LL);
  }
  return result;
}
