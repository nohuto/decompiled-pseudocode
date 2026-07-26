/*
 * XREFs of NdisReadConfiguration @ 0x1C002BBC0
 * Callers:
 *     ndisReadRssKeywords @ 0x1C002A94C (ndisReadRssKeywords.c)
 *     ndisReadPMAdminConfigState @ 0x1C002AD20 (ndisReadPMAdminConfigState.c)
 *     ndisReadOffloadRegistry @ 0x1C002B2C4 (ndisReadOffloadRegistry.c)
 *     NdisReadNetworkAddress @ 0x1C002C110 (NdisReadNetworkAddress.c)
 *     ?ndisReadMiniportSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_HANDLE@@@Z @ 0x1C002C460 (-ndisReadMiniportSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_HA.c)
 *     ?ndisReadSoftwareTimestampSettings@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002CD84 (-ndisReadSoftwareTimestampSettings@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C0038D04 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ?ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003A4D4 (-ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisUpdateOffloadKeywords @ 0x1C0070A94 (ndisUpdateOffloadKeywords.c)
 *     NdisWdfReadConfiguration @ 0x1C007EE20 (NdisWdfReadConfiguration.c)
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x1C00962E8 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     ?ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0097B8C (-ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z @ 0x1C00B0D94 (-ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z.c)
 *     ?ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z @ 0x1C0105C94 (-ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z.c)
 *     ndisInitializeConfiguration @ 0x1C0105F58 (ndisInitializeConfiguration.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0106E7C (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0108568 (-ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011BB74 (-ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisReadSSTimeoutKeywords @ 0x1C011BC98 (ndisReadSSTimeoutKeywords.c)
 *     ndisIfInitialize @ 0x1C01440C8 (ndisIfInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Z @ 0x1C001973C (WPP_RECORDER_SF_Z.c)
 *     ?ndisOpenProtocolSubkey@@YAHPEAU_NDIS_CONFIGURATION_HANDLE@@@Z @ 0x1C0023AF0 (-ndisOpenProtocolSubkey@@YAHPEAU_NDIS_CONFIGURATION_HANDLE@@@Z.c)
 *     ndisSaveParameters @ 0x1C00385A0 (ndisSaveParameters.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?ndisReadUpperBindings@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAPEA_WPEAK@Z @ 0x1C007ECD4 (-ndisReadUpperBindings@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAPEA_WPEAK@Z.c)
 *     ndisNDKGlobalDisabled @ 0x1C0119D24 (ndisNDKGlobalDisabled.c)
 *     ndisReadNDKGlobalFlags @ 0x1C011A1EC (ndisReadNDKGlobalFlags.c)
 */

void __stdcall NdisReadConfiguration(
        PNDIS_STATUS Status,
        PNDIS_CONFIGURATION_PARAMETER *ParameterValue,
        NDIS_HANDLE ConfigurationHandle,
        PNDIS_STRING Keyword,
        NDIS_PARAMETER_TYPE ParameterType)
{
  NTSTATUS RegistryValues; // ebx
  unsigned int i; // edi
  int v10; // edx
  unsigned int v11; // r15d
  NDIS_PARAMETER_TYPE v12; // r12d
  __int64 v13; // rdi
  char *PoolWithTag; // rax
  char *v15; // rbx
  PNDIS_CONFIGURATION_PARAMETER v16; // rcx
  __int64 Length; // r9
  const wchar_t *v18; // rcx
  wchar_t *Buffer; // r8
  __int64 v20; // rdx
  __int64 v21; // rdi
  unsigned int v22; // ecx
  __int64 v23; // r12
  unsigned __int8 v24; // r8
  int v25; // ecx
  struct _NDIS_CONFIGURATION_PARAMETER *v26; // rax
  struct _NDIS_M_DRIVER_BLOCK *v27; // rcx
  PVOID v28; // rdi
  int v29; // [rsp+30h] [rbp-61h] BYREF
  unsigned int v30; // [rsp+34h] [rbp-5Dh] BYREF
  _UNICODE_STRING String; // [rsp+38h] [rbp-59h] BYREF
  PVOID v32; // [rsp+48h] [rbp-49h] BYREF
  PVOID P; // [rsp+50h] [rbp-41h]
  PNDIS_STATUS v34; // [rsp+58h] [rbp-39h]
  _DWORD v35[2]; // [rsp+60h] [rbp-31h]
  char v36; // [rsp+68h] [rbp-29h]
  _BYTE v37[40]; // [rsp+70h] [rbp-21h] BYREF

  v34 = Status;
  *(_QWORD *)&String.Length = 0LL;
  String.Buffer = 0LL;
  memset(v37, 0, sizeof(v37));
  v35[0] = 67305985;
  v32 = 0LL;
  v35[1] = 33620481;
  v36 = 3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      8u,
      0x19u,
      (struct _GUID *)&WPP_9b3b3d942ac1381da64d129aaaed6f79_Traceguids,
      &Keyword->Length);
  RegistryValues = -1073741823;
  P = Keyword->Buffer;
  for ( i = 0; i < 3; ++i )
  {
    if ( RtlEqualUnicodeString(Keyword, (PCUNICODE_STRING)&unk_1C00CA090 + i, 1u) )
    {
      RegistryValues = 0;
      v26 = (struct _NDIS_CONFIGURATION_PARAMETER *)((char *)&unk_1C00D3770 + 24 * i);
      goto LABEL_82;
    }
  }
  v11 = 0;
  v12 = ParameterType;
  v13 = *(_QWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 8LL);
  if ( !v13 )
    goto LABEL_16;
  if ( RtlEqualUnicodeString(Keyword, &String2, 1u) )
  {
    Length = *(unsigned __int16 *)(v13 + 3808);
    v18 = L"MiniportName";
    Buffer = *(wchar_t **)(v13 + 3816);
    v20 = 1LL;
    goto LABEL_42;
  }
  if ( !RtlEqualUnicodeString(Keyword, &stru_1C00CA0F0, 1u)
    || (*(_DWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 16LL) & 1) != 0 )
  {
    do
    {
LABEL_9:
      if ( RtlEqualUnicodeString(Keyword, (PCUNICODE_STRING)&unk_1C00CA000 + v11, 1u) )
        break;
      ++v11;
    }
    while ( v11 < 9 );
    v12 = ParameterType;
    if ( v11 >= 9 )
    {
      if ( RtlEqualUnicodeString(Keyword, &stru_1C00CA0E0, 1u) )
      {
        if ( ParameterType )
          goto LABEL_24;
        if ( (unsigned __int8)ndisNDKGlobalDisabled() )
        {
          RegistryValues = 0;
          v26 = (struct _NDIS_CONFIGURATION_PARAMETER *)&unk_1C00D3750;
          goto LABEL_82;
        }
      }
      if ( RtlEqualUnicodeString(Keyword, &stru_1C00CA0D0, 1u) )
      {
        if ( ParameterType )
          goto LABEL_24;
        dword_1C00E8170 = ndisReadNDKGlobalFlags();
        RegistryValues = 0;
        v26 = (struct _NDIS_CONFIGURATION_PARAMETER *)&unk_1C00E8168;
LABEL_82:
        *ParameterValue = v26;
        goto LABEL_24;
      }
      if ( RtlEqualUnicodeString(Keyword, &::Keyword, 1u) )
      {
        *(_DWORD *)(v13 + 568) |= 0x80u;
        *(_DWORD *)(v13 + 1872) |= 0x10000u;
      }
LABEL_16:
      if ( !ndisAllowFlowControl && RtlEqualUnicodeString(Keyword, &FlowControlStr, 1u) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 3;
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v10,
            8,
            26,
            (struct _GUID *)&WPP_9b3b3d942ac1381da64d129aaaed6f79_Traceguids);
        }
        RegistryValues = 0;
        *ParameterValue = (PNDIS_CONFIGURATION_PARAMETER)&unk_1C00D3750;
        goto LABEL_24;
      }
      if ( (*(_DWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 16LL) & 2) == 0 || *((_QWORD *)ConfigurationHandle + 4) )
        RegistryValues = 0;
      else
        RegistryValues = ndisOpenProtocolSubkey((struct _NDIS_CONFIGURATION_HANDLE *)ConfigurationHandle);
      if ( RegistryValues >= 0 )
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, Keyword->Length + 2LL, 0x2020444Eu);
        P = PoolWithTag;
        v15 = PoolWithTag;
        if ( !PoolWithTag )
        {
          RegistryValues = -1073741670;
          goto LABEL_27;
        }
        memmove(PoolWithTag, Keyword->Buffer, Keyword->Length);
        *(_WORD *)&v15[Keyword->Length] = 0;
        *(_QWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 40LL) = v15;
        *(_QWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 48LL) = ParameterValue;
        RegistryValues = RtlQueryRegistryValuesEx(
                           0x40000000u,
                           *((PCWSTR *)ConfigurationHandle + 4),
                           (PRTL_QUERY_REGISTRY_TABLE)(*((_QWORD *)ConfigurationHandle + 2) + 24LL),
                           ConfigurationHandle,
                           0LL);
      }
      if ( !v13 )
      {
        if ( RegistryValues >= 0 )
        {
LABEL_30:
          v16 = *ParameterValue;
          if ( (*ParameterValue)->ParameterType == NdisParameterString )
          {
            if ( v12 )
            {
              if ( v12 == NdisParameterHexInteger )
              {
                RtlUnicodeStringToInteger((PCUNICODE_STRING)&v16->ParameterData, 0x10u, &v16->ParameterData.IntegerData);
                (*ParameterValue)->ParameterType = NdisParameterHexInteger;
              }
            }
            else
            {
              RtlUnicodeStringToInteger((PCUNICODE_STRING)&v16->ParameterData, 0xAu, &v16->ParameterData.IntegerData);
              (*ParameterValue)->ParameterType = NdisParameterInteger;
            }
          }
          goto LABEL_24;
        }
        if ( RtlEqualUnicodeString(Keyword, &stru_1C00CA110, 1u) )
        {
          v27 = (struct _NDIS_M_DRIVER_BLOCK *)*((_QWORD *)ConfigurationHandle + 1);
          if ( v27 )
          {
            if ( v27->Header.Type == 2
              && v27->MajorNdisVersion >= 6u
              && !(unsigned int)ndisReadUpperBindings(v27, (wchar_t **)&v32, &v30) )
            {
              v28 = v32;
              RegistryValues = ndisSaveParameters(L"UpperBindings", 7LL, v32, v30, ConfigurationHandle, ParameterValue);
              if ( v28 )
                ExFreePoolWithTag(v28, 0);
            }
          }
        }
      }
      if ( RegistryValues < 0 )
        goto LABEL_24;
      goto LABEL_30;
    }
    v21 = *(_QWORD *)(v13 + 944);
    if ( !v21 )
      goto LABEL_24;
    v22 = *(_DWORD *)(v21 + 16);
    v23 = 0LL;
    if ( !v22 )
    {
LABEL_63:
      if ( (unsigned int)v23 >= *(_DWORD *)(v21 + 16) )
        RegistryValues = -1073741823;
      goto LABEL_24;
    }
    v24 = *((_BYTE *)v35 + v11);
    while ( *(_BYTE *)(v21 + 20 * v23 + 20) != v24 )
    {
      v23 = (unsigned int)(v23 + 1);
      if ( (unsigned int)v23 >= v22 )
        goto LABEL_63;
    }
    if ( v24 == 1 )
    {
      v29 = *(_DWORD *)(v21 + 20 * v23 + 24);
      goto LABEL_62;
    }
    if ( v24 == 2 )
    {
      v25 = *(unsigned __int16 *)(v21 + 20 * v23 + 24);
    }
    else
    {
      if ( (unsigned int)v24 - 3 > 1 )
      {
LABEL_62:
        RegistryValues = ndisSaveParameters(
                           *((_QWORD *)&unk_1C00CA000 + 2 * v11 + 1),
                           4LL,
                           &v29,
                           4LL,
                           ConfigurationHandle,
                           ParameterValue);
        goto LABEL_63;
      }
      v25 = *(_DWORD *)(v21 + 20 * v23 + 24);
    }
    v29 = v25;
    goto LABEL_62;
  }
  if ( (unsigned int)ParameterType <= NdisParameterHexInteger )
  {
    v20 = 4LL;
    Buffer = (wchar_t *)(v13 + 3720);
    Length = 4LL;
LABEL_41:
    v18 = L"BusType";
LABEL_42:
    RegistryValues = ndisSaveParameters(v18, v20, Buffer, Length, ConfigurationHandle, ParameterValue);
    goto LABEL_24;
  }
  if ( ParameterType != NdisParameterString )
    goto LABEL_9;
  *(_DWORD *)&String.Length = 2621440;
  String.Buffer = (wchar_t *)v37;
  RegistryValues = RtlIntegerToUnicodeString(*(_DWORD *)(v13 + 3720), 0xAu, &String);
  if ( !RegistryValues )
  {
    Length = String.Length;
    v20 = 1LL;
    Buffer = String.Buffer;
    goto LABEL_41;
  }
LABEL_24:
  if ( P && P != Keyword->Buffer )
    ExFreePoolWithTag(P, 0);
LABEL_27:
  *v34 = (RegistryValues >> 31) & 0xC0000001;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      8,
      27,
      (struct _GUID *)&WPP_9b3b3d942ac1381da64d129aaaed6f79_Traceguids);
  }
}
