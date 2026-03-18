/*
 * XREFs of RIMReadDigitizerToMonitorMappings @ 0x1C00E9364
 * Callers:
 *     RIMEnableMonitorMappingForDevice @ 0x1C00E15E0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C00EA954 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00F3160 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     rimReadSingleDigitizerToMonitorMappings @ 0x1C00E87B0 (rimReadSingleDigitizerToMonitorMappings.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

int __fastcall RIMReadDigitizerToMonitorMappings(const UNICODE_STRING *a1, __int64 a2)
{
  int result; // eax
  wchar_t *v5; // rax
  __int64 v6; // r9
  wchar_t *v7; // rdi
  __int64 v8; // r9
  __int64 v9; // [rsp+28h] [rbp-58h]
  __int64 v10; // [rsp+28h] [rbp-58h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+90h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( !*(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Wisp\\Pen\\Digimon");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    v5 = (wchar_t *)Win32AllocPoolZInit(0x20CuLL, 0x6D707352u);
    v7 = v5;
    if ( v5 )
    {
      rimReadSingleDigitizerToMonitorMappings(a1, KeyHandle, 0xAu, v6, v5, v9, (wchar_t *)(a2 + 276));
      rimReadSingleDigitizerToMonitorMappings(a1, KeyHandle, 0x14u, v8, v7, v10, (wchar_t *)(a2 + 20));
      Win32FreePool((__int64)v7);
    }
    return ZwClose(KeyHandle);
  }
  return result;
}
