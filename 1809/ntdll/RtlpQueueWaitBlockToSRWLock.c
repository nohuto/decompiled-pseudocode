/*
 * XREFs of RtlpQueueWaitBlockToSRWLock @ 0x18007F878
 * Callers:
 *     RtlpWakeConditionVariable @ 0x18007F784 (RtlpWakeConditionVariable.c)
 * Callees:
 *     RtlBackoff @ 0x18006ADA0 (RtlBackoff.c)
 *     RtlpOptimizeSRWLockList @ 0x180075204 (RtlpOptimizeSRWLockList.c)
 */

bool __fastcall RtlpQueueWaitBlockToSRWLock(__int64 a1, unsigned __int64 *a2)
{
  int v2; // ebx
  unsigned __int64 v3; // rax
  _BOOL8 v4; // r9
  bool v5; // bl
  volatile signed __int64 *v6; // r11
  __int64 v7; // r10
  bool v9; // r8
  __int64 v10; // rdx
  signed __int64 v11; // rdx
  unsigned int v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 36);
  v12 = 0;
  v3 = *a2;
  v4 = 0LL;
  v5 = (v2 & 1) == 0;
  v6 = (volatile signed __int64 *)a2;
  v7 = a1;
  while ( (v3 & 1) != 0 && (!v5 || (v3 & 2) != 0 || (v3 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
  {
    *(_QWORD *)(v7 + 16) = v4;
    v9 = v4;
    if ( (v3 & 2) != 0 )
    {
      *(_DWORD *)(v7 + 32) = -1;
      *(_QWORD *)(v7 + 8) = v4;
      *(_QWORD *)v7 = v3 & 0xFFFFFFFFFFFFFFF0uLL;
      v11 = v7 | v3 & 8 | 7;
      v9 = (v3 & 4) == 0;
    }
    else
    {
      v10 = 11LL;
      *(_QWORD *)(v7 + 8) = v7;
      *(_DWORD *)(v7 + 32) = v3 >> 4;
      if ( (int)(v3 >> 4) <= 1 )
        v10 = 3LL;
      v11 = v7 | v10;
      if ( !(unsigned int)(v3 >> 4) )
        *(_DWORD *)(v7 + 32) = -2;
    }
    if ( v3 == _InterlockedCompareExchange64(v6, v11, v3) )
    {
      if ( v9 )
        RtlpOptimizeSRWLockList(v6, v11);
      LOBYTE(v4) = 1;
      return v4;
    }
    RtlBackoff(&v12);
    _m_prefetchw((const void *)v6);
    v3 = *v6;
  }
  return v4;
}
