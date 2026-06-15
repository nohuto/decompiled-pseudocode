/*
 * XREFs of wil::details::lambda_call__lambda_0f4e3b5a6e80b3671c62d563ecc98ae0___::_lambda_call__lambda_0f4e3b5a6e80b3671c62d563ecc98ae0___ @ 0x1800E0018
 * Callers:
 *     _CEndpointCharacteristics::GetStreamGroupFormat_::_1_::dtor$1 @ 0x18006A520 (_CEndpointCharacteristics--GetStreamGroupFormat_--_1_--dtor$1.c)
 *     _EndpointDevice::InitAdapterInformation_::_1_::dtor$5 @ 0x18006B452 (_EndpointDevice--InitAdapterInformation_--_1_--dtor$5.c)
 *     _CKsSoftwareNotificationsMonitor::OnFormatCapsChange_::_1_::dtor$5 @ 0x1800E088C (_CKsSoftwareNotificationsMonitor--OnFormatCapsChange_--_1_--dtor$5.c)
 *     _CEndpointCharacteristics::GetAvailableConnectorCount_::_1_::dtor$1 @ 0x18010A344 (_CEndpointCharacteristics--GetAvailableConnectorCount_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::UpdateAPOEnableStatus_::_1_::dtor$0 @ 0x18010DBBF (_CEndpointCharacteristics--UpdateAPOEnableStatus_--_1_--dtor$0.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$3 @ 0x180132A11 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$3.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$5 @ 0x180132A29 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$5.c)
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
