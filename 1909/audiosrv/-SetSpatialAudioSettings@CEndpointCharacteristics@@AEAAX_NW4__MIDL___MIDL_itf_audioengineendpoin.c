/*
 * XREFs of ?SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800089A4
 * Callers:
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18000508C (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x180052044 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 * Callees:
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x180008A64 (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V.c)
 *     ?GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000E498 (-GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__M.c)
 *     ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG@Z @ 0x18012D994 (-ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG@Z.c)
 */

void __fastcall CEndpointCharacteristics::SetSpatialAudioSettings(
        LPCWSTR *this,
        __int64 a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        const struct tWAVEFORMATEX *a4)
{
  const WCHAR *v6; // rdx
  struct _GUID v7; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v8[24]; // [rsp+48h] [rbp-9h]
  __int64 v9; // [rsp+60h] [rbp+Fh] BYREF
  __int128 v10; // [rsp+68h] [rbp+17h]
  __int64 v11; // [rsp+78h] [rbp+27h]
  __int64 *v12; // [rsp+98h] [rbp+47h]

  if ( *((_DWORD *)this + 39) || !a4 || a3 )
  {
    CSpatialProperties::ClearSpatialAudioSettings((CSpatialProperties *)(this + 203), this[3]);
  }
  else
  {
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeForSpatialStream(
      (CEndpointCharacteristics *)this,
      &v7,
      eHostProcessConnector);
    v6 = this[3];
    v9 = (__int64)off_18015C2F0;
    *(struct _GUID *)&v8[8] = v7;
    *(_QWORD *)v8 = this;
    v12 = &v9;
    v10 = *(_OWORD *)v8;
    v11 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v8[8], *(__m128d *)&v8[8]);
    CSpatialProperties::SetSpatialAudioSettings((LPCRITICAL_SECTION)(this + 203), v6, (__int64)a4, (__int64)&v9);
  }
}
