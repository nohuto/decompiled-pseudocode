/*
 * XREFs of PortMapDeleteLunEntry @ 0x1C001C5F4
 * Callers:
 *     RaidUnitUnRegisterInterfaces @ 0x1C001C714 (RaidUnitUnRegisterInterfaces.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C0017E28 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     memset @ 0x1C0023840 (memset.c)
 */

NTSTATUS __fastcall PortMapDeleteLunEntry(int a1, int a2, int a3, int a4)
{
  NTSTATUS result; // eax
  NTSTATUS v9; // ebx
  int v10; // [rsp+20h] [rbp-E0h]
  int v11; // [rsp+28h] [rbp-D8h]
  int v12; // [rsp+30h] [rbp-D0h]
  int v13; // [rsp+38h] [rbp-C8h]
  void *KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t pszDest[256]; // [rsp+90h] [rbp-70h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v13 = a4;
  v12 = a3;
  v11 = a2;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v10 = a1;
  RtlStringCbPrintfW(
    pszDest,
    0x200uLL,
    L"%s\\Scsi Port %d\\SCSI Bus %d\\Target Id %d\\Logical Unit Id %d",
    L"\\Registry\\Machine\\Hardware\\DeviceMap\\Scsi",
    v10,
    v11,
    v12,
    v13);
  RtlInitUnicodeString(&DestinationString, pszDest);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  v9 = result;
  if ( result >= 0 )
  {
    ZwDeleteKey(KeyHandle);
    ZwClose(KeyHandle);
    return v9;
  }
  return result;
}
