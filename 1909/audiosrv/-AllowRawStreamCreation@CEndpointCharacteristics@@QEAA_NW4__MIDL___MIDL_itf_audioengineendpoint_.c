/*
 * XREFs of ?AllowRawStreamCreation@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180115B58
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180013360 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     AudioServerIsRawStreamSupported @ 0x1800E9270 (AudioServerIsRawStreamSupported.c)
 * Callees:
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x18000DFA4 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 */

char __fastcall CEndpointCharacteristics::AllowRawStreamCreation(CEndpointCharacteristics *this, unsigned int a2)
{
  __int64 v2; // rbx
  int IsConnectorModeSupported; // eax
  char v5; // r8
  struct _GUID v7; // [rsp+20h] [rbp-18h] BYREF

  v2 = (int)a2;
  v7 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  IsConnectorModeSupported = CEndpointCharacteristics::IsConnectorModeSupported(this, a2, &v7);
  v5 = 0;
  if ( IsConnectorModeSupported )
    return *((_DWORD *)this + v2 + 346) == 0;
  return v5;
}
