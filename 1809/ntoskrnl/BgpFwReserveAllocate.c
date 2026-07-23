/*
 * XREFs of BgpFwReserveAllocate @ 0x14016F764
 * Callers:
 *     BgpFwAllocateMemory @ 0x14016F5D8 (BgpFwAllocateMemory.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x1400D9660 (RtlFindClearBitsAndSet.c)
 */

__int64 __fastcall BgpFwReserveAllocate(__int64 a1)
{
  unsigned __int64 v1; // rbx
  ULONG ClearBitsAndSet; // r8d
  int v3; // eax
  __int64 result; // rax

  v1 = ((a1 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 32;
  ClearBitsAndSet = RtlFindClearBitsAndSet(&stru_14043D6E8, v1, dword_14043D6E0);
  v3 = dword_14043D6F8;
  if ( ClearBitsAndSet > dword_14043D6F8 - 16 )
  {
    dword_14043D6E0 = 0;
    ClearBitsAndSet = RtlFindClearBitsAndSet(&stru_14043D6E8, v1, 0);
    v3 = dword_14043D6F8;
  }
  if ( ClearBitsAndSet > v3 - 16 )
    return 0LL;
  dword_14043D6E0 = v1 + ClearBitsAndSet;
  result = ClearBitsAndSet + qword_14043D6D8 + 32;
  *(_QWORD *)(result - 8) = 0LL;
  *(_DWORD *)(result - 24) = 1262700354;
  *(_QWORD *)(result - 16) = v1;
  return result;
}
