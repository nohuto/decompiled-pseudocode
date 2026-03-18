/*
 * XREFs of RIMReadDigitizerToMonitorMappings @ 0x1C011303C
 * Callers:
 *     RIMEnableMonitorMappingForDevice @ 0x1C010D510 (RIMEnableMonitorMappingForDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0115410 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0119644 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C011DB0C (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     rimReadSingleDigitizerToMonitorMappings @ 0x1C011219C (rimReadSingleDigitizerToMonitorMappings.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

int __fastcall RIMReadDigitizerToMonitorMappings(const UNICODE_STRING *a1, __int64 a2, __int64 a3)
{
  int result; // eax
  wchar_t *v6; // rax
  __int64 v7; // r9
  wchar_t *v8; // rdi
  __int64 v9; // r9
  __int64 v10; // [rsp+28h] [rbp-58h]
  __int64 v11; // [rsp+28h] [rbp-58h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+90h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2, a3);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !*(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Wisp\\Pen\\Digimon");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    v6 = (wchar_t *)Win32AllocPoolZInit(0x20CuLL, 0x6D707352u);
    v8 = v6;
    if ( v6 )
    {
      rimReadSingleDigitizerToMonitorMappings(a1, KeyHandle, 0xAu, v7, v6, v10, (wchar_t *)(a2 + 276));
      rimReadSingleDigitizerToMonitorMappings(a1, KeyHandle, 0x14u, v9, v8, v11, (wchar_t *)(a2 + 20));
      Win32FreePool((__int64)v8);
    }
    return ZwClose(KeyHandle);
  }
  return result;
}
