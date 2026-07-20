/*
 * XREFs of FindFirstFileExW @ 0x14000FB4C
 * Callers:
 *     GetLongPathNameW @ 0x14000F388 (GetLongPathNameW.c)
 * Callees:
 *     __security_check_cookie @ 0x14000D270 (__security_check_cookie.c)
 *     BaseFindFirstDevice @ 0x14000F948 (BaseFindFirstDevice.c)
 *     BasepInitializeFindFileHandle @ 0x14000F9AC (BasepInitializeFindFileHandle.c)
 *     BaseSetLastNTError @ 0x14001008C (BaseSetLastNTError.c)
 *     memcpy_0 @ 0x1400101D7 (memcpy_0.c)
 */

__int64 __fastcall FindFirstFileExW(PCWSTR DosName, __int64 a2, __int64 a3)
{
  char v5; // r15
  ULONG v6; // ecx
  PWSTR Buffer; // r14
  ULONG IsDosDeviceName_U; // ebx
  __int64 result; // rax
  USHORT Length; // ax
  __int16 v11; // cx
  unsigned int v12; // edx
  char v13; // di
  NTSTATUS v14; // eax
  NTSTATUS v15; // ebx
  unsigned int v16; // edx
  WCHAR *v17; // rcx
  int v18; // edi
  unsigned int v19; // eax
  bool v20; // cc
  unsigned __int64 v21; // rbx
  unsigned int v22; // eax
  unsigned __int64 v23; // rbx
  void *FileHandle; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING NtName; // [rsp+58h] [rbp-A8h] BYREF
  _WORD v26[4]; // [rsp+68h] [rbp-98h] BYREF
  PCWSTR PartName; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  struct _RTL_RELATIVE_NAME_U RelativeName; // [rsp+88h] [rbp-78h] BYREF
  const void *v30[2]; // [rsp+A8h] [rbp-58h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v33[8]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v34; // [rsp+108h] [rbp+8h]
  __int64 v35; // [rsp+110h] [rbp+10h]
  __int64 v36; // [rsp+118h] [rbp+18h]
  int v37; // [rsp+128h] [rbp+28h]
  int v38; // [rsp+12Ch] [rbp+2Ch]
  int v39; // [rsp+138h] [rbp+38h]
  unsigned int v40; // [rsp+13Ch] [rbp+3Ch]
  int v41; // [rsp+140h] [rbp+40h]
  unsigned __int8 v42; // [rsp+144h] [rbp+44h]
  _BYTE v43[24]; // [rsp+146h] [rbp+46h] BYREF
  _BYTE Src[530]; // [rsp+15Eh] [rbp+5Eh] BYREF

  RtlInitUnicodeString(&DestinationString, DosName);
  if ( !DestinationString.Length
    || (v5 = 1, DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) - 1] != 46) )
  {
    v5 = 0;
  }
  if ( !RtlDosPathNameToRelativeNtPathName_U(DosName, &NtName, &PartName, &RelativeName) )
  {
    v6 = 3;
LABEL_64:
    RtlSetLastWin32Error(v6);
    return -1LL;
  }
  Buffer = NtName.Buffer;
  IsDosDeviceName_U = RtlIsDosDeviceName_U(DestinationString.Buffer);
  if ( IsDosDeviceName_U )
  {
    RtlReleaseRelativeName(&RelativeName);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Buffer);
    LOWORD(v30[0]) = IsDosDeviceName_U;
    v30[1] = (char *)DestinationString.Buffer + ((unsigned __int64)IsDosDeviceName_U >> 16);
    WORD1(v30[0]) = IsDosDeviceName_U;
    return BaseFindFirstDevice(v30, (_WORD *)a3);
  }
  Length = NtName.Length;
  if ( PartName )
    v11 = NtName.Length + LOWORD(NtName.Buffer) - (_WORD)PartName;
  else
    v11 = 0;
  v26[0] = v11;
  v26[1] = v11;
  if ( !RelativeName.RelativeName.Length || RelativeName.RelativeName.Buffer == PartName )
  {
    RelativeName.ContainingDirectory = 0LL;
    if ( PartName )
    {
      Length = (_WORD)PartName - LOWORD(NtName.Buffer);
      goto LABEL_17;
    }
  }
  else if ( PartName )
  {
    NtName.Buffer = RelativeName.RelativeName.Buffer;
    Length = (_WORD)PartName - LOWORD(RelativeName.RelativeName.Buffer);
LABEL_17:
    NtName.MaximumLength = Length;
    NtName.Length = Length;
  }
  v12 = Length >> 1;
  if ( v12 < 2 || NtName.Buffer[v12 - 2] == 58 || (v13 = 1, NtName.Buffer[v12 - 1] != 92) )
    v13 = 0;
  ObjectAttributes.RootDirectory = RelativeName.ContainingDirectory;
  ObjectAttributes.ObjectName = &NtName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v14 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 7u, 0x4021u);
  v15 = v14;
  if ( v13 && (v14 == -1073741811 || v14 == -1073741565) )
  {
    NtName.Length -= 2;
    v15 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 7u, 0x4021u);
  }
  if ( v15 < 0 )
  {
    RtlReleaseRelativeName(&RelativeName);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Buffer);
    if ( v15 == -1073741772 )
      v15 = -1073741766;
    if ( v15 == -1073741788 )
      v15 = -1073741766;
    goto LABEL_31;
  }
  if ( !v26[0] )
  {
    RtlReleaseRelativeName(&RelativeName);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Buffer);
    NtClose(FileHandle);
    v6 = 2;
    goto LABEL_64;
  }
  if ( v26[0] == 6 && RtlCompareMemory(PartName, L"*.*", 6uLL) == 6 )
  {
    v26[0] = 2;
    goto LABEL_53;
  }
  v16 = 0;
  v17 = (WCHAR *)PartName;
  if ( (v26[0] & 0xFFFE) != 0 )
  {
    while ( 1 )
    {
      if ( v16 && *v17 == 46 && *(v17 - 1) == 42 )
        *(v17 - 1) = 60;
      if ( *v17 == 63 )
        break;
      if ( *v17 == 42 )
        goto LABEL_46;
LABEL_49:
      ++v16;
      ++v17;
      if ( v16 >= v26[0] >> 1 )
        goto LABEL_50;
    }
    *v17 = 62;
LABEL_46:
    if ( v16 && *(v17 - 1) == 46 )
      *(v17 - 1) = 34;
    goto LABEL_49;
  }
LABEL_50:
  if ( v5 && *(v17 - 1) == 42 )
    *(v17 - 1) = 60;
LABEL_53:
  v15 = NtQueryDirectoryFileEx(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, v33, 616, 3, 2, v26);
  RtlReleaseRelativeName(&RelativeName);
  RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Buffer);
  if ( v15 < 0 )
  {
    NtClose(FileHandle);
LABEL_31:
    BaseSetLastNTError((unsigned int)v15);
    return -1LL;
  }
  v18 = v39;
  *(_QWORD *)(a3 + 4) = v34;
  *(_QWORD *)(a3 + 12) = v35;
  *(_QWORD *)(a3 + 20) = v36;
  *(_DWORD *)(a3 + 28) = v38;
  *(_DWORD *)(a3 + 32) = v37;
  v19 = v40;
  v20 = v40 <= 0x206;
  *(_DWORD *)a3 = v18;
  if ( !v20 )
    v19 = 518;
  v21 = v19;
  memcpy_0((void *)(a3 + 44), Src, v19);
  v20 = v42 <= 0x1Au;
  *(_WORD *)(a3 + 2 * (v21 >> 1) + 44) = 0;
  if ( !v20 || (v22 = (char)v42, (unsigned int)(char)v42 >= 0x18) )
    v22 = 24;
  v23 = v22;
  memcpy_0((void *)(a3 + 564), v43, v22);
  *(_WORD *)(a3 + 2 * (v23 >> 1) + 564) = 0;
  if ( (v18 & 0x400) != 0 )
    *(_DWORD *)(a3 + 36) = v41;
  result = (__int64)BasepInitializeFindFileHandle((struct _RTL_CRITICAL_SECTION_DEBUG *)FileHandle);
  if ( !result )
  {
    NtClose(FileHandle);
    v6 = 8;
    goto LABEL_64;
  }
  return result;
}
