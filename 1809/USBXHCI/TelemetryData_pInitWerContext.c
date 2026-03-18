/*
 * XREFs of TelemetryData_pInitWerContext @ 0x1C0063720
 * Callers:
 *     TelemetryData_SubmitReport @ 0x1C006338C (TelemetryData_SubmitReport.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     memmove @ 0x1C0006C80 (memmove.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     RtlStringCbPrintfW @ 0x1C0011A8C (RtlStringCbPrintfW.c)
 *     RegRetrieveValueInfo @ 0x1C0063C6C (RegRetrieveValueInfo.c)
 */

__int64 __fastcall TelemetryData_pInitWerContext(__int64 a1)
{
  int v2; // ebx
  PVOID v3; // rbx
  unsigned int v4; // eax
  size_t v5; // r8
  __int64 v6; // r14
  NTSTATUS PersistedStateLocation; // ebx
  PVOID PoolWithTag; // rsi
  NTSTATUS v9; // eax
  SIZE_T NumberOfBytes; // [rsp+78h] [rbp-90h] BYREF
  void *KeyHandle; // [rsp+80h] [rbp-88h] BYREF
  PVOID P; // [rsp+88h] [rbp-80h]
  void *FileHandle; // [rsp+90h] [rbp-78h] BYREF
  int v15; // [rsp+98h] [rbp-70h] BYREF
  const wchar_t *v16; // [rsp+A0h] [rbp-68h]
  struct _UNICODE_STRING ValueName; // [rsp+A8h] [rbp-60h] BYREF
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
  v15 = 2883628;
  v16 = L"LiveKernelReportsPath";
  ValueName.Buffer = L"LiveKernelReportsPath";
  *(_DWORD *)&ValueName.Length = 2883628;
  memset(pszDest, 0, 0x208uLL);
  LODWORD(NumberOfBytes) = 0;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v15;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0
    && (P = 0LL, v2 = RegRetrieveValueInfo(KeyHandle, &ValueName), ZwClose(KeyHandle), v2 >= 0)
    && (v3 = P) != 0LL
    && *((_DWORD *)P + 1) == 1 )
  {
    v4 = *((_DWORD *)P + 2);
    v5 = 518LL;
    if ( v4 <= 0x206 )
      v5 = v4;
    v6 = a1 + 104;
    memmove((void *)(a1 + 104), (char *)P + 12, v5);
    ExFreePoolWithTag(v3, 0x74614454u);
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
    ExFreePoolWithTag(PoolWithTag, 0x74614454u);
  }
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
    v9 = IoCreateFile(
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
    PersistedStateLocation = v9;
    if ( v9 < 0 )
    {
      if ( v9 == -1073741771 || IoStatusBlock.Information == 4 )
        return 0;
    }
    else
    {
      ZwClose(FileHandle);
    }
  }
  return (unsigned int)PersistedStateLocation;
}
