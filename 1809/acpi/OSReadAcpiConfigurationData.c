/*
 * XREFs of OSReadAcpiConfigurationData @ 0x1C00B8204
 * Callers:
 *     ACPIInitializeAMLI @ 0x1C00B8A7C (ACPIInitializeAMLI.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C00025B8 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D030 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_SL @ 0x1C005C314 (WPP_RECORDER_SF_SL.c)
 *     OSOpenUnicodeHandle @ 0x1C008D33C (OSOpenUnicodeHandle.c)
 *     OSGetRegistryValue @ 0x1C009271C (OSGetRegistryValue.c)
 *     OSCloseHandle @ 0x1C0093C68 (OSCloseHandle.c)
 */

__int64 __fastcall OSReadAcpiConfigurationData(_QWORD *a1)
{
  unsigned int v2; // edi
  int v3; // ebx
  ULONG v4; // esi
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  wchar_t *v10; // r8
  int v11; // edx
  __int64 v12; // rcx
  BOOLEAN v13; // bl
  HANDLE v14; // rcx
  NTSTATUS v15; // ebx
  int v17; // [rsp+20h] [rbp-29h]
  HANDLE KeyHandle; // [rsp+40h] [rbp-9h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-1h] BYREF
  void *v20; // [rsp+58h] [rbp+Fh] BYREF
  UNICODE_STRING String2; // [rsp+60h] [rbp+17h] BYREF
  UNICODE_STRING String1; // [rsp+70h] [rbp+27h] BYREF
  char v23; // [rsp+80h] [rbp+37h] BYREF

  v2 = 0;
  *a1 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Hardware\\Description\\System\\MultiFunctionAdapter");
  v3 = OSOpenUnicodeHandle(&DestinationString, 0LL, &v20);
  if ( v3 < 0 )
  {
    WPP_RECORDER_SF_L(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x16u,
      0x10u,
      (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
      v3);
    return (unsigned int)v3;
  }
  RtlInitUnicodeString(&String1, L"ACPI BIOS");
  v4 = 0;
  DestinationString.Buffer = (wchar_t *)&v23;
  DestinationString.MaximumLength = 8;
  while ( 1 )
  {
    DestinationString.Length = 0;
    RtlIntegerToUnicodeString(v4, 0xAu, &DestinationString);
    v6 = OSOpenUnicodeHandle(&DestinationString, v20, &KeyHandle);
    if ( v6 < 0 )
      break;
    if ( OSGetRegistryValue(KeyHandle, L"Identifier", a1) < 0 )
    {
      v14 = KeyHandle;
LABEL_9:
      OSCloseHandle(v14);
      goto LABEL_10;
    }
    v9 = *a1;
    v10 = (wchar_t *)(*a1 + 8LL);
    String2.Buffer = v10;
    String2.MaximumLength = *(_WORD *)(v9 + 4);
    v11 = *(_DWORD *)(v9 + 4) >> 1;
    if ( v11 )
    {
      do
      {
        v12 = (unsigned int)(v11 - 1);
        if ( v10[v12] )
          break;
        --v11;
      }
      while ( (_DWORD)v12 );
    }
    String2.Length = 2 * v11;
    v13 = RtlEqualUnicodeString(&String1, &String2, 1u);
    ExFreePoolWithTag((PVOID)*a1, 0);
    v14 = KeyHandle;
    if ( !v13 )
      goto LABEL_9;
    v15 = OSGetRegistryValue(KeyHandle, L"Configuration Data", a1);
    OSCloseHandle(KeyHandle);
    if ( v15 >= 0 )
      goto LABEL_13;
LABEL_10:
    if ( ++v4 >= 0x3E7 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0x12u,
        (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids);
      return 3221225524LL;
    }
  }
  WPP_RECORDER_SF_SL((__int64)WPP_GLOBAL_Control->DeviceExtension, v5, v7, v8, v17, DestinationString.Buffer);
  v2 = v6;
LABEL_13:
  OSCloseHandle(v20);
  return v2;
}
