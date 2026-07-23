/*
 * XREFs of sub_1800CD9D4 @ 0x1800CD9D4
 * Callers:
 *     LdrCreateEnclave @ 0x1800CD360 (LdrCreateEnclave.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlInitializeCriticalSectionEx @ 0x180035C80 (RtlInitializeCriticalSectionEx.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 */

__int64 __fastcall sub_1800CD9D4(__int64 a1, __int64 a2, int a3)
{
  char *Heap; // rax
  __int64 v7; // rbx
  _RTL_CRITICAL_SECTION *v9; // rcx
  _QWORD *v10; // rax
  __int64 *v11; // rax

  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x88uLL);
  v7 = (__int64)Heap;
  if ( !Heap )
    return 3221225626LL;
  *((_QWORD *)Heap + 11) = 0LL;
  v9 = (_RTL_CRITICAL_SECTION *)(Heap + 16);
  *((_QWORD *)Heap + 14) = 0LL;
  *((_QWORD *)Heap + 9) = a1;
  *((_QWORD *)Heap + 10) = a2;
  *((_DWORD *)Heap + 14) = a3;
  v10 = Heap + 96;
  v10[1] = v10;
  *v10 = v10;
  RtlInitializeCriticalSectionEx(v9, 0, 0);
  *(_DWORD *)(v7 + 64) = 0;
  *(_QWORD *)(v7 + 120) = 0LL;
  *(_QWORD *)(v7 + 128) = 0LL;
  *(_DWORD *)(v7 + 60) = 1;
  RtlEnterCriticalSection(&stru_180165AE0);
  v11 = (__int64 *)qword_180165AD8;
  if ( *(__int64 **)qword_180165AD8 != &qword_180165AD0 )
    __fastfail(3u);
  *(_QWORD *)v7 = &qword_180165AD0;
  *(_QWORD *)(v7 + 8) = v11;
  *v11 = v7;
  qword_180165AD8 = v7;
  RtlLeaveCriticalSection(&stru_180165AE0);
  return 0LL;
}
