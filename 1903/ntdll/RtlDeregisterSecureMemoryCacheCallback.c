/*
 * XREFs of RtlDeregisterSecureMemoryCacheCallback @ 0x1800F3FF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

NTSTATUS __cdecl RtlDeregisterSecureMemoryCacheCallback(PRTL_SECURE_MEMORY_CACHE_CALLBACK Callback)
{
  PRTL_SECURE_MEMORY_CACHE_CALLBACK *i; // rbx
  NTSTATUS result; // eax
  PRTL_SECURE_MEMORY_CACHE_CALLBACK v5; // rax
  PVOID *v6; // rdx

  RtlAcquireSRWLockExclusive(&stru_180166978);
  for ( i = (PRTL_SECURE_MEMORY_CACHE_CALLBACK *)off_18015FA78; ; i = (PRTL_SECURE_MEMORY_CACHE_CALLBACK *)*i )
  {
    if ( i == (PRTL_SECURE_MEMORY_CACHE_CALLBACK *)&off_18015FA78 )
    {
      RtlReleaseSRWLockExclusive(&stru_180166978);
      LOBYTE(result) = 0;
      return result;
    }
    if ( i[3] == Callback )
      break;
  }
  if ( (*((_DWORD *)i + 4))-- == 1 )
  {
    v5 = *i;
    if ( *((PRTL_SECURE_MEMORY_CACHE_CALLBACK **)*i + 1) != i || (v6 = (PVOID *)i[1], *v6 != i) )
      __fastfail(3u);
    *v6 = v5;
    *((_QWORD *)v5 + 1) = v6;
    RtlReleaseSRWLockExclusive(&stru_180166978);
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, i);
  }
  else
  {
    RtlReleaseSRWLockExclusive(&stru_180166978);
  }
  LOBYTE(result) = 1;
  return result;
}
