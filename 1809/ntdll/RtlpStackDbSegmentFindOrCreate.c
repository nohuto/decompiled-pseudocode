/*
 * XREFs of RtlpStackDbSegmentFindOrCreate @ 0x1801163BC
 * Callers:
 *     RtlpStackDbEntryCreate @ 0x180116164 (RtlpStackDbEntryCreate.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     RtlpStackDbRefCountIncrement @ 0x180116320 (RtlpStackDbRefCountIncrement.c)
 *     RtlpStackDbSegmentComparitor @ 0x180116384 (RtlpStackDbSegmentComparitor.c)
 */

__int64 __fastcall RtlpStackDbSegmentFindOrCreate(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r10
  unsigned __int8 *v4; // r8
  __int64 v5; // r9
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  __int64 v16; // rbx
  __int64 v17; // r10
  __int64 v18; // r8
  __int64 v19; // rax
  _QWORD *v20; // r14
  unsigned __int64 v21; // r8
  unsigned int v22; // eax
  void (__fastcall *v23)(__int64, __int64, __int64); // rdi
  __int64 v24; // r13
  __int64 v25; // rbx
  char *v26; // r9
  char v27; // cl
  unsigned __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r10
  __int64 v31; // r12
  _QWORD *v32; // r11
  unsigned __int64 v33; // rcx
  __int64 v34; // rcx
  unsigned __int64 v35; // r8
  __int64 v36; // rcx
  unsigned __int64 v37; // rdx

  v2 = *a2;
  v4 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
  v5 = 8 * v2;
  v7 = 314159LL;
  if ( (unsigned __int64)(8 * v2) >= 8 )
  {
    v5 -= 8LL * (unsigned int)v2;
    do
    {
      v8 = v4[6] + 37 * (v4[5] + 37 * (v4[4] + 37 * (v4[3] + 37 * (v4[2] + 37 * (v4[1] + 37 * (*v4 + 37 * v7))))));
      v9 = v4[7];
      v4 += 8;
      v7 = v9 + 37 * v8;
      --v2;
    }
    while ( v2 );
  }
  if ( v5 < 1 || v5 > 7 )
    goto LABEL_20;
  v10 = v5 - 1;
  if ( !v10 )
    goto LABEL_19;
  v11 = v10 - 1;
  if ( !v11 )
  {
LABEL_18:
    v7 = *v4++ + 37 * v7;
LABEL_19:
    v7 = *v4 + 37 * v7;
    goto LABEL_20;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
LABEL_17:
    v7 = *v4++ + 37 * v7;
    goto LABEL_18;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
LABEL_16:
    v7 = *v4++ + 37 * v7;
    goto LABEL_17;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
LABEL_15:
    v7 = *v4++ + 37 * v7;
    goto LABEL_16;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
LABEL_14:
    v7 = *v4++ + 37 * v7;
    goto LABEL_15;
  }
  if ( v15 == 1 )
  {
    v7 = *v4++ + 37 * v7;
    goto LABEL_14;
  }
LABEL_20:
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 40));
  v16 = 0LL;
  while ( 1 )
  {
    v17 = -1LL << (*(_DWORD *)(a1 + 4) & 0x1F);
    v18 = v17 & v7;
    if ( v16 )
      goto LABEL_24;
    if ( *(_DWORD *)(a1 + 4) < 0x20u )
      break;
    v16 = *(_QWORD *)(a1 + 8)
        + 8
        * ((((v17 & (unsigned __int64)v7) >> 56)
          + 37
          * ((unsigned __int8)((v17 & (unsigned __int64)v7) >> 48)
           + 37
           * ((unsigned __int8)((unsigned __int16)((v17 & (unsigned __int64)v7) >> 32) >> 8)
            + 37
            * ((unsigned __int8)((v17 & (unsigned __int64)v7) >> 32)
             + 37
             * ((((unsigned int)v17 & (unsigned int)v7) >> 24)
              + 37
              * ((unsigned __int8)(((unsigned int)v17 & (unsigned int)v7) >> 16)
               + 37 * ((unsigned __int8)((unsigned __int16)(v17 & v7) >> 8) + 37 * ((unsigned __int8)v18 + 11623883)))))))) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1));
LABEL_24:
    while ( 1 )
    {
      v16 = *(_QWORD *)v16;
      if ( (v16 & 1) != 0 )
        break;
      if ( v18 == (v17 & *(_QWORD *)(v16 + 8)) )
        goto LABEL_28;
    }
    v16 = 0LL;
LABEL_28:
    if ( !v16 )
      goto LABEL_36;
    if ( RtlpStackDbSegmentComparitor(v16, a2) )
      goto LABEL_32;
  }
  v16 = 0LL;
LABEL_32:
  if ( v16 )
  {
    if ( !(unsigned int)RtlpStackDbRefCountIncrement((volatile signed __int32 *)(v16 + 16)) )
      v16 = 0LL;
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 40));
    return v16;
  }
LABEL_36:
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 40));
  v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 48))(8 * *a2 + 24, *(_QWORD *)(a1 + 64));
  v20 = (_QWORD *)v19;
  if ( !v19 )
    return 0LL;
  *(_QWORD *)v19 = 0LL;
  *(_QWORD *)(v19 + 8) = 0LL;
  *(_QWORD *)(v19 + 16) = 0LL;
  *(_DWORD *)(v19 + 16) &= 0xFF000001;
  *(_DWORD *)(v19 + 16) |= 1u;
  *(_BYTE *)(v19 + 19) = *(_BYTE *)a2;
  *(_QWORD *)(v19 + 8) = v7;
  memmove((void *)(v19 + 24), *((const void **)a2 + 1), 8LL * *a2);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  v16 = 0LL;
  while ( 1 )
  {
    v21 = v7 & (-1LL << (*(_BYTE *)(a1 + 4) & 0x1F));
    if ( v16 )
      goto LABEL_42;
    if ( *(_DWORD *)(a1 + 4) < 0x20u )
      break;
    v16 = *(_QWORD *)(a1 + 8)
        + 8
        * ((HIBYTE(v21)
          + 37
          * (BYTE6(v21)
           + 37
           * (BYTE5(v21)
            + 37
            * (BYTE4(v21)
             + 37 * (BYTE3(v21) + 37 * (BYTE2(v21) + 37 * (BYTE1(v21) + 37 * ((unsigned __int8)v21 + 11623883)))))))) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1));
LABEL_42:
    while ( 1 )
    {
      v16 = *(_QWORD *)v16;
      if ( (v16 & 1) != 0 )
        break;
      if ( v21 == ((-1LL << (*(_BYTE *)(a1 + 4) & 0x1F)) & *(_QWORD *)(v16 + 8)) )
        goto LABEL_46;
    }
    v16 = 0LL;
LABEL_46:
    if ( !v16 )
      goto LABEL_53;
    if ( RtlpStackDbSegmentComparitor(v16, a2) )
      goto LABEL_50;
  }
  v16 = 0LL;
LABEL_50:
  if ( v16 )
  {
    if ( (unsigned int)RtlpStackDbRefCountIncrement((volatile signed __int32 *)(v16 + 16)) )
      goto LABEL_76;
    goto LABEL_52;
  }
LABEL_53:
  v22 = *(_DWORD *)(a1 + 4);
  v23 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 56);
  v24 = *(_QWORD *)(a1 + 64);
  v25 = 2 * (v22 >> 5);
  if ( *(_DWORD *)a1 >= (unsigned int)v25 )
  {
    if ( (unsigned int)v25 < 4 )
      v25 = 4LL;
    v26 = (char *)(*(__int64 (__fastcall **)(__int64, __int64))(a1 + 48))(8LL * (unsigned int)v25, v24);
    if ( v26 )
    {
      if ( (((_DWORD)v25 - 1) & (unsigned int)v25) != 0 )
      {
        v27 = -1;
        do
        {
          ++v27;
          LODWORD(v25) = (unsigned int)v25 >> 1;
        }
        while ( (_DWORD)v25 );
        v25 = (unsigned int)(1 << v27);
      }
      if ( (unsigned int)v25 > 0x4000000 )
        v25 = 0x4000000LL;
      v28 = (unsigned int)v25;
      if ( v26 > &v26[8 * v25] )
        v28 = 0LL;
      if ( v28 )
        memset64(v26, a1 | 1, v28);
      v29 = 0LL;
      v30 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
      if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v31 = *(_QWORD *)(a1 + 8);
          while ( 1 )
          {
            v32 = *(_QWORD **)(v31 + 8LL * (unsigned int)v29);
            if ( ((unsigned __int8)v32 & 1) != 0 )
              break;
            *(_QWORD *)(v31 + 8LL * (unsigned int)v29) = *v32;
            v33 = ((((unsigned __int64)v30 & v32[1]) >> 56)
                 + 37
                 * ((unsigned __int8)(((unsigned __int64)v30 & v32[1]) >> 48)
                  + 37
                  * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v30 & v32[1]) >> 32) >> 8)
                   + 37
                   * ((unsigned __int8)(((unsigned __int64)v30 & v32[1]) >> 32)
                    + 37
                    * ((((unsigned int)v30 & (_DWORD)v32[1]) >> 24)
                     + 37
                     * ((unsigned __int8)(((unsigned int)v30 & (_DWORD)v32[1]) >> 16)
                      + 37
                      * (37 * ((unsigned __int8)(v30 & v32[1]) + 11623883)
                       + (unsigned __int8)((unsigned __int16)(v30 & v32[1]) >> 8)))))))) & (unsigned int)(v25 - 1);
            *v32 = *(_QWORD *)&v26[8 * v33];
            *(_QWORD *)&v26[8 * v33] = v32;
          }
          v29 = (unsigned int)(v29 + 1);
        }
        while ( (unsigned int)v29 < *(_DWORD *)(a1 + 4) >> 5 );
      }
      v34 = *(_QWORD *)(a1 + 8);
      v22 = (32 * v25) | *(_DWORD *)(a1 + 4) & 0x1F;
      *(_QWORD *)(a1 + 8) = v26;
      *(_DWORD *)(a1 + 4) = v22;
      if ( v34 )
      {
        v23(v34, v24, v29);
        v22 = *(_DWORD *)(a1 + 4);
      }
    }
    else
    {
      v22 = *(_DWORD *)(a1 + 4);
      if ( v22 < 0x20 )
      {
LABEL_52:
        v16 = 0LL;
        goto LABEL_76;
      }
    }
  }
  v16 = (__int64)v20;
  v35 = v20[1] & (-1LL << (v22 & 0x1F));
  v36 = *(_QWORD *)(a1 + 8);
  v37 = (HIBYTE(v35)
       + 37
       * (BYTE6(v35)
        + 37
        * (BYTE5(v35)
         + 37
         * (BYTE4(v35)
          + 37
          * ((((_DWORD)v20[1] & (unsigned int)(-1 << (v22 & 0x1F))) >> 24)
           + 37
           * ((unsigned __int8)(((_DWORD)v20[1] & (unsigned int)(-1 << (v22 & 0x1F))) >> 16)
            + 37
            * ((unsigned __int8)((unsigned __int16)(v20[1] & (-1 << (v22 & 0x1F))) >> 8)
             + 37 * ((unsigned __int8)v35 + 11623883)))))))) & ((v22 >> 5) - 1);
  *v20 = *(_QWORD *)(v36 + 8 * v37);
  *(_QWORD *)(v36 + 8 * v37) = v20;
  v20 = 0LL;
  ++*(_DWORD *)a1;
LABEL_76:
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  if ( v20 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(a1 + 56))(v20, *(_QWORD *)(a1 + 64));
  return v16;
}
