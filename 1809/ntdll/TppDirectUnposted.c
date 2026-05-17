/*
 * XREFs of TppDirectUnposted @ 0x1801104D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 */

signed __int64 __fastcall TppDirectUnposted(__int64 a1, unsigned __int64 a2, _QWORD *a3, __int64 a4)
{
  volatile signed __int64 *v4; // rsi
  _QWORD **v5; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  signed __int64 result; // rax

  v4 = (volatile signed __int64 *)(a1 + 32);
  v5 = (_QWORD **)(a1 + 40);
  while ( 1 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)v4, a2, a3, a4);
    v6 = *v5;
    if ( *v5 == v5 )
    {
      v6 = 0LL;
    }
    else
    {
      if ( (_QWORD **)v6[1] != v5 || (v7 = (_QWORD *)*v6, *(_QWORD **)(*v6 + 8LL) != v6) )
        __fastfail(3u);
      *v5 = v7;
      v7[1] = v5;
    }
    result = RtlReleaseSRWLockExclusive(v4);
    if ( !v6 )
      break;
    a3 = v6 - 4;
    if ( v6 != (_QWORD *)32 )
    {
      a3 = (_QWORD *)a3[6];
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)a3 + 2, 0xFFFFFFFF) == 1 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 3145728, *a3);
    }
  }
  return result;
}
