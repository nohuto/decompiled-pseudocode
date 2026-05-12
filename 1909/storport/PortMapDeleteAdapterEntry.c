/*
 * XREFs of PortMapDeleteAdapterEntry @ 0x1C0052244
 * Callers:
 *     RaidAdapterDisableDeviceInterface @ 0x1C0034A6C (RaidAdapterDisableDeviceInterface.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C0017E38 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     memset @ 0x1C0024DC0 (memset.c)
 */

NTSTATUS __fastcall PortMapDeleteAdapterEntry(int a1)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx
  int v4; // [rsp+20h] [rbp-E0h]
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t pszDest[256]; // [rsp+80h] [rbp-80h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v4 = a1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlStringCbPrintfW(pszDest, 0x200uLL, L"%s\\Scsi Port %d", L"\\Registry\\Machine\\Hardware\\DeviceMap\\Scsi", v4);
  RtlInitUnicodeString(&DestinationString, pszDest);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  v3 = result;
  if ( result >= 0 )
  {
    ZwDeleteKey(KeyHandle);
    ZwClose(KeyHandle);
    return v3;
  }
  return result;
}
