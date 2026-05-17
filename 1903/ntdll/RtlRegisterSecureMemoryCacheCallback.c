/*
 * XREFs of RtlRegisterSecureMemoryCacheCallback @ 0x1800F4120
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     ZwQuerySystemInformation @ 0x18009CDA0 (ZwQuerySystemInformation.c)
 */

__int64 __fastcall RtlRegisterSecureMemoryCacheCallback(__int64 a1)
{
  __int64 result; // rax
  __int64 Heap; // rax
  __int64 v4; // rbx
  __int64 *v5; // rax

  result = ZwQuerySystemInformation();
  if ( (int)result >= 0 )
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 32LL);
    v4 = Heap;
    if ( Heap )
    {
      *(_DWORD *)(Heap + 16) = 1;
      *(_QWORD *)(Heap + 24) = a1;
      RtlAcquireSRWLockExclusive(&qword_180166978);
      v5 = (__int64 *)off_18015FA80;
      if ( *off_18015FA80 != (_UNKNOWN *)&off_18015FA78 )
        __fastfail(3u);
      *(_QWORD *)v4 = &off_18015FA78;
      *(_QWORD *)(v4 + 8) = v5;
      *v5 = v4;
      off_18015FA80 = (_UNKNOWN **)v4;
      RtlReleaseSRWLockExclusive(&qword_180166978);
      return 0LL;
    }
    else
    {
      return 3221225495LL;
    }
  }
  return result;
}
