/*
 * XREFs of ?IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180064898
 * Callers:
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x180002678 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     AudioServerIsFormatSupported @ 0x1800043B0 (AudioServerIsFormatSupported.c)
 *     AudioServerGetMixFormat @ 0x18000BC00 (AudioServerGetMixFormat.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180029120 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     AudioServerIsRawStreamSupported @ 0x1800DDF00 (AudioServerIsRawStreamSupported.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsValidRequestedConnectorType(unsigned int a1)
{
  return a1 <= 3;
}
