/*
 * XREFs of LdrSetDllDirectory @ 0x1800835A0
 * Callers:
 *     LdrpInitializePolicy @ 0x1800833F8 (LdrpInitializePolicy.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlFreeAnsiString @ 0x18002A5F0 (RtlFreeAnsiString.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x1800427A0 (RtlCreateUnicodeString.c)
 *     RtlpInvalidatePathCache @ 0x1800836A0 (RtlpInvalidatePathCache.c)
 *     wcschr @ 0x180095A40 (wcschr.c)
 */

__int64 __fastcall LdrSetDllDirectory(__int64 a1)
{
  const wchar_t *v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 *v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  if ( (LdrpPolicyBits & 4) == 0 )
    return 3221225485LL;
  v2 = *(const wchar_t **)(a1 + 8);
  if ( v2 )
  {
    if ( !wcschr(v2, 0x3Bu) )
    {
      if ( !RtlCreateUnicodeString((__int64)&DestinationString, *(_WORD **)(a1 + 8)) )
        return 3221225495LL;
      goto LABEL_5;
    }
    return 3221225485LL;
  }
  RtlInitUnicodeString(&DestinationString, 0LL);
LABEL_5:
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpDllDirectoryLock, v3, v4, v5);
  UnicodeString = (UNICODE_STRING)LdrpDllDirectory;
  LdrpDllDirectory = (__int128)DestinationString;
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpCachedPathLock, v6, v7, v8);
  v9 = RtlpInvalidatePathCache(&RtlpDllSearchPath);
  v10 = RtlpInvalidatePathCache(&RtlpDllSearchPathWithOptions);
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  RtlFreeAnsiString(&UnicodeString);
  if ( v9 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
  if ( v10 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
  return 1LL;
}
