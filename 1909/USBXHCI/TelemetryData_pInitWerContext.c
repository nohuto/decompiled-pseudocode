/*
 * XREFs of TelemetryData_pInitWerContext @ 0x1C006BA5C
 * Callers:
 *     TelemetryData_SubmitReport @ 0x1C006B68C (TelemetryData_SubmitReport.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0008A40 (memmove.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     RtlStringCbPrintfW @ 0x1C001448C (RtlStringCbPrintfW.c)
 *     RegRetrieveValueInfo @ 0x1C006BF98 (RegRetrieveValueInfo.c)
 */

__int64 __fastcall TelemetryData_pInitWerContext(__int64 a1)
{
  int v2; // ebx
  _DWORD *v3; // rbx
  unsigned int v4; // eax
  size_t v5; // r8
  __int64 v6; // r14
  void *v7; // rcx
  NTSTATUS PersistedStateLocation; // ebx
  PVOID PoolWithTag; // rsi
  NTSTATUS v10; // eax
  SIZE_T NumberOfBytes; // [rsp+78h] [rbp-90h] BYREF
  void *KeyHandle; // [rsp+80h] [rbp-88h] BYREF
  _DWORD *v14; // [rsp+88h] [rbp-80h]
  _QWORD v15[2]; // [rsp+90h] [rbp-78h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+A0h] [rbp-68h] BYREF
  void *FileHandle; // [rsp+B0h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C8h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-30h] BYREF
  struct _OBJECT_ATTRIBUTES v21; // [rsp+108h] [rbp+0h] BYREF
  wchar_t pszDest[264]; // [rsp+138h] [rbp+30h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&v21, 0, sizeof(v21));
  v15[0] = 2883628LL;
  v15[1] = L"LiveKernelReportsPath";
  ValueName.Buffer = L"LiveKernelReportsPath";
  *(_QWORD *)&ValueName.Length = 2883628LL;
  memset(pszDest, 0, 0x208uLL);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  LODWORD(NumberOfBytes) = 0;
  KeyHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v15;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0
    && (v14 = 0LL, v2 = RegRetrieveValueInfo(KeyHandle, &ValueName), ZwClose(KeyHandle), v2 >= 0)
    && (v3 = v14) != 0LL
    && v14[1] == 1 )
  {
    v4 = v14[2];
    v5 = 518LL;
    if ( v4 <= 0x206 )
      v5 = v4;
    v6 = a1 + 104;
    memmove((void *)(a1 + 104), v14 + 3, v5);
    v7 = v3;
  }
  else
  {
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"LiveKernelReports",
                               0LL,
                               L"\\SystemRoot\\LiveKernelReports",
                               1LL,
                               0LL,
                               0,
                               &NumberOfBytes);
    if ( PersistedStateLocation != -2147483643 || (unsigned int)NumberOfBytes > 0x104 )
      return (unsigned int)PersistedStateLocation;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x74614454u);
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"LiveKernelReports",
                               0LL,
                               L"\\SystemRoot\\LiveKernelReports",
                               1LL,
                               PoolWithTag,
                               NumberOfBytes,
                               &NumberOfBytes);
    if ( PersistedStateLocation < 0 )
    {
      ExFreePoolWithTag(PoolWithTag, 0x74614454u);
      return (unsigned int)PersistedStateLocation;
    }
    v6 = a1 + 104;
    RtlStringCbPrintfW((NTSTRSAFE_PWSTR)(a1 + 104), 0x208uLL, L"%ws", PoolWithTag);
    v7 = PoolWithTag;
  }
  ExFreePoolWithTag(v7, 0x74614454u);
  *(_WORD *)(a1 + 622) = 0;
  PersistedStateLocation = RtlStringCbPrintfW(pszDest, 0x208uLL, L"%ws\\%ws", v6, a1 + 624);
  if ( PersistedStateLocation >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, pszDest);
    v21.Length = 48;
    v21.RootDirectory = 0LL;
    v21.Attributes = 576;
    v21.ObjectName = &DestinationString;
    *(_OWORD *)&v21.SecurityDescriptor = 0LL;
    v10 = IoCreateFile(
            &FileHandle,
            0x10000000u,
            &v21,
            &IoStatusBlock,
            0LL,
            0x80u,
            3u,
            2u,
            1u,
            0LL,
            0,
            CreateFileTypeNone,
            0LL,
            0x100u);
    PersistedStateLocation = v10;
    if ( v10 < 0 )
    {
      if ( v10 == -1073741771 || IoStatusBlock.Information == 4 )
        return 0;
    }
    else
    {
      ZwClose(FileHandle);
    }
  }
  return (unsigned int)PersistedStateLocation;
}
