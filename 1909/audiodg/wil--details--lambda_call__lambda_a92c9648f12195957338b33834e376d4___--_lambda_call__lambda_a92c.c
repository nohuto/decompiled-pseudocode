/*
 * XREFs of wil::details::lambda_call__lambda_a92c9648f12195957338b33834e376d4___::_lambda_call__lambda_a92c9648f12195957338b33834e376d4___ @ 0x1400392EC
 * Callers:
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$0 @ 0x14001B523 (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$0.c)
 * Callees:
 *     McTemplateU0 @ 0x140039D2C (McTemplateU0.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_a92c9648f12195957338b33834e376d4___::_lambda_call__lambda_a92c9648f12195957338b33834e376d4___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 1) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      return McTemplateU0();
  }
  return result;
}
