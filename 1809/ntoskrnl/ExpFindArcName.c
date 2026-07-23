/*
 * XREFs of ExpFindArcName @ 0x1408D1818
 * Callers:
 *     ExpCreateOutputARC @ 0x1408D12B8 (ExpCreateOutputARC.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     wcscpy_s @ 0x14019BE00 (wcscpy_s.c)
 *     wcsncat_s @ 0x14019BE90 (wcsncat_s.c)
 *     wcsncpy_s @ 0x14019BFB0 (wcsncpy_s.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x1401B8DF0 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x1401BAA70 (ZwQueryDirectoryObject.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     ExpTranslateSymbolicLink @ 0x1408D4408 (ExpTranslateSymbolicLink.c)
 */

__int64 __fastcall ExpFindArcName(const UNICODE_STRING *a1, wchar_t **a2)
{
  BOOLEAN v2; // r12
  wchar_t *PoolWithTag; // rax
  WCHAR *v4; // rbx
  NTSTATUS v6; // edi
  UNICODE_STRING *v7; // rdi
  SIZE_T v8; // r14
  BOOLEAN RestartScan; // r15
  NTSTATUS v10; // eax
  SIZE_T v11; // rdx
  wchar_t *v12; // rax
  wchar_t *v13; // rsi
  unsigned int v14; // r13d
  int v15; // ebx
  HANDLE DirectoryHandle; // [rsp+40h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-41h] BYREF
  UNICODE_STRING String2; // [rsp+58h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-21h] BYREF
  ULONG BufferLength; // [rsp+100h] [rbp+77h] BYREF
  ULONG Context; // [rsp+108h] [rbp+7Fh] BYREF

  v2 = 0;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x12uLL, 0x72766E45u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  wcscpy_s(PoolWithTag, 9uLL, L"\\ArcName");
  RtlInitUnicodeString(&DestinationString, v4);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  ExFreePoolWithTag(v4, 0);
  if ( v6 < 0 )
    return (unsigned int)v6;
  v7 = 0LL;
  LODWORD(v8) = 0;
  RestartScan = 1;
  RtlInitUnicodeString(&String2, L"SymbolicLink");
  while ( 1 )
  {
    v10 = ZwQueryDirectoryObject(DirectoryHandle, v7, v8, 1u, RestartScan, &Context, &BufferLength);
    if ( v10 == -1073741789 )
    {
      v8 = BufferLength;
      if ( v7 )
        ExFreePoolWithTag(v7, 0);
      v7 = (UNICODE_STRING *)ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x72766E45u);
      if ( !v7 )
      {
        v15 = -1073741670;
        goto LABEL_28;
      }
      v10 = ZwQueryDirectoryObject(DirectoryHandle, v7, v8, 1u, RestartScan, &Context, &BufferLength);
    }
    RestartScan = 0;
    if ( v10 < 0 )
      break;
    if ( RtlEqualUnicodeString(v7 + 1, &String2, 0) )
    {
      v11 = (unsigned int)v7->Length + 18 + 2LL;
      BufferLength = v7->Length + 18;
      v12 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x72766E45u);
      v13 = v12;
      if ( !v12 )
      {
        v15 = -1073741670;
        goto LABEL_26;
      }
      v14 = v7->Length >> 1;
      wcscpy_s(v12, ((unsigned __int64)BufferLength >> 1) + 1, L"\\ArcName\\");
      wcsncat_s(v13, ((unsigned __int64)BufferLength >> 1) + 1, v7->Buffer, v14);
      v13[(unsigned __int64)BufferLength >> 1] = 0;
      v15 = ExpTranslateSymbolicLink(v13);
      if ( v15 < 0 )
      {
        ExFreePoolWithTag(v13, 0);
        goto LABEL_23;
      }
      v2 = RtlEqualUnicodeString(&DestinationString, a1, 1u);
      ExFreePoolWithTag(DestinationString.Buffer, 0);
      if ( v2 == 1 )
      {
        wcsncpy_s(v13, ((unsigned __int64)BufferLength >> 1) + 1, v7->Buffer, v14);
        v13[v14] = 0;
        *a2 = v13;
        goto LABEL_23;
      }
      ExFreePoolWithTag(v13, 0);
    }
  }
  v15 = 0;
  if ( v10 != -2147483622 )
    v15 = v10;
LABEL_23:
  if ( v15 >= 0 && !v2 )
    v15 = -1073741766;
LABEL_26:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
LABEL_28:
  ZwClose(DirectoryHandle);
  return (unsigned int)v15;
}
