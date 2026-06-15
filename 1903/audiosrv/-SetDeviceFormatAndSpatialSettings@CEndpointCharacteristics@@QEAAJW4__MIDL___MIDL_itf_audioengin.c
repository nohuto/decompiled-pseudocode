/*
 * XREFs of ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x180002AB4
 * Callers:
 *     ?RefreshDeviceFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800015C0 (-RefreshDeviceFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@AEBU_tagpropertykey@@PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x1800378D0 (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@AEBU_tagpropertyke.c)
 *     ?SetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGPEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x1800E07E0 (-SetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGPEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z.c)
 *     ?RefreshConnectorFormats@CEndpointCharacteristics@@QEAAJXZ @ 0x180119EE8 (-RefreshConnectorFormats@CEndpointCharacteristics@@QEAAJXZ.c)
 *     ?ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ @ 0x18011A544 (-ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ.c)
 *     ?SetDesiredFormat@CSpatialProperties@@AEAA_NPEAVCEndpointCharacteristics@@AEBUWAVEFORMATEXTENSIBLE@@_N@Z @ 0x18012EC74 (-SetDesiredFormat@CSpatialProperties@@AEAA_NPEAVCEndpointCharacteristics@@AEBUWAVEFORMATEXTENSIB.c)
 * Callees:
 *     ?GetSpatialFormatForAudioFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x18000170C (-GetSpatialFormatForAudioFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@PEAUSpatialAud.c)
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@@Z @ 0x1800031EC (-SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x180005B90 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 *     ?SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180005CA8 (-SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendp.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180009480 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18000AE28 (-GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x18000CEA8 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001C6E0 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 *     wil::details::lambda_call__lambda_20e2f10f5a8b71244438683d67afebd1___::_lambda_call__lambda_20e2f10f5a8b71244438683d67afebd1___ @ 0x180066F50 (wil--details--lambda_call__lambda_20e2f10f5a8b71244438683d67afebd1___--_lambda_call__lambda_20e2.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800BB7A0 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1800BB7C8 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     wil::details::lambda_call__lambda_087589451f99de117b20ad34ae35ce66___::_lambda_call__lambda_087589451f99de117b20ad34ae35ce66___ @ 0x1800BB7EC (wil--details--lambda_call__lambda_087589451f99de117b20ad34ae35ce66___--_lambda_call__lambda_0875.c)
 *     ?GetAudioFormatForSpatialFormat@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@1PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x180117714 (-GetAudioFormatForSpatialFormat@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWA.c)
 *     ?SetDeviceFormatHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18011AA6C (-SetDeviceFormatHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        WAVEFORMATEXTENSIBLE *a3,
        const struct SpatialAudioSettings *a4)
{
  const struct SpatialAudioSettings *v4; // r14
  WAVEFORMATEXTENSIBLE *v5; // rdi
  __int64 v8; // r9
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  const GUID *v13; // r9
  LPCGUID v14; // r8
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  int DeviceFormatAndSpatialSettings; // ebx
  struct tWAVEFORMATEX *v18; // rdx
  void *v19; // rdx
  bool v20; // r15
  int AudioFormatForSpatialFormat; // eax
  __int64 v22; // rdx
  int SpatialFormatForAudioFormat; // eax
  const struct SpatialAudioSettings *v24; // rcx
  int cData; // [rsp+20h] [rbp-E0h]
  bool v27[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 Data2; // [rsp+42h] [rbp-BEh] BYREF
  int HasHardwareAudioEngine; // [rsp+44h] [rbp-BCh] BYREF
  struct tWAVEFORMATEX *v30; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B0h] BYREF
  struct tWAVEFORMATEX **v32; // [rsp+58h] [rbp-A8h] BYREF
  struct tWAVEFORMATEX *v33; // [rsp+60h] [rbp-A0h] BYREF
  char v34; // [rsp+68h] [rbp-98h]
  struct SpatialAudioSettings *v35[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v36; // [rsp+80h] [rbp-80h]
  _BYTE v37[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v38; // [rsp+98h] [rbp-68h]
  GUID SubFormat; // [rsp+A0h] [rbp-60h] BYREF
  WAVEFORMATEXTENSIBLE v40; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v41[80]; // [rsp+E0h] [rbp-20h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF
  __int128 v43; // [rsp+140h] [rbp+40h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+160h] [rbp+60h] BYREF
  WORD *v46; // [rsp+170h] [rbp+70h]
  __int64 v47; // [rsp+178h] [rbp+78h]
  DWORD *p_Data2; // [rsp+180h] [rbp+80h]
  __int64 v49; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+190h] [rbp+90h] BYREF
  GUID *p_nChannels; // [rsp+1A0h] [rbp+A0h]
  __int64 v52; // [rsp+1A8h] [rbp+A8h]
  DWORD *p_nSamplesPerSec; // [rsp+1B0h] [rbp+B0h]
  __int64 v54; // [rsp+1B8h] [rbp+B8h]
  DWORD *p_nAvgBytesPerSec; // [rsp+1C0h] [rbp+C0h]
  __int64 v56; // [rsp+1C8h] [rbp+C8h]
  GUID *p_SubFormat; // [rsp+1D0h] [rbp+D0h]
  __int64 v58; // [rsp+1D8h] [rbp+D8h]
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]

  v38 = -2LL;
  v4 = a4;
  v5 = a3;
  if ( a3 )
  {
    if ( a4 )
    {
      if ( a3->Format.wFormatTag == 0xFFFE )
      {
        SubFormat = a3->SubFormat;
      }
      else
      {
        SubFormat = GUID_00000000_0000_0010_8000_00aa00389b71;
        SubFormat.Data1 = a3->Format.wFormatTag;
      }
      if ( (unsigned int)hProvider > 4 )
      {
        TlgCreateWsz(&pDesc, *((LPCWSTR *)this + 3));
        v27[0] = *(_BYTE *)v8;
        v45.Ptr = (ULONGLONG)v27;
        *(_QWORD *)&v45.Size = 1LL;
        v46 = (WORD *)(v8 + 12);
        v47 = 16LL;
        Data2 = *(_WORD *)(v8 + 68);
        p_Data2 = (DWORD *)&Data2;
        v49 = 2LL;
        TlgCreateWsz(&v50, L"WFEX");
        p_nChannels = (GUID *)&v5->Format.nChannels;
        v52 = 2LL;
        p_nSamplesPerSec = &v5->Format.nSamplesPerSec;
        v54 = 4LL;
        p_nAvgBytesPerSec = &v5->Format.nAvgBytesPerSec;
        v56 = 4LL;
        p_SubFormat = &SubFormat;
        v58 = 16LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180179EF0, v9, v10, 0xBu, &pData);
      }
    }
    else
    {
      if ( a3->Format.wFormatTag == 0xFFFE )
      {
        SubFormat = a3->SubFormat;
      }
      else
      {
        SubFormat = GUID_00000000_0000_0010_8000_00aa00389b71;
        SubFormat.Data1 = a3->Format.wFormatTag;
      }
      if ( (unsigned int)hProvider > 4 )
      {
        TlgCreateWsz(&pDesc, *((LPCWSTR *)this + 3));
        TlgCreateWsz(&v45, L"WFEX");
        v46 = &v5->Format.nChannels;
        v47 = 2LL;
        p_Data2 = &v5->Format.nSamplesPerSec;
        v49 = 4LL;
        v50.Ptr = (ULONGLONG)&v5->Format.nAvgBytesPerSec;
        *(_QWORD *)&v50.Size = 4LL;
        p_nChannels = &SubFormat;
        v52 = 16LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180179E74, v11, v12, 8u, &pData);
      }
    }
  }
  else if ( a4 )
  {
    if ( (unsigned int)hProvider > 4 )
    {
      TlgCreateWsz(&pDesc, *((LPCWSTR *)this + 3));
      v27[0] = v13->Data1;
      v45.Ptr = (ULONGLONG)v27;
      *(_QWORD *)&v45.Size = 1LL;
      v46 = (WORD *)&v13->Data4[4];
      v47 = 16LL;
      Data2 = v13[4].Data2;
      p_Data2 = (DWORD *)&Data2;
      v49 = 2LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180179E11, v14, v13, 6u, &pData);
    }
  }
  else if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateWsz(&pDesc, *((LPCWSTR *)this + 3));
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180179DD0, v15, v16, 3u, &pData);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8544));
  *(_QWORD *)&SubFormat.Data1 = (char *)this + 8544;
  v30 = 0LL;
  v31 = 0LL;
  v35[0] = (struct SpatialAudioSettings *)&v31;
  v35[1] = 0LL;
  LOBYTE(v36) = 1;
  v32 = &v30;
  v33 = 0LL;
  v34 = 1;
  DeviceFormatAndSpatialSettings = CEndpointCharacteristics::GetDeviceFormatAndSpatialSettings(
                                     this,
                                     eHostProcessConnector,
                                     0,
                                     &v33,
                                     &v35[1],
                                     0LL,
                                     0LL);
  if ( v34 )
  {
    v18 = *v32;
    *v32 = v33;
    if ( v18 )
      CoTaskMemFree(v18);
  }
  if ( (_BYTE)v36 )
  {
    v19 = *(void **)v35[0];
    *(_QWORD *)v35[0] = v35[1];
    if ( v19 )
      CoTaskMemFree(v19);
  }
  if ( DeviceFormatAndSpatialSettings >= 0 )
  {
    HasHardwareAudioEngine = CEndpointCharacteristics::HasHardwareAudioEngine(this);
    v35[0] = this;
    v35[1] = (struct SpatialAudioSettings *)&v31;
    *(_QWORD *)&v36 = &v30;
    *((_QWORD *)&v36 + 1) = &HasHardwareAudioEngine;
    pData = *(EVENT_DATA_DESCRIPTOR *)v35;
    v43 = v36;
    LOBYTE(pDesc.Ptr) = 1;
    (*(void (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)g_policyConfigInternal + 24LL))(
      g_policyConfigInternal,
      v37,
      *((_QWORD *)this + 3));
    v32 = (struct tWAVEFORMATEX **)this;
    LOBYTE(v33) = 1;
    CEndpointCharacteristics::ClearMixFormatCache(this, 0LL);
    memset_0(&v40, 0, sizeof(v40));
    memset_0(v41, 0, 0x48uLL);
    v20 = 0;
    v27[0] = 0;
    if ( v4 )
    {
      AudioFormatForSpatialFormat = CEndpointCharacteristics::GetAudioFormatForSpatialFormat(
                                      this,
                                      v4,
                                      v30,
                                      &v5->Format,
                                      &v40,
                                      v27);
      DeviceFormatAndSpatialSettings = AudioFormatForSpatialFormat;
      if ( AudioFormatForSpatialFormat < 0 )
      {
        v22 = 8660LL;
LABEL_49:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)AudioFormatForSpatialFormat,
          cData);
LABEL_51:
        wil::details::lambda_call__lambda_087589451f99de117b20ad34ae35ce66___::_lambda_call__lambda_087589451f99de117b20ad34ae35ce66___(&v32);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v37);
        wil::details::lambda_call__lambda_20e2f10f5a8b71244438683d67afebd1___::_lambda_call__lambda_20e2f10f5a8b71244438683d67afebd1___(&pData);
        goto LABEL_52;
      }
      v20 = v27[0];
      if ( v27[0] )
        v5 = &v40;
    }
    else if ( v5 )
    {
      SpatialFormatForAudioFormat = CEndpointCharacteristics::GetSpatialFormatForAudioFormat(
                                      this,
                                      &v5->Format,
                                      (struct SpatialAudioSettings *)v41);
      v24 = (const struct SpatialAudioSettings *)v41;
      if ( SpatialFormatForAudioFormat < 0 )
        v24 = 0LL;
      v4 = v24;
    }
    if ( HasHardwareAudioEngine )
    {
      if ( !v5 )
        goto LABEL_41;
      AudioFormatForSpatialFormat = CEndpointCharacteristics::SetDeviceFormatHwAudioEngine(this, &v5->Format);
      DeviceFormatAndSpatialSettings = AudioFormatForSpatialFormat;
      if ( AudioFormatForSpatialFormat < 0 )
      {
        v22 = 8679LL;
        goto LABEL_49;
      }
    }
    if ( v5 )
      (*(void (__fastcall **)(__int64, _QWORD, WAVEFORMATEXTENSIBLE *))(*(_QWORD *)g_policyConfigInternal + 40LL))(
        g_policyConfigInternal,
        *((_QWORD *)this + 3),
        v5);
LABEL_41:
    AudioFormatForSpatialFormat = CEndpointCharacteristics::SetDeviceFormatSwAudioEngine(this, a2, &v5->Format);
    DeviceFormatAndSpatialSettings = AudioFormatForSpatialFormat;
    if ( AudioFormatForSpatialFormat < 0 )
    {
      v22 = 8687LL;
      goto LABEL_49;
    }
    if ( v4 )
    {
      if ( !v5 )
      {
        if ( v20 )
          goto LABEL_50;
        v5 = (WAVEFORMATEXTENSIBLE *)v30;
      }
      AudioFormatForSpatialFormat = CEndpointCharacteristics::SetSpatialAudioSettings(this, v4, &v5->Format);
      DeviceFormatAndSpatialSettings = AudioFormatForSpatialFormat;
      if ( AudioFormatForSpatialFormat < 0 )
      {
        v22 = 8701LL;
        goto LABEL_49;
      }
    }
LABEL_50:
    LOBYTE(pDesc.Ptr) = 0;
    DeviceFormatAndSpatialSettings = 0;
    goto LABEL_51;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x21A7,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)DeviceFormatAndSpatialSettings,
    cData);
LABEL_52:
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v31);
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v30);
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&SubFormat);
  return (unsigned int)DeviceFormatAndSpatialSettings;
}
