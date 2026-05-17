/*
 * XREFs of RtlDestroyAtomTable @ 0x180088AF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlpLockAtomTable @ 0x18005B888 (RtlpLockAtomTable.c)
 *     RtlDestroyHandleTable @ 0x180084EF0 (RtlDestroyHandleTable.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

__int64 __fastcall RtlDestroyAtomTable(char *a1)
{
  unsigned int v2; // ebp
  _QWORD **i; // rdi
  _QWORD *v4; // rsi
  _QWORD *v5; // r8

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 1, 0xFFFFFFFF) != 1 )
    return 0LL;
  if ( RtlpLockAtomTable((__int64)a1) )
  {
    v2 = 0;
    for ( i = (_QWORD **)(a1 + 72); v2 < *((_DWORD *)a1 + 16); ++v2 )
    {
      v4 = *i;
      *i++ = 0LL;
      while ( 1 )
      {
        v5 = v4;
        if ( !v4 )
          break;
        v4 = (_QWORD *)*v4;
        *v5 = 0LL;
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v5);
      }
    }
    *(_DWORD *)a1 = 0;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1 + 1);
    RtlDestroyHandleTable((__int64)(a1 + 16));
    memset(a1, 0, 0x50uLL);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)a1);
    return 0LL;
  }
  return 3221225485LL;
}
