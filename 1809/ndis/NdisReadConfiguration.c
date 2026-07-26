/*
 * XREFs of NdisReadConfiguration @ 0x1C00C6760
 * Callers:
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001589C (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisReadMiniportSpecificPortAuthStates @ 0x1C00BC95C (ndisReadMiniportSpecificPortAuthStates.c)
 *     ?ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z @ 0x1C00C46F0 (-ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z.c)
 *     ndisInitializeConfiguration @ 0x1C00C598C (ndisInitializeConfiguration.c)
 *     ndisReadRssKeywords @ 0x1C00C5E24 (ndisReadRssKeywords.c)
 *     ndisReadPMAdminConfigState @ 0x1C00C61F4 (ndisReadPMAdminConfigState.c)
 *     ndisReadOffloadRegistry @ 0x1C00C623C (ndisReadOffloadRegistry.c)
 *     ?ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C9AE0 (-ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMFindNumaNode @ 0x1C00CA4E4 (ndisMFindNumaNode.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00CA59C (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisReadNetworkAddress @ 0x1C00D19A0 (NdisReadNetworkAddress.c)
 *     ndisUpdateOffloadKeywords @ 0x1C00E56FC (ndisUpdateOffloadKeywords.c)
 *     NdisWdfReadConfiguration @ 0x1C00EAD80 (NdisWdfReadConfiguration.c)
 *     ndisGetMiniportInfo @ 0x1C00EF6C8 (ndisGetMiniportInfo.c)
 *     ndisReadModernStandyWoLMagicPacketKeywords @ 0x1C00F0B04 (ndisReadModernStandyWoLMagicPacketKeywords.c)
 *     ndisIovReadSwitchConfiguration @ 0x1C00F9360 (ndisIovReadSwitchConfiguration.c)
 *     ndisReadNicAutoPowerSaverTimeoutKeywords @ 0x1C00FC1E8 (ndisReadNicAutoPowerSaverTimeoutKeywords.c)
 *     ndisReadSSTimeoutKeywords @ 0x1C00FC2BC (ndisReadSSTimeoutKeywords.c)
 *     ndisIfInitialize @ 0x1C0126788 (ndisIfInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_Z @ 0x1C0041A88 (WPP_SF_Z.c)
 *     ndisReadUpperBindings @ 0x1C0051704 (ndisReadUpperBindings.c)
 *     ndisOpenProtocolSubkey @ 0x1C00C7330 (ndisOpenProtocolSubkey.c)
 *     ?ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z @ 0x1C00C8C90 (-ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z.c)
 *     ndisSaveParameters @ 0x1C00CD7F0 (ndisSaveParameters.c)
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
  unsigned int v10; // r15d
  NDIS_PARAMETER_TYPE v11; // r12d
  __int64 v12; // rdi
  struct _DRIVER_OBJECT *v13; // rcx
  struct _DRIVER_OBJECT *v14; // rcx
  char *PoolWithTag; // rax
  char *v16; // rbx
  PNDIS_CONFIGURATION_PARAMETER v17; // rcx
  __int64 Length; // r9
  const wchar_t *v19; // rcx
  wchar_t *Buffer; // r8
  __int64 v21; // rdx
  __int64 v22; // rdi
  unsigned int v23; // ecx
  __int64 v24; // r12
  unsigned __int8 v25; // r8
  int v26; // ecx
  struct _NDIS_CONFIGURATION_PARAMETER *v27; // rax
  _NDIS_M_DRIVER_BLOCK *v28; // rcx
  PVOID v29; // rdi
  int v30; // [rsp+30h] [rbp-81h] BYREF
  unsigned int v31; // [rsp+34h] [rbp-7Dh] BYREF
  PVOID v32; // [rsp+38h] [rbp-79h] BYREF
  PVOID P; // [rsp+40h] [rbp-71h]
  _UNICODE_STRING String; // [rsp+48h] [rbp-69h] BYREF
  const wchar_t *v35; // [rsp+58h] [rbp-59h] BYREF
  unsigned int *v36; // [rsp+60h] [rbp-51h]
  int v37; // [rsp+68h] [rbp-49h]
  PNDIS_STATUS v38; // [rsp+70h] [rbp-41h]
  _DWORD v39[2]; // [rsp+78h] [rbp-39h]
  char v40; // [rsp+80h] [rbp-31h]
  _BYTE v41[40]; // [rsp+88h] [rbp-29h] BYREF

  v38 = Status;
  memset(v41, 0, sizeof(v41));
  v39[0] = 67305985;
  v32 = 0LL;
  v39[1] = 33620481;
  v40 = 3;
  if ( (unsigned __int8)byte_1C00A0257 >= 4u )
    WPP_SF_Z(0x19u, &WPP_9d4cd70f7fc237db66c5630c937009d5_Traceguids, &Keyword->Length);
  RegistryValues = -1073741823;
  P = Keyword->Buffer;
  for ( i = 0; i < 3; ++i )
  {
    if ( RtlEqualUnicodeString(Keyword, (PCUNICODE_STRING)&unk_1C0085090 + i, 1u) )
    {
      RegistryValues = 0;
      v27 = (struct _NDIS_CONFIGURATION_PARAMETER *)((char *)&unk_1C008E780 + 24 * i);
      goto LABEL_80;
    }
  }
  v10 = 0;
  v11 = ParameterType;
  v12 = *(_QWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 8LL);
  if ( !v12 )
    goto LABEL_16;
  if ( RtlEqualUnicodeString(Keyword, &String2, 1u) )
  {
    Length = *(unsigned __int16 *)(v12 + 3840);
    v19 = L"MiniportName";
    Buffer = *(wchar_t **)(v12 + 3848);
    v21 = 1LL;
    goto LABEL_42;
  }
  if ( !RtlEqualUnicodeString(Keyword, &stru_1C00850F0, 1u)
    || (*(_DWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 16LL) & 1) != 0 )
  {
    goto LABEL_84;
  }
  if ( (unsigned int)ParameterType <= NdisParameterHexInteger )
  {
    v21 = 4LL;
    Buffer = (wchar_t *)(v12 + 3744);
    Length = 4LL;
    goto LABEL_41;
  }
  if ( ParameterType != NdisParameterString )
  {
LABEL_84:
    do
    {
      if ( RtlEqualUnicodeString(Keyword, (PCUNICODE_STRING)&unk_1C0085000 + v10, 1u) )
        break;
      ++v10;
    }
    while ( v10 < 9 );
    v11 = ParameterType;
    if ( v10 >= 9 )
    {
      if ( RtlEqualUnicodeString(Keyword, &stru_1C00850E0, 1u) )
      {
        if ( ParameterType )
          goto LABEL_24;
        v31 = 0;
        v35 = L"NetworkDirectDisable";
        v37 = 0;
        v36 = &v31;
        ndisReadRegistryKnobs(v13, (const struct NDIS_REGISTRY_KNOB *)&v35, 1uLL);
        if ( v31 )
          goto LABEL_66;
      }
      if ( RtlEqualUnicodeString(Keyword, &stru_1C00850D0, 1u) )
      {
        if ( ParameterType )
          goto LABEL_24;
        v37 = 0;
        v35 = L"NetworkDirectGlobalFlags";
        v36 = &NdkGlobalFlags;
        ndisReadRegistryKnobs(v14, (const struct NDIS_REGISTRY_KNOB *)&v35, 1uLL);
        RegistryValues = 0;
        dword_1C00A21B0 = NdkGlobalFlags;
        v27 = (struct _NDIS_CONFIGURATION_PARAMETER *)&unk_1C00A21A8;
        goto LABEL_80;
      }
      if ( RtlEqualUnicodeString(Keyword, &::Keyword, 1u) )
      {
        *(_DWORD *)(v12 + 568) |= 0x80u;
        *(_DWORD *)(v12 + 1880) |= 0x10000u;
      }
LABEL_16:
      if ( !ndisAllowFlowControl && RtlEqualUnicodeString(Keyword, &FlowControlStr, 1u) )
      {
        if ( (unsigned __int8)byte_1C00A0257 >= 3u )
          WPP_SF_(0x1Au, &WPP_9d4cd70f7fc237db66c5630c937009d5_Traceguids);
LABEL_66:
        RegistryValues = 0;
        v27 = (struct _NDIS_CONFIGURATION_PARAMETER *)&unk_1C008E760;
LABEL_80:
        *ParameterValue = v27;
        goto LABEL_24;
      }
      if ( (*(_DWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 16LL) & 2) == 0 || *((_QWORD *)ConfigurationHandle + 4) )
        RegistryValues = 0;
      else
        RegistryValues = ndisOpenProtocolSubkey(ConfigurationHandle);
      if ( RegistryValues >= 0 )
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, Keyword->Length + 2LL, 0x2020444Eu);
        P = PoolWithTag;
        v16 = PoolWithTag;
        if ( !PoolWithTag )
        {
          RegistryValues = -1073741670;
          goto LABEL_27;
        }
        memmove(PoolWithTag, Keyword->Buffer, Keyword->Length);
        *(_WORD *)&v16[Keyword->Length] = 0;
        *(_QWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 40LL) = v16;
        *(_QWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 48LL) = ParameterValue;
        RegistryValues = RtlQueryRegistryValuesEx(
                           0x40000000u,
                           *((PCWSTR *)ConfigurationHandle + 4),
                           (PRTL_QUERY_REGISTRY_TABLE)(*((_QWORD *)ConfigurationHandle + 2) + 24LL),
                           ConfigurationHandle,
                           0LL);
      }
      if ( !v12 )
      {
        if ( RegistryValues >= 0 )
        {
LABEL_29:
          v17 = *ParameterValue;
          if ( (*ParameterValue)->ParameterType == NdisParameterString )
          {
            if ( v11 )
            {
              if ( v11 == NdisParameterHexInteger )
              {
                RtlUnicodeStringToInteger((PCUNICODE_STRING)&v17->ParameterData, 0x10u, &v17->ParameterData.IntegerData);
                (*ParameterValue)->ParameterType = NdisParameterHexInteger;
              }
            }
            else
            {
              RtlUnicodeStringToInteger((PCUNICODE_STRING)&v17->ParameterData, 0xAu, &v17->ParameterData.IntegerData);
              (*ParameterValue)->ParameterType = NdisParameterInteger;
            }
          }
          goto LABEL_24;
        }
        if ( RtlEqualUnicodeString(Keyword, &stru_1C0085110, 1u) )
        {
          v28 = (_NDIS_M_DRIVER_BLOCK *)*((_QWORD *)ConfigurationHandle + 1);
          if ( v28 )
          {
            if ( v28->Header.Type == 2
              && v28->MajorNdisVersion >= 6u
              && !(unsigned int)ndisReadUpperBindings(v28, &v32, &v31) )
            {
              v29 = v32;
              RegistryValues = ndisSaveParameters(L"UpperBindings", 7LL, v32, v31, ConfigurationHandle, ParameterValue);
              if ( v29 )
                ExFreePoolWithTag(v29, 0);
            }
          }
        }
      }
      if ( RegistryValues < 0 )
        goto LABEL_24;
      goto LABEL_29;
    }
    v22 = *(_QWORD *)(v12 + 944);
    if ( !v22 )
      goto LABEL_24;
    v23 = *(_DWORD *)(v22 + 16);
    v24 = 0LL;
    if ( !v23 )
    {
LABEL_62:
      if ( (unsigned int)v24 >= *(_DWORD *)(v22 + 16) )
        RegistryValues = -1073741823;
      goto LABEL_24;
    }
    v25 = *((_BYTE *)v39 + v10);
    while ( *(_BYTE *)(v22 + 20 * v24 + 20) != v25 )
    {
      v24 = (unsigned int)(v24 + 1);
      if ( (unsigned int)v24 >= v23 )
        goto LABEL_62;
    }
    if ( v25 == 1 )
    {
      v30 = *(_DWORD *)(v22 + 20 * v24 + 24);
      goto LABEL_61;
    }
    if ( v25 == 2 )
    {
      v26 = *(unsigned __int16 *)(v22 + 20 * v24 + 24);
    }
    else
    {
      if ( (unsigned int)v25 - 3 > 1 )
      {
LABEL_61:
        RegistryValues = ndisSaveParameters(
                           *((_QWORD *)&unk_1C0085000 + 2 * v10 + 1),
                           4LL,
                           &v30,
                           4LL,
                           ConfigurationHandle,
                           ParameterValue);
        goto LABEL_62;
      }
      v26 = *(_DWORD *)(v22 + 20 * v24 + 24);
    }
    v30 = v26;
    goto LABEL_61;
  }
  *(_DWORD *)&String.Length = 2621440;
  String.Buffer = (wchar_t *)v41;
  RegistryValues = RtlIntegerToUnicodeString(*(_DWORD *)(v12 + 3744), 0xAu, &String);
  if ( !RegistryValues )
  {
    Length = String.Length;
    v21 = 1LL;
    Buffer = String.Buffer;
LABEL_41:
    v19 = L"BusType";
LABEL_42:
    RegistryValues = ndisSaveParameters(v19, v21, Buffer, Length, ConfigurationHandle, ParameterValue);
  }
LABEL_24:
  if ( P && P != Keyword->Buffer )
    ExFreePoolWithTag(P, 0);
LABEL_27:
  *v38 = (RegistryValues >> 31) & 0xC0000001;
  if ( (unsigned __int8)byte_1C00A0257 >= 4u )
    WPP_SF_(0x1Bu, &WPP_9d4cd70f7fc237db66c5630c937009d5_Traceguids);
}
