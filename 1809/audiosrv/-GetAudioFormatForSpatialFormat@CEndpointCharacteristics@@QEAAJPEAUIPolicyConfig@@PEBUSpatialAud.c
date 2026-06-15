/*
 * XREFs of ?GetAudioFormatForSpatialFormat@CEndpointCharacteristics@@QEAAJPEAUIPolicyConfig@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@2PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x18010A008
 * Callers:
 *     ?SetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@2PEBUSpatialAudioSettings@@@Z @ 0x1800D48B0 (-SetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HW4__MIDL___MIDL_itf_au.c)
 * Callees:
 *     ?GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180057110 (-GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__M.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEBG_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@3PEAUIPropertyStore@@PEAUIPolicyConfig@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x180121148 (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEBG_NPEBUSpatialAudioSettings@@PEBUtWA.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetAudioFormatForSpatialFormat(
        CEndpointCharacteristics *this,
        struct IPolicyConfig *a2,
        const struct SpatialAudioSettings *a3,
        const struct tWAVEFORMATEX *a4,
        struct tWAVEFORMATEX *a5,
        struct WAVEFORMATEXTENSIBLE *a6,
        bool *a7)
{
  struct IPolicyConfig *v7; // r14
  int v9; // esi
  __int64 v11; // rdx
  int AudioFormatForSpatialFormat; // ebx
  __int64 v14; // r9
  bool v15; // zf
  __int64 v16; // rdx
  int v17; // r8d
  struct _GUID v18; // [rsp+68h] [rbp-41h] BYREF
  _BYTE v19[24]; // [rsp+78h] [rbp-31h]
  __int64 v20; // [rsp+90h] [rbp-19h] BYREF
  __int128 v21; // [rsp+98h] [rbp-11h]
  __int64 v22; // [rsp+A8h] [rbp-1h]
  __int64 *v23; // [rsp+C8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+47h]

  v7 = g_PolicyConfig;
  v9 = (int)a3;
  if ( !g_PolicyConfig )
  {
    v11 = 6870LL;
LABEL_3:
    AudioFormatForSpatialFormat = -2147467261;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v11,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)AudioFormatForSpatialFormat);
    return (unsigned int)AudioFormatForSpatialFormat;
  }
  if ( !a3 )
  {
    v11 = 6871LL;
    goto LABEL_3;
  }
  if ( !a4 )
  {
    v11 = 6872LL;
    goto LABEL_3;
  }
  if ( !a6 )
  {
    v11 = 6873LL;
    goto LABEL_3;
  }
  CEndpointCharacteristics::GetDefaultConnectorProcessingModeForSpatialStream(
    this,
    &v18,
    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3);
  v14 = *((_QWORD *)this + 5);
  v15 = *((_DWORD *)this + 39) == 0;
  v16 = *((_QWORD *)this + 3);
  v20 = (__int64)off_180158620;
  LOBYTE(v17) = !v15;
  *(struct _GUID *)&v19[8] = v18;
  *(_QWORD *)v19 = this;
  v23 = &v20;
  v21 = *(_OWORD *)v19;
  v22 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v19[8], *(__m128d *)&v19[8]);
  AudioFormatForSpatialFormat = CSpatialProperties::GetAudioFormatForSpatialFormat(
                                  (int)this + 1624,
                                  v16,
                                  v17,
                                  v9,
                                  a5,
                                  (__int64)a4,
                                  v14,
                                  (__int64)v7,
                                  (__int64)&v20,
                                  &a6->Format,
                                  (__int64)a7);
  if ( AudioFormatForSpatialFormat < 0 )
  {
    v11 = 6901LL;
    goto LABEL_4;
  }
  return 0LL;
}
