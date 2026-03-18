/*
 * XREFs of MiAssignTopLevelRanges @ 0x1409F06A0
 * Callers:
 *     MiInitializeSystemVa @ 0x1409EFDF8 (MiInitializeSystemVa.c)
 * Callees:
 *     MiHyperSpaceSize @ 0x140075C50 (MiHyperSpaceSize.c)
 *     ExGenRandom @ 0x1400BC4C0 (ExGenRandom.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     qsort @ 0x1401A0AD0 (qsort.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiAssignSystemVa @ 0x1409F0920 (MiAssignSystemVa.c)
 *     MiAddSubRegionEntropy @ 0x1409F0A04 (MiAddSubRegionEntropy.c)
 */

__int64 __fastcall MiAssignTopLevelRanges(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8
  int i; // edx
  __int64 v5; // rcx
  __int64 v6; // rcx
  _DWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rax
  _DWORD *v11; // rbx
  unsigned __int64 *v12; // rbx
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int64 result; // rax
  int *v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  _QWORD Base[36]; // [rsp+20h] [rbp-E0h] BYREF

  memset(Base, 0, sizeof(Base));
  *a2 = 0LL;
  v3 = 0LL;
  for ( i = 0; i < 4; ++i )
  {
    v5 = 3 * v3;
    v3 = (unsigned int)(v3 + 1);
    LODWORD(Base[v5]) = i;
    Base[v5 + 2] = 0x100000000000LL;
  }
  v6 = 3 * v3;
  LODWORD(Base[v6]) = 4;
  v7 = (_DWORD *)Base + 1;
  Base[v6 + 2] = 0x100000000000LL;
  v8 = 5LL;
  do
  {
    *v7 = ExGenRandom(1);
    v7 += 6;
    --v8;
  }
  while ( v8 );
  qsort(Base, 5uLL, 0x18uLL, MiRegionAssignmentSort);
  LODWORD(Base[15]) = 5;
  Base[17] = 0x38000000000LL;
  v9 = 6LL;
  LODWORD(Base[18]) = 6;
  Base[20] = 0x28000000000LL;
  LODWORD(Base[21]) = 7;
  v10 = MiHyperSpaceSize();
  LODWORD(Base[24]) = 8;
  LODWORD(Base[27]) = 9;
  LODWORD(Base[30]) = 10;
  LODWORD(Base[33]) = 11;
  v11 = (_DWORD *)&Base[18] + 1;
  Base[29] = 0x8000000000LL;
  Base[23] = ((v10 + 0x7FFFFFFFFFLL) & 0xFFFFFF8000000000uLL) + 0x8000000000LL;
  Base[26] = 0x10000000000LL;
  Base[32] = 0x8000000000LL;
  Base[35] = 0x8000000000LL;
  do
  {
    *v11 = ExGenRandom(1);
    v11 += 6;
    --v9;
  }
  while ( v9 );
  qsort(&Base[21], 5uLL, 0x18uLL, MiRegionAssignmentSort);
  v12 = &Base[2];
  v13 = 12LL;
  do
  {
    if ( *((_DWORD *)v12 - 4) == 11 )
    {
      v19 = 3LL;
      result = (__int64)((8 * (((unsigned __int64)MiAssignTopLevelRanges >> 39) & 0x1FF) - 0x90482413000LL) << 25) >> 16;
      do
      {
        result = result << 25 >> 16;
        --v19;
      }
      while ( v19 );
    }
    else
    {
      v14 = (*v12 + 0x7FFFFFFFFFLL) & 0xFFFFFF8000000000uLL;
      *v12 = v14;
      result = MiAssignSystemVa(v14 >> 39);
      if ( !result )
        return result;
    }
    *(v12 - 1) = result;
    LODWORD(v9) = v9 + 1;
    v12 += 3;
  }
  while ( (unsigned int)v9 < 0xC );
  v16 = (int *)Base;
  do
  {
    v17 = *((_QWORD *)v16 + 1);
    v18 = *v16;
    v16 += 6;
    v18 *= 2LL;
    MiState[v18 + 1552] = v17;
    MiState[v18 + 1553] = *((_QWORD *)v16 - 1);
    --v13;
  }
  while ( v13 );
  MiAddSubRegionEntropy();
  return 1LL;
}
