/*
 * XREFs of wil::details::lambda_call__lambda_4d55da65b1700ede553444b71dac27bb___::_lambda_call__lambda_4d55da65b1700ede553444b71dac27bb___ @ 0x180115344
 * Callers:
 *     _CEndpointCharacteristics::SetDeviceFormatSwAudioEngine_::_1_::dtor$0 @ 0x1800732B8 (_CEndpointCharacteristics--SetDeviceFormatSwAudioEngine_--_1_--dtor$0.c)
 * Callees:
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x180005B90 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_4d55da65b1700ede553444b71dac27bb___::_lambda_call__lambda_4d55da65b1700ede553444b71dac27bb___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return CEndpointCharacteristics::ClearMixFormatCache(*(_QWORD *)a1, 0);
  }
  return result;
}
