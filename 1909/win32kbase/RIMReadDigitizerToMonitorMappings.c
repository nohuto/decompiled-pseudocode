/*
 * XREFs of RIMReadDigitizerToMonitorMappings @ 0x1C0143E7C
 * Callers:
 *     RIMEnableMonitorMappingForDevice @ 0x1C0135BA0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C013B548 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C013F7E0 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01468E8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     rimReadSingleDigitizerToMonitorMappings @ 0x1C0143218 (rimReadSingleDigitizerToMonitorMappings.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

int __fastcall RIMReadDigitizerToMonitorMappings(const UNICODE_STRING *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int result; // eax
  char *v8; // rax
  __int64 v9; // r9
  char *v10; // rdi
  __int64 v11; // r9
  __int64 v12; // [rsp+28h] [rbp-58h]
  __int64 v13; // [rsp+28h] [rbp-58h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+90h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  if ( !*(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Wisp\\Pen\\Digimon");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    v8 = (char *)Win32AllocPoolZInit(0x20CuLL, 1836086098LL);
    v10 = v8;
    if ( v8 )
    {
      rimReadSingleDigitizerToMonitorMappings(a1, KeyHandle, 0xAu, v9, v8, v12, (unsigned __int16 *)(a2 + 276));
      rimReadSingleDigitizerToMonitorMappings(a1, KeyHandle, 0x14u, v11, v10, v13, (unsigned __int16 *)(a2 + 20));
      Win32FreePool((__int64)v10);
    }
    return ZwClose(KeyHandle);
  }
  return result;
}
