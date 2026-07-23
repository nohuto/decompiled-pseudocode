/*
 * XREFs of MiAssignTopLevelRanges @ 0x1409D3A80
 * Callers:
 *     MiInitializeSystemVa @ 0x1409D33A8 (MiInitializeSystemVa.c)
 * Callees:
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     qsort @ 0x140196420 (qsort.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiAssignSystemVa @ 0x1409D3CE0 (MiAssignSystemVa.c)
 *     MiAddSubRegionEntropy @ 0x1409D3DC0 (MiAddSubRegionEntropy.c)
 */

__int64 MiAssignTopLevelRanges()
{
  __int64 v0; // r8
  int i; // edx
  __int64 v2; // rcx
  __int64 v3; // rcx
  _DWORD *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdi
  _DWORD *v7; // rbx
  __int64 *v8; // rbx
  __int64 v9; // rsi
  __int64 result; // rax
  int *v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  _QWORD Base[42]; // [rsp+20h] [rbp-E0h] BYREF

  memset(Base, 0, sizeof(Base));
  v0 = 0LL;
  for ( i = 0; i < 4; ++i )
  {
    v2 = 3 * v0;
    v0 = (unsigned int)(v0 + 1);
    LODWORD(Base[v2]) = i;
    Base[v2 + 2] = 0x100000000000LL;
  }
  v3 = 3 * v0;
  LODWORD(Base[v3]) = 4;
  v4 = (_DWORD *)Base + 1;
  Base[v3 + 2] = 0x100000000000LL;
  v5 = 5LL;
  do
  {
    *v4 = ExGenRandom(1);
    v4 += 6;
    --v5;
  }
  while ( v5 );
  qsort(Base, 5uLL, 0x18uLL, MiRegionAssignmentSort);
  LODWORD(Base[15]) = 5;
  Base[17] = 0x38000000000LL;
  LODWORD(Base[18]) = 6;
  Base[20] = 0x28000000000LL;
  v6 = 8LL;
  LODWORD(Base[21]) = 7;
  Base[23] = 0x10000000000LL;
  v7 = (_DWORD *)&Base[18] + 1;
  Base[26] = 0x10000000000LL;
  Base[29] = 0x8000000000LL;
  Base[32] = 0x8000000000LL;
  Base[35] = 0x8000000000LL;
  Base[38] = 0x8000000000LL;
  Base[41] = 0x8000000000LL;
  LODWORD(Base[24]) = 8;
  LODWORD(Base[27]) = 9;
  LODWORD(Base[30]) = 10;
  LODWORD(Base[33]) = 11;
  LODWORD(Base[36]) = 12;
  LODWORD(Base[39]) = 13;
  do
  {
    *v7 = ExGenRandom(1);
    v7 += 6;
    --v6;
  }
  while ( v6 );
  qsort(&Base[21], 7uLL, 0x18uLL, MiRegionAssignmentSort);
  v8 = &Base[1];
  v9 = 14LL;
  do
  {
    if ( *((_DWORD *)v8 - 2) == 13 )
    {
      v14 = 3LL;
      result = (__int64)((8 * (((unsigned __int64)MiAssignTopLevelRanges >> 39) & 0x1FF) - 0x90482413000LL) << 25) >> 16;
      do
      {
        result = result << 25 >> 16;
        --v14;
      }
      while ( v14 );
    }
    else
    {
      result = MiAssignSystemVa((unsigned __int64)(v8[1] + 0x7FFFFFFFFFLL) >> 39);
      if ( !result )
        return result;
    }
    *v8 = result;
    LODWORD(v6) = v6 + 1;
    v8 += 3;
  }
  while ( (unsigned int)v6 < 0xE );
  v11 = (int *)Base;
  do
  {
    v12 = *((_QWORD *)v11 + 1);
    v13 = *v11;
    v11 += 6;
    v13 *= 2LL;
    MiState[v13 + 1538] = v12;
    MiState[v13 + 1539] = *((_QWORD *)v11 - 1);
    --v9;
  }
  while ( v9 );
  MiAddSubRegionEntropy();
  return 1LL;
}
