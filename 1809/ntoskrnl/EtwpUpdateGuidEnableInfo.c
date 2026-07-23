/*
 * XREFs of EtwpUpdateGuidEnableInfo @ 0x140657F14
 * Callers:
 *     EtwpEnableGuid @ 0x1406570F8 (EtwpEnableGuid.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405C5098 (EtwpUnreferenceGuidEntry.c)
 *     EtwpReferenceGuidEntry @ 0x1405C5288 (EtwpReferenceGuidEntry.c)
 *     EtwpUpdateFilterData @ 0x1406581D4 (EtwpUpdateFilterData.c)
 */

__int64 __fastcall EtwpUpdateGuidEnableInfo(_BYTE *P, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  int v5; // eax
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // r10
  char *v14; // rdx
  int v15; // r11d
  __int64 v16; // r8
  int v17; // r9d
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  unsigned __int8 v21; // cl
  unsigned __int8 v22; // al
  __int64 v23; // rax
  __int64 v24; // r10
  char *v25; // rdx
  int v26; // r11d
  __int64 v27; // r8
  int v28; // r9d
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  unsigned __int8 v31; // cl
  unsigned __int8 v32; // al
  _OWORD v33[2]; // [rsp+30h] [rbp-20h] BYREF

  v5 = *(_DWORD *)(a2 + 72);
  if ( v5 == 1 )
  {
    P[91] ^= (P[91] ^ *(_BYTE *)(a2 + 112)) & 1;
    P[91] = P[91] & 1 | (2 * *(_BYTE *)(a2 + 107));
    *((_WORD *)P + 44) = *(_WORD *)(a2 + 104);
    P[90] = *(_BYTE *)(a2 + 106);
    *((_QWORD *)P + 10) = a3;
  }
  else if ( !v5 && *((_WORD *)P + 44) == *(_WORD *)(a2 + 104) )
  {
    P[91] &= ~1u;
  }
  v9 = 0LL;
  v10 = 8LL;
  do
  {
    if ( *(_DWORD *)&P[32 * v9 + 128] && *(_WORD *)&P[32 * (unsigned int)v9 + 134] == *(_WORD *)(a2 + 78) )
    {
      v23 = 32 * (v9 + 4);
      *(_OWORD *)&P[v23] = *(_OWORD *)(a2 + 72);
      *(_OWORD *)&P[v23 + 16] = *(_OWORD *)(a2 + 88);
      memset(v33, 0, sizeof(v33));
      v24 = *(_QWORD *)&v33[1];
      v25 = P + 132;
      v26 = DWORD2(v33[0]);
      v27 = -1LL;
      LOBYTE(v28) = BYTE4(v33[0]);
      *((_QWORD *)&v33[1] + 1) = -1LL;
      do
      {
        if ( *((_DWORD *)v25 - 1) )
        {
          v31 = *v25;
          v32 = v28;
          LODWORD(v33[0]) = 1;
          if ( (unsigned __int8)v28 <= v31 )
            v32 = v31;
          v27 &= *(_QWORD *)(v25 + 20);
          v24 |= *(_QWORD *)(v25 + 12);
          LOBYTE(v28) = v32;
          v26 |= *((_DWORD *)v25 + 1);
          *((_QWORD *)&v33[1] + 1) = v27;
        }
        v25 += 32;
        --v10;
      }
      while ( v10 );
      BYTE4(v33[0]) = v28;
      DWORD2(v33[0]) = v26;
      v29 = v33[0];
      *(_QWORD *)&v33[1] = v24;
      v30 = v33[1];
      *a5 = 1 << v9;
      *((_OWORD *)P + 6) = v29;
      *((_OWORD *)P + 7) = v30;
      LOBYTE(v28) = *(_DWORD *)(a2 + 72) == 0;
      EtwpUpdateFilterData((_DWORD)P, v9, a2, v28, a4);
      if ( !*(_DWORD *)(a2 + 72) )
        EtwpUnreferenceGuidEntry((volatile signed __int64 *)P);
      return 0LL;
    }
    v9 = (unsigned int)(v9 + 1);
  }
  while ( (unsigned int)v9 < 8 );
  if ( *(_DWORD *)(a2 + 72) )
  {
    v11 = 0LL;
    while ( *(_DWORD *)&P[32 * v11 + 128] )
    {
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= 8 )
        return 3221225626LL;
    }
    v12 = 32 * (v11 + 4);
    *(_OWORD *)&P[v12] = *(_OWORD *)(a2 + 72);
    *(_OWORD *)&P[v12 + 16] = *(_OWORD *)(a2 + 88);
    memset(v33, 0, sizeof(v33));
    v13 = *(_QWORD *)&v33[1];
    v14 = P + 132;
    v15 = DWORD2(v33[0]);
    v16 = -1LL;
    LOBYTE(v17) = BYTE4(v33[0]);
    *((_QWORD *)&v33[1] + 1) = -1LL;
    do
    {
      if ( *((_DWORD *)v14 - 1) )
      {
        v21 = *v14;
        v22 = v17;
        LODWORD(v33[0]) = 1;
        if ( (unsigned __int8)v17 <= v21 )
          v22 = v21;
        v16 &= *(_QWORD *)(v14 + 20);
        v13 |= *(_QWORD *)(v14 + 12);
        LOBYTE(v17) = v22;
        v15 |= *((_DWORD *)v14 + 1);
        *((_QWORD *)&v33[1] + 1) = v16;
      }
      v14 += 32;
      --v10;
    }
    while ( v10 );
    BYTE4(v33[0]) = v17;
    DWORD2(v33[0]) = v15;
    v18 = v33[0];
    *(_QWORD *)&v33[1] = v13;
    v19 = v33[1];
    *a5 = 1 << v11;
    *((_OWORD *)P + 6) = v18;
    *((_OWORD *)P + 7) = v19;
    LOBYTE(v17) = *(_DWORD *)(a2 + 72) == 0;
    EtwpUpdateFilterData((_DWORD)P, v11, a2, v17, a4);
    EtwpReferenceGuidEntry((ULONG_PTR)P);
    return 0LL;
  }
  return 3221226021LL;
}
