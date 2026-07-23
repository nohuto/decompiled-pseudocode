/*
 * XREFs of MiClusterVadFull @ 0x1402C6318
 * Callers:
 *     MiPfnsWorthTrying @ 0x14009A6F0 (MiPfnsWorthTrying.c)
 *     MiTrimSharedPage @ 0x1400E97F0 (MiTrimSharedPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiClusterVadFull(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rax
  _QWORD *v5; // rdx
  unsigned int v6; // r9d
  unsigned __int64 v7; // r8

  v2 = a1[1] | 0x8000000000000000uLL;
  if ( a2 )
  {
    v3 = *(_QWORD *)(a2 + 8);
    if ( v2 < v3 || v2 >= v3 - 8LL * (*(_DWORD *)(a2 + 52) & 0x3FFFFFFF) + 8LL * *(unsigned int *)(a2 + 44) )
      return 0LL;
    v4 = (__int64)(v2 - v3) >> 3;
  }
  else
  {
    v4 = (unsigned __int64)*((unsigned int *)a1 + 2) >> 3;
  }
  if ( (((unsigned __int8)((__int64)(a1 + 0xB000000000LL) / 48) ^ (unsigned __int8)v4) & 0xF) == 0 )
  {
    v5 = a1 + 11;
    v6 = 1;
    v7 = v2 + 8;
    while ( (*(v5 - 4) | 0x8000000000000000uLL) == v7 && (*v5 & 0xFFFFFFFFFLL) == (a1[5] & 0xFFFFFFFFFLL) )
    {
      v7 += 8LL;
      ++v6;
      v5 += 6;
      if ( v6 >= 0x10 )
        return 1LL;
    }
  }
  return 0LL;
}
