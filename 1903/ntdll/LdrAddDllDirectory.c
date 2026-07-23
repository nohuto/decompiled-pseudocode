/*
 * XREFs of LdrAddDllDirectory @ 0x18008C200
 * Callers:
 *     sub_180080CF0 @ 0x180080CF0 (sub_180080CF0.c)
 * Callees:
 *     sub_1800276A8 @ 0x1800276A8 (sub_1800276A8.c)
 *     RtlDetermineDosPathNameType_U @ 0x18002F020 (RtlDetermineDosPathNameType_U.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18007F040 @ 0x18007F040 (sub_18007F040.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     _local_unwind @ 0x18008D570 (_local_unwind.c)
 *     ZwQueryAttributesFile @ 0x18009CE80 (ZwQueryAttributesFile.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
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
  if ( (dword_180162714 & 4) == 0 )
    return -1073741811;
  v4 = RtlDetermineDosPathNameType_U(NewDirectory->Buffer);
  if ( (unsigned int)v4 <= RtlPathTypeRelative )
  {
    v12 = 41;
    if ( _bittest(&v12, v4) )
      return -1073741811;
  }
  v5 = sub_1800276A8(0, NewDirectory, 0LL, &v14, 0LL, 0LL, 0LL);
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
  RtlAcquireSRWLockExclusive(&stru_1801664A8);
  v8 = NewDirectory->Length + (unsigned __int16)word_18015F3E8 + 2;
  v13[16] = v8;
  if ( v8 > 0xFFFE )
  {
    local_unwind(v15, &loc_1800CBC6F);
LABEL_11:
    __fastfail(3u);
  }
  word_18015F3E8 = v8;
  v9 = off_18015F3D8;
  if ( *((_UNKNOWN ***)off_18015F3D8 + 1) != &off_18015F3D8 )
    goto LABEL_11;
  *(_QWORD *)v7 = off_18015F3D8;
  *((_QWORD *)v7 + 1) = &off_18015F3D8;
  v9[1] = v7;
  off_18015F3D8 = v7;
  RtlReleaseSRWLockExclusive(&stru_1801664A8);
  RtlAcquireSRWLockExclusive(&stru_1801664A0);
  v10 = (void *)sub_18007F040(&qword_180164358);
  RtlReleaseSRWLockExclusive(&stru_1801664A0);
  if ( v10 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  *Cookie = v7;
  return 0;
}
