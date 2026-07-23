/*
 * XREFs of sub_18010EBD0 @ 0x18010EBD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

void __fastcall sub_18010EBD0(__int64 a1)
{
  _RTL_SRWLOCK *v1; // rsi
  _QWORD **v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // r8

  v1 = (_RTL_SRWLOCK *)(a1 + 32);
  v2 = (_QWORD **)(a1 + 40);
  while ( 1 )
  {
    RtlAcquireSRWLockExclusive(v1);
    v3 = *v2;
    if ( *v2 == v2 )
    {
      v3 = 0LL;
    }
    else
    {
      if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
        __fastfail(3u);
      *v2 = v4;
      v4[1] = v2;
    }
    RtlReleaseSRWLockExclusive(v1);
    if ( !v3 )
      break;
    if ( v3 != (_QWORD *)32 )
    {
      v5 = v3[2];
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_180166080 + 3145728, *(PVOID *)v5);
    }
  }
}
