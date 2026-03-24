/*
 * XREFs of PiDrvDbQuerySystemPathWin32 @ 0x14083E374
 * Callers:
 *     PiDrvDbResolveFilePathKeyValues @ 0x14083E5BC (PiDrvDbResolveFilePathKeyValues.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400B9A90 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401B8370 (ZwClose.c)
 *     ZwOpenFile @ 0x1401B87F0 (ZwOpenFile.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     PiDrvDbFindNode @ 0x14028B384 (PiDrvDbFindNode.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     RtlpQueryRegistryValues @ 0x1405C58AC (RtlpQueryRegistryValues.c)
 *     RtlPrefixUnicodeString @ 0x1405C7460 (RtlPrefixUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     RtlCreateUnicodeString @ 0x14065AA10 (RtlCreateUnicodeString.c)
 *     IoQueryFileDosDeviceName @ 0x14065F5B0 (IoQueryFileDosDeviceName.c)
 *     RtlDuplicateUnicodeString @ 0x1406D3C00 (RtlDuplicateUnicodeString.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x14083D6B8 (PiDrvDbGetNodeSystemRoot.c)
 */

__int64 __fastcall PiDrvDbQuerySystemPathWin32(UNICODE_STRING *String2, PUNICODE_STRING DestinationString)
{
  POBJECT_NAME_INFORMATION v3; // rdi
  PVOID v5; // r14
  NTSTATUS v6; // eax
  int Node; // ebx
  NTSTATUS v8; // eax
  const WCHAR *v9; // rcx
  int v10; // eax
  PVOID Object; // [rsp+30h] [rbp-99h] BYREF
  UNICODE_STRING DestinationStringa; // [rsp+38h] [rbp-91h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-81h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-51h] BYREF
  _QWORD v16[18]; // [rsp+90h] [rbp-39h] BYREF
  int v17; // [rsp+130h] [rbp+67h] BYREF
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+140h] [rbp+77h] BYREF
  HANDLE FileHandle; // [rsp+148h] [rbp+7Fh] BYREF

  FileHandle = 0LL;
  v3 = 0LL;
  Object = 0LL;
  v17 = 0;
  v5 = 0LL;
  ObjectNameInformation = 0LL;
  RtlInitUnicodeString(DestinationString, 0LL);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = String2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u) >= 0 )
  {
    v6 = ObReferenceObjectByHandle(FileHandle, 0x80u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    v5 = Object;
    Node = v6;
    if ( v6 < 0 )
    {
LABEL_23:
      if ( v5 )
        ObfDereferenceObject(v5);
      goto LABEL_25;
    }
    v8 = IoQueryFileDosDeviceName((PFILE_OBJECT)Object, &ObjectNameInformation);
    v3 = ObjectNameInformation;
    Node = v8;
    if ( v8 >= 0 )
      Node = RtlDuplicateUnicodeString(1u, &ObjectNameInformation->Name, DestinationString);
LABEL_21:
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    goto LABEL_23;
  }
  RtlInitUnicodeString(&DestinationStringa, L"\\DriverStores\\");
  if ( RtlPrefixUnicodeString(&DestinationStringa, String2, 1u) )
    v9 = &String2->Buffer[(unsigned __int64)DestinationStringa.Length >> 1];
  else
    v9 = L"SYSTEM";
  Node = PiDrvDbFindNode(v9, (__int64 *)&Object);
  if ( Node < 0 )
    goto LABEL_25;
  v10 = *((_DWORD *)Object + 16);
  if ( (v10 & 1) == 0 )
  {
    if ( (v10 & 8) != 0 )
    {
      Node = PiDrvDbGetNodeSystemRoot((__int64)Object, DestinationString);
      if ( Node >= 0 )
        goto LABEL_25;
    }
    else
    {
      Node = -1073741275;
    }
    goto LABEL_21;
  }
  if ( RtlCreateUnicodeString(DestinationString, L"C:\\Windows") )
  {
    if ( InitIsWinPEMode )
    {
      memset(v16, 0, 0x70uLL);
      LODWORD(v16[4]) = 0x4000000;
      LODWORD(v16[1]) = 292;
      v16[2] = L"InstRootDrive";
      v16[3] = &v17;
      Node = RtlpQueryRegistryValues(2LL, L"WinPE", (__int64)v16, 0LL);
      if ( Node < 0 || (unsigned int)(v17 - 65) > 0x19 )
      {
        Node = 0;
        *DestinationString->Buffer = 88;
      }
      else
      {
        *DestinationString->Buffer = v17;
      }
    }
  }
  else
  {
    Node = -1073741670;
  }
LABEL_25:
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)Node;
}
