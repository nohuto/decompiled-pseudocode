/*
 * XREFs of ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x18000D900
 * Callers:
 *     ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x18000D800 (-ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z.c)
 *     ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x1800E1170 (-UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ.c)
 * Callees:
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@AEBU_tagpropertykey@@PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x18000B570 (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@AEBU_tagpropertyke.c)
 *     ?MarkAsNeedsResolution@SystemEffectDescriptor@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z @ 0x18000DD48 (-MarkAsNeedsResolution@SystemEffectDescriptor@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000E06C (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000E498 (-GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__M.c)
 *     ??1?$out_param_t@V?$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18001E0B8 (--1-$out_param_t@V-$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U-$function_deleter@P6AXPEAX@Z$1-C.c)
 *     ??$out_param@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@details@0@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@Z @ 0x18001E0DC (--$out_param@V-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@@wil@.c)
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x18001FA08 (-OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E4E0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GetSpatialSettingsMonitoringPKey @ 0x180051F44 (GetSpatialSettingsMonitoringPKey.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180065550 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800655B8 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1800BB2C8 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ?UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJXZ @ 0x18011AB28 (-UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CEndpointCharacteristics::ProcessPropertyChange(
        CEndpointCharacteristics *this,
        const struct _tagpropertykey *a2,
        int *a3)
{
  unsigned int v6; // r15d
  unsigned int v7; // edx
  __int128 *v8; // rcx
  int updated; // eax
  int v10; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v11; // r8d
  int v12; // eax
  __int128 *v13; // rbx
  unsigned int v14; // edi
  int v15; // [rsp+20h] [rbp-E0h]
  struct tWAVEFORMATEX **v16; // [rsp+20h] [rbp-E0h]
  int v17; // [rsp+20h] [rbp-E0h]
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  struct tWAVEFORMATEX *v19; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v20[24]; // [rsp+50h] [rbp-B0h] BYREF
  struct _GUID v21; // [rsp+68h] [rbp-98h] BYREF
  __int64 v22; // [rsp+78h] [rbp-88h]
  __int64 v23; // [rsp+80h] [rbp-80h] BYREF
  __int128 v24; // [rsp+88h] [rbp-78h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  __int64 *v26; // [rsp+B8h] [rbp-48h]
  __int128 v27; // [rsp+C0h] [rbp-40h] BYREF
  int v28; // [rsp+D0h] [rbp-30h]
  __int128 v29; // [rsp+D4h] [rbp-2Ch]
  int v30; // [rsp+E4h] [rbp-1Ch]
  __int128 v31; // [rsp+E8h] [rbp-18h]
  int v32; // [rsp+F8h] [rbp-8h]
  __int128 v33; // [rsp+FCh] [rbp-4h]
  int v34; // [rsp+10Ch] [rbp+Ch]
  __int128 v35; // [rsp+110h] [rbp+10h]
  int v36; // [rsp+120h] [rbp+20h]
  __int128 v37; // [rsp+124h] [rbp+24h]
  int v38; // [rsp+134h] [rbp+34h]
  PROPERTYKEY v39; // [rsp+138h] [rbp+38h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v22 = -2LL;
  v6 = 0;
  *a3 = 0;
  v27 = xmmword_1801B6564;
  v28 = dword_1801B6574;
  v29 = xmmword_1801B6578;
  v30 = dword_1801B6588;
  v31 = xmmword_1801B658C;
  v32 = dword_1801B659C;
  v33 = xmmword_1801B65B4;
  v34 = dword_1801B65C4;
  v35 = xmmword_1801B65C8;
  v36 = dword_1801B65D8;
  v37 = xmmword_1801B65DC;
  v38 = dword_1801B65EC;
  v39 = PKEY_AudioEndpoint_Disable_SysFx;
  v7 = 0;
  v8 = &v27;
  while ( a2->pid != *((_DWORD *)v8 + 4)
       || *(_QWORD *)&a2->fmtid.Data1 != *(_QWORD *)v8
       || *(_QWORD *)a2->fmtid.Data4 != *((_QWORD *)v8 + 1) )
  {
    ++v7;
    v8 = (__int128 *)((char *)v8 + 20);
    if ( v7 >= 7 )
      goto LABEL_9;
  }
  updated = CEndpointCharacteristics::UpdateAPOEnableStatus(this);
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1C78,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)updated,
      v15);
LABEL_9:
  if ( !*((_DWORD *)this + 39) )
  {
    v10 = SpatialPolicy::OnPropertyChange(*((struct IMMDevice **)this + 2), a2);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1C7F,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v10,
        v15);
    if ( !*((_DWORD *)this + 39)
      && (*(_QWORD *)&a2->fmtid.Data1 == *(_QWORD *)((char *)this + 1708)
       && *(_QWORD *)a2->fmtid.Data4 == *(_QWORD *)((char *)this + 1716)
       && a2->pid == *((_DWORD *)this + 431)
       || *(_QWORD *)&a2->fmtid.Data1 == *(_QWORD *)&PKEY_AudioEngine_DeviceFormat.fmtid.Data1
       && *(_QWORD *)a2->fmtid.Data4 == *(_QWORD *)PKEY_AudioEngine_DeviceFormat.fmtid.Data4
       && !a2->pid) )
    {
      CEndpointCharacteristics::GetDefaultConnectorProcessingModeForSpatialStream(this, &v21, v11);
      v19 = 0LL;
      v16 = (struct tWAVEFORMATEX **)(wil::out_param<std::unique_ptr<SaDeviceParams>>(v20, &v19) + 8);
      CEndpointCharacteristics::GetDeviceFormat(this, 0, 0, eHostProcessConnector, v16);
      wil::details::out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(v20);
      *(_QWORD *)v20 = this;
      *(struct _GUID *)&v20[8] = v21;
      LOBYTE(v18) = 0;
      v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)g_policyConfigInternal + 48LL))(
              g_policyConfigInternal,
              &v18);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1C9B,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v12,
          v17);
      v23 = (__int64)off_18015C320;
      v24 = *(_OWORD *)v20;
      v25 = *(_QWORD *)&v20[16];
      v26 = &v23;
      CSpatialProperties::ProcessPropertyChange(
        (__int64)this + 1624,
        (LPCWSTR *)this,
        (__int64)a2,
        *((_QWORD *)this + 5),
        &v18,
        v19,
        (__int64)&v23,
        a3);
      wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v19);
    }
  }
  if ( dword_1801B7B28 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1801B7B28);
    if ( dword_1801B7B28 == -1 )
    {
      xmmword_1801B71E0 = (__int128)GUID_00000000_0000_0000_0000_000000000000;
      dword_1801B71F0 = 0;
      dword_1801B71F4 = 8;
      xmmword_1801B71F8 = (__int128)GUID_00000000_0000_0000_0000_000000000000;
      dword_1801B7208 = 0;
      dword_1801B720C = 4;
      *(PROPERTYKEY *)byte_1801B7210 = PKEY_AudioEngine_DeviceFormat;
      dword_1801B7224 = 2;
      *(struct _tagpropertykey *)byte_1801B7228 = PKEY_Endpoint_AllowOffloading;
      dword_1801B723C = 16;
      Init_thread_footer(&dword_1801B7B28);
    }
  }
  v13 = &xmmword_1801B71E0;
  if ( xmmword_1801B71E0 == *(_OWORD *)&GUID_00000000_0000_0000_0000_000000000000 )
  {
    GetSpatialSettingsMonitoringPKey(&xmmword_1801B71E0);
    GetSpatialSettingsMonitoringPKey(&xmmword_1801B71F8);
  }
  do
  {
    if ( a2->pid == *((_DWORD *)v13 + 4)
      && *(_QWORD *)&a2->fmtid.Data1 == *(_QWORD *)v13
      && *(_QWORD *)a2->fmtid.Data4 == *((_QWORD *)v13 + 1) )
    {
      v14 = *((_DWORD *)v13 + 5);
      SystemEffectDescriptor::MarkAsNeedsResolution((char *)this + 232, v14);
      SystemEffectDescriptor::MarkAsNeedsResolution((char *)this + 616, v14);
      SystemEffectDescriptor::MarkAsNeedsResolution((char *)this + 1000, v14);
    }
    ++v6;
    v13 = (__int128 *)((char *)v13 + 24);
  }
  while ( v6 < 4 );
}
