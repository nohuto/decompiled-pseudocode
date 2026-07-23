/*
 * XREFs of RtlStdReleaseStackTrace @ 0x1800FDC40
 * Callers:
 *     RtlDeleteCriticalSection @ 0x18005C6B0 (RtlDeleteCriticalSection.c)
 *     RtlLogStackBackTraceEx @ 0x180061BC0 (RtlLogStackBackTraceEx.c)
 *     RtlReleaseStackTrace @ 0x1800FD940 (RtlReleaseStackTrace.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1800A3DF0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpStdLockAcquire @ 0x1800FE18C (RtlpStdLockAcquire.c)
 *     RtlpStdLockRelease @ 0x1800FE1AC (RtlpStdLockRelease.c)
 */

__int64 __fastcall RtlStdReleaseStackTrace(__int64 a1, __int64 a2)
{
  int v4; // ebp
  unsigned int v5; // eax
  __int64 v6; // r8
  _DWORD *v7; // rdx
  _QWORD **v8; // rdi
  _QWORD **v9; // r14
  __int16 v10; // cx
  __int16 v11; // ax
  _QWORD *v12; // rcx
  __int64 result; // rax

  v4 = 0;
  v5 = 0;
  if ( *(_WORD *)(a2 + 14) )
  {
    v6 = *(unsigned __int16 *)(a2 + 14);
    v7 = (_DWORD *)(a2 + 16);
    do
    {
      v5 += *v7;
      v7 += 2;
      --v6;
    }
    while ( v6 );
  }
  v8 = (_QWORD **)(16LL * (v5 % *(_DWORD *)(a1 + 720)) + a1 + 728);
  v9 = v8 + 1;
  RtlpStdLockAcquire(v8 + 1);
  v10 = *(_WORD *)(a2 + 8);
  if ( (v10 & 0x7FF) != 0x7FF )
  {
    v11 = v10 ^ (v10 ^ (v10 - 1)) & 0x7FF;
    *(_WORD *)(a2 + 8) = v11;
    if ( (v11 & 0x7FF) == 0 )
    {
      v12 = *v8;
      if ( *v8 )
      {
        while ( v12 != (_QWORD *)a2 )
        {
          v8 = (_QWORD **)v12;
          v12 = (_QWORD *)*v12;
          if ( !v12 )
            goto LABEL_9;
        }
        *v8 = *(_QWORD **)a2;
      }
      else
      {
LABEL_9:
        __debugbreak();
      }
      v4 = 1;
    }
  }
  result = RtlpStdLockRelease(v9);
  if ( v4 )
  {
    result = RtlpInterlockedPushEntrySList(
               (__int128 *)(a1 + 16 * (((unsigned __int64)*(unsigned __int16 *)(a2 + 8) >> 11) + 13)),
               (_QWORD *)(a2 + 16));
    _InterlockedAdd((volatile signed __int32 *)(a1 + 196), 1u);
  }
  return result;
}
