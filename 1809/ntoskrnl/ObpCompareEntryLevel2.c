/*
 * XREFs of ObpCompareEntryLevel2 @ 0x1406BEF70
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareMemory @ 0x1401C5D30 (RtlCompareMemory.c)
 */

__int64 __fastcall ObpCompareEntryLevel2(unsigned int *Source1, __int64 a2)
{
  _QWORD *v4; // rdx
  SIZE_T v5; // rcx

  v4 = *(_QWORD **)(a2 + 16);
  v5 = Source1[1];
  if ( __PAIR64__(v5, *Source1) == *v4 && RtlCompareMemory(Source1, v4, v5) == Source1[1] )
    ++*(_DWORD *)(a2 + 28);
  return 1LL;
}
