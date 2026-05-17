/*
 * XREFs of RtlDeregisterSecureMemoryCacheCallback @ 0x1800F3FF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

char __fastcall RtlDeregisterSecureMemoryCacheCallback(void *a1)
{
  _UNKNOWN **i; // rbx
  _QWORD *v5; // rax
  void **v6; // rdx

  RtlAcquireSRWLockExclusive(&qword_180166978);
  for ( i = (_UNKNOWN **)off_18015FA78; ; i = (_UNKNOWN **)*i )
  {
    if ( i == &off_18015FA78 )
    {
      RtlReleaseSRWLockExclusive(&qword_180166978);
      return 0;
    }
    if ( i[3] == a1 )
      break;
  }
  if ( (*((_DWORD *)i + 4))-- == 1 )
  {
    v5 = *i;
    if ( *((_UNKNOWN ***)*i + 1) != i || (v6 = (void **)i[1], *v6 != i) )
      __fastfail(3u);
    *v6 = v5;
    v5[1] = v6;
    RtlReleaseSRWLockExclusive(&qword_180166978);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)i);
  }
  else
  {
    RtlReleaseSRWLockExclusive(&qword_180166978);
  }
  return 1;
}
