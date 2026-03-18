/*
 * XREFs of AdtpInitializeDriveLetters @ 0x1407791D0
 * Callers:
 *     AdtpInitializeAuditingCommon @ 0x140778CB4 (AdtpInitializeAuditingCommon.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     StringCopyWorkerW @ 0x1401951F0 (StringCopyWorkerW.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     NtClose @ 0x1405FBB70 (NtClose.c)
 *     NtOpenSymbolicLinkObject @ 0x1406B6850 (NtOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x1406B6910 (NtQuerySymbolicLinkObject.c)
 */

__int64 __fastcall AdtpInitializeDriveLetters(__int64 a1, size_t a2, size_t *a3, const wchar_t *a4)
{
  unsigned int v4; // edi
  wchar_t *Buffer; // r13
  int v6; // esi
  NTSTATUS SymbolicLinkObject; // ebx
  unsigned int v8; // ebx
  char v9; // r14
  UNICODE_STRING *v10; // rsi
  UNICODE_STRING *v12; // r14
  PVOID PoolWithTag; // rax
  void *v14; // r15
  HANDLE v15; // rcx
  size_t v16; // [rsp+28h] [rbp-69h]
  HANDLE SymbolicLinkHandle; // [rsp+38h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-51h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-41h] BYREF
  wchar_t pszDest[32]; // [rsp+80h] [rbp-11h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v4 = 0;
  DestinationString.Buffer = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  SymbolicLinkHandle = 0LL;
  StringCopyWorkerW(pszDest, a2, a3, a4, v16);
  RtlInitUnicodeString(&DestinationString, pszDest);
  Buffer = DestinationString.Buffer;
  v6 = 0;
  while ( 1 )
  {
    ObjectAttributes.Length = 48;
    Buffer[12] = v6 + 65;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    SymbolicLinkObject = NtOpenSymbolicLinkObject(&SymbolicLinkHandle, 1u, &ObjectAttributes);
    if ( SymbolicLinkObject >= 0 )
      break;
LABEL_3:
    if ( (unsigned int)++v6 >= 0x1A )
      goto LABEL_4;
  }
  *((_WORD *)&DriveMappingArray + 12 * v4) = Buffer[12];
  v12 = (UNICODE_STRING *)((char *)&DriveMappingArray + 24 * v4 + 8);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x6B416553u);
  v14 = PoolWithTag;
  if ( PoolWithTag )
  {
    v15 = SymbolicLinkHandle;
    *(_DWORD *)&v12->Length = 0x1000000;
    *((_QWORD *)&DriveMappingArray + 3 * v4 + 2) = PoolWithTag;
    SymbolicLinkObject = NtQuerySymbolicLinkObject(v15, v12, 0LL);
    NtClose(SymbolicLinkHandle);
    if ( SymbolicLinkObject < 0 )
    {
      ExFreePoolWithTag(v14, 0);
      RtlInitUnicodeString(v12, 0LL);
    }
    else
    {
      ++v4;
    }
    goto LABEL_3;
  }
  SymbolicLinkObject = -1073741801;
LABEL_4:
  if ( SymbolicLinkObject == -1073741801 )
    return 3221225495LL;
  v8 = 0;
  while ( v8 < v4 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    v9 = 0;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = (UNICODE_STRING *)((char *)&DriveMappingArray + 16 * v8 + 8 * v8 + 8);
    ObjectAttributes.ObjectName = v10;
    if ( NtOpenSymbolicLinkObject(&SymbolicLinkHandle, 1u, &ObjectAttributes) >= 0 )
    {
      if ( NtQuerySymbolicLinkObject(SymbolicLinkHandle, v10, 0LL) < 0 )
      {
        ExFreePoolWithTag(v10->Buffer, 0);
        RtlInitUnicodeString(v10, 0LL);
      }
      else
      {
        v9 = 1;
      }
      NtClose(SymbolicLinkHandle);
      if ( v9 )
        continue;
    }
    ++v8;
  }
  return 0LL;
}
