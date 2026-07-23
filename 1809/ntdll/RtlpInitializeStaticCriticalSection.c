/*
 * XREFs of RtlpInitializeStaticCriticalSection @ 0x180086780
 * Callers:
 *     RtlpEnterCriticalSectionContended @ 0x1800143C0 (RtlpEnterCriticalSectionContended.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpInitializeStaticCriticalSection(_QWORD *a1)
{
  __int64 v2; // rbx
  struct _PEB *v3; // rax
  unsigned int NumberOfProcessors; // esi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 *v7; // rax

  v2 = a1[4] | 0x7D0LL;
  v3 = NtCurrentPeb();
  if ( (a1[4] & 0x2FFFFFFLL) != 0x2000000 )
    v2 = a1[4];
  NumberOfProcessors = v3->NumberOfProcessors;
  RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
  v5 = *a1 + 16LL;
  if ( !*(_QWORD *)v5 )
  {
    v6 = (unsigned int)v2 & 0xFF000000;
    if ( NumberOfProcessors != 1 )
      v6 = v2;
    a1[4] = v6;
    v7 = (__int64 *)off_18015F648[0];
    if ( *(_UNKNOWN ***)off_18015F648[0] != &RtlCriticalSectionList )
      __fastfail(3u);
    *(_QWORD *)v5 = &RtlCriticalSectionList;
    *(_QWORD *)(v5 + 8) = v7;
    *v7 = v5;
    off_18015F648[0] = (_UNKNOWN **)v5;
  }
  RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
}
