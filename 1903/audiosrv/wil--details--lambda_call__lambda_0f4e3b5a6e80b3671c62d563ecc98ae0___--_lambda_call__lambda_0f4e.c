/*
 * XREFs of wil::details::lambda_call__lambda_0f4e3b5a6e80b3671c62d563ecc98ae0___::_lambda_call__lambda_0f4e3b5a6e80b3671c62d563ecc98ae0___ @ 0x1800EB8B0
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180032A80 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     _EndpointDevice::InitAdapterInformation_::_1_::dtor$5 @ 0x18006DC42 (_EndpointDevice--InitAdapterInformation_--_1_--dtor$5.c)
 *     _DeriveDeviceGraphFormatsForStream_::_1_::dtor$62 @ 0x180072480 (_DeriveDeviceGraphFormatsForStream_--_1_--dtor$62.c)
 *     _CKsSoftwareNotificationsMonitor::OnFormatCapsChange_::_1_::dtor$5 @ 0x1800EC022 (_CKsSoftwareNotificationsMonitor--OnFormatCapsChange_--_1_--dtor$5.c)
 *     _CEndpointCharacteristics::GetAvailableConnectorCount_::_1_::dtor$1 @ 0x180117A68 (_CEndpointCharacteristics--GetAvailableConnectorCount_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::UpdateAPOEnableStatus_::_1_::dtor$0 @ 0x18011B56F (_CEndpointCharacteristics--UpdateAPOEnableStatus_--_1_--dtor$0.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$3 @ 0x18013B7BF (_FillAPOInitSystemEffectsStructure_--_1_--dtor$3.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$5 @ 0x18013B7D7 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall wil::details::lambda_call__lambda_0f4e3b5a6e80b3671c62d563ecc98ae0___::_lambda_call__lambda_0f4e3b5a6e80b3671c62d563ecc98ae0___(
        __int64 a1)
{
  HRESULT result; // eax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return PropVariantClear(*(PROPVARIANT **)a1);
  }
  return result;
}
