/*
 * XREFs of ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PEAH@Z @ 0x18001FD48
 * Callers:
 *     ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x18001FC48 (-ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z.c)
 *     ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x1800D6220 (-UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180012DF0 (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x18001E45C (-OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     GetSpatialSettingsMonitoringPKey @ 0x18004B6E0 (GetSpatialSettingsMonitoringPKey.c)
 *     ?GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180057110 (-GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__M.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180060EF0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180060F58 (_Init_thread_header.c)
 *     ?UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJXZ @ 0x18010D678 (-UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJXZ.c)
 *     ?MarkAsNeedsResolution@SystemEffectDescriptor@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z @ 0x180111B44 (-MarkAsNeedsResolution@SystemEffectDescriptor@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEBGAEBU_tagpropertykey@@PEAUIPropertyStore@@PEAUIPolicyConfig@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x180122F84 (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEBGAEBU_tagpropertykey@@PEAUIPropertyStore@@PEA.c)
 */

void __fastcall CEndpointCharacteristics::ProcessPropertyChange(
        CEndpointCharacteristics *this,
        struct IPolicyConfig *a2,
        const struct _tagpropertykey *a3,
        int *a4)
{
  struct IPolicyConfig *v6; // r15
  __int128 *v7; // rcx
  DWORD pid; // r8d
  unsigned int v10; // edx
  int v11; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v12; // r8d
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int128 *v16; // r14
  unsigned int i; // r15d
  __int64 v18; // rax
  __int64 v19; // rax
  int updated; // eax
  __int64 v21; // rdx
  unsigned int v22; // ebx
  struct tWAVEFORMATEX *v23; // [rsp+40h] [rbp-C0h] BYREF
  struct _GUID v24; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v25[24]; // [rsp+58h] [rbp-A8h]
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  __int128 v27; // [rsp+78h] [rbp-88h]
  __int64 v28; // [rsp+88h] [rbp-78h]
  __int64 *v29; // [rsp+A8h] [rbp-58h]
  __int128 v30; // [rsp+B0h] [rbp-50h] BYREF
  int v31; // [rsp+C0h] [rbp-40h]
  __int128 v32; // [rsp+C4h] [rbp-3Ch]
  int v33; // [rsp+D4h] [rbp-2Ch]
  __int128 v34; // [rsp+D8h] [rbp-28h]
  int v35; // [rsp+E8h] [rbp-18h]
  __int128 v36; // [rsp+ECh] [rbp-14h]
  int v37; // [rsp+FCh] [rbp-4h]
  __int128 v38; // [rsp+100h] [rbp+0h]
  int v39; // [rsp+110h] [rbp+10h]
  __int128 v40; // [rsp+114h] [rbp+14h]
  int v41; // [rsp+124h] [rbp+24h]
  PROPERTYKEY v42; // [rsp+128h] [rbp+28h]
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  *a4 = 0;
  v6 = g_PolicyConfig;
  v7 = &v30;
  pid = a3->pid;
  v30 = xmmword_1801B2504;
  v10 = 0;
  v31 = dword_1801B2514;
  v32 = xmmword_1801B2518;
  v33 = dword_1801B2528;
  v35 = dword_1801B253C;
  v34 = xmmword_1801B252C;
  v37 = dword_1801B2564;
  v39 = dword_1801B2578;
  v36 = xmmword_1801B2554;
  v41 = dword_1801B258C;
  v42 = PKEY_AudioEndpoint_Disable_SysFx;
  v38 = xmmword_1801B2568;
  v40 = xmmword_1801B257C;
  while ( 1 )
  {
    if ( pid == *((_DWORD *)v7 + 4) )
    {
      v19 = *(_QWORD *)&a3->fmtid.Data1 - *(_QWORD *)v7;
      if ( *(_QWORD *)&a3->fmtid.Data1 == *(_QWORD *)v7 )
        v19 = *(_QWORD *)a3->fmtid.Data4 - *((_QWORD *)v7 + 1);
      if ( !v19 )
        break;
    }
    ++v10;
    v7 = (__int128 *)((char *)v7 + 20);
    if ( v10 >= 7 )
      goto LABEL_4;
  }
  updated = CEndpointCharacteristics::UpdateAPOEnableStatus(this);
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1C09,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)updated);
LABEL_4:
  if ( !*((_DWORD *)this + 39) )
  {
    v11 = SpatialPolicy::OnPropertyChange(*((struct IMMDevice **)this + 2), a3);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1C10,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v11);
    if ( !*((_DWORD *)this + 39) )
    {
      v13 = *(_QWORD *)&a3->fmtid.Data1 - *(_QWORD *)((char *)this + 1708);
      if ( *(_QWORD *)&a3->fmtid.Data1 == *(_QWORD *)((char *)this + 1708) )
        v13 = *(_QWORD *)a3->fmtid.Data4 - *(_QWORD *)((char *)this + 1716);
      if ( !v13 && a3->pid == *((_DWORD *)this + 431) )
        goto LABEL_37;
      v14 = *(_QWORD *)&a3->fmtid.Data1 - *(_QWORD *)&PKEY_AudioEngine_DeviceFormat.fmtid.Data1;
      if ( *(_QWORD *)&a3->fmtid.Data1 == *(_QWORD *)&PKEY_AudioEngine_DeviceFormat.fmtid.Data1 )
        v14 = *(_QWORD *)a3->fmtid.Data4 - *(_QWORD *)PKEY_AudioEngine_DeviceFormat.fmtid.Data4;
      if ( !v14 && !a3->pid )
      {
LABEL_37:
        CEndpointCharacteristics::GetDefaultConnectorProcessingModeForSpatialStream(this, &v24, v12);
        v23 = 0LL;
        CEndpointCharacteristics::GetDeviceFormat(this, 0LL, 0LL, 0, &v23);
        v21 = *((_QWORD *)this + 3);
        v26 = (__int64)off_1801585C0;
        *(struct _GUID *)&v25[8] = v24;
        v29 = &v26;
        *(_QWORD *)v25 = this;
        v28 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v25[8], *(__m128d *)&v25[8]);
        v27 = *(_OWORD *)v25;
        CSpatialProperties::ProcessPropertyChange((_DWORD)this + 1624, v21, v6, v23, (__int64)&v26, (__int64)a4);
      }
    }
  }
  if ( dword_1801B3AB8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1801B3AB8);
    if ( dword_1801B3AB8 == -1 )
    {
      dword_1801B3180 = 0;
      dword_1801B3198 = 0;
      xmmword_1801B3170 = (__int128)GUID_00000000_0000_0000_0000_000000000000;
      *(PROPERTYKEY *)byte_1801B31A0 = PKEY_AudioEngine_DeviceFormat;
      xmmword_1801B3188 = (__int128)GUID_00000000_0000_0000_0000_000000000000;
      dword_1801B3184 = 8;
      dword_1801B319C = 4;
      dword_1801B31B4 = 2;
      *(struct _tagpropertykey *)byte_1801B31B8 = PKEY_Endpoint_AllowOffloading;
      dword_1801B31CC = 16;
      Init_thread_footer(&dword_1801B3AB8);
    }
  }
  v15 = xmmword_1801B3170 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( (_QWORD)xmmword_1801B3170 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v15 = *((_QWORD *)&xmmword_1801B3170 + 1) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  v16 = &xmmword_1801B3170;
  if ( !v15 )
  {
    GetSpatialSettingsMonitoringPKey(&xmmword_1801B3170);
    GetSpatialSettingsMonitoringPKey(&xmmword_1801B3188);
  }
  for ( i = 0; i < 4; ++i )
  {
    if ( a3->pid == *((_DWORD *)v16 + 4) )
    {
      v18 = *(_QWORD *)&a3->fmtid.Data1 - *(_QWORD *)v16;
      if ( *(_QWORD *)&a3->fmtid.Data1 == *(_QWORD *)v16 )
        v18 = *(_QWORD *)a3->fmtid.Data4 - *((_QWORD *)v16 + 1);
      if ( !v18 )
      {
        v22 = *((_DWORD *)v16 + 5);
        SystemEffectDescriptor::MarkAsNeedsResolution((char *)this + 232, v22);
        SystemEffectDescriptor::MarkAsNeedsResolution((char *)this + 616, v22);
        SystemEffectDescriptor::MarkAsNeedsResolution((char *)this + 1000, v22);
      }
    }
    v16 = (__int128 *)((char *)v16 + 24);
  }
}
