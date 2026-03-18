/*
 * XREFs of PiDrvDbQuerySystemPathWin32 @ 0x140879864
 * Callers:
 *     PiDrvDbRegisterNode @ 0x140756450 (PiDrvDbRegisterNode.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x140879CC4 (PiDrvDbResolveFilePathKeyValues.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400E7910 (RtlAppendUnicodeStringToString.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenFile @ 0x1401C0730 (ZwOpenFile.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PiDrvDbFindNode @ 0x1402A15A0 (PiDrvDbFindNode.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlpQueryRegistryValues @ 0x1405C1848 (RtlpQueryRegistryValues.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     IoQueryFileDosDeviceName @ 0x140627DE0 (IoQueryFileDosDeviceName.c)
 *     RtlPrefixUnicodeString @ 0x140653340 (RtlPrefixUnicodeString.c)
 *     ExpAllocateStringRoutine @ 0x1406D4F60 (ExpAllocateStringRoutine.c)
 *     RtlDuplicateUnicodeString @ 0x1406F2E70 (RtlDuplicateUnicodeString.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x140878A3C (PiDrvDbGetNodeSystemRoot.c)
 */

__int64 __fastcall PiDrvDbQuerySystemPathWin32(UNICODE_STRING *String2, PUNICODE_STRING StringOut)
{
  PVOID v4; // r15
  POBJECT_NAME_INFORMATION v5; // r14
  NTSTATUS v6; // eax
  int Node; // ebx
  NTSTATUS v8; // eax
  unsigned __int16 Length; // di
  unsigned __int16 v10; // di
  unsigned __int16 v11; // di
  wchar_t *Buffer; // r8
  wchar_t *v13; // rdx
  unsigned __int16 v14; // cx
  bool v15; // zf
  unsigned __int16 v16; // cx
  unsigned __int64 v17; // rax
  wchar_t *v18; // rcx
  int v19; // eax
  const UNICODE_STRING *v20; // rbx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING v23; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING String2a; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING Source; // [rsp+70h] [rbp-90h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v30[20]; // [rsp+C0h] [rbp-40h] BYREF
  int v31; // [rsp+170h] [rbp+70h] BYREF
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+180h] [rbp+80h] BYREF
  HANDLE FileHandle; // [rsp+188h] [rbp+88h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  *(_QWORD *)&String2a.Length = 0LL;
  v4 = 0LL;
  String2a.Buffer = 0LL;
  v5 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v23.Length = 0LL;
  v23.Buffer = 0LL;
  *(_QWORD *)&Source.Length = 0LL;
  Source.Buffer = 0LL;
  FileHandle = 0LL;
  ObjectNameInformation = 0LL;
  v26 = 0LL;
  v31 = 0;
  Object = 0LL;
  RtlInitUnicodeString(StringOut, 0LL);
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v23, 0LL);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = String2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u) >= 0 )
  {
    v6 = ObReferenceObjectByHandle(FileHandle, 0x80u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    v4 = Object;
    Node = v6;
    if ( v6 >= 0 )
    {
      v8 = IoQueryFileDosDeviceName((PFILE_OBJECT)Object, &ObjectNameInformation);
      v5 = ObjectNameInformation;
      Node = v8;
      if ( v8 >= 0 )
        Node = RtlDuplicateUnicodeString(1u, &ObjectNameInformation->Name, StringOut);
    }
    goto LABEL_39;
  }
  Length = String2->Length;
  if ( String2->Length >= 0x16u && RtlPrefixUnicodeString(&PiDrvDbSystemRootNt, String2, 1u) )
  {
    RtlInitUnicodeString(&String2a, L"SYSTEM");
    v10 = String2->Length;
    if ( String2->Length > 0x18u && String2->Buffer[11] == 92 )
    {
      v23.Buffer = String2->Buffer + 11;
      v11 = v10 - 22;
LABEL_18:
      v23.Length = v11;
      v23.MaximumLength = v11 + 2;
      goto LABEL_21;
    }
  }
  else if ( Length > 0x1Cu
         && RtlPrefixUnicodeString(&PiDrvDbDriverStoresRoot, String2, 1u)
         && (Buffer = String2->Buffer, Buffer[13] == 92) )
  {
    v13 = Buffer + 14;
    v14 = 0;
    v15 = Buffer[14] == 92;
    String2a.Buffer = Buffer + 14;
    if ( !v15 )
    {
      do
      {
        if ( !v13[v14] )
          break;
        ++v14;
      }
      while ( v13[v14] != 92 );
    }
    v16 = 2 * v14;
    v17 = (unsigned __int64)v16 >> 1;
    String2a.Length = v16;
    String2a.MaximumLength = v16;
    v18 = &v13[v17];
    if ( *v18 == 92 )
    {
      v23.Buffer = &v13[v17];
      v11 = Length - 2 * (v18 - Buffer);
      goto LABEL_18;
    }
  }
  else
  {
    RtlInitUnicodeString(&String2a, L"SYSTEM");
  }
  v11 = v23.Length;
LABEL_21:
  Node = PiDrvDbFindNode(&String2a, &v26);
  if ( Node < 0 )
    goto LABEL_39;
  v19 = *(_DWORD *)(v26 + 64);
  if ( (v19 & 1) != 0 )
  {
    RtlInitUnicodeString(&Source, L"C:\\Windows");
    DestinationString.MaximumLength = v11 + Source.Length + 2;
    DestinationString.Buffer = (wchar_t *)ExpAllocateStringRoutine(DestinationString.MaximumLength);
    if ( !DestinationString.Buffer )
      goto LABEL_24;
    Node = RtlAppendUnicodeStringToString(&DestinationString, &Source);
    if ( Node < 0 )
      goto LABEL_39;
    if ( InitIsWinPEMode )
    {
      memset(v30, 0, 0x70uLL);
      LODWORD(v30[4]) = 0x4000000;
      LODWORD(v30[1]) = 292;
      v30[2] = L"InstRootDrive";
      v30[3] = &v31;
      Node = RtlpQueryRegistryValues(2u, L"WinPE", (__int64)v30, 0LL);
      if ( Node < 0 || (unsigned int)(v31 - 65) > 0x19 )
      {
        Node = 0;
        *DestinationString.Buffer = 88;
      }
      else
      {
        *DestinationString.Buffer = v31;
      }
    }
  }
  else
  {
    if ( (v19 & 8) == 0 )
    {
      Node = -1073741275;
      goto LABEL_39;
    }
    Node = PiDrvDbGetNodeSystemRoot(v26, &Object);
    if ( Node < 0 )
      goto LABEL_39;
    v20 = (const UNICODE_STRING *)Object;
    DestinationString.MaximumLength = *(_WORD *)Object + v11 + 2;
    DestinationString.Buffer = (wchar_t *)ExpAllocateStringRoutine(DestinationString.MaximumLength);
    if ( !DestinationString.Buffer )
    {
LABEL_24:
      Node = -1073741670;
      goto LABEL_39;
    }
    Node = RtlAppendUnicodeStringToString(&DestinationString, v20);
    if ( Node < 0 )
      goto LABEL_39;
  }
  if ( v11 <= 2u || (Node = RtlAppendUnicodeStringToString(&DestinationString, &v23), Node >= 0) )
  {
    *StringOut = DestinationString;
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
LABEL_39:
  RtlFreeAnsiString(&DestinationString);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)Node;
}
