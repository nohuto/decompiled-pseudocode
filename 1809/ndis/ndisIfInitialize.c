/*
 * XREFs of ndisIfInitialize @ 0x1C0126788
 * Callers:
 *     DriverEntry @ 0x1C0127870 (DriverEntry.c)
 * Callees:
 *     NdisIfRegisterProvider @ 0x1C0025110 (NdisIfRegisterProvider.c)
 *     ?ndisIsValidIfStringParts@@YAEPEB_WK@Z @ 0x1C0025DE4 (-ndisIsValidIfStringParts@@YAEPEB_WK@Z.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 *     NdisCloseConfiguration @ 0x1C00C48C0 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C00C6760 (NdisReadConfiguration.c)
 *     NdisOpenProtocolConfiguration @ 0x1C00C7010 (NdisOpenProtocolConfiguration.c)
 *     NdisOpenConfigurationKeyByIndex @ 0x1C00D1100 (NdisOpenConfigurationKeyByIndex.c)
 */

__int64 ndisIfInitialize()
{
  int v0; // ebx
  NDIS_HANDLE v1; // rbx
  const wchar_t *v2; // rcx
  ULONG v3; // r12d
  wchar_t *Buffer; // r15
  unsigned int v5; // esi
  char *PoolWithTag; // rax
  char *v7; // rdi
  _LIST_ENTRY *Flink; // rax
  PVOID v9; // rbx
  unsigned int v11; // edx
  __int64 v12; // r9
  unsigned int v13; // edx
  __int64 v14; // rcx
  size_t v15; // r8
  PVOID KeyHandle; // [rsp+30h] [rbp-79h] BYREF
  _UNICODE_STRING v17; // [rsp+38h] [rbp-71h] BYREF
  UNICODE_STRING Keyword; // [rsp+48h] [rbp-61h] BYREF
  UNICODE_STRING v19; // [rsp+58h] [rbp-51h] BYREF
  UNICODE_STRING v20; // [rsp+68h] [rbp-41h] BYREF
  UNICODE_STRING v21; // [rsp+78h] [rbp-31h] BYREF
  struct _NDIS_IF_PROVIDER_CHARACTERISTICS ProviderCharacteristics; // [rsp+88h] [rbp-21h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp+7h] BYREF
  UNICODE_STRING KeyName; // [rsp+C0h] [rbp+17h] BYREF
  unsigned __int16 Length; // [rsp+110h] [rbp+67h]
  int Status; // [rsp+118h] [rbp+6Fh] BYREF
  NDIS_HANDLE ConfigurationHandle; // [rsp+120h] [rbp+77h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+128h] [rbp+7Fh] BYREF

  *(_DWORD *)&v20.Length = 917516;
  Status = 0;
  v20.Buffer = (wchar_t *)L"IfType";
  v21.Buffer = (wchar_t *)L"IfUsedNetLuidIndices";
  Keyword.Buffer = L"DefaultIfLoopbackDesc";
  ConfigurationHandle = 0LL;
  v19.Buffer = L"DefaultIfLoopbackAlias";
  v17.Buffer = L"Ndis";
  KeyHandle = 0LL;
  *(_DWORD *)&v21.Length = 2752552;
  *(_DWORD *)&Keyword.Length = 2883626;
  *(_DWORD *)&v19.Length = 3014700;
  *(_DWORD *)&v17.Length = 655368;
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_(0xAu, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids);
  KeInitializeSpinLock(&ndisIfProviderListLock);
  KeInitializeSpinLock(&ndisIfListLock);
  KeInitializeSpinLock(&ndisIfStackEntryLock);
  KeInitializeSpinLock(&ndisIfBlockMiniportLinkLock);
  KeInitializeMutex(&ndisUsedIndicesMutex, 0xFFFFu);
  qword_1C00A0908 = (__int64)&ndisIfCompartmentList;
  ndisIfCompartmentList.Flink = &ndisIfCompartmentList;
  qword_1C00A0A50 = (__int64)&ndisIfTypesList;
  qword_1C00A0AB8 = (__int64)&ndisIfNetworkList;
  ndisIfNetworkList.Flink = &ndisIfNetworkList;
  ndisIfTypesList.Flink = &ndisIfTypesList;
  qword_1C00A0AA8 = (__int64)&ndisIfProviderList;
  ndisIfProviderList.Flink = &ndisIfProviderList;
  qword_1C00A08F8 = (__int64)&ndisIfList;
  ndisIfList.Flink = &ndisIfList;
  qword_1C00A0AC8 = (__int64)&ndisIfStackEntryList;
  ndisIfStackEntryList = &ndisIfStackEntryList;
  memset(&xmmword_1C00A0272, 0, 0x202uLL);
  memset(&xmmword_1C00A0482, 0, 0x202uLL);
  NdisOpenProtocolConfiguration(&Status, &ConfigurationHandle, &v17);
  v0 = Status;
  if ( !Status )
  {
    v1 = ConfigurationHandle;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &Keyword, NdisParameterString);
    if ( Status || !ndisIsValidIfStringParts(v2, ParameterValue->ParameterData.StringData.Length) )
    {
      ndisIfLoopbackDescr.Length = 54;
      wmemcpy((wchar_t *)&xmmword_1C00A0272, L"Software Loopback Interface", 27);
    }
    else
    {
      ndisIfLoopbackDescr.Length = v11;
      memmove(&xmmword_1C00A0272, *(const void **)(v12 + 16), v11);
    }
    NdisReadConfiguration(&Status, &ParameterValue, v1, &v19, NdisParameterString);
    if ( Status
      || !ndisIsValidIfStringParts((const wchar_t *)ParameterValue, ParameterValue->ParameterData.StringData.Length) )
    {
      ndisIfLoopbackAlias.Length = 50;
      wmemcpy((wchar_t *)&xmmword_1C00A0482, L"Loopback Pseudo-Interface", 25);
    }
    else
    {
      ndisIfLoopbackAlias.Length = v13;
      if ( (unsigned __int16)v15 >= (unsigned __int16)v13 )
        v15 = v13;
      memmove(&xmmword_1C00A0482, *(const void **)(v14 + 16), v15);
    }
    NdisCloseConfiguration(v1);
    ConfigurationHandle = 0LL;
    Status = RtlCheckRegistryKey(1u, (PWSTR)L"Ndis\\IfTypes");
    if ( !Status || (Status = RtlCreateRegistryKey(1u, (PWSTR)L"Ndis\\IfTypes"), v0 = Status, Status >= 0) )
    {
      RtlInitUnicodeString(&DestinationString, L"Ndis\\IfTypes");
      NdisOpenProtocolConfiguration(&Status, &ConfigurationHandle, &DestinationString);
      v0 = Status;
      if ( !Status )
      {
        NdisOpenConfigurationKeyByIndex(&Status, ConfigurationHandle, 0, &KeyName, &KeyHandle);
        v3 = 1;
        while ( !Status )
        {
          v9 = KeyHandle;
          NdisReadConfiguration(&Status, &ParameterValue, KeyHandle, &v20, NdisParameterInteger);
          if ( !Status )
          {
            Length = ParameterValue->ParameterData.StringData.Length;
            NdisReadConfiguration(&Status, &ParameterValue, v9, &v21, NdisParameterBinary);
            if ( Status )
            {
              Buffer = 0LL;
              v5 = 0;
            }
            else
            {
              Buffer = ParameterValue->ParameterData.StringData.Buffer;
              v5 = ParameterValue->ParameterData.StringData.Length;
            }
            PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 2 * v5 + 64, 0x6669444Eu);
            v7 = PoolWithTag;
            if ( !PoolWithTag )
              goto LABEL_23;
            memset(PoolWithTag, 0, 2 * v5 + 64);
            *((_WORD *)v7 + 8) = Length;
            if ( v5 )
            {
              *((_QWORD *)v7 + 7) = &v7[v5 + 64];
              *((_DWORD *)v7 + 10) = v5;
              *((_QWORD *)v7 + 6) = v7 + 64;
              memmove(v7 + 64, Buffer, v5);
              memmove(*((void **)v7 + 7), Buffer, v5);
            }
            Flink = ndisIfTypesList.Flink;
            if ( ndisIfTypesList.Flink->Blink != &ndisIfTypesList )
              __fastfail(3u);
            *(_QWORD *)v7 = ndisIfTypesList.Flink;
            *((_QWORD *)v7 + 1) = &ndisIfTypesList;
            Flink->Blink = (_LIST_ENTRY *)v7;
            ndisIfTypesList.Flink = (_LIST_ENTRY *)v7;
          }
          NdisOpenConfigurationKeyByIndex(&Status, ConfigurationHandle, v3++, &KeyName, &KeyHandle);
        }
        v9 = KeyHandle;
LABEL_23:
        if ( v9 )
          NdisCloseConfiguration(v9);
        if ( ConfigurationHandle )
          NdisCloseConfiguration(ConfigurationHandle);
        memset(&ProviderCharacteristics, 0, sizeof(ProviderCharacteristics));
        ProviderCharacteristics.Header = (_NDIS_OBJECT_HEADER)2621824;
        ProviderCharacteristics.QueryObjectHandler = (int (__fastcall *)(void *, unsigned int, unsigned int *, void *))ndisIfQueryObject;
        ProviderCharacteristics.SetObjectHandler = (int (__fastcall *)(void *, unsigned int, unsigned int, void *))ndisIfSetObject;
        v0 = NdisIfRegisterProvider(&ProviderCharacteristics, &ndisIfProviderHandle, &ndisIfProviderHandle);
        if ( v0 >= 0 )
        {
          ProviderCharacteristics.QueryObjectHandler = (int (__fastcall *)(void *, unsigned int, unsigned int *, void *))ndisIfQueryLoopbackObject;
          ProviderCharacteristics.SetObjectHandler = (int (__fastcall *)(void *, unsigned int, unsigned int, void *))ndisIfSetObject;
          v0 = NdisIfRegisterProvider(
                 &ProviderCharacteristics,
                 &ndisIfLoopbackProviderHandle,
                 &ndisIfLoopbackProviderHandle);
        }
      }
    }
  }
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_D(0xBu, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, v0);
  return (unsigned int)v0;
}
