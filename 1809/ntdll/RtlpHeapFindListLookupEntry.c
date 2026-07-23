/*
 * XREFs of RtlpHeapFindListLookupEntry @ 0x18001C780
 * Callers:
 *     RtlpInsertFreeBlock @ 0x18001C380 (RtlpInsertFreeBlock.c)
 *     RtlpFindUCREntry @ 0x18001D4F8 (RtlpFindUCREntry.c)
 *     RtlpFindEntry @ 0x18001D898 (RtlpFindEntry.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 */

__int64 *__fastcall RtlpHeapFindListLookupEntry(__int64 a1, __int64 a2, char a3, int a4, __int64 a5)
{
  __int64 *v5; // rsi
  __int64 v6; // r12
  __int64 v11; // rax
  int v12; // r8d
  int v13; // eax
  int v14; // r14d
  int v15; // ecx
  __int64 v16; // rax
  int v17; // r8d
  int v18; // eax
  int v19; // r15d
  __int64 *v20; // rbx
  int v21; // ecx
  __int64 v23; // rax
  __int64 v24; // r8
  unsigned int v25; // edx
  __int64 v26; // r9
  int v27; // ecx
  __int64 v28; // r8
  int v29; // [rsp+38h] [rbp-50h]
  int v30; // [rsp+48h] [rbp-40h]
  int v31; // [rsp+58h] [rbp-30h]

  v5 = *(__int64 **)(a2 + 32);
  v6 = (unsigned int)(a4 - *(_DWORD *)(a2 + 24));
  v11 = v5[1];
  if ( v5 == (__int64 *)v11 )
    return *(__int64 **)(a2 + 32);
  if ( a3 )
  {
    v12 = v11 - 16;
    v13 = *(_DWORD *)(v11 - 8);
    LOWORD(v29) = v13;
    if ( *(_DWORD *)(a1 + 124) )
    {
      v29 = v13 ^ *(_DWORD *)(a1 + 136);
      if ( HIBYTE(v29) != ((unsigned __int8)v29 ^ (unsigned __int8)(BYTE1(v29) ^ BYTE2(v29))) )
        RtlpLogHeapFailure(3, a1, v12, 0, 0LL, 0LL);
    }
    v14 = a5;
    v15 = a5 - (unsigned __int16)v29;
  }
  else
  {
    v14 = a5;
    v15 = a5 - *(_DWORD *)(v11 + 40);
  }
  if ( v15 > 0 )
    return v5;
  v16 = *v5;
  if ( a3 )
  {
    v17 = v16 - 16;
    v18 = *(_DWORD *)(v16 - 8);
    LOWORD(v30) = v18;
    if ( *(_DWORD *)(a1 + 124) )
    {
      v30 = v18 ^ *(_DWORD *)(a1 + 136);
      if ( HIBYTE(v30) != ((unsigned __int8)v30 ^ (unsigned __int8)(BYTE1(v30) ^ BYTE2(v30))) )
        RtlpLogHeapFailure(3, a1, v17, 0, 0LL, 0LL);
    }
    v19 = v14 - (unsigned __int16)v30;
  }
  else
  {
    v19 = v14 - *(_DWORD *)(v16 + 40);
  }
  if ( v19 <= 0 )
    return (__int64 *)*v5;
  if ( *(_QWORD *)a2 || a4 != *(_DWORD *)(a2 + 8) - 1 )
  {
    v23 = *(_QWORD *)(a2 + 40);
    v24 = (unsigned int)v6 >> 5;
    v25 = *(_DWORD *)(v23 + 4 * v24) & (-1 << (v6 & 0x1F));
    v26 = v23 + 4 * v24;
    if ( v25 )
    {
LABEL_33:
      if ( (_WORD)v25 )
      {
        if ( (_BYTE)v25 )
          v27 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v25];
        else
          v27 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v25)] + 8;
      }
      else if ( (v25 & 0xFF0000) != 0 )
      {
        v27 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v25)] + 16;
      }
      else
      {
        v27 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int64)v25 >> 24] + 24;
      }
      v28 = (unsigned int)(v27 + 32 * v24);
      if ( *(_DWORD *)(a2 + 12) )
        v28 = (unsigned int)(2 * v28);
      return *(__int64 **)(*(_QWORD *)(a2 + 48) + 8 * v28);
    }
    while ( (unsigned int)v24 <= ((unsigned int)(*(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 24)) >> 5) - 1 )
    {
      v25 = *(_DWORD *)(v26 + 4);
      v26 += 4LL;
      LODWORD(v24) = v24 + 1;
      if ( v25 )
        goto LABEL_33;
    }
    return 0LL;
  }
  if ( *(_DWORD *)(a2 + 12) )
    v6 = (unsigned int)(2 * v6);
  v20 = *(__int64 **)(*(_QWORD *)(a2 + 48) + 8 * v6);
  if ( v5 == v20 )
    return 0LL;
  while ( 1 )
  {
    if ( a3 )
    {
      v31 = *((_DWORD *)v20 - 2);
      if ( *(_DWORD *)(a1 + 124) )
      {
        v31 = *((_DWORD *)v20 - 2) ^ *(_DWORD *)(a1 + 136);
        if ( HIBYTE(v31) != ((unsigned __int8)v31 ^ (unsigned __int8)(BYTE1(v31) ^ BYTE2(v31))) )
          RtlpLogHeapFailure(3, a1, (_DWORD)v20 - 16, 0, 0LL, 0LL);
      }
      v21 = v14 - (unsigned __int16)v31;
    }
    else
    {
      v21 = v14 - *((_DWORD *)v20 + 10);
    }
    if ( v21 <= 0 )
      break;
    v20 = (__int64 *)*v20;
    if ( v5 == v20 )
      return 0LL;
  }
  return v20;
}
