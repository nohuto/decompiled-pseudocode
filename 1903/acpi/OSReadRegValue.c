/*
 * XREFs of OSReadRegValue @ 0x1C0090BC8
 * Callers:
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C00644E4 (AMLIAddNextNamespaceOverrideObject.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008F42C (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIInitShutdownNotification @ 0x1C0090A8C (ACPIInitShutdownNotification.c)
 *     ACPIInitGlobalHeapSize @ 0x1C0090B0C (ACPIInitGlobalHeapSize.c)
 *     ACPIThermalGetParameter @ 0x1C0092FF8 (ACPIThermalGetParameter.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C00B1D58 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C00B1FD8 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     AcpiDiagInitialize @ 0x1C00BC294 (AcpiDiagInitialize.c)
 *     ACPIInitializeAMLI @ 0x1C00BC504 (ACPIInitializeAMLI.c)
 *     AMLIInitialize @ 0x1C00BC5B4 (AMLIInitialize.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00BCB94 (ACPIInitReadRegistryKeys.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0001A78 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_LL @ 0x1C000CB74 (WPP_RECORDER_SF_LL.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     OSOpenHandle @ 0x1C008F2F0 (OSOpenHandle.c)
 */

__int64 __fastcall OSReadRegValue(PCSZ SourceString, void *a2, _BYTE *a3, unsigned int *a4)
{
  int v8; // ebx
  NTSTATUS v9; // eax
  unsigned int v10; // r13d
  WCHAR *PoolWithTag; // rdi
  ULONG Length; // ebx
  NTSTATUS v14; // eax
  const WCHAR *v15; // r15
  __int64 v16; // rsi
  unsigned int v17; // ebx
  int v18; // edx
  WCHAR v19; // cx
  bool v20; // zf
  NTSTATUS v21; // eax
  unsigned int v22; // eax
  PULONG ResultLength; // [rsp+28h] [rbp-48h]
  HANDLE KeyHandle; // [rsp+40h] [rbp-30h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+48h] [rbp-28h] BYREF
  struct _STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  ULONG v27; // [rsp+A8h] [rbp+38h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  KeyHandle = 0LL;
  v27 = 0;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
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
    if ( v8 < 0 || !KeyHandle )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_L(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xBu,
          0x13u,
          (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
          v8);
      return (unsigned int)v8;
    }
  }
  RtlInitAnsiString(&DestinationString, SourceString);
  v8 = RtlAnsiStringToUnicodeString(&ValueName, &DestinationString, 1u);
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xBu,
        0x14u,
        (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
        v8);
    if ( !a2 )
      ZwClose(KeyHandle);
    return (unsigned int)v8;
  }
  v9 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformationAlign64, 0LL, 0, &v27);
  v8 = v9;
  v10 = -2147483643;
  if ( v9 != -1073741789 && v9 != -2147483643 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(ResultLength) = v9;
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xBu,
        0x15u,
        (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
        ResultLength);
    }
    RtlFreeUnicodeString(&ValueName);
    if ( !a2 )
      ZwClose(KeyHandle);
    if ( v8 >= 0 )
      return (unsigned int)-1073741823;
    return (unsigned int)v8;
  }
  while ( 1 )
  {
    if ( v8 != -2147483643 )
    {
      PoolWithTag = 0LL;
      if ( v8 != -1073741789 )
        goto LABEL_21;
    }
    Length = v27;
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v27, 0x4D706341u);
    if ( !PoolWithTag )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(ResultLength) = v27;
        WPP_RECORDER_SF_L(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x16u,
          0x16u,
          (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
          ResultLength);
      }
      RtlFreeUnicodeString(&ValueName);
      if ( !a2 )
        ZwClose(KeyHandle);
      return 3221225626LL;
    }
    v14 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformationAlign64, PoolWithTag, Length, &v27);
    v8 = v14;
    if ( v14 != -2147483643 && v14 != -1073741789 )
      break;
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  if ( v14 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(ResultLength) = v14;
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x15u,
        0x17u,
        (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
        ResultLength);
    }
    RtlFreeUnicodeString(&ValueName);
    if ( !a2 )
      ZwClose(KeyHandle);
    ExFreePoolWithTag(PoolWithTag, 0);
    return (unsigned int)v8;
  }
LABEL_21:
  RtlFreeUnicodeString(&ValueName);
  if ( !a2 )
    ZwClose(KeyHandle);
  if ( *(_DWORD *)PoolWithTag == 1 || *(_DWORD *)PoolWithTag == 7 )
  {
    v15 = PoolWithTag + 4;
    LODWORD(v16) = (v27 - 8) >> 1;
    v17 = 0;
    if ( !(_DWORD)v16 )
      goto LABEL_67;
    while ( 1 )
    {
      v18 = v16;
      v16 = (unsigned int)(v16 - 1);
      v19 = v15[v16];
      v20 = v19 == 0;
      if ( !v19 )
        break;
      if ( !(_DWORD)v16 )
      {
        v20 = v19 == 0;
        break;
      }
    }
    if ( v20 )
      LODWORD(v16) = v18;
    if ( (_DWORD)v16 )
    {
      while ( *v15 )
      {
        RtlInitUnicodeString(&ValueName, v15);
        v21 = RtlUnicodeStringToAnsiString(&DestinationString, &ValueName, 1u);
        v10 = v21;
        if ( v21 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(ResultLength) = v21;
            WPP_RECORDER_SF_L(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0x16u,
              0x18u,
              (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
              ResultLength);
          }
          goto LABEL_66;
        }
        v17 += DestinationString.MaximumLength;
        if ( *a4 >= v17 )
        {
          memmove(a3, DestinationString.Buffer, DestinationString.MaximumLength);
          a3 += DestinationString.MaximumLength;
        }
        RtlFreeAnsiString(&DestinationString);
        LODWORD(v16) = v16 - (ValueName.Length >> 1);
        v15 += (unsigned __int64)ValueName.Length >> 1;
        if ( *(_DWORD *)PoolWithTag == 7 )
        {
          if ( !(_DWORD)v16 )
            break;
          ++v15;
          LODWORD(v16) = v16 - 1;
        }
        if ( !(_DWORD)v16 )
          break;
      }
      v10 = -2147483643;
      if ( !v17 )
        goto LABEL_67;
    }
    else
    {
LABEL_67:
      v17 = 1;
      if ( *a4 )
        *a3++ = 0;
    }
    if ( *(_DWORD *)PoolWithTag == 7 && *a4 >= ++v17 )
      *a3 = 0;
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( *a4 >= v17 )
    {
      *a4 = v17;
      return 0LL;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(ResultLength) = *a4;
      WPP_RECORDER_SF_LL(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xBu,
        0x19u,
        (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
        ResultLength,
        v17);
    }
    *a4 = v17;
  }
  else
  {
    v22 = *((_DWORD *)PoolWithTag + 1);
    if ( *a4 >= v22 )
    {
      memmove(a3, PoolWithTag + 4, v22);
      *a4 = *((_DWORD *)PoolWithTag + 1);
      ExFreePoolWithTag(PoolWithTag, 0);
      return 0LL;
    }
    *a4 = v22;
LABEL_66:
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  return v10;
}
