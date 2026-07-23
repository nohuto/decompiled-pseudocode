/*
 * XREFs of MiZeroAndConvertLargePage @ 0x140118D38
 * Callers:
 *     MiGet64KPage @ 0x14002B8B0 (MiGet64KPage.c)
 *     MiZeroInParallelWorker @ 0x14013C7C0 (MiZeroInParallelWorker.c)
 *     MiAllocateLargeZeroPages @ 0x14085DB40 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiChangePageAttributeBatch @ 0x1400823E0 (MiChangePageAttributeBatch.c)
 *     MiZeroLargePage @ 0x140118DEC (MiZeroLargePage.c)
 */

void __fastcall MiZeroAndConvertLargePage(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v7; // r8
  __int64 i; // rcx
  __int64 v9; // r9

  v3 = 0LL;
  v4 = a3;
  if ( a3 != 1 )
  {
    v7 = a1;
    for ( i = MiLargePageSizes[a2]; i; --i )
    {
      *(_QWORD *)(v7 + 16) = v3;
      v3 = v7;
      v7 += 48LL;
    }
    if ( dword_14043B1D8[4 * ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) >> 6) + v4] == (_DWORD)v4 )
    {
      MiChangePageAttributeBatch(v3, v4, ZeroPte, 0x140000000LL);
      v3 = 0LL;
    }
  }
  MiZeroLargePage(a1, a2, (unsigned int)v4);
  if ( v3 )
    MiChangePageAttributeBatch(v3, v4, ZeroPte, v9);
}
