/*
 * XREFs of wil::details::lambda_call__lambda_9c3e387eabcd55269d2d6993921e22a9___::_lambda_call__lambda_9c3e387eabcd55269d2d6993921e22a9___ @ 0x1800CE888
 * Callers:
 *     _CPolicyConfig::SetDeviceFormatSwAudioEngine_::_1_::dtor$6 @ 0x1800D4F4A (_CPolicyConfig--SetDeviceFormatSwAudioEngine_--_1_--dtor$6.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18010DC04 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 */

void __fastcall wil::details::lambda_call__lambda_9c3e387eabcd55269d2d6993921e22a9___::_lambda_call__lambda_9c3e387eabcd55269d2d6993921e22a9___(
        __int64 a1)
{
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
                **(CEndpointCharacteristics ***)a1,
                0,
                (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)**(_DWORD **)(a1 + 8),
                **(const struct tWAVEFORMATEX ***)(a1 + 16));
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xCAB,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)updated);
  }
}
