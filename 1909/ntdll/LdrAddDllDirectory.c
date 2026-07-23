/*
 * XREFs of LdrAddDllDirectory @ 0x18008C8A0
 * Callers:
 *     LdrpInitializePerUserWindowsDirectory @ 0x180081390 (LdrpInitializePerUserWindowsDirectory.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800276A8 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlDetermineDosPathNameType_U @ 0x18002F020 (RtlDetermineDosPathNameType_U.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlpInvalidatePathCache @ 0x18007F6E0 (RtlpInvalidatePathCache.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     _local_unwind @ 0x18008DC10 (_local_unwind.c)
 *     ZwQueryAttributesFile @ 0x18009D630 (ZwQueryAttributesFile.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

NTSTATUS __cdecl LdrAddDllDirectory(PUNICODE_STRING NewDirectory, PDLL_DIRECTORY_COOKIE Cookie)
{
  RTL_PATH_TYPE v4; // eax
  NTSTATUS v5; // ebx
  char *Heap; // rax
  char *v7; // rbx
  unsigned int v8; // edx
  _QWORD *v9; // rax
  void *v10; // rdi
  int v12; // ecx
  _DWORD v13[18]; // [rsp+0h] [rbp-C8h] BYREF
  _UNICODE_STRING v14; // [rsp+48h] [rbp-80h] BYREF
  _DWORD *v15; // [rsp+58h] [rbp-70h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-68h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+90h] [rbp-38h] BYREF

  v15 = v13;
  if ( (LdrpPolicyBits & 4) == 0 )
    return -1073741811;
  v4 = RtlDetermineDosPathNameType_U(NewDirectory->Buffer);
  if ( (unsigned int)v4 <= RtlPathTypeRelative )
  {
    v12 = 41;
    if ( _bittest(&v12, v4) )
      return -1073741811;
  }
  v5 = RtlpDosPathNameToRelativeNtPathName(0, NewDirectory, 0LL, &v14, 0LL, 0LL, 0LL);
  if ( v5 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = &v14;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v14.Buffer);
  }
  if ( v5 < 0 )
    return v5;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, NewDirectory->Length + 18LL);
  v7 = Heap;
  if ( !Heap )
    return -1073741801;
  memmove(Heap + 18, NewDirectory->Buffer, NewDirectory->Length);
  *((_WORD *)v7 + 8) = NewDirectory->Length;
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  v8 = NewDirectory->Length + (unsigned __int16)word_18015F3E8 + 2;
  v13[16] = v8;
  if ( v8 > 0xFFFE )
  {
    local_unwind(v15, &loc_1800CBD3B);
LABEL_11:
    __fastfail(3u);
  }
  word_18015F3E8 = v8;
  v9 = LdrpUserDllDirectories;
  if ( *((_UNKNOWN ***)LdrpUserDllDirectories + 1) != &LdrpUserDllDirectories )
    goto LABEL_11;
  *(_QWORD *)v7 = LdrpUserDllDirectories;
  *((_QWORD *)v7 + 1) = &LdrpUserDllDirectories;
  v9[1] = v7;
  LdrpUserDllDirectories = v7;
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  v10 = (void *)RtlpInvalidatePathCache(&RtlpDllSearchPathWithOptions);
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v10 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  *Cookie = v7;
  return 0;
}
