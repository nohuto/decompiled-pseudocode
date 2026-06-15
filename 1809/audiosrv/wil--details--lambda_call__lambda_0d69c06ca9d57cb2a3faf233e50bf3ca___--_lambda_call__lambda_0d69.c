/*
 * XREFs of wil::details::lambda_call__lambda_0d69c06ca9d57cb2a3faf233e50bf3ca___::_lambda_call__lambda_0d69c06ca9d57cb2a3faf233e50bf3ca___ @ 0x1800CE82C
 * Callers:
 *     _CPolicyConfig::SetDeviceFormatSwAudioEngine_::_1_::dtor$2 @ 0x1800D4F1A (_CPolicyConfig--SetDeviceFormatSwAudioEngine_--_1_--dtor$2.c)
 * Callees:
 *     ?DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z @ 0x1800D1FDC (-DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_0d69c06ca9d57cb2a3faf233e50bf3ca___::_lambda_call__lambda_0d69c06ca9d57cb2a3faf233e50bf3ca___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    CPolicyConfig::DisconnectHelper(**(struct IMMDevice ***)a1);
  }
}
