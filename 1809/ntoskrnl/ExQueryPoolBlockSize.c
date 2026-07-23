/*
 * XREFs of ExQueryPoolBlockSize @ 0x140193AF0
 * Callers:
 *     sub_140990E9C @ 0x140990E9C (sub_140990E9C.c)
 * Callees:
 *     ExIsSpecialPoolAddress @ 0x14000E140 (ExIsSpecialPoolAddress.c)
 *     ExpGetBilledProcess @ 0x14011F468 (ExpGetBilledProcess.c)
 */

SIZE_T __stdcall ExQueryPoolBlockSize(PVOID PoolBlock, PBOOLEAN QuotaCharged)
{
  SIZE_T result; // rax
  _DWORD *v5; // rdx
  char *v6; // rcx
  __int64 v7; // rbx
  bool v8; // zf

  if ( (unsigned int)ExIsSpecialPoolAddress((ULONG_PTR)PoolBlock) )
  {
    *QuotaCharged = 0;
    v5 = (_DWORD *)((unsigned __int64)PoolBlock & 0xFFFFFFFFFFFFF000uLL);
    if ( ((unsigned __int16)PoolBlock & 0xFFF) == 0 )
      v5 = (_DWORD *)(((unsigned __int64)PoolBlock & 0xFFFFFFFFFFFFF000uLL) + 4080);
    return *v5 & 0xFFFLL;
  }
  else if ( ((unsigned __int16)PoolBlock & 0xFFF) != 0 )
  {
    v6 = (char *)PoolBlock - 16;
    v7 = 16LL * (unsigned __int8)*((_WORD *)PoolBlock - 7);
    v8 = ExpGetBilledProcess((__int64)v6) == 0LL;
    result = v7 - 16;
    *QuotaCharged = !v8;
  }
  else
  {
    *QuotaCharged = 0;
    return 4096LL;
  }
  return result;
}
