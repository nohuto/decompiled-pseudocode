/*
 * XREFs of ndisPnPAddDevice @ 0x1C00C7EC0
 * Callers:
 *     ndisWdmPnPAddDevice @ 0x1C00D2080 (ndisWdmPnPAddDevice.c)
 *     NdisWdfPnPAddDevice @ 0x1C00F2300 (NdisWdfPnPAddDevice.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C001CA9C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ??1NDIS_ADDDEVICE_PARAMETERS@@QEAA@XZ @ 0x1C002599C (--1NDIS_ADDDEVICE_PARAMETERS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF__guid_ @ 0x1C0041BA0 (WPP_SF__guid_.c)
 *     McTemplateK0z @ 0x1C0064B10 (McTemplateK0z.c)
 *     WPP_SF_S @ 0x1C0065340 (WPP_SF_S.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00C4B40 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ndisIfReadInterfaceAddDeviceParameters @ 0x1C00C7CB4 (ndisIfReadInterfaceAddDeviceParameters.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C00C8F10 (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?ndisCheckIfDeviceNeedsUpdates@@YAJAEAVKRegKey@@AEA_N@Z @ 0x1C00C9050 (-ndisCheckIfDeviceNeedsUpdates@@YAJAEAVKRegKey@@AEA_N@Z.c)
 *     ?ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z @ 0x1C00C9160 (-ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z.c)
 *     ?ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C00C9280 (-ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C00D18D0 (-ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_.c)
 *     ?ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C00D1E20 (-ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z @ 0x1C00F0E20 (-ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z.c)
 *     ?ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C00F104C (-ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ndisWdfUpdateAddDeviceParameters @ 0x1C00F33CC (ndisWdfUpdateAddDeviceParameters.c)
 *     ?DeleteValue@KRegKey@@QEAAJPEB_W@Z @ 0x1C0103AD4 (-DeleteValue@KRegKey@@QEAAJPEB_W@Z.c)
 *     ndisAddDevice @ 0x1C010DDE4 (ndisAddDevice.c)
 */

__int64 __fastcall ndisPnPAddDevice(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT Pdo, void *a3, __int64 a4)
{
  bool v7; // r14
  NTSTATUS updated; // ebx
  UNICODE_STRING *v9; // rdi
  bool v10; // al
  unsigned __int8 v11; // bl
  __int64 v12; // rcx
  const wchar_t *v13; // rax
  __int64 v14; // rcx
  const wchar_t *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  HANDLE v18; // rcx
  int v20; // eax
  UNICODE_STRING *v21; // rcx
  NTSTATUS v22; // eax
  HANDLE v23; // rbx
  __int64 v24; // rcx
  const wchar_t *v25; // rax
  __int16 v26; // ax
  const wchar_t *v27; // rdx
  __int64 v28; // rcx
  const wchar_t *v29; // rax
  __int16 v30; // ax
  __int64 v31; // rcx
  const wchar_t *v32; // rax
  int v33; // edx
  __int16 v34; // ax
  int v35; // eax
  unsigned __int8 IsHardwareLoopbackSupported; // al
  bool v37; // [rsp+40h] [rbp-C0h] BYREF
  bool v38; // [rsp+41h] [rbp-BFh] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING ValueName; // [rsp+50h] [rbp-B0h] BYREF
  ULONG Data; // [rsp+60h] [rbp-A0h] BYREF
  PCUNICODE_STRING GuidString; // [rsp+68h] [rbp-98h] BYREF
  HANDLE DeviceRegKey; // [rsp+70h] [rbp-90h] BYREF
  __int64 v44; // [rsp+78h] [rbp-88h]
  NDIS_ADDDEVICE_PARAMETERS Guid; // [rsp+80h] [rbp-80h] BYREF
  GUID KeyValueInformation; // [rsp+E0h] [rbp-20h] BYREF

  v44 = a4;
  DeviceRegKey = 0LL;
  v7 = a3 != 0LL;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qq(0x3Du, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, DriverObject, Pdo);
  updated = IoOpenDeviceRegistryKey(Pdo, 2u, 0xC2000000, &DeviceRegKey);
  if ( updated < 0 )
    goto LABEL_35;
  KeyHandle = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
    &KeyHandle,
    DeviceRegKey);
  v37 = 0;
  v38 = 0;
  GuidString = 0LL;
  updated = ndisCheckIfDeviceNeedsInstallation(&KeyHandle, &GuidString, &v37);
  if ( updated < 0 )
  {
    v21 = (UNICODE_STRING *)GuidString;
    if ( !GuidString )
      goto LABEL_47;
    goto LABEL_46;
  }
  v9 = (UNICODE_STRING *)GuidString;
  if ( !v37 )
  {
    if ( ndisIsNetSetupV2Interface(GuidString) || !ndisIsNetSetupV1Interface(v9) )
    {
      v10 = 0;
    }
    else
    {
      if ( (unsigned __int8)byte_1C00A025C >= 3u )
        WPP_SF_S(0x38u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, v9->Buffer);
      v22 = RtlGUIDFromString(v9, &KeyValueInformation);
      v23 = KeyHandle;
      if ( v22 >= 0 )
      {
        *(_QWORD *)&ValueName.Length = 0LL;
        v24 = 0x7FFFLL;
        ValueName.Buffer = 0LL;
        v25 = L"SuggestedInstanceId";
        do
        {
          if ( !*v25 )
            break;
          ++v25;
          --v24;
        }
        while ( v24 );
        v26 = v24 ? 0x7FFF - v24 : 0;
        if ( v24 )
        {
          ValueName.Buffer = L"SuggestedInstanceId";
          ValueName.Length = 2 * v26;
          ValueName.MaximumLength = 2 * v26 + 2;
          ZwSetValueKey(KeyHandle, &ValueName, 0, 3u, &KeyValueInformation, 0x10u);
        }
      }
      v27 = L"MigratedFromNetSetupV1";
      *(_QWORD *)&ValueName.Length = 0LL;
      v28 = 0x7FFFLL;
      ValueName.Buffer = 0LL;
      v29 = L"MigratedFromNetSetupV1";
      do
      {
        if ( !*v29 )
          break;
        ++v29;
        --v28;
      }
      while ( v28 );
      if ( v28 )
        v30 = 0x7FFF - v28;
      else
        v30 = 0;
      if ( v28 )
      {
        ValueName.Buffer = L"MigratedFromNetSetupV1";
        ValueName.Length = 2 * v30;
        ValueName.MaximumLength = 2 * v30 + 2;
        Data = 1;
        ZwSetValueKey(v23, &ValueName, 0, 4u, &Data, 4u);
      }
      KRegKey::DeleteValue((KRegKey *)&KeyHandle, v27);
      v10 = 1;
    }
    v37 = v10;
    if ( !v10 )
    {
      updated = ndisCheckIfDeviceNeedsFullMigration(&KeyHandle, &GuidString, &v37);
      if ( updated < 0 )
        goto LABEL_71;
      if ( v37 )
        goto LABEL_73;
      updated = ndisCheckIfDeviceNeedsUpdates((struct KRegKey *)&KeyHandle, &v37);
      if ( updated < 0 )
      {
LABEL_71:
        if ( !v9 )
        {
LABEL_47:
          v18 = KeyHandle;
          if ( !KeyHandle )
            goto LABEL_35;
          goto LABEL_34;
        }
        v21 = v9;
LABEL_46:
        ExFreePoolWithTag(v21, 0x7274534Bu);
        goto LABEL_47;
      }
      if ( !v37 )
        goto LABEL_13;
    }
  }
LABEL_73:
  ZwUpdateWnfStateData(&WNF_NDIS_ADAPTER_ARRIVAL, 0LL, 0, 0LL, 0LL, 0, 0);
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_(0x3Eu, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids);
  updated = ndisCheckAlwaysStartFlag((struct KRegKey *)&KeyHandle, &v38);
  if ( updated < 0 )
    goto LABEL_71;
  if ( v38 )
  {
LABEL_13:
    Guid.IsPhysicalMediumAvailable = 0;
    memset(&Guid.PhysicalMedium, 0, 33);
    *(_WORD *)&Guid.IsHardwareLoopbackSupported = 0;
    *(_OWORD *)&Guid.MiniBlock = 0LL;
    Guid.NetLuid.Value = 0LL;
    Guid.MiniportAdapterContext = a3;
    updated = RtlGUIDFromString(v9, &Guid.InterfaceGuid);
    if ( updated < 0 )
    {
LABEL_102:
      NDIS_ADDDEVICE_PARAMETERS::~NDIS_ADDDEVICE_PARAMETERS(&Guid);
      goto LABEL_71;
    }
    if ( (unsigned __int8)byte_1C00A025C >= 4u )
      WPP_SF__guid_(0x3Fu, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)&Guid);
    if ( !v7 )
      goto LABEL_17;
    *(_QWORD *)&ValueName.Length = 0LL;
    v31 = 0x7FFFLL;
    ValueName.Buffer = 0LL;
    v32 = L"HardwareLoopback";
    do
    {
      if ( !*v32 )
        break;
      ++v32;
      --v31;
    }
    while ( v31 );
    v33 = -1073741811;
    if ( v31 )
    {
      v33 = 0;
      v34 = 0x7FFF - v31;
    }
    else
    {
      v34 = 0;
    }
    if ( !v31 )
    {
      IsHardwareLoopbackSupported = Guid.IsHardwareLoopbackSupported;
      goto LABEL_99;
    }
    ValueName.Buffer = L"HardwareLoopback";
    ValueName.Length = 2 * v34;
    ValueName.MaximumLength = 2 * v34 + 2;
    v35 = KRegKey::QueryValueUlong((KRegKey *)&KeyHandle, &ValueName, &Data);
    v33 = -1073741772;
    if ( v35 == -1073741772 )
    {
      IsHardwareLoopbackSupported = Guid.IsHardwareLoopbackSupported;
      goto LABEL_99;
    }
    if ( Data )
    {
      if ( Data != 1 )
      {
        IsHardwareLoopbackSupported = Guid.IsHardwareLoopbackSupported;
        v33 = -1073739509;
        goto LABEL_99;
      }
      IsHardwareLoopbackSupported = 1;
    }
    else
    {
      IsHardwareLoopbackSupported = 0;
    }
    v33 = 0;
LABEL_99:
    if ( v33 < 0 )
      IsHardwareLoopbackSupported = 0;
    Guid.IsHardwareLoopbackSupported = IsHardwareLoopbackSupported;
    updated = ndisWdfUpdateAddDeviceParameters(&KeyHandle, &Guid);
    if ( updated >= 0 )
    {
LABEL_17:
      if ( !(unsigned int)ndisIfReadInterfaceAddDeviceParameters(&Guid.InterfaceGuid.Data1, Pdo) )
      {
        *(_QWORD *)&ValueName.Length = 0LL;
        v11 = 0;
        ValueName.Buffer = 0LL;
        v12 = 0x7FFFLL;
        v13 = L"IMMiniport";
        while ( *v13 )
        {
          ++v13;
          if ( !--v12 )
            goto LABEL_23;
        }
        ValueName.Buffer = L"IMMiniport";
        ValueName.Length = 2 * (0x7FFF - v12);
        ValueName.MaximumLength = ValueName.Length + 2;
        if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &Data) < 0
          || (*(_DWORD *)&KeyValueInformation.Data2 != 4
            ? (v20 = -1073741788)
            : *(_DWORD *)KeyValueInformation.Data4 != 4
            ? (v20 = -1073741789)
            : (v11 = KeyValueInformation.Data4[4], v20 = 0),
              v20 < 0 || (Guid.IsImMiniport = 1, (v11 & 1) == 0)) )
        {
LABEL_23:
          Guid.IsImMiniport = 0;
        }
        *(_QWORD *)&ValueName.Length = 0LL;
        v14 = 0x7FFFLL;
        ValueName.Buffer = 0LL;
        v15 = L"ComponentID";
        while ( *v15 )
        {
          ++v15;
          if ( !--v14 )
            goto LABEL_29;
        }
        ValueName.Buffer = L"ComponentID";
        ValueName.Length = 2 * (0x7FFF - v14);
        ValueName.MaximumLength = ValueName.Length + 2;
        KRegKey::QueryValueString(&KeyHandle, &ValueName, (void **)&Guid.ComponentId._Myptr);
LABEL_29:
        ndisTemporarilyScribbleNetLuidIndex((struct KRegKey *)&KeyHandle, &Guid.NetLuid);
        if ( Microsoft_Windows_NDISEnableBits < 0 )
          McTemplateK0z(v16, &AddPnPDevice, v17, Guid.ExportName._Myptr->Buffer);
        updated = ndisAddDevice(DriverObject, Pdo, v44);
        NDIS_ADDDEVICE_PARAMETERS::~NDIS_ADDDEVICE_PARAMETERS(&Guid);
        if ( v9 )
          ExFreePoolWithTag(v9, 0x7274534Bu);
        v18 = KeyHandle;
        if ( !KeyHandle )
          goto LABEL_35;
LABEL_34:
        ZwClose(v18);
LABEL_35:
        if ( (unsigned __int8)byte_1C00A025C >= 4u )
          WPP_SF_qD(0x40u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)Pdo, updated);
        return (unsigned int)updated;
      }
      updated = -1073741823;
      NDIS_ADDDEVICE_PARAMETERS::~NDIS_ADDDEVICE_PARAMETERS(&Guid);
      goto LABEL_71;
    }
    goto LABEL_102;
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0x7274534Bu);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return 3221226645LL;
}
