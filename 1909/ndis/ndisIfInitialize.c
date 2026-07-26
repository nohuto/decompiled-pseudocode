/*
 * XREFs of ndisIfInitialize @ 0x1C01440C8
 * Callers:
 *     DriverEntry @ 0x1C0144AD0 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     NdisOpenProtocolConfiguration @ 0x1C00238B0 (NdisOpenProtocolConfiguration.c)
 *     NdisCloseConfiguration @ 0x1C002BAD0 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C002BBB0 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationKeyByIndex @ 0x1C002CBD0 (NdisOpenConfigurationKeyByIndex.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032358 (WPP_RECORDER_SF_D.c)
 *     NdisIfRegisterProvider @ 0x1C003D8A0 (NdisIfRegisterProvider.c)
 *     ?ndisIsValidIfStringParts@@YAEPEB_WK@Z @ 0x1C003F534 (-ndisIsValidIfStringParts@@YAEPEB_WK@Z.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

__int64 __fastcall ndisIfInitialize(__int64 a1, __int16 a2)
{
  unsigned int v2; // esi
  ULONG v3; // edi
  int v4; // edx
  int v5; // ebx
  NDIS_HANDLE v6; // rbx
  const wchar_t *v7; // rcx
  NDIS_HANDLE v8; // r14
  PVOID v9; // rbx
  unsigned __int16 Length; // r13
  wchar_t *Buffer; // r15
  char *PoolWithTag; // rax
  char *v13; // rdi
  _LIST_ENTRY *Flink; // rax
  unsigned int v16; // edx
  __int64 v17; // r9
  unsigned int v18; // edx
  __int64 v19; // rcx
  size_t v20; // r8
  _UNICODE_STRING v21; // [rsp+30h] [rbp-89h] BYREF
  UNICODE_STRING Keyword; // [rsp+40h] [rbp-79h] BYREF
  UNICODE_STRING v23; // [rsp+50h] [rbp-69h] BYREF
  UNICODE_STRING v24; // [rsp+60h] [rbp-59h] BYREF
  UNICODE_STRING v25; // [rsp+70h] [rbp-49h] BYREF
  struct _NDIS_IF_PROVIDER_CHARACTERISTICS ProviderCharacteristics; // [rsp+80h] [rbp-39h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-11h] BYREF
  UNICODE_STRING KeyName; // [rsp+B8h] [rbp-1h] BYREF
  int Status; // [rsp+120h] [rbp+67h] BYREF
  NDIS_HANDLE ConfigurationHandle; // [rsp+128h] [rbp+6Fh] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+130h] [rbp+77h] BYREF
  PVOID KeyHandle; // [rsp+138h] [rbp+7Fh] BYREF

  v2 = 0;
  *(_QWORD *)&v24.Length = 917516LL;
  Status = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v3 = 0;
  DestinationString.Buffer = 0LL;
  v24.Buffer = (wchar_t *)L"IfType";
  ConfigurationHandle = 0LL;
  v25.Buffer = (wchar_t *)L"IfUsedNetLuidIndices";
  KeyHandle = 0LL;
  Keyword.Buffer = L"DefaultIfLoopbackDesc";
  v23.Buffer = L"DefaultIfLoopbackAlias";
  v21.Buffer = L"Ndis";
  *(_QWORD *)&v25.Length = 2752552LL;
  *(_QWORD *)&Keyword.Length = 2883626LL;
  *(_QWORD *)&v23.Length = 3014700LL;
  *(_QWORD *)&v21.Length = 655368LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      22,
      10,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids);
  }
  KeInitializeSpinLock(&ndisIfProviderListLock);
  KeInitializeSpinLock(&ndisIfListLock);
  KeInitializeSpinLock(&ndisIfStackEntryLock);
  KeInitializeSpinLock(&ndisIfBlockMiniportLinkLock);
  KeInitializeMutex(&ndisUsedIndicesMutex, 0xFFFFu);
  qword_1C00E6918 = (__int64)&ndisIfCompartmentList;
  ndisIfCompartmentList = (struct _NDIS_IF_COMPARTMENT_BLOCK *)&ndisIfCompartmentList;
  qword_1C00E6A50 = (__int64)&ndisIfTypesList;
  qword_1C00E6AB8 = (__int64)&ndisIfNetworkList;
  ndisIfNetworkList.Flink = &ndisIfNetworkList;
  ndisIfTypesList.Flink = &ndisIfTypesList;
  qword_1C00E6AA8 = (__int64)&ndisIfProviderList;
  ndisIfProviderList.Flink = &ndisIfProviderList;
  qword_1C00E6908 = (__int64)&ndisIfList;
  ndisIfList.Flink = &ndisIfList;
  qword_1C00E6AC8 = (__int64)&ndisIfStackEntryList;
  ndisIfStackEntryList = &ndisIfStackEntryList;
  memset(&xmmword_1C00E6262, 0, 0x202uLL);
  memset(&xmmword_1C00E6472, 0, 0x202uLL);
  NdisOpenProtocolConfiguration(&Status, &ConfigurationHandle, &v21);
  v5 = Status;
  if ( !Status )
  {
    v6 = ConfigurationHandle;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &Keyword, NdisParameterString);
    if ( Status || !ndisIsValidIfStringParts(v7, ParameterValue->ParameterData.StringData.Length) )
    {
      ndisIfLoopbackDescr.Length = 54;
      wmemcpy((wchar_t *)&xmmword_1C00E6262, L"Software Loopback Interface", 27);
    }
    else
    {
      ndisIfLoopbackDescr.Length = v16;
      memmove(&xmmword_1C00E6262, *(const void **)(v17 + 16), v16);
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &v23, NdisParameterString);
    if ( Status
      || !ndisIsValidIfStringParts((const wchar_t *)ParameterValue, ParameterValue->ParameterData.StringData.Length) )
    {
      ndisIfLoopbackAlias.Length = 50;
      wmemcpy((wchar_t *)&xmmword_1C00E6472, L"Loopback Pseudo-Interface", 25);
    }
    else
    {
      ndisIfLoopbackAlias.Length = v18;
      if ( (unsigned __int16)v20 >= (unsigned __int16)v18 )
        v20 = v18;
      memmove(&xmmword_1C00E6472, *(const void **)(v19 + 16), v20);
    }
    NdisCloseConfiguration(v6);
    ConfigurationHandle = 0LL;
    Status = RtlCheckRegistryKey(1u, (PWSTR)L"Ndis\\IfTypes");
    if ( !Status || (Status = RtlCreateRegistryKey(1u, (PWSTR)L"Ndis\\IfTypes"), v5 = Status, Status >= 0) )
    {
      RtlInitUnicodeString(&DestinationString, L"Ndis\\IfTypes");
      NdisOpenProtocolConfiguration(&Status, &ConfigurationHandle, &DestinationString);
      v5 = Status;
      if ( !Status )
      {
        v8 = ConfigurationHandle;
        while ( 1 )
        {
          NdisOpenConfigurationKeyByIndex(&Status, v8, v3, &KeyName, &KeyHandle);
          v9 = KeyHandle;
          LODWORD(ConfigurationHandle) = ++v3;
          if ( Status )
            break;
          NdisReadConfiguration(&Status, &ParameterValue, KeyHandle, &v24, NdisParameterInteger);
          if ( !Status )
          {
            Length = ParameterValue->ParameterData.StringData.Length;
            NdisReadConfiguration(&Status, &ParameterValue, v9, &v25, NdisParameterBinary);
            if ( Status )
            {
              Buffer = 0LL;
            }
            else
            {
              Buffer = ParameterValue->ParameterData.StringData.Buffer;
              v2 = ParameterValue->ParameterData.StringData.Length;
            }
            PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 2 * v2 + 64, 0x6669444Eu);
            v13 = PoolWithTag;
            if ( !PoolWithTag )
              break;
            memset(PoolWithTag, 0, 2 * v2 + 64);
            *((_WORD *)v13 + 8) = Length;
            if ( v2 )
            {
              *((_QWORD *)v13 + 7) = &v13[v2 + 64];
              *((_DWORD *)v13 + 10) = v2;
              *((_QWORD *)v13 + 6) = v13 + 64;
              memmove(v13 + 64, Buffer, v2);
              memmove(*((void **)v13 + 7), Buffer, v2);
            }
            Flink = ndisIfTypesList.Flink;
            if ( ndisIfTypesList.Flink->Blink != &ndisIfTypesList )
              __fastfail(3u);
            *(_QWORD *)v13 = ndisIfTypesList.Flink;
            v2 = 0;
            *((_QWORD *)v13 + 1) = &ndisIfTypesList;
            Flink->Blink = (_LIST_ENTRY *)v13;
            ndisIfTypesList.Flink = (_LIST_ENTRY *)v13;
            v3 = (unsigned int)ConfigurationHandle;
          }
        }
        if ( v9 )
          NdisCloseConfiguration(v9);
        if ( v8 )
          NdisCloseConfiguration(v8);
        *(_QWORD *)&ProviderCharacteristics.Header.Type = 2621824LL;
        ProviderCharacteristics.QueryObjectHandler = (int (__fastcall *)(void *, unsigned int, unsigned int *, void *))ndisIfQueryObject;
        ProviderCharacteristics.SetObjectHandler = (int (__fastcall *)(void *, unsigned int, unsigned int, void *))ndisIfSetObject;
        *(_OWORD *)&ProviderCharacteristics.Reserved1 = 0LL;
        v5 = NdisIfRegisterProvider(&ProviderCharacteristics, &ndisIfProviderHandle, &ndisIfProviderHandle);
        if ( v5 >= 0 )
        {
          ProviderCharacteristics.QueryObjectHandler = (int (__fastcall *)(void *, unsigned int, unsigned int *, void *))ndisIfQueryLoopbackObject;
          ProviderCharacteristics.SetObjectHandler = (int (__fastcall *)(void *, unsigned int, unsigned int, void *))ndisIfSetObject;
          v5 = NdisIfRegisterProvider(
                 &ProviderCharacteristics,
                 &ndisIfLoopbackProviderHandle,
                 &ndisIfLoopbackProviderHandle);
        }
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      22,
      11,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      v5);
  }
  return (unsigned int)v5;
}
