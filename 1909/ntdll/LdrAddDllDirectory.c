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

__int64 __fastcall LdrAddDllDirectory(unsigned __int16 *a1, __int64 *a2)
{
  unsigned int v4; // eax
  int v5; // ebx
  __int64 Heap; // rax
  __int64 v7; // rbx
  unsigned int v8; // edx
  _QWORD *v9; // rax
  __int64 v10; // rdi
  int v12; // ecx
  _DWORD v13[18]; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int16 v14; // [rsp+48h] [rbp-80h] BYREF
  __int64 v15; // [rsp+50h] [rbp-78h]
  _DWORD *v16; // [rsp+58h] [rbp-70h]
  int v17; // [rsp+60h] [rbp-68h] BYREF
  __int64 v18; // [rsp+68h] [rbp-60h]
  unsigned __int16 *v19; // [rsp+70h] [rbp-58h]
  int v20; // [rsp+78h] [rbp-50h]
  __int128 v21; // [rsp+80h] [rbp-48h]
  char v22[40]; // [rsp+90h] [rbp-38h] BYREF

  v16 = v13;
  if ( (LdrpPolicyBits & 4) == 0 )
    return 3221225485LL;
  v4 = RtlDetermineDosPathNameType_U(*((_WORD **)a1 + 1));
  if ( v4 <= 5 )
  {
    v12 = 41;
    if ( _bittest(&v12, v4) )
      return 3221225485LL;
  }
  v5 = RtlpDosPathNameToRelativeNtPathName(0, (__m128i *)a1, 0LL, &v14, 0LL, 0LL, 0LL);
  if ( v5 >= 0 )
  {
    v17 = 48;
    v18 = 0LL;
    v20 = 64;
    v19 = &v14;
    v21 = 0LL;
    v5 = ZwQueryAttributesFile(&v17, v22);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v15);
  }
  if ( v5 < 0 )
    return (unsigned int)v5;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *a1 + 18LL);
  v7 = Heap;
  if ( !Heap )
    return 3221225495LL;
  memmove((void *)(Heap + 18), *((const void **)a1 + 1), *a1);
  *(_WORD *)(v7 + 16) = *a1;
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  v8 = *a1 + (unsigned __int16)word_18015F3E8 + 2;
  v13[16] = v8;
  if ( v8 > 0xFFFE )
  {
    local_unwind(v16, &loc_1800CBD3B);
LABEL_11:
    __fastfail(3u);
  }
  word_18015F3E8 = v8;
  v9 = LdrpUserDllDirectories;
  if ( *((_UNKNOWN ***)LdrpUserDllDirectories + 1) != &LdrpUserDllDirectories )
    goto LABEL_11;
  *(_QWORD *)v7 = LdrpUserDllDirectories;
  *(_QWORD *)(v7 + 8) = &LdrpUserDllDirectories;
  v9[1] = v7;
  LdrpUserDllDirectories = (_UNKNOWN *)v7;
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  v10 = RtlpInvalidatePathCache(&RtlpDllSearchPathWithOptions);
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v10 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
  *a2 = v7;
  return 0LL;
}
