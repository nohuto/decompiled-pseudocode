/*
 * XREFs of wil::details::lambda_call__lambda_6522e2e903ed7883a4fb2ca8f2380d8a___::_lambda_call__lambda_6522e2e903ed7883a4fb2ca8f2380d8a___ @ 0x180066F70
 * Callers:
 *     ?SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180005CA8 (-SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendp.c)
 *     _CEndpointCharacteristics::SetDeviceFormatSwAudioEngine_::_1_::dtor$3 @ 0x1800732DC (_CEndpointCharacteristics--SetDeviceFormatSwAudioEngine_--_1_--dtor$3.c)
 * Callees:
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180005060 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A220 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_6522e2e903ed7883a4fb2ca8f2380d8a___::_lambda_call__lambda_6522e2e903ed7883a4fb2ca8f2380d8a___(
        __int64 a1)
{
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
                *(LPCWSTR **)a1,
                0,
                (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)**(_DWORD **)(a1 + 8),
                **(const struct tWAVEFORMATEX ***)(a1 + 16));
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x207F,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)updated);
  }
}
