/*
 * XREFs of LdrSetDllDirectory @ 0x18007F5E0
 * Callers:
 *     LdrpInitializePolicy @ 0x18007F434 (LdrpInitializePolicy.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x180029BA0 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x18002BE80 (RtlCreateUnicodeString.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlpInvalidatePathCache @ 0x18007F6E0 (RtlpInvalidatePathCache.c)
 *     wcschr @ 0x180092980 (wcschr.c)
 */

__int64 __fastcall LdrSetDllDirectory(__int64 a1)
{
  const wchar_t *v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  if ( (LdrpPolicyBits & 4) == 0 )
    return 3221225485LL;
  v2 = *(const wchar_t **)(a1 + 8);
  if ( v2 )
  {
    if ( !wcschr(v2, 0x3Bu) )
    {
      if ( !RtlCreateUnicodeString((__int64)&v6, *(_WORD **)(a1 + 8)) )
        return 3221225495LL;
      goto LABEL_5;
    }
    return 3221225485LL;
  }
  v6 = 0uLL;
LABEL_5:
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  UnicodeString = (UNICODE_STRING)LdrpDllDirectory;
  LdrpDllDirectory = v6;
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  v3 = RtlpInvalidatePathCache(&RtlpDllSearchPath);
  v4 = RtlpInvalidatePathCache(&RtlpDllSearchPathWithOptions);
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  RtlFreeAnsiString(&UnicodeString);
  if ( v3 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3);
  if ( v4 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
  return 1LL;
}
