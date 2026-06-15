/*
 * XREFs of ?IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180066DE0
 * Callers:
 *     AudioServerIsFormatSupported @ 0x18000EA00 (AudioServerIsFormatSupported.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180023800 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x18004733C (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     AudioServerIsRawStreamSupported @ 0x1800E96F0 (AudioServerIsRawStreamSupported.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsValidRequestedConnectorType(unsigned int a1)
{
  return a1 <= 3;
}
