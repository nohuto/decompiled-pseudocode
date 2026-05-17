/*
 * XREFs of LdrRemoveDllDirectory @ 0x18008CAA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlpInvalidatePathCache @ 0x18007F6E0 (RtlpInvalidatePathCache.c)
 */

__int64 __fastcall LdrRemoveDllDirectory(__int64 a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax
  __int64 v4; // rdi

  if ( (LdrpPolicyBits & 4) == 0 )
    return 3221225485LL;
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  v2 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v3 = *(_QWORD **)(a1 + 8), *v3 != a1) )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  word_18015F3E8 += -2 - *(_WORD *)(a1 + 16);
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  v4 = RtlpInvalidatePathCache(&RtlpDllSearchPathWithOptions);
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v4 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return 0LL;
}
