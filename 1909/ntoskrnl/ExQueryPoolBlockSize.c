/*
 * XREFs of ExQueryPoolBlockSize @ 0x14019D610
 * Callers:
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 * Callees:
 *     ExGetHeapFromVA @ 0x14000331C (ExGetHeapFromVA.c)
 *     ExpGetBilledProcess @ 0x14011D098 (ExpGetBilledProcess.c)
 *     ExpHpIsSpecialPoolHeap @ 0x14019D65C (ExpHpIsSpecialPoolHeap.c)
 */

SIZE_T __stdcall ExQueryPoolBlockSize(PVOID PoolBlock, PBOOLEAN QuotaCharged)
{
  __int64 HeapFromVA; // rax
  SIZE_T result; // rax
  _DWORD *v6; // rdx
  char *v7; // rcx
  __int64 v8; // rbx
  bool v9; // zf

  HeapFromVA = ExGetHeapFromVA((ULONG_PTR)PoolBlock);
  if ( (unsigned int)ExpHpIsSpecialPoolHeap(HeapFromVA) )
  {
    *QuotaCharged = 0;
    v6 = (_DWORD *)((unsigned __int64)PoolBlock & 0xFFFFFFFFFFFFF000uLL);
    if ( ((unsigned __int16)PoolBlock & 0xFFF) == 0 )
      v6 = (_DWORD *)(((unsigned __int64)PoolBlock & 0xFFFFFFFFFFFFF000uLL) + 4080);
    return *v6 & 0xFFFLL;
  }
  else if ( ((unsigned __int16)PoolBlock & 0xFFF) != 0 )
  {
    v7 = (char *)PoolBlock - 16;
    v8 = 16LL * (unsigned __int8)*((_WORD *)PoolBlock - 7);
    v9 = ExpGetBilledProcess((__int64)v7) == 0LL;
    result = v8 - 16;
    *QuotaCharged = !v9;
  }
  else
  {
    *QuotaCharged = 0;
    return 4096LL;
  }
  return result;
}
