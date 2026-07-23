/*
 * XREFs of PfSnPrefetchCacheEntryGet @ 0x1406692F8
 * Callers:
 *     PfSnPrefetchCacheEntryUpdate @ 0x1406672E0 (PfSnPrefetchCacheEntryUpdate.c)
 *     PfSnCheckActionsNeeded @ 0x140668FFC (PfSnCheckActionsNeeded.c)
 * Callees:
 *     memcmp @ 0x140196340 (memcmp.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PfSnPrefetchCacheCtxStart @ 0x14075A54C (PfSnPrefetchCacheCtxStart.c)
 */

__int64 __fastcall PfSnPrefetchCacheEntryGet(__int64 a1, _OWORD *a2, __int64 a3, int *a4)
{
  unsigned int v4; // r12d
  int *v6; // r15
  __int64 v7; // r14
  int v8; // esi
  __int64 v9; // rbx
  __int64 v10; // rbp
  int v11; // eax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rdi
  _QWORD *v16; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rbx
  __int64 v20; // rcx
  unsigned __int64 v21; // r9
  _QWORD *i; // rdx
  __int128 v23; // xmm1
  unsigned int v24; // r8d
  unsigned __int64 v25; // r13
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  __int64 v28; // [rsp+60h] [rbp+8h]
  _OWORD *Buf2; // [rsp+68h] [rbp+10h]
  __int64 v30; // [rsp+70h] [rbp+18h]

  v30 = a3;
  Buf2 = a2;
  v4 = *(_DWORD *)(a1 + 4);
  v6 = a4;
  v7 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
  v8 = 1;
  v9 = 0LL;
  v10 = a3 & v7;
  v28 = a3 & v7;
  while ( 1 )
  {
    if ( v9 )
      goto LABEL_5;
    a4 = (int *)(v4 >> 5);
    if ( v4 < 0x20 )
      break;
    a3 = 37
       * (BYTE6(v28)
        + 37
        * (BYTE5(v28)
         + 37
         * (BYTE4(v28)
          + 37 * (BYTE3(v28) + 37 * (BYTE2(v28) + 37 * (BYTE1(v28) + 37 * ((unsigned __int8)v10 + 11623883LL)))))));
    a2 = Buf2;
    v9 = *(_QWORD *)(a1 + 8) + 8LL * (((_DWORD)a3 + HIBYTE(v28)) & (unsigned int)((_DWORD)a4 - 1));
LABEL_5:
    while ( 1 )
    {
      v9 = *(_QWORD *)v9;
      if ( (v9 & 1) != 0 )
        break;
      if ( v10 == (v7 & *(_QWORD *)(v9 + 8)) )
        goto LABEL_7;
    }
    v9 = 0LL;
LABEL_7:
    if ( !v9 )
      break;
    v11 = memcmp((const void *)(v9 + 32), a2, 0x40uLL);
    a2 = Buf2;
    if ( !v11 )
    {
      v12 = (_QWORD *)(v9 + 16);
      v13 = *(_QWORD *)(v9 + 16);
      if ( *(_QWORD *)(v13 + 8) == v9 + 16 )
      {
        v14 = *(_QWORD **)(v9 + 24);
        if ( (_QWORD *)*v14 == v12 )
        {
          *v14 = v13;
          v15 = a1 + 16;
          *(_QWORD *)(v13 + 8) = v14;
          v16 = *(_QWORD **)(v15 + 8);
          if ( *v16 == v15 )
          {
            v8 = 0;
            goto LABEL_13;
          }
        }
      }
LABEL_35:
      __fastfail(3u);
    }
  }
  if ( !v6 )
    return 0LL;
  if ( *(_QWORD *)(a1 + 8) || (int)PfSnPrefetchCacheCtxStart(a1, a2, a3, a4) >= 0 )
  {
    v9 = *(_QWORD *)(a1 + 32);
    if ( v9 )
    {
      *(_QWORD *)(a1 + 32) = *(_QWORD *)v9;
    }
    else
    {
      v18 = (_QWORD *)(a1 + 16);
      v19 = *(_QWORD **)(a1 + 16);
      if ( v19[1] != a1 + 16 )
        goto LABEL_35;
      v20 = *v19;
      if ( *(_QWORD **)(*v19 + 8LL) != v19 )
        goto LABEL_35;
      *v18 = v20;
      v9 = (__int64)(v19 - 2);
      *(_QWORD *)(v20 + 8) = v18;
      v21 = *(_QWORD *)(v9 + 8) & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
      for ( i = (_QWORD *)(*(_QWORD *)(a1 + 8)
                         + 8
                         * ((HIBYTE(v21)
                           + 37
                           * (BYTE6(v21)
                            + 37
                            * (BYTE5(v21)
                             + 37
                             * (BYTE4(v21)
                              + 37
                              * (((*(_DWORD *)(v9 + 8) & (unsigned int)(-1 << (*(_DWORD *)(a1 + 4) & 0x1F))) >> 24)
                               + 37
                               * ((unsigned __int8)((*(_DWORD *)(v9 + 8) & (unsigned int)(-1 << (*(_DWORD *)(a1 + 4) & 0x1F))) >> 16)
                                + 37
                                * (37 * ((unsigned __int8)v21 + 11623883)
                                 + (unsigned __int8)((unsigned __int16)(*(_WORD *)(v9 + 8) & (-1 << (*(_DWORD *)(a1 + 4) & 0x1F))) >> 8)))))))) & ((*(_DWORD *)(a1 + 4) >> 5) - 1)));
            (*i & 1) == 0;
            i = (_QWORD *)*i )
      {
        if ( *i == v9 )
        {
          *i = *(_QWORD *)v9;
          --*(_DWORD *)a1;
          *(_QWORD *)v9 |= 0x8000000000000002uLL;
          break;
        }
      }
    }
    memset((void *)v9, 0, 0x78uLL);
    *(_OWORD *)(v9 + 32) = *Buf2;
    *(_OWORD *)(v9 + 48) = Buf2[1];
    *(_OWORD *)(v9 + 64) = Buf2[2];
    v23 = Buf2[3];
    *(_QWORD *)(v9 + 8) = v30;
    *(_OWORD *)(v9 + 80) = v23;
    v24 = *(_DWORD *)(a1 + 4);
    v25 = v30 & (-1LL << (v24 & 0x1F));
    v26 = *(_QWORD *)(a1 + 8);
    v27 = (HIBYTE(v25)
         + 37
         * (BYTE6(v25)
          + 37
          * (BYTE5(v25)
           + 37
           * (BYTE4(v25)
            + 37 * (BYTE3(v25) + 37 * (BYTE2(v25) + 37 * (BYTE1(v25) + 37 * ((unsigned __int8)v25 + 11623883)))))))) & ((v24 >> 5) - 1);
    *(_QWORD *)v9 = *(_QWORD *)(v26 + 8 * v27);
    v12 = (_QWORD *)(v9 + 16);
    *(_QWORD *)(v26 + 8 * v27) = v9;
    ++*(_DWORD *)a1;
    v15 = a1 + 16;
    v16 = *(_QWORD **)(v15 + 8);
    if ( *v16 != v15 )
      goto LABEL_35;
LABEL_13:
    *v12 = v15;
    v12[1] = v16;
    *v16 = v12;
    *(_QWORD *)(v15 + 8) = v12;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v6 )
    *v6 = v8;
  return v9;
}
