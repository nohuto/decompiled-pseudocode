/*
 * XREFs of RtlpStackDbSegmentFindOrCreate @ 0x180116420
 * Callers:
 *     RtlpStackDbEntryCreate @ 0x1801161C8 (RtlpStackDbEntryCreate.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     RtlpStackDbRefCountIncrement @ 0x180116384 (RtlpStackDbRefCountIncrement.c)
 *     RtlpStackDbSegmentComparitor @ 0x1801163E8 (RtlpStackDbSegmentComparitor.c)
 */

__int64 __fastcall RtlpStackDbSegmentFindOrCreate(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  unsigned int *v3; // r15
  unsigned __int8 *v4; // r8
  __int64 v5; // r9
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r10
  __int64 v12; // r8
  __int64 v13; // rax
  _QWORD *v14; // r14
  unsigned __int64 v15; // rdx
  unsigned __int64 *v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // r8
  unsigned int v19; // eax
  void (__fastcall *v20)(__int64, __int64, __int64); // rdi
  __int64 v21; // r13
  __int64 v22; // rbx
  char *v23; // r9
  char v24; // cl
  unsigned __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r10
  __int64 v28; // r12
  _QWORD *v29; // r11
  unsigned __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned __int64 v32; // r8
  __int64 v33; // rcx
  unsigned __int64 v34; // rdx

  v2 = *(unsigned int *)a2;
  v3 = (unsigned int *)a2;
  v4 = *(unsigned __int8 **)(a2 + 8);
  v5 = 8 * v2;
  v7 = 314159LL;
  if ( (unsigned __int64)(8 * v2) >= 8 )
  {
    v5 -= 8LL * (unsigned int)v2;
    do
    {
      a2 = v4[5] + 37 * (v4[4] + 37 * (v4[3] + 37 * (v4[2] + 37 * (v4[1] + 37 * (*v4 + 37 * v7)))));
      v8 = v4[6] + 37 * a2;
      v9 = v4[7];
      v4 += 8;
      v7 = v9 + 37 * v8;
      --v2;
    }
    while ( v2 );
  }
  if ( v5 < 1 || v5 > 7 )
    goto LABEL_20;
  v5 = (unsigned int)(v5 - 1);
  if ( !(_DWORD)v5 )
    goto LABEL_19;
  v5 = (unsigned int)(v5 - 1);
  if ( !(_DWORD)v5 )
  {
LABEL_18:
    v7 = *v4++ + 37 * v7;
LABEL_19:
    v7 = *v4 + 37 * v7;
    goto LABEL_20;
  }
  v5 = (unsigned int)(v5 - 1);
  if ( !(_DWORD)v5 )
  {
LABEL_17:
    v7 = *v4++ + 37 * v7;
    goto LABEL_18;
  }
  v5 = (unsigned int)(v5 - 1);
  if ( !(_DWORD)v5 )
  {
LABEL_16:
    v7 = *v4++ + 37 * v7;
    goto LABEL_17;
  }
  v5 = (unsigned int)(v5 - 1);
  if ( !(_DWORD)v5 )
  {
LABEL_15:
    v7 = *v4++ + 37 * v7;
    goto LABEL_16;
  }
  v5 = (unsigned int)(v5 - 1);
  if ( !(_DWORD)v5 )
  {
LABEL_14:
    v7 = *v4++ + 37 * v7;
    goto LABEL_15;
  }
  if ( (_DWORD)v5 == 1 )
  {
    v7 = *v4++ + 37 * v7;
    goto LABEL_14;
  }
LABEL_20:
  RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 40), (char *)a2, (__int64)v4, v5);
  v10 = 0LL;
  while ( 1 )
  {
    v11 = -1LL << (*(_DWORD *)(a1 + 4) & 0x1F);
    v12 = v11 & v7;
    if ( v10 )
      goto LABEL_24;
    if ( *(_DWORD *)(a1 + 4) < 0x20u )
      break;
    v10 = *(_QWORD *)(a1 + 8)
        + 8
        * ((((v11 & (unsigned __int64)v7) >> 56)
          + 37
          * ((unsigned __int8)((v11 & (unsigned __int64)v7) >> 48)
           + 37
           * ((unsigned __int8)((unsigned __int16)((v11 & (unsigned __int64)v7) >> 32) >> 8)
            + 37
            * ((unsigned __int8)((v11 & (unsigned __int64)v7) >> 32)
             + 37
             * ((((unsigned int)v11 & (unsigned int)v7) >> 24)
              + 37
              * ((unsigned __int8)(((unsigned int)v11 & (unsigned int)v7) >> 16)
               + 37 * ((unsigned __int8)((unsigned __int16)(v11 & v7) >> 8) + 37 * ((unsigned __int8)v12 + 11623883)))))))) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1));
LABEL_24:
    while ( 1 )
    {
      v10 = *(_QWORD *)v10;
      if ( (v10 & 1) != 0 )
        break;
      if ( v12 == (v11 & *(_QWORD *)(v10 + 8)) )
        goto LABEL_28;
    }
    v10 = 0LL;
LABEL_28:
    if ( !v10 )
      goto LABEL_36;
    if ( RtlpStackDbSegmentComparitor(v10, v3) )
      goto LABEL_32;
  }
  v10 = 0LL;
LABEL_32:
  if ( v10 )
  {
    if ( !(unsigned int)RtlpStackDbRefCountIncrement((volatile signed __int32 *)(v10 + 16)) )
      v10 = 0LL;
    RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 40));
    return v10;
  }
LABEL_36:
  RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 40));
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 48))(8 * *v3 + 24, *(_QWORD *)(a1 + 64));
  v14 = (_QWORD *)v13;
  if ( !v13 )
    return 0LL;
  *(_QWORD *)v13 = 0LL;
  *(_QWORD *)(v13 + 8) = 0LL;
  *(_QWORD *)(v13 + 16) = 0LL;
  *(_DWORD *)(v13 + 16) &= 0xFF000001;
  *(_DWORD *)(v13 + 16) |= 1u;
  *(_BYTE *)(v13 + 19) = *(_BYTE *)v3;
  *(_QWORD *)(v13 + 8) = v7;
  memmove((void *)(v13 + 24), *((const void **)v3 + 1), 8LL * *v3);
  RtlAcquireSRWLockExclusive(a1 + 40, v15, v16, v17);
  v10 = 0LL;
  while ( 1 )
  {
    v18 = v7 & (-1LL << (*(_BYTE *)(a1 + 4) & 0x1F));
    if ( v10 )
      goto LABEL_42;
    if ( *(_DWORD *)(a1 + 4) < 0x20u )
      break;
    v10 = *(_QWORD *)(a1 + 8)
        + 8
        * ((HIBYTE(v18)
          + 37
          * (BYTE6(v18)
           + 37
           * (BYTE5(v18)
            + 37
            * (BYTE4(v18)
             + 37 * (BYTE3(v18) + 37 * (BYTE2(v18) + 37 * (BYTE1(v18) + 37 * ((unsigned __int8)v18 + 11623883)))))))) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1));
LABEL_42:
    while ( 1 )
    {
      v10 = *(_QWORD *)v10;
      if ( (v10 & 1) != 0 )
        break;
      if ( v18 == ((-1LL << (*(_BYTE *)(a1 + 4) & 0x1F)) & *(_QWORD *)(v10 + 8)) )
        goto LABEL_46;
    }
    v10 = 0LL;
LABEL_46:
    if ( !v10 )
      goto LABEL_53;
    if ( RtlpStackDbSegmentComparitor(v10, v3) )
      goto LABEL_50;
  }
  v10 = 0LL;
LABEL_50:
  if ( v10 )
  {
    if ( (unsigned int)RtlpStackDbRefCountIncrement((volatile signed __int32 *)(v10 + 16)) )
      goto LABEL_76;
    goto LABEL_52;
  }
LABEL_53:
  v19 = *(_DWORD *)(a1 + 4);
  v20 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 56);
  v21 = *(_QWORD *)(a1 + 64);
  v22 = 2 * (v19 >> 5);
  if ( *(_DWORD *)a1 >= (unsigned int)v22 )
  {
    if ( (unsigned int)v22 < 4 )
      v22 = 4LL;
    v23 = (char *)(*(__int64 (__fastcall **)(__int64, __int64))(a1 + 48))(8LL * (unsigned int)v22, v21);
    if ( v23 )
    {
      if ( (((_DWORD)v22 - 1) & (unsigned int)v22) != 0 )
      {
        v24 = -1;
        do
        {
          ++v24;
          LODWORD(v22) = (unsigned int)v22 >> 1;
        }
        while ( (_DWORD)v22 );
        v22 = (unsigned int)(1 << v24);
      }
      if ( (unsigned int)v22 > 0x4000000 )
        v22 = 0x4000000LL;
      v25 = (unsigned int)v22;
      if ( v23 > &v23[8 * v22] )
        v25 = 0LL;
      if ( v25 )
        memset64(v23, a1 | 1, v25);
      v26 = 0LL;
      v27 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
      if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v28 = *(_QWORD *)(a1 + 8);
          while ( 1 )
          {
            v29 = *(_QWORD **)(v28 + 8LL * (unsigned int)v26);
            if ( ((unsigned __int8)v29 & 1) != 0 )
              break;
            *(_QWORD *)(v28 + 8LL * (unsigned int)v26) = *v29;
            v30 = ((((unsigned __int64)v27 & v29[1]) >> 56)
                 + 37
                 * ((unsigned __int8)(((unsigned __int64)v27 & v29[1]) >> 48)
                  + 37
                  * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v27 & v29[1]) >> 32) >> 8)
                   + 37
                   * ((unsigned __int8)(((unsigned __int64)v27 & v29[1]) >> 32)
                    + 37
                    * ((((unsigned int)v27 & (_DWORD)v29[1]) >> 24)
                     + 37
                     * ((unsigned __int8)(((unsigned int)v27 & (_DWORD)v29[1]) >> 16)
                      + 37
                      * (37 * ((unsigned __int8)(v27 & v29[1]) + 11623883)
                       + (unsigned __int8)((unsigned __int16)(v27 & v29[1]) >> 8)))))))) & (unsigned int)(v22 - 1);
            *v29 = *(_QWORD *)&v23[8 * v30];
            *(_QWORD *)&v23[8 * v30] = v29;
          }
          v26 = (unsigned int)(v26 + 1);
        }
        while ( (unsigned int)v26 < *(_DWORD *)(a1 + 4) >> 5 );
      }
      v31 = *(_QWORD *)(a1 + 8);
      v19 = (32 * v22) | *(_DWORD *)(a1 + 4) & 0x1F;
      *(_QWORD *)(a1 + 8) = v23;
      *(_DWORD *)(a1 + 4) = v19;
      if ( v31 )
      {
        v20(v31, v21, v26);
        v19 = *(_DWORD *)(a1 + 4);
      }
    }
    else
    {
      v19 = *(_DWORD *)(a1 + 4);
      if ( v19 < 0x20 )
      {
LABEL_52:
        v10 = 0LL;
        goto LABEL_76;
      }
    }
  }
  v10 = (__int64)v14;
  v32 = v14[1] & (-1LL << (v19 & 0x1F));
  v33 = *(_QWORD *)(a1 + 8);
  v34 = (HIBYTE(v32)
       + 37
       * (BYTE6(v32)
        + 37
        * (BYTE5(v32)
         + 37
         * (BYTE4(v32)
          + 37
          * ((((_DWORD)v14[1] & (unsigned int)(-1 << (v19 & 0x1F))) >> 24)
           + 37
           * ((unsigned __int8)(((_DWORD)v14[1] & (unsigned int)(-1 << (v19 & 0x1F))) >> 16)
            + 37
            * ((unsigned __int8)((unsigned __int16)(v14[1] & (-1 << (v19 & 0x1F))) >> 8)
             + 37 * ((unsigned __int8)v32 + 11623883)))))))) & ((v19 >> 5) - 1);
  *v14 = *(_QWORD *)(v33 + 8 * v34);
  *(_QWORD *)(v33 + 8 * v34) = v14;
  v14 = 0LL;
  ++*(_DWORD *)a1;
LABEL_76:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 40));
  if ( v14 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(a1 + 56))(v14, *(_QWORD *)(a1 + 64));
  return v10;
}
