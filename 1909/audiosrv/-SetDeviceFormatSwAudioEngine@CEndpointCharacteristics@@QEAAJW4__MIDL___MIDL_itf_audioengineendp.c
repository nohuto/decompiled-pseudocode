/*
 * XREFs of ?SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180005CC8
 * Callers:
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x180004A8C (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18000508C (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x180005BB0 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180006738 (-DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioen.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180007840 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?ConfirmDeviceFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x1800078C8 (-ConfirmDeviceFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180007B80 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z @ 0x1800082C8 (-SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z.c)
 *     ?GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18000E10C (-GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E4E0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::details::lambda_call__lambda_6522e2e903ed7883a4fb2ca8f2380d8a___::_lambda_call__lambda_6522e2e903ed7883a4fb2ca8f2380d8a___ @ 0x180067FCC (wil--details--lambda_call__lambda_6522e2e903ed7883a4fb2ca8f2380d8a___--_lambda_call__lambda_6522.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18011A8FC (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::SetDeviceFormatSwAudioEngine(
        LPCWSTR *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        const struct tWAVEFORMATEX *a3)
{
  char v6; // r14
  int updated; // eax
  int DeviceFormatAndSpatialSettings; // ebx
  struct _GUID v9; // xmm6
  void *v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  void *v14; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rdx
  int v20; // [rsp+28h] [rbp-69h]
  struct _GUID v21; // [rsp+68h] [rbp-29h] BYREF
  LPVOID *p_pv; // [rsp+78h] [rbp-19h]
  struct _GUID v23; // [rsp+88h] [rbp-9h] BYREF
  LPVOID *v24; // [rsp+98h] [rbp+7h]
  __int128 v25; // [rsp+A0h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]
  LPVOID pv; // [rsp+F8h] [rbp+67h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v28; // [rsp+100h] [rbp+6Fh] BYREF
  __int64 v29; // [rsp+108h] [rbp+77h] BYREF

  v28 = a2;
  v6 = 1;
  if ( !a3 )
  {
    updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(this, 0, a2, 0LL);
    DeviceFormatAndSpatialSettings = updated;
    if ( updated >= 0 )
    {
      v6 = 0;
      DeviceFormatAndSpatialSettings = 0;
      goto LABEL_19;
    }
    v16 = 8280LL;
    goto LABEL_31;
  }
  updated = ValidateUncompressedWaveFormatEx(a3);
  DeviceFormatAndSpatialSettings = updated;
  if ( updated < 0 )
  {
    v16 = 8286LL;
    goto LABEL_31;
  }
  CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
    (CEndpointCharacteristics *)this,
    a2,
    &v21,
    0LL,
    0LL);
  v9 = v21;
  updated = CEndpointCharacteristics::ConfirmDeviceFormat((CEndpointCharacteristics *)this, a3, &v21, v28, 0);
  DeviceFormatAndSpatialSettings = updated;
  if ( updated == -2004287480 )
  {
    updated = CEndpointCharacteristics::TryAddFormat((CEndpointCharacteristics *)this, a3);
    DeviceFormatAndSpatialSettings = updated;
    if ( updated >= 0 )
    {
      v21 = v9;
      updated = CEndpointCharacteristics::ConfirmDeviceFormat((CEndpointCharacteristics *)this, a3, &v21, v28, 0);
      DeviceFormatAndSpatialSettings = updated;
      if ( updated >= 0 )
        goto LABEL_5;
      v16 = 8302LL;
    }
    else
    {
      v16 = 8299LL;
    }
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)updated);
    goto LABEL_19;
  }
  if ( updated < 0 )
  {
    v16 = 8306LL;
    goto LABEL_31;
  }
LABEL_5:
  pv = 0LL;
  *(_QWORD *)&v21.Data1 = &pv;
  *(_QWORD *)v21.Data4 = 0LL;
  LOBYTE(p_pv) = 1;
  DeviceFormatAndSpatialSettings = CEndpointCharacteristics::GetDeviceFormatAndSpatialSettings(
                                     (CEndpointCharacteristics *)this,
                                     eHostProcessConnector,
                                     0,
                                     (struct tWAVEFORMATEX **)v21.Data4,
                                     0LL,
                                     0LL,
                                     0LL);
  if ( (_BYTE)p_pv )
  {
    v10 = **(void ***)&v21.Data1;
    **(_QWORD **)&v21.Data1 = *(_QWORD *)v21.Data4;
    if ( v10 )
      CoTaskMemFree(v10);
  }
  if ( DeviceFormatAndSpatialSettings < 0 )
  {
    v17 = (unsigned int)DeviceFormatAndSpatialSettings;
    v18 = 8311LL;
  }
  else
  {
    v11 = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(this, 0, v28, a3);
    DeviceFormatAndSpatialSettings = v11;
    if ( v11 >= 0 )
    {
      *(_QWORD *)&v21.Data1 = this;
      *(_QWORD *)v21.Data4 = &v28;
      p_pv = &pv;
      v23 = v21;
      v24 = &pv;
      LOBYTE(v25) = 1;
      v12 = CEndpointCharacteristics::DeriveAndCacheMixFormatsForConnector(
              (CEndpointCharacteristics *)this,
              eHostProcessConnector);
      DeviceFormatAndSpatialSettings = v12;
      if ( v12 < 0 )
      {
        v19 = 8323LL;
      }
      else
      {
        v13 = CEndpointCharacteristics::DeriveAndCacheMixFormatsForConnector(
                (CEndpointCharacteristics *)this,
                eKeywordDetectorConnector);
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2087,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v13,
            v20);
        v29 = 0LL;
        v12 = CEndpointCharacteristics::SetProcessingPeriod((CEndpointCharacteristics *)this, &v29);
        DeviceFormatAndSpatialSettings = v12;
        if ( v12 < 0 )
        {
          v19 = 8336LL;
        }
        else
        {
          CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
            (CEndpointCharacteristics *)this,
            v28,
            &v21,
            0LL,
            0LL);
          v12 = CEndpointCharacteristics::ConfirmDeviceFormat((CEndpointCharacteristics *)this, a3, &v21, v28, 1);
          DeviceFormatAndSpatialSettings = v12;
          if ( v12 >= 0 )
          {
            LOBYTE(v25) = 0;
            v6 = 0;
            DeviceFormatAndSpatialSettings = 0;
LABEL_16:
            wil::details::lambda_call__lambda_6522e2e903ed7883a4fb2ca8f2380d8a___::_lambda_call__lambda_6522e2e903ed7883a4fb2ca8f2380d8a___(&v23);
            goto LABEL_17;
          }
          v19 = 8348LL;
        }
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v12);
      goto LABEL_16;
    }
    v17 = (unsigned int)v11;
    v18 = 8314LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)v17);
LABEL_17:
  v14 = pv;
  pv = 0LL;
  if ( v14 )
    CoTaskMemFree(v14);
LABEL_19:
  if ( v6 )
    CEndpointCharacteristics::ClearMixFormatCache((__int64)this, 0);
  return (unsigned int)DeviceFormatAndSpatialSettings;
}
