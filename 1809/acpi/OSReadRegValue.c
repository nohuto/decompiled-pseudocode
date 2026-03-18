/*
 * XREFs of OSReadRegValue @ 0x1C00945C8
 * Callers:
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C0062558 (AMLIAddNextNamespaceOverrideObject.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008D3EC (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIInitGlobalHeapSize @ 0x1C0094958 (ACPIInitGlobalHeapSize.c)
 *     ACPIInitShutdownNotification @ 0x1C0094A14 (ACPIInitShutdownNotification.c)
 *     ACPIThermalGetParameter @ 0x1C00985F4 (ACPIThermalGetParameter.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C00AE520 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C00AE790 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     ACPIInitializeAMLI @ 0x1C00B8A7C (ACPIInitializeAMLI.c)
 *     AMLIInitialize @ 0x1C00B8B2C (AMLIInitialize.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00B9108 (ACPIInitReadRegistryKeys.c)
 *     AcpiDiagInitialize @ 0x1C00B9BB4 (AcpiDiagInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C00025B8 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0016CC0 (WPP_RECORDER_SF_LL.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     OSOpenHandle @ 0x1C008D2B4 (OSOpenHandle.c)
 */

__int64 __fastcall OSReadRegValue(PCSZ SourceString, void *a2, _BYTE *a3, unsigned int *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  unsigned int v12; // r13d
  WCHAR *PoolWithTag; // rdi
  ULONG Length; // ebx
  NTSTATUS v16; // eax
  const WCHAR *v17; // r15
  __int64 v18; // rsi
  unsigned int v19; // ebx
  int v20; // edx
  WCHAR v21; // cx
  bool v22; // zf
  NTSTATUS v23; // eax
  unsigned int v24; // eax
  PULONG ResultLength; // [rsp+28h] [rbp-48h]
  HANDLE KeyHandle; // [rsp+40h] [rbp-30h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+48h] [rbp-28h] BYREF
  struct _STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  ULONG v29; // [rsp+A8h] [rbp+38h] BYREF

  KeyHandle = 0LL;
  v29 = 0;
  if ( a2 )
  {
    KeyHandle = a2;
  }
  else
  {
    v8 = OSOpenHandle(
           "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters",
           0LL,
           (__int64)&KeyHandle);
    v9 = v8;
    if ( v8 < 0 || !KeyHandle )
    {
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xBu,
        0x13u,
        (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
        v8);
      return v9;
    }
  }
  RtlInitAnsiString(&DestinationString, SourceString);
  v10 = RtlAnsiStringToUnicodeString(&ValueName, &DestinationString, 1u);
  v9 = v10;
  if ( v10 < 0 )
  {
    WPP_RECORDER_SF_L(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xBu,
      0x14u,
      (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
      v10);
    if ( !a2 )
      ZwClose(KeyHandle);
    return v9;
  }
  v11 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformationAlign64, 0LL, 0, &v29);
  v9 = v11;
  v12 = -2147483643;
  if ( v11 != -1073741789 && v11 != -2147483643 )
  {
    LODWORD(ResultLength) = v11;
    WPP_RECORDER_SF_L(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xBu,
      0x15u,
      (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
      ResultLength);
    RtlFreeUnicodeString(&ValueName);
    if ( !a2 )
      ZwClose(KeyHandle);
    if ( (v9 & 0x80000000) == 0 )
      return (unsigned int)-1073741823;
    return v9;
  }
  while ( 1 )
  {
    if ( v9 != -2147483643 )
    {
      PoolWithTag = 0LL;
      if ( v9 != -1073741789 )
        goto LABEL_19;
    }
    Length = v29;
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v29, 0x4D706341u);
    if ( !PoolWithTag )
    {
      LODWORD(ResultLength) = v29;
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0x16u,
        (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
        ResultLength);
      RtlFreeUnicodeString(&ValueName);
      if ( !a2 )
        ZwClose(KeyHandle);
      return 3221225626LL;
    }
    v16 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformationAlign64, PoolWithTag, Length, &v29);
    v9 = v16;
    if ( v16 != -2147483643 && v16 != -1073741789 )
      break;
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  if ( v16 < 0 )
  {
    LODWORD(ResultLength) = v16;
    WPP_RECORDER_SF_L(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x15u,
      0x17u,
      (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
      ResultLength);
    RtlFreeUnicodeString(&ValueName);
    if ( !a2 )
      ZwClose(KeyHandle);
    ExFreePoolWithTag(PoolWithTag, 0);
    return v9;
  }
LABEL_19:
  RtlFreeUnicodeString(&ValueName);
  if ( !a2 )
    ZwClose(KeyHandle);
  if ( *(_DWORD *)PoolWithTag == 1 || *(_DWORD *)PoolWithTag == 7 )
  {
    v17 = PoolWithTag + 4;
    LODWORD(v18) = (v29 - 8) >> 1;
    v19 = 0;
    if ( !(_DWORD)v18 )
      goto LABEL_57;
    while ( 1 )
    {
      v20 = v18;
      v18 = (unsigned int)(v18 - 1);
      v21 = v17[v18];
      v22 = v21 == 0;
      if ( !v21 )
        break;
      if ( !(_DWORD)v18 )
      {
        v22 = v21 == 0;
        break;
      }
    }
    if ( v22 )
      LODWORD(v18) = v20;
    if ( (_DWORD)v18 )
    {
      while ( *v17 )
      {
        RtlInitUnicodeString(&ValueName, v17);
        v23 = RtlUnicodeStringToAnsiString(&DestinationString, &ValueName, 1u);
        v12 = v23;
        if ( v23 < 0 )
        {
          LODWORD(ResultLength) = v23;
          WPP_RECORDER_SF_L(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x16u,
            0x18u,
            (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
            ResultLength);
          goto LABEL_56;
        }
        v19 += DestinationString.MaximumLength;
        if ( *a4 >= v19 )
        {
          memmove(a3, DestinationString.Buffer, DestinationString.MaximumLength);
          a3 += DestinationString.MaximumLength;
        }
        RtlFreeAnsiString(&DestinationString);
        LODWORD(v18) = v18 - (ValueName.Length >> 1);
        v17 += (unsigned __int64)ValueName.Length >> 1;
        if ( *(_DWORD *)PoolWithTag == 7 )
        {
          if ( !(_DWORD)v18 )
            break;
          ++v17;
          LODWORD(v18) = v18 - 1;
        }
        if ( !(_DWORD)v18 )
          break;
      }
      v12 = -2147483643;
      if ( !v19 )
        goto LABEL_57;
    }
    else
    {
LABEL_57:
      v19 = 1;
      if ( *a4 )
        *a3++ = 0;
    }
    if ( *(_DWORD *)PoolWithTag == 7 && *a4 >= ++v19 )
      *a3 = 0;
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( *a4 >= v19 )
    {
      *a4 = v19;
      return 0LL;
    }
    LODWORD(ResultLength) = *a4;
    WPP_RECORDER_SF_LL(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xBu,
      0x19u,
      (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
      ResultLength,
      v19);
    *a4 = v19;
  }
  else
  {
    v24 = *((_DWORD *)PoolWithTag + 1);
    if ( *a4 >= v24 )
    {
      memmove(a3, PoolWithTag + 4, v24);
      *a4 = *((_DWORD *)PoolWithTag + 1);
      ExFreePoolWithTag(PoolWithTag, 0);
      return 0LL;
    }
    *a4 = v24;
LABEL_56:
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  return v12;
}
