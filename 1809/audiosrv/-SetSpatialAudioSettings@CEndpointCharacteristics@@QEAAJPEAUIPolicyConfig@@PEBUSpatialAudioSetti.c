/*
 * XREFs of ?SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAUIPolicyConfig@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@@Z @ 0x18010CFC8
 * Callers:
 *     _lambda_f2d43d9fce42a4bdda65a41e87b82fa0_::operator() @ 0x1800CECC8 (_lambda_f2d43d9fce42a4bdda65a41e87b82fa0_--operator().c)
 *     ?SetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@2PEBUSpatialAudioSettings@@@Z @ 0x1800D48B0 (-SetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HW4__MIDL___MIDL_itf_au.c)
 * Callees:
 *     ?GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180057110 (-GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__M.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG@Z @ 0x180120F64 (-ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG@Z.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBGPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUIPropertyStore@@PEAUIPolicyConfig@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x180123E6C (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBGPEBUSpatialAudioSettings@@PEBUtWAVEFORMATE.c)
 */

__int64 __fastcall CEndpointCharacteristics::SetSpatialAudioSettings(
        LPCWSTR *this,
        struct IPolicyConfig *a2,
        const struct SpatialAudioSettings *a3,
        const struct tWAVEFORMATEX *a4)
{
  struct IPolicyConfig *v4; // r14
  int v5; // edi
  int v6; // esi
  __int64 v8; // rdx
  LPCWSTR v10; // rdx
  __int64 v11; // [rsp+20h] [rbp-49h]
  struct _GUID v12; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v13[24]; // [rsp+50h] [rbp-19h]
  __int64 (__fastcall **v14)(); // [rsp+68h] [rbp-1h] BYREF
  __int128 v15; // [rsp+70h] [rbp+7h]
  __int64 v16; // [rsp+80h] [rbp+17h]
  __int64 (__fastcall ***v17)(); // [rsp+A0h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v4 = g_PolicyConfig;
  v5 = (int)a4;
  v6 = (int)a3;
  if ( !g_PolicyConfig )
  {
    v8 = 6817LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v8,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  if ( !a3 )
  {
    v8 = 6818LL;
    goto LABEL_3;
  }
  if ( !a4 )
  {
    v8 = 6819LL;
    goto LABEL_3;
  }
  if ( *((_DWORD *)this + 39) )
  {
    CSpatialProperties::ClearSpatialAudioSettings((CSpatialProperties *)(this + 203), this[3]);
  }
  else
  {
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeForSpatialStream(
      (CEndpointCharacteristics *)this,
      &v12,
      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3);
    v10 = this[3];
    v14 = off_180158650;
    *(struct _GUID *)&v13[8] = v12;
    *(_QWORD *)v13 = this;
    v17 = &v14;
    v16 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v13[8], *(__m128d *)&v13[8]);
    v11 = (__int64)this[5];
    v15 = *(_OWORD *)v13;
    CSpatialProperties::SetSpatialAudioSettings(
      (_DWORD)this + 1624,
      (_DWORD)v10,
      v6,
      v5,
      v11,
      (__int64)v4,
      (__int64)&v14);
  }
  return 0LL;
}
