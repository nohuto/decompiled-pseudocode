/*
 * XREFs of ndisUpdateOffloadKeywords @ 0x1C0070A94
 * Callers:
 *     ndisPreOffloadAdminSettings @ 0x1C0022100 (ndisPreOffloadAdminSettings.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     NdisOpenConfigurationEx @ 0x1C002B8B0 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C002BAE0 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C002BBC0 (NdisReadConfiguration.c)
 *     ?ndisConvertOffloadValueToString@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C0068338 (-ndisConvertOffloadValueToString@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     ndisWriteConfigurationIfPresent @ 0x1C007F484 (ndisWriteConfigurationIfPresent.c)
 */

__int64 __fastcall ndisUpdateOffloadKeywords(__int64 a1, __int64 a2)
{
  PVOID v4; // r15
  unsigned __int8 v5; // r13
  unsigned __int8 v6; // r10
  unsigned __int8 v7; // bl
  unsigned __int8 v8; // r12
  unsigned __int8 v9; // r11
  unsigned __int8 v10; // cl
  unsigned __int8 v11; // al
  unsigned __int8 v12; // al
  int v13; // r14d
  unsigned __int8 v14; // cl
  unsigned __int8 v15; // r8
  unsigned __int8 v16; // dl
  unsigned __int8 v17; // r9
  unsigned int v18; // ebx
  NDIS_STATUS v19; // eax
  _NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> v20; // xmm6
  unsigned __int8 v21; // al
  unsigned __int8 v22; // al
  unsigned __int8 v23; // al
  int v24; // ecx
  unsigned int v25; // ecx
  unsigned __int8 v26; // al
  int v27; // ecx
  unsigned int v28; // ecx
  unsigned __int8 v29; // al
  int v30; // ecx
  unsigned int v31; // ecx
  unsigned __int8 v32; // al
  int v33; // ecx
  unsigned int v34; // ecx
  unsigned __int8 v35; // al
  int v36; // ecx
  unsigned int v37; // ecx
  unsigned __int8 v38; // al
  int v39; // eax
  unsigned int v40; // eax
  unsigned __int8 v41; // al
  int v42; // eax
  unsigned int v43; // eax
  unsigned __int8 v44; // al
  int v45; // eax
  unsigned int v46; // eax
  unsigned __int8 v47; // al
  int v48; // ecx
  unsigned int v49; // ecx
  int v50; // ecx
  unsigned int v51; // ecx
  unsigned __int8 v52; // al
  int v53; // eax
  unsigned int v54; // eax
  int v55; // ecx
  unsigned int v56; // ecx
  unsigned __int8 v57; // al
  int v58; // eax
  unsigned int v59; // eax
  unsigned __int8 v60; // si
  int v61; // ecx
  int v62; // ecx
  int v63; // ecx
  int v64; // ecx
  int v65; // ecx
  unsigned __int8 v66; // si
  int v67; // ecx
  unsigned __int8 v68; // si
  int v69; // ecx
  int Status; // [rsp+38h] [rbp-59h] BYREF
  unsigned __int8 v72; // [rsp+3Ch] [rbp-55h]
  unsigned __int8 v73; // [rsp+3Dh] [rbp-54h]
  struct _NDIS_CONFIGURATION_PARAMETER v74; // [rsp+40h] [rbp-51h] BYREF
  unsigned __int8 v75; // [rsp+58h] [rbp-39h]
  unsigned __int8 v76; // [rsp+59h] [rbp-38h]
  PVOID ConfigurationHandle; // [rsp+60h] [rbp-31h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+68h] [rbp-29h] BYREF
  _NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> v79; // [rsp+80h] [rbp-11h]
  PNDIS_CONFIGURATION_PARAMETER ParameterValue[11]; // [rsp+90h] [rbp-1h] BYREF
  unsigned __int8 v81; // [rsp+F8h] [rbp+67h]
  unsigned __int8 v82; // [rsp+100h] [rbp+6Fh]
  unsigned __int8 v83; // [rsp+108h] [rbp+77h]
  char v84; // [rsp+110h] [rbp+7Fh]

  *(_QWORD *)&v79.IntegerData = 262146LL;
  ConfigurationHandle = 0LL;
  memset(&v74, 0, sizeof(v74));
  v4 = 0LL;
  memset(&ConfigObject, 0, sizeof(ConfigObject));
  v5 = 0;
  v6 = 0;
  v82 = 0;
  v79.StringData.Buffer = (wchar_t *)L"0";
  v7 = 0;
  v75 = 0;
  v8 = 0;
  v83 = 0;
  v9 = 0;
  v72 = 0;
  v73 = 0;
  v84 = 0;
  v76 = 0;
  v81 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      220,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      a1);
    v6 = 0;
    v9 = 0;
  }
  v10 = *(_BYTE *)(a2 + 1);
  if ( v10 >= 2u && *(_WORD *)(a2 + 2) >= 0x16u )
  {
    v6 = *(_BYTE *)(a2 + 21);
    v5 = *(_BYTE *)(a2 + 20);
    v82 = v6;
  }
  if ( v10 >= 3u && *(_WORD *)(a2 + 2) >= 0x1Au )
  {
    v7 = *(_BYTE *)(a2 + 22);
    v11 = *(_BYTE *)(a2 + 23);
    v9 = *(_BYTE *)(a2 + 25);
    v8 = *(_BYTE *)(a2 + 24);
    v75 = v7;
    v83 = v11;
    v81 = v9;
  }
  if ( v10 >= 4u && *(_WORD *)(a2 + 2) >= 0x20u )
  {
    v84 = (v9 & 1) != 0 ? v8 : 0;
    if ( (v9 & 2) != 0 )
    {
      v76 = v8;
      v84 = (v9 & 1) != 0 ? v8 : 0;
    }
  }
  if ( v10 >= 5u && *(_WORD *)(a2 + 2) >= 0x22u )
  {
    v72 = *(_BYTE *)(a2 + 32);
    v73 = *(_BYTE *)(a2 + 33);
  }
  v12 = *(_BYTE *)(a2 + 4);
  v13 = *(_DWORD *)(*(_QWORD *)(a1 + 4096) + 764LL) & 1;
  if ( v12 > 4u )
    goto LABEL_217;
  v14 = *(_BYTE *)(a2 + 5);
  if ( v14 > 4u )
    goto LABEL_217;
  v15 = *(_BYTE *)(a2 + 7);
  if ( v15 > 4u )
    goto LABEL_217;
  v16 = *(_BYTE *)(a2 + 6);
  if ( v16 > 4u )
    goto LABEL_217;
  v17 = *(_BYTE *)(a2 + 8);
  if ( v17 > 4u
    || *(_BYTE *)(a2 + 9) > 2u
    || *(_BYTE *)(a2 + 11) > 2u
    || *(_BYTE *)(a2 + 12) > 2u
    || *(_BYTE *)(a2 + 10) > 4u
    || *(_BYTE *)(a2 + 13) > 2u
    || *(_BYTE *)(a2 + 14) > 2u
    || v5 > 4u
    || v6 > 4u
    || v7 > 2u
    || v83 > 2u
    || v8 > 2u
    || v9 > 3u
    || v8 && !v9 )
  {
    goto LABEL_217;
  }
  if ( v72 > 2u || v73 > 2u )
    goto LABEL_217;
  if ( v5 && v6 )
    return (unsigned int)-1073676267;
  if ( (_BYTE)v13 && (v12 != v14 || v12 != v16 || v15 != v17) )
    return (unsigned int)-1073741811;
  *(_DWORD *)(a1 + 3680) |= 0x20000u;
  ConfigObject.Flags = 0;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = (void *)a1;
  v19 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v4 = ConfigurationHandle;
  v18 = v19;
  Status = v19;
  if ( v19 )
    goto LABEL_218;
  v20 = v79;
  if ( (_BYTE)v13 )
  {
    v21 = *(_BYTE *)(a2 + 4);
    if ( v21 )
    {
      v74.ParameterType = NdisParameterString;
      v74.ParameterData = v79;
      Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, (unsigned int)v21 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_218;
      ndisWriteConfigurationIfPresent(&Status, v4, &TCPUDPChecksumOffloadIPv4Str, &v74);
    }
    v22 = *(_BYTE *)(a2 + 7);
    if ( v22 )
    {
      v74.ParameterType = NdisParameterString;
      v74.ParameterData = v20;
      Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, (unsigned int)v22 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_218;
      ndisWriteConfigurationIfPresent(&Status, v4, &TCPUDPChecksumOffloadIPv6Str, &v74);
    }
  }
  else
  {
    NdisReadConfiguration(
      &Status,
      ParameterValue,
      ConfigurationHandle,
      &TCPUDPChecksumOffloadIPv4Str,
      NdisParameterString);
  }
  v23 = *(_BYTE *)(a2 + 4);
  if ( v23 )
  {
    if ( !(_BYTE)v13 )
    {
      v74.ParameterType = NdisParameterString;
      v74.ParameterData = v20;
      Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, (unsigned int)v23 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_218;
      ndisWriteConfigurationIfPresent(&Status, v4, &IPXsumIPv4Str, &v74);
      v23 = *(_BYTE *)(a2 + 4);
    }
    v24 = *(_DWORD *)(a1 + 3680);
    switch ( v23 )
    {
      case 1u:
        v25 = v24 | 3;
        break;
      case 2u:
        v25 = v24 & 0xFFFFFFFC | 2;
        break;
      case 3u:
        v25 = v24 & 0xFFFFFFFC | 1;
        break;
      default:
        v25 = v24 & 0xFFFFFFFC;
        break;
    }
    *(_DWORD *)(a1 + 3680) = v25;
  }
  v26 = *(_BYTE *)(a2 + 5);
  if ( v26 )
  {
    if ( !(_BYTE)v13 )
    {
      v74.ParameterType = NdisParameterString;
      v74.ParameterData = v20;
      Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, (unsigned int)v26 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_218;
      ndisWriteConfigurationIfPresent(&Status, v4, &TCPXsumIPv4Str, &v74);
      v26 = *(_BYTE *)(a2 + 5);
    }
    v27 = *(_DWORD *)(a1 + 3680);
    switch ( v26 )
    {
      case 1u:
        v28 = v27 | 0xC;
        break;
      case 2u:
        v28 = v27 & 0xFFFFFFF3 | 8;
        break;
      case 3u:
        v28 = v27 & 0xFFFFFFF3 | 4;
        break;
      default:
        v28 = v27 & 0xFFFFFFF3;
        break;
    }
    *(_DWORD *)(a1 + 3680) = v28;
  }
  v29 = *(_BYTE *)(a2 + 7);
  if ( v29 )
  {
    if ( !(_BYTE)v13 )
    {
      v74.ParameterType = NdisParameterString;
      v74.ParameterData = v20;
      Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, (unsigned int)v29 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_218;
      ndisWriteConfigurationIfPresent(&Status, v4, &TCPXsumIPv6Str, &v74);
      v29 = *(_BYTE *)(a2 + 7);
    }
    v30 = *(_DWORD *)(a1 + 3680);
    switch ( v29 )
    {
      case 1u:
        v31 = v30 | 0xC0;
        break;
      case 2u:
        v31 = v30 & 0xFFFFFF3F | 0x80;
        break;
      case 3u:
        v31 = v30 & 0xFFFFFF3F | 0x40;
        break;
      default:
        v31 = v30 & 0xFFFFFF3F;
        break;
    }
    *(_DWORD *)(a1 + 3680) = v31;
  }
  v32 = *(_BYTE *)(a2 + 6);
  if ( v32 )
  {
    if ( !(_BYTE)v13 )
    {
      v74.ParameterType = NdisParameterString;
      v74.ParameterData = v20;
      Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, (unsigned int)v32 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_218;
      ndisWriteConfigurationIfPresent(&Status, v4, &UDPXsumIPv4Str, &v74);
      v32 = *(_BYTE *)(a2 + 6);
    }
    v33 = *(_DWORD *)(a1 + 3680);
    switch ( v32 )
    {
      case 1u:
        v34 = v33 | 0x30;
        break;
      case 2u:
        v34 = v33 & 0xFFFFFFCF | 0x20;
        break;
      case 3u:
        v34 = v33 & 0xFFFFFFCF | 0x10;
        break;
      default:
        v34 = v33 & 0xFFFFFFCF;
        break;
    }
    *(_DWORD *)(a1 + 3680) = v34;
  }
  v35 = *(_BYTE *)(a2 + 8);
  if ( v35 )
  {
    if ( !(_BYTE)v13 )
    {
      v74.ParameterType = NdisParameterString;
      v74.ParameterData = v20;
      Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, (unsigned int)v35 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_218;
      ndisWriteConfigurationIfPresent(&Status, v4, &UDPXsumIPv6Str, &v74);
      v35 = *(_BYTE *)(a2 + 8);
    }
    v36 = *(_DWORD *)(a1 + 3680);
    switch ( v35 )
    {
      case 1u:
        v37 = v36 | 0x300;
        break;
      case 2u:
        v37 = v36 & 0xFFFFFCFF | 0x200;
        break;
      case 3u:
        v37 = v36 & 0xFFFFFCFF | 0x100;
        break;
      default:
        v37 = v36 & 0xFFFFFCFF;
        break;
    }
    *(_DWORD *)(a1 + 3680) = v37;
  }
  v38 = *(_BYTE *)(a2 + 9);
  if ( v38 )
  {
    if ( v38 > 2u )
      goto LABEL_217;
    v74.ParameterType = NdisParameterString;
    v74.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, (unsigned int)v38 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_218;
    ndisWriteConfigurationIfPresent(&Status, v4, &LsoV1IPv4Str, &v74);
    v39 = *(_DWORD *)(a1 + 3680);
    if ( *(_BYTE *)(a2 + 9) == 1 )
      v40 = v39 | 0x400;
    else
      v40 = v39 & 0xFFFFFBFF;
    *(_DWORD *)(a1 + 3680) = v40;
  }
  v41 = *(_BYTE *)(a2 + 11);
  if ( v41 )
  {
    if ( v41 > 2u )
      goto LABEL_217;
    v74.ParameterType = NdisParameterString;
    v74.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, (unsigned int)v41 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_218;
    ndisWriteConfigurationIfPresent(&Status, v4, &LsoV2IPv4Str, &v74);
    v42 = *(_DWORD *)(a1 + 3680);
    if ( *(_BYTE *)(a2 + 11) == 1 )
      v43 = v42 | 0x800;
    else
      v43 = v42 & 0xFFFFF7FF;
    *(_DWORD *)(a1 + 3680) = v43;
  }
  v44 = *(_BYTE *)(a2 + 12);
  if ( v44 )
  {
    if ( v44 > 2u )
      goto LABEL_217;
    v74.ParameterType = NdisParameterString;
    v74.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, (unsigned int)v44 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_218;
    ndisWriteConfigurationIfPresent(&Status, v4, &LsoV2IPv6Str, &v74);
    v45 = *(_DWORD *)(a1 + 3680);
    if ( *(_BYTE *)(a2 + 12) == 1 )
      v46 = v45 | 0x1000;
    else
      v46 = v45 & 0xFFFFEFFF;
    *(_DWORD *)(a1 + 3680) = v46;
  }
  v47 = *(_BYTE *)(a2 + 10);
  if ( v47 )
  {
    if ( v47 > 4u )
      goto LABEL_217;
    v74.ParameterType = NdisParameterString;
    v74.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, (unsigned int)v47 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_218;
    ndisWriteConfigurationIfPresent(&Status, v4, &IPsecIPv4Str, &v74);
    v48 = *(_DWORD *)(a1 + 3680);
    switch ( *(_BYTE *)(a2 + 10) )
    {
      case 1:
        v49 = v48 | 0x6000;
        break;
      case 2:
        v49 = v48 & 0xFFFF9FFF | 0x4000;
        break;
      case 3:
        v49 = v48 & 0xFFFF9FFF | 0x2000;
        break;
      default:
        v49 = v48 & 0xFFFF9FFF;
        break;
    }
    *(_DWORD *)(a1 + 3680) = v49;
  }
  if ( v5 )
  {
    v74.ParameterType = NdisParameterString;
    v74.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, (unsigned int)v5 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_218;
    ndisWriteConfigurationIfPresent(&Status, v4, &IPsecV2Str, &v74);
    v50 = *(_DWORD *)(a1 + 3680);
    switch ( v5 )
    {
      case 1u:
        v51 = v50 | 0xC0000;
        break;
      case 2u:
        v51 = v50 & 0xFFF3FFFF | 0x80000;
        break;
      case 3u:
        v51 = v50 & 0xFFF3FFFF | 0x40000;
        break;
      default:
        v51 = v50 & 0xFFF3FFFF;
        break;
    }
    *(_DWORD *)(a1 + 3680) = v51;
  }
  else if ( v82 )
  {
    v74.ParameterType = NdisParameterString;
    v74.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, (unsigned int)v82 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_218;
    ndisWriteConfigurationIfPresent(&Status, v4, &IPsecV2IPv4Str, &v74);
    v55 = *(_DWORD *)(a1 + 3680);
    switch ( v82 )
    {
      case 1u:
        v56 = v55 | 0x300000;
        break;
      case 2u:
        v56 = v55 & 0xFFCFFFFF | 0x200000;
        break;
      case 3u:
        v56 = v55 & 0xFFCFFFFF | 0x100000;
        break;
      default:
        v56 = v55 & 0xFFCFFFFF;
        break;
    }
    *(_DWORD *)(a1 + 3680) = v56;
  }
  v52 = *(_BYTE *)(a2 + 13);
  if ( v52 )
  {
    if ( v52 > 2u )
      goto LABEL_217;
    v74.ParameterType = NdisParameterString;
    v74.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, (unsigned int)v52 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_218;
    ndisWriteConfigurationIfPresent(&Status, v4, &TCPConnectionOffloadIPv4Str, &v74);
    v53 = *(_DWORD *)(a1 + 3680);
    if ( *(_BYTE *)(a2 + 13) == 1 )
      v54 = v53 | 0x8000;
    else
      v54 = v53 & 0xFFFF7FFF;
    *(_DWORD *)(a1 + 3680) = v54;
  }
  v57 = *(_BYTE *)(a2 + 14);
  if ( v57 )
  {
    if ( v57 <= 2u )
    {
      v74.ParameterType = NdisParameterString;
      v74.ParameterData = v20;
      Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, (unsigned int)v57 - 1);
      v18 = Status;
      if ( Status )
        goto LABEL_218;
      ndisWriteConfigurationIfPresent(&Status, v4, &TCPConnectionOffloadIPv6Str, &v74);
      v58 = *(_DWORD *)(a1 + 3680);
      if ( *(_BYTE *)(a2 + 14) == 1 )
        v59 = v58 | 0x10000;
      else
        v59 = v58 & 0xFFFEFFFF;
      *(_DWORD *)(a1 + 3680) = v59;
      goto LABEL_180;
    }
LABEL_217:
    v18 = -1073676267;
    goto LABEL_218;
  }
LABEL_180:
  v60 = v75;
  if ( v75 )
  {
    v74.ParameterType = NdisParameterString;
    v74.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, (unsigned int)v75 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_218;
    ndisWriteConfigurationIfPresent(&Status, v4, &RscIPv4Str, &v74);
    v61 = 0;
    if ( v60 == 1 )
      v61 = 0x800000;
    *(_DWORD *)(a1 + 3680) = *(_DWORD *)(a1 + 3680) & 0xFF7FFFFF | v61;
  }
  if ( v83 )
  {
    v74.ParameterType = NdisParameterString;
    v74.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, (unsigned int)v83 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_218;
    ndisWriteConfigurationIfPresent(&Status, v4, &RscIPv6Str, &v74);
    v62 = 0;
    if ( v83 == 1 )
      v62 = 0x1000000;
    *(_DWORD *)(a1 + 3680) = *(_DWORD *)(a1 + 3680) & 0xFEFFFFFF | v62;
  }
  if ( v8 )
  {
    v74.ParameterType = NdisParameterString;
    v74.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, v8 == 1);
    v18 = Status;
    if ( Status )
      goto LABEL_218;
    if ( v8 == 2 && v81 == 3 || v8 == 1 )
    {
      ndisWriteConfigurationIfPresent(&Status, v4, &EncapsulatedPacketTaskOffloadStr, &v74);
      v63 = 0;
      if ( v8 == 2 )
        v63 = 0x2000000;
      *(_DWORD *)(a1 + 3680) = *(_DWORD *)(a1 + 3680) & 0xFDFFFFFF | v63;
    }
    if ( (v81 & 1) != 0 )
    {
      ndisWriteConfigurationIfPresent(&Status, v4, &EncapsulatedPacketTaskOffloadNvgreStr, &v74);
      v64 = 0;
      if ( v84 == 2 )
        v64 = 0x4000000;
      *(_DWORD *)(a1 + 3680) = *(_DWORD *)(a1 + 3680) & 0xFBFFFFFF | v64;
    }
    if ( (v81 & 2) != 0 )
    {
      ndisWriteConfigurationIfPresent(&Status, v4, &EncapsulatedPacketTaskOffloadVxlanStr, &v74);
      v65 = 0;
      if ( v76 == 2 )
        v65 = 0x8000000;
      *(_DWORD *)(a1 + 3680) = *(_DWORD *)(a1 + 3680) & 0xF7FFFFFF | v65;
    }
  }
  v66 = v72;
  if ( v72 )
  {
    v74.ParameterType = NdisParameterString;
    v74.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, (unsigned int)v72 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_218;
    ndisWriteConfigurationIfPresent(&Status, v4, &UsoIPv4Str, &v74);
    v67 = 0;
    if ( v66 == 1 )
      v67 = 0x10000000;
    *(_DWORD *)(a1 + 3680) = *(_DWORD *)(a1 + 3680) & 0xEFFFFFFF | v67;
  }
  v68 = v73;
  if ( v73 )
  {
    v74.ParameterType = NdisParameterString;
    v74.ParameterData = v20;
    Status = ndisConvertOffloadValueToString((struct _UNICODE_STRING *)&v74.ParameterData, (unsigned int)v73 - 1);
    v18 = Status;
    if ( Status )
      goto LABEL_218;
    ndisWriteConfigurationIfPresent(&Status, v4, &UsoIPv6Str, &v74);
    v69 = 0;
    if ( v68 == 1 )
      v69 = 0x20000000;
    *(_DWORD *)(a1 + 3680) = *(_DWORD *)(a1 + 3680) & 0xDFFFFFFF | v69;
  }
  v18 = 0;
LABEL_218:
  if ( v4 )
    NdisCloseConfiguration(v4);
  return v18;
}
