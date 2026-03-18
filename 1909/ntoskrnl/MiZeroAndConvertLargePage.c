/*
 * XREFs of MiZeroAndConvertLargePage @ 0x140097F8C
 * Callers:
 *     MiGetLargePage @ 0x140096E20 (MiGetLargePage.c)
 *     MiZeroInParallelWorker @ 0x1400F8EC0 (MiZeroInParallelWorker.c)
 *     MiAllocateLargeZeroPages @ 0x140898C74 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiChangePageAttributeBatch @ 0x140098620 (MiChangePageAttributeBatch.c)
 *     MiZeroLargePage @ 0x140129B2C (MiZeroLargePage.c)
 */

__int64 __fastcall MiZeroAndConvertLargePage(__int64 a1, unsigned int a2, int a3, char a4)
{
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v7; // rbp
  BOOL v8; // r8d
  unsigned __int64 v9; // r9
  __int64 v10; // rsi
  __int64 i; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v5 = a3;
  v7 = a1;
  v8 = 1;
  if ( (a4 & 1) == 0 )
  {
    if ( (a4 & 2) == 0 || (result = *(unsigned int *)(a1 + 16), (result & 0x3E0) == 0) )
      v8 = 0;
  }
  v9 = 0x140000000uLL;
  v10 = 0LL;
  if ( (_DWORD)v5 != 1 )
  {
    for ( i = MiLargePageSizes[a2]; i; --i )
    {
      *(_QWORD *)(a1 + 16) = v10;
      v10 = a1;
      a1 += 48LL;
    }
  }
  if ( v8 )
  {
    if ( (_DWORD)v5 != 1
      && dword_140465858[4 * ((unsigned __int64)*(unsigned __int8 *)(v7 + 34) >> 6) + v5] == (_DWORD)v5 )
    {
      MiChangePageAttributeBatch(v10, (unsigned int)v5, ZeroPte, 0x140000000uLL);
      v10 = 0LL;
    }
    result = MiZeroLargePage(v7, a2, (unsigned int)v5, v9);
  }
  if ( v10 )
    return MiChangePageAttributeBatch(v10, (unsigned int)v5, ZeroPte, v9);
  return result;
}
