/*
 * XREFs of ?SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180057050
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x18004B7E0 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18010DC04 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x180056E8C (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V.c)
 *     ?GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180057110 (-GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__M.c)
 *     ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG@Z @ 0x180120F64 (-ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG@Z.c)
 */

void __fastcall CEndpointCharacteristics::SetSpatialAudioSettings(
        LPCWSTR *this,
        unsigned __int8 a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct tWAVEFORMATEX *a4)
{
  __int64 v7; // r9
  const WCHAR *v8; // rdx
  struct _GUID v9; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v10[24]; // [rsp+48h] [rbp-9h]
  __int64 v11; // [rsp+60h] [rbp+Fh] BYREF
  __int128 v12; // [rsp+68h] [rbp+17h]
  __int64 v13; // [rsp+78h] [rbp+27h]
  __int64 *v14; // [rsp+98h] [rbp+47h]

  if ( *((_DWORD *)this + 39) || !a4 || a3 )
  {
    CSpatialProperties::ClearSpatialAudioSettings((CSpatialProperties *)(this + 203), this[3]);
  }
  else
  {
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeForSpatialStream(
      (CEndpointCharacteristics *)this,
      &v9,
      eHostProcessConnector);
    v7 = (__int64)this[5];
    v8 = this[3];
    v11 = (__int64)off_180157A90;
    *(struct _GUID *)&v10[8] = v9;
    *(_QWORD *)v10 = this;
    v14 = &v11;
    v12 = *(_OWORD *)v10;
    v13 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v10[8], *(__m128d *)&v10[8]);
    CSpatialProperties::SetSpatialAudioSettings((__int64)(this + 203), v8, a2, v7, a4, (__int64)&v11);
  }
}
