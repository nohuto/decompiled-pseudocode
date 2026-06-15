/*
 * XREFs of ?SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@@Z @ 0x180004998
 * Callers:
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x180004A8C (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     _lambda_20e2f10f5a8b71244438683d67afebd1_::operator() @ 0x18006801C (_lambda_20e2f10f5a8b71244438683d67afebd1_--operator().c)
 * Callees:
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x180003A70 (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@PEBUSpatialAudio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000E498 (-GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__M.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG@Z @ 0x18012D994 (-ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::SetSpatialAudioSettings(
        LPCWSTR *this,
        const struct SpatialAudioSettings *a2,
        const struct tWAVEFORMATEX *a3)
{
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // edi
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-49h]
  __int64 v12; // [rsp+20h] [rbp-49h]
  struct _GUID v13; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v14[24]; // [rsp+50h] [rbp-19h]
  __int64 (__fastcall **v15)(); // [rsp+68h] [rbp-1h] BYREF
  __int128 v16; // [rsp+70h] [rbp+7h]
  __int64 v17; // [rsp+80h] [rbp+17h]
  __int64 (__fastcall ***v18)(); // [rsp+A0h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  char v20; // [rsp+D8h] [rbp+6Fh] BYREF

  if ( !a2 )
  {
    v10 = 6948LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x80004003LL,
      v11);
    return 2147500035LL;
  }
  if ( !a3 )
  {
    v10 = 6949LL;
    goto LABEL_9;
  }
  if ( *((_DWORD *)this + 39) )
  {
    CSpatialProperties::ClearSpatialAudioSettings((CSpatialProperties *)(this + 203), this[3]);
    return 0LL;
  }
  CEndpointCharacteristics::GetDefaultConnectorProcessingModeForSpatialStream(
    (CEndpointCharacteristics *)this,
    &v13,
    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3);
  v20 = 0;
  *(_QWORD *)v14 = this;
  v6 = *(_QWORD *)g_policyConfigInternal;
  *(struct _GUID *)&v14[8] = v13;
  v7 = (*(__int64 (__fastcall **)(__int64, char *))(v6 + 48))(g_policyConfigInternal, &v20);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v15 = off_18015C3A8;
    v17 = *(_QWORD *)&v14[16];
    v18 = &v15;
    v12 = (__int64)this[5];
    v16 = *(_OWORD *)v14;
    CSpatialProperties::SetSpatialAudioSettings(
      (__int64)(this + 203),
      (__int64)this,
      (__int64)a2,
      a3,
      v12,
      &v20,
      (__int64)&v15);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1B3E,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v7,
    v11);
  return v8;
}
