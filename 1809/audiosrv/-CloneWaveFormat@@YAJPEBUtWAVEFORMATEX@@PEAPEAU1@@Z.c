/*
 * XREFs of ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800CF24C
 * Callers:
 *     ?GetStreamGroupFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000F900 (-GetStreamGroupFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     wil::details::functor_wrapper_void__lambda_55c1f1f09a825687b3b7be014f2bd2ed__&___ptr64_::Run @ 0x180015670 (wil--details--functor_wrapper_void__lambda_55c1f1f09a825687b3b7be014f2bd2ed__-___ptr64_--Run.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180021910 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_c576b7c555b6a6b1a6c16cffcb9322a9___ @ 0x180066124 (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_c576b7c555b6a6b1a6c16cffcb9322a9__.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_1639d09af4dd5311acf19435b349233d___ @ 0x180066280 (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_1639d09af4dd5311acf19435b3492.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_c576b7c555b6a6b1a6c16cffcb9322a9___ @ 0x1800669C0 (CEndpointCharacteristics--GetDefaultFormat__lambda_c576b7c555b6a6b1a6c16cffcb9322a9___.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800D0428 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEAPEAU3@@Z @ 0x1800D0CE4 (-DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1800D0E70 (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x1800D1950 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 *     ?IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3@Z @ 0x1800D304C (-IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MID.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x1800D9544 (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800DBFB0 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x18010538C (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_068f763f677867854f08eaa5008b23ee__.c)
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_2bd14234de5ddbaffe4847539b299dd7___ @ 0x1801054E8 (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_2bd14234de5ddbaffe4847539b299dd7__.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d___ @ 0x18010564C (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9___ @ 0x1801058CC (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc8406445.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x180106DD4 (CEndpointCharacteristics--GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7___ @ 0x180106EEC (CEndpointCharacteristics--GetDefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7___.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe4847539b299dd7___ @ 0x180107034 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe4847539b299dd7___.c)
 *     ?AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x1801089E0 (-AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18010D3C8 (-TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     ?GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z @ 0x18012FB00 (-GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z.c)
 *     ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x180130150 (-IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_00.c)
 * Callees:
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 */

__int64 __fastcall CloneWaveFormat(const struct tWAVEFORMATEX *Src, struct tWAVEFORMATEX **a2)
{
  __int64 cbSize; // rsi
  struct tWAVEFORMATEX *v5; // rax
  unsigned int v6; // ebx
  struct tWAVEFORMATEX *v7; // rdi
  __int64 result; // rax

  cbSize = Src->cbSize;
  v5 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(cbSize + 18);
  v6 = 0;
  v7 = v5;
  if ( v5 )
    memcpy_0(v5, Src, cbSize + 18);
  else
    v6 = -2147024882;
  result = v6;
  *a2 = v7;
  return result;
}
