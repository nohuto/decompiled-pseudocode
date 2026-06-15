/*
 * XREFs of ?GetSpatialFormatForAudioFormat@CEndpointCharacteristics@@QEAAJPEAUIPolicyConfig@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x18010B620
 * Callers:
 *     ?SetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@2PEBUSpatialAudioSettings@@@Z @ 0x1800D48B0 (-SetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HW4__MIDL___MIDL_itf_au.c)
 * Callees:
 *     ?GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180057110 (-GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__M.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEBG_NPEBUtWAVEFORMATEX@@PEAUIPropertyStore@@PEAUIPolicyConfig@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUSpatialAudioSettings@@@Z @ 0x180121D18 (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEBG_NPEBUtWAVEFORMATEX@@PEAUIPropertyS.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetSpatialFormatForAudioFormat(
        CEndpointCharacteristics *this,
        struct IPolicyConfig *a2,
        const struct tWAVEFORMATEX *a3,
        struct SpatialAudioSettings *a4)
{
  struct IPolicyConfig *v4; // r14
  int v6; // edi
  __int64 v8; // rdx
  int SpatialFormatForAudioFormat; // ebx
  bool v11; // zf
  __int64 v12; // rdx
  int v13; // r8d
  __int64 v14; // rax
  struct _GUID v15; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v16[24]; // [rsp+50h] [rbp-19h]
  __int64 v17; // [rsp+68h] [rbp-1h] BYREF
  __int128 v18; // [rsp+70h] [rbp+7h]
  __int64 v19; // [rsp+80h] [rbp+17h]
  __int64 *v20; // [rsp+A0h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v4 = g_PolicyConfig;
  v6 = (int)a3;
  if ( !g_PolicyConfig )
  {
    v8 = 6918LL;
LABEL_3:
    SpatialFormatForAudioFormat = -2147467261;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v8,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)SpatialFormatForAudioFormat);
    return (unsigned int)SpatialFormatForAudioFormat;
  }
  if ( !a3 )
  {
    v8 = 6919LL;
    goto LABEL_3;
  }
  if ( !a4 )
  {
    v8 = 6920LL;
    goto LABEL_3;
  }
  CEndpointCharacteristics::GetDefaultConnectorProcessingModeForSpatialStream(
    this,
    &v15,
    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3);
  v11 = *((_DWORD *)this + 39) == 0;
  v17 = (__int64)off_1801585F0;
  *(struct _GUID *)&v16[8] = v15;
  v12 = *((_QWORD *)this + 3);
  LOBYTE(v13) = !v11;
  v20 = &v17;
  v14 = *((_QWORD *)this + 5);
  *(_QWORD *)v16 = this;
  v19 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v16[8], *(__m128d *)&v16[8]);
  v18 = *(_OWORD *)v16;
  SpatialFormatForAudioFormat = CSpatialProperties::GetSpatialFormatForAudioFormat(
                                  (int)this + 1624,
                                  v12,
                                  v13,
                                  v6,
                                  v14,
                                  (__int64)v4,
                                  (__int64)&v17,
                                  a4);
  if ( SpatialFormatForAudioFormat < 0 )
  {
    v8 = 6946LL;
    goto LABEL_4;
  }
  return 0LL;
}
