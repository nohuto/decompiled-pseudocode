/*
 * XREFs of SmcProcessStatsRequest @ 0x1408AD474
 * Callers:
 *     SmQueryStoreInformation @ 0x1406D0FDC (SmQueryStoreInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SmcGetCacheStats @ 0x1408B01E0 (SmcGetCacheStats.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmcProcessStatsRequest(__int64 a1, unsigned __int64 a2, int a3, _DWORD *a4, char a5)
{
  int CacheStats; // ecx
  __int64 v10; // rcx
  _OWORD *v11; // rax
  _OWORD *v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  _OWORD *v15; // rax
  _BYTE v17[1136]; // [rsp+20h] [rbp-4A8h] BYREF

  memset(v17, 0, 0x468uLL);
  if ( a3 == 1128 )
  {
    if ( a5 )
    {
      if ( (a2 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = a2;
      if ( a2 >= 0x7FFFFFFF0000LL )
        v10 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v10 = *(_BYTE *)v10;
      *(_BYTE *)(v10 + 1127) = *(_BYTE *)(v10 + 1127);
    }
    v11 = (_OWORD *)a2;
    v12 = v17;
    v13 = 8LL;
    v14 = 8LL;
    do
    {
      *v12 = *v11;
      v12[1] = v11[1];
      v12[2] = v11[2];
      v12[3] = v11[3];
      v12[4] = v11[4];
      v12[5] = v11[5];
      v12[6] = v11[6];
      v12 += 8;
      *(v12 - 1) = v11[7];
      v11 += 8;
      --v14;
    }
    while ( v14 );
    *v12 = *v11;
    v12[1] = v11[1];
    v12[2] = v11[2];
    v12[3] = v11[3];
    v12[4] = v11[4];
    v12[5] = v11[5];
    *((_QWORD *)v12 + 12) = *((_QWORD *)v11 + 12);
    if ( v17[0] == 3 )
    {
      CacheStats = SmcGetCacheStats(a1, v17);
      if ( CacheStats >= 0 )
      {
        v15 = v17;
        do
        {
          *(_OWORD *)a2 = *v15;
          *(_OWORD *)(a2 + 16) = v15[1];
          *(_OWORD *)(a2 + 32) = v15[2];
          *(_OWORD *)(a2 + 48) = v15[3];
          *(_OWORD *)(a2 + 64) = v15[4];
          *(_OWORD *)(a2 + 80) = v15[5];
          *(_OWORD *)(a2 + 96) = v15[6];
          a2 += 128LL;
          *(_OWORD *)(a2 - 16) = v15[7];
          v15 += 8;
          --v13;
        }
        while ( v13 );
        *(_OWORD *)a2 = *v15;
        *(_OWORD *)(a2 + 16) = v15[1];
        *(_OWORD *)(a2 + 32) = v15[2];
        *(_OWORD *)(a2 + 48) = v15[3];
        *(_OWORD *)(a2 + 64) = v15[4];
        *(_OWORD *)(a2 + 80) = v15[5];
        *(_QWORD *)(a2 + 96) = *((_QWORD *)v15 + 12);
        *a4 = 1128;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741306;
  }
  return (unsigned int)CacheStats;
}
