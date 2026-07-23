/*
 * XREFs of RtlInternTableIntern @ 0x1406A011C
 * Callers:
 *     PopEtStringIntern @ 0x14069FD14 (PopEtStringIntern.c)
 *     PopEtAppIdIntern @ 0x14069FFF0 (PopEtAppIdIntern.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     RtlpInternEntryFind @ 0x1406A04A4 (RtlpInternEntryFind.c)
 *     RtlpInternEntryHash @ 0x1406A05F8 (RtlpInternEntryHash.c)
 *     RtlpInternEntryCreate @ 0x1406A0978 (RtlpInternEntryCreate.c)
 *     RtlpInternHashBucketsAllocate @ 0x140763BF4 (RtlpInternHashBucketsAllocate.c)
 *     RtlpInternHashBucketsFree @ 0x14076414C (RtlpInternHashBucketsFree.c)
 */

__int64 __fastcall RtlInternTableIntern(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rdx
  void (__fastcall *v9)(__int64, __int64); // rax
  int v10; // ecx
  __int64 v12; // rdi
  _QWORD *v13; // r14
  unsigned int v14; // eax
  __int64 v15; // rsi
  unsigned __int64 v16; // r15
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  void (__fastcall *v19)(__int64, _QWORD *, __int64); // rax
  char *v20; // r8
  unsigned __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // r10
  __int64 v24; // r13
  _QWORD *v25; // r11
  unsigned __int64 v26; // rcx
  __int64 v27; // rcx
  char v28; // cl
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // [rsp+50h] [rbp+8h] BYREF

  *(_DWORD *)(a2 + 24) = 0;
  v4 = RtlpInternEntryHash(a2, &v31);
  LOBYTE(v5) = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 16) + 16LL))(a1, v5);
  v6 = v31;
  v7 = RtlpInternEntryFind(a1, a2, v4, v31);
  LOBYTE(v8) = 1;
  v9 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 16) + 24LL);
  if ( v7 )
  {
    v9(a1, v8);
    goto LABEL_3;
  }
  v12 = *(_QWORD *)(a1 + 24);
  v9(a1, v8);
  v13 = (_QWORD *)RtlpInternEntryCreate(a1, a2, v4, v6);
  if ( !v13 )
  {
    v7 = 0LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 16) + 16LL))(a1, 0LL);
  if ( v12 == *(_QWORD *)(a1 + 24) || (v7 = RtlpInternEntryFind(a1, a2, v4, v6)) == 0 )
  {
    v14 = *(_DWORD *)(a1 + 4);
    v15 = 2 * (v14 >> 5);
    if ( *(_DWORD *)a1 >= (unsigned int)v15 )
    {
      if ( (unsigned int)v15 < 4 )
        v15 = 4LL;
      v20 = (char *)RtlpInternHashBucketsAllocate(8LL * (unsigned int)v15, a1);
      if ( v20 )
      {
        if ( (((_DWORD)v15 - 1) & (unsigned int)v15) != 0 )
        {
          v28 = -1;
          do
          {
            ++v28;
            LODWORD(v15) = (unsigned int)v15 >> 1;
          }
          while ( (_DWORD)v15 );
          v15 = (unsigned int)(1 << v28);
        }
        if ( (unsigned int)v15 > 0x4000000 )
          v15 = 0x4000000LL;
        v21 = (unsigned int)v15;
        if ( v20 > &v20[8 * v15] )
          v21 = 0LL;
        if ( v21 )
          memset64(v20, a1 | 1, v21);
        v22 = 0LL;
        v23 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
        if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v24 = *(_QWORD *)(a1 + 8);
            while ( 1 )
            {
              v25 = *(_QWORD **)(v24 + 8LL * (unsigned int)v22);
              if ( ((unsigned __int8)v25 & 1) != 0 )
                break;
              *(_QWORD *)(v24 + 8LL * (unsigned int)v22) = *v25;
              v26 = ((((unsigned __int64)v23 & v25[1]) >> 56)
                   + 37
                   * ((unsigned __int8)(((unsigned __int64)v23 & v25[1]) >> 48)
                    + 37
                    * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v23 & v25[1]) >> 32) >> 8)
                     + 37
                     * ((unsigned __int8)(((unsigned __int64)v23 & v25[1]) >> 32)
                      + 37
                      * ((((unsigned int)v23 & (_DWORD)v25[1]) >> 24)
                       + 37
                       * ((unsigned __int8)(((unsigned int)v23 & (_DWORD)v25[1]) >> 16)
                        + 37
                        * ((unsigned __int8)((unsigned __int16)(v23 & v25[1]) >> 8)
                         + 37 * ((unsigned __int8)(v23 & v25[1]) + 11623883)))))))) & (unsigned int)(v15 - 1);
              *v25 = *(_QWORD *)&v20[8 * v26];
              *(_QWORD *)&v20[8 * v26] = v25;
            }
            v22 = (unsigned int)(v22 + 1);
          }
          while ( (unsigned int)v22 < *(_DWORD *)(a1 + 4) >> 5 );
        }
        v27 = *(_QWORD *)(a1 + 8);
        v14 = (32 * v15) | *(_DWORD *)(a1 + 4) & 0x1F;
        *(_QWORD *)(a1 + 8) = v20;
        *(_DWORD *)(a1 + 4) = v14;
        if ( v27 )
        {
          RtlpInternHashBucketsFree(v27, a1, v20, v22);
          v14 = *(_DWORD *)(a1 + 4);
        }
      }
      else
      {
        v14 = *(_DWORD *)(a1 + 4);
        if ( v14 < 0x20 )
        {
          v7 = 0LL;
          goto LABEL_11;
        }
      }
    }
    v16 = v13[1] & (-1LL << (v14 & 0x1F));
    v17 = *(_QWORD *)(a1 + 8);
    v18 = (HIBYTE(v16)
         + 37
         * (BYTE6(v16)
          + 37
          * (BYTE5(v16)
           + 37
           * (BYTE4(v16)
            + 37 * (BYTE3(v16) + 37 * (BYTE2(v16) + 37 * (BYTE1(v16) + 37 * ((unsigned __int8)v16 + 11623883)))))))) & ((v14 >> 5) - 1);
    *v13 = *(_QWORD *)(v17 + 8 * v18);
    *(_QWORD *)(v17 + 8 * v18) = v13;
    ++*(_DWORD *)a1;
    ++*(_QWORD *)(a1 + 24);
    *(_DWORD *)(a2 + 24) |= 2u;
    v19 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)(a1 + 16) + 32LL);
    if ( v19 )
      v19(a1, v13, a2);
    v7 = (__int64)v13;
    v13 = 0LL;
  }
LABEL_11:
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 16) + 24LL))(a1, 0LL);
  if ( v13 )
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(a1 + 16) + 8LL))(a1, v13);
LABEL_3:
  v10 = *(_DWORD *)(a2 + 24);
  if ( (v10 & 3) == 1 )
  {
    v29 = 0LL;
    if ( *(_QWORD *)(a2 + 16) )
    {
      v30 = 0LL;
      do
      {
        v30 += 32LL;
        ++v29;
        *(_QWORD *)(v30 + *(_QWORD *)(a2 + 8) - 24) = 0LL;
      }
      while ( v29 < *(_QWORD *)(a2 + 16) );
      v10 = *(_DWORD *)(a2 + 24);
    }
    *(_DWORD *)(a2 + 24) = v10 & 0xFFFFFFFE;
  }
  return v7;
}
