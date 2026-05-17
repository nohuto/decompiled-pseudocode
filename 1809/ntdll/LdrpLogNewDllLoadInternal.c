/*
 * XREFs of LdrpLogNewDllLoadInternal @ 0x1800D1BD4
 * Callers:
 *     LdrpLogNewDllLoad @ 0x180021CA0 (LdrpLogNewDllLoad.c)
 *     LdrLogNewDataDllLoad @ 0x1800785F0 (LdrLogNewDataDllLoad.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

__int64 __fastcall LdrpLogNewDllLoadInternal(__int64 a1, __int64 a2, int a3, unsigned int a4, void *Src)
{
  size_t v6; // rbp
  __int64 result; // rax
  unsigned __int64 v10; // rdi
  __int16 v11; // ax

  v6 = a4;
  result = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, a4 + 54);
  v10 = result;
  if ( result )
  {
    v11 = 5296;
    if ( (unsigned int)(a3 - 5) <= 1 )
      v11 = 5297;
    *(_WORD *)(v10 + 6) = v11;
    *(_DWORD *)(v10 + 48) = a3;
    *(_QWORD *)(v10 + 32) = a1;
    *(_QWORD *)(v10 + 40) = a2;
    memmove((void *)(v10 + 52), Src, v6);
    *(_WORD *)(v10 + 2 * (v6 >> 1) + 52) = 0;
    RtlGetCurrentServiceSessionId();
    NtTraceEvent();
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
  }
  return result;
}
