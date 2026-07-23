/*
 * XREFs of BgpFwReserveAllocate @ 0x140178E64
 * Callers:
 *     BgpFwAllocateMemory @ 0x140178CE0 (BgpFwAllocateMemory.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x140085350 (RtlFindClearBitsAndSet.c)
 */

__int64 __fastcall BgpFwReserveAllocate(__int64 a1)
{
  unsigned __int64 v1; // rbx
  ULONG ClearBitsAndSet; // r8d
  int v3; // eax
  __int64 result; // rax

  v1 = ((a1 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 32;
  ClearBitsAndSet = RtlFindClearBitsAndSet(&stru_140468140, v1, dword_140468138);
  v3 = dword_140468150;
  if ( ClearBitsAndSet > dword_140468150 - 16 )
  {
    dword_140468138 = 0;
    ClearBitsAndSet = RtlFindClearBitsAndSet(&stru_140468140, v1, 0);
    v3 = dword_140468150;
  }
  if ( ClearBitsAndSet > v3 - 16 )
    return 0LL;
  dword_140468138 = v1 + ClearBitsAndSet;
  result = ClearBitsAndSet + qword_140468130 + 32;
  *(_QWORD *)(result - 8) = 0LL;
  *(_DWORD *)(result - 24) = 1262700354;
  *(_QWORD *)(result - 16) = v1;
  return result;
}
