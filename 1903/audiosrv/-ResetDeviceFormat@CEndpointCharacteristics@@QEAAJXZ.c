/*
 * XREFs of ?ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ @ 0x18011A544
 * Callers:
 *     ?ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z @ 0x1800E05A0 (-ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?RefreshConnectorFormats@CEndpointCharacteristics@@QEAAJXZ @ 0x180119EE8 (-RefreshConnectorFormats@CEndpointCharacteristics@@QEAAJXZ.c)
 * Callees:
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x180002AB4 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x180005B90 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 *     ?ConfirmDeviceFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x1800078A8 (-ConfirmDeviceFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180007B60 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18000AE28 (-GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001C6E0 (_TlgCreateWsz.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A220 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::ResetDeviceFormat(LPCWSTR *this)
{
  LPCGUID v2; // r8
  LPCGUID v3; // r9
  int DeviceFormatAndSpatialSettings; // ebx
  void *v5; // rdx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  int v9; // eax
  void *v10; // rdx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  void *v14; // rcx
  void *v15; // rcx
  struct tWAVEFORMATEX *v16; // rcx
  LPVOID pv[2]; // [rsp+48h] [rbp-9h] BYREF
  struct tWAVEFORMATEX *v19[2]; // [rsp+58h] [rbp+7h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp+17h] BYREF
  char v21; // [rsp+78h] [rbp+27h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v19[1] = (struct tWAVEFORMATEX *)-2LL;
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateWsz(&pDesc, this[3]);
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180178218, v2, v3, 3u, &pData);
  }
  *(GUID *)pv = GUID_00000000_0000_0000_0000_000000000000;
  CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
    (CEndpointCharacteristics *)this,
    eHostProcessConnector,
    (struct _GUID *)pv,
    0LL,
    0LL);
  v19[0] = 0LL;
  pData.Ptr = (ULONGLONG)v19;
  *(_QWORD *)&pData.Size = 0LL;
  v21 = 1;
  DeviceFormatAndSpatialSettings = CEndpointCharacteristics::GetDeviceFormatAndSpatialSettings(
                                     (CEndpointCharacteristics *)this,
                                     0,
                                     0LL,
                                     (struct tWAVEFORMATEX **)&pData.Size,
                                     0LL,
                                     0LL,
                                     0LL);
  if ( v21 )
  {
    v5 = *(void **)pData.Ptr;
    *(_QWORD *)pData.Ptr = *(_QWORD *)&pData.Size;
    if ( v5 )
      CoTaskMemFree(v5);
  }
  if ( DeviceFormatAndSpatialSettings < 0 )
  {
    v6 = (unsigned int)DeviceFormatAndSpatialSettings;
    v7 = 8786LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v6);
    goto LABEL_27;
  }
  v8 = CEndpointCharacteristics::ConfirmDeviceFormat(
         (CEndpointCharacteristics *)this,
         v19[0],
         (struct _GUID *)pv,
         eHostProcessConnector,
         0);
  if ( v8 >= 0 )
    goto LABEL_26;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x2255,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v8);
  v9 = CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings(
         (CEndpointCharacteristics *)this,
         eHostProcessConnector,
         0LL,
         0LL);
  DeviceFormatAndSpatialSettings = v9;
  if ( v9 < 0 )
  {
    v7 = 8793LL;
LABEL_13:
    v6 = (unsigned int)v9;
    goto LABEL_14;
  }
  v9 = CEndpointCharacteristics::ClearMixFormatCache((__int64)this, 0);
  DeviceFormatAndSpatialSettings = v9;
  if ( v9 < 0 )
  {
    v7 = 8796LL;
    goto LABEL_13;
  }
  pv[0] = 0LL;
  pData.Ptr = (ULONGLONG)pv;
  *(_QWORD *)&pData.Size = 0LL;
  v21 = 1;
  DeviceFormatAndSpatialSettings = CEndpointCharacteristics::GetDeviceFormatAndSpatialSettings(
                                     (CEndpointCharacteristics *)this,
                                     0,
                                     1LL,
                                     (struct tWAVEFORMATEX **)&pData.Size,
                                     0LL,
                                     0LL,
                                     0LL);
  if ( v21 )
  {
    v10 = *(void **)pData.Ptr;
    *(_QWORD *)pData.Ptr = *(_QWORD *)&pData.Size;
    if ( v10 )
      CoTaskMemFree(v10);
  }
  if ( DeviceFormatAndSpatialSettings < 0 )
  {
    v11 = (unsigned int)DeviceFormatAndSpatialSettings;
    v12 = 8800LL;
    goto LABEL_22;
  }
  v13 = CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings(
          (CEndpointCharacteristics *)this,
          eHostProcessConnector,
          (WAVEFORMATEXTENSIBLE *)pv[0],
          0LL);
  DeviceFormatAndSpatialSettings = v13;
  if ( v13 >= 0 )
  {
    v15 = pv[0];
    pv[0] = 0LL;
    if ( v15 )
      CoTaskMemFree(v15);
LABEL_26:
    DeviceFormatAndSpatialSettings = 0;
    goto LABEL_27;
  }
  v11 = (unsigned int)v13;
  v12 = 8803LL;
LABEL_22:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)v11);
  v14 = pv[0];
  pv[0] = 0LL;
  if ( v14 )
    CoTaskMemFree(v14);
LABEL_27:
  v16 = v19[0];
  v19[0] = 0LL;
  if ( v16 )
    CoTaskMemFree(v16);
  return (unsigned int)DeviceFormatAndSpatialSettings;
}
