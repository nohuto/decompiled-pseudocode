/*
 * XREFs of RtlpStackDbSegmentFindOrCreate @ 0x1801156D4
 * Callers:
 *     RtlpStackDbEntryCreate @ 0x18011547C (RtlpStackDbEntryCreate.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     RtlpStackDbRefCountIncrement @ 0x180115638 (RtlpStackDbRefCountIncrement.c)
 *     RtlpStackDbSegmentComparitor @ 0x18011569C (RtlpStackDbSegmentComparitor.c)
 */

__int64 __fastcall RtlpStackDbSegmentFindOrCreate(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r10
  unsigned int *v3; // r15
  unsigned __int8 *v4; // r8
  signed __int64 v5; // r9
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r14
  __int64 v14; // r8
  unsigned int v15; // eax
  void (__fastcall *v16)(_QWORD, _QWORD); // r15
  __int64 v17; // r13
  __int64 v18; // rbx
  char *v19; // rax
  char *v20; // r8
  char v21; // cl
  unsigned __int64 v22; // rcx
  unsigned int v23; // edi
  __int64 v24; // r10
  __int64 v25; // r15
  _QWORD *v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v32; // [rsp+60h] [rbp+40h]
  __int64 v33; // [rsp+60h] [rbp+40h]
  __int64 v34; // [rsp+60h] [rbp+40h]
  void (__fastcall *v35)(_QWORD, _QWORD); // [rsp+68h] [rbp+48h]

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
  if ( v5 >= 1 && v5 <= 7 )
  {
    v5 = (unsigned int)(v5 - 1);
    if ( (_DWORD)v5 )
    {
      v5 = (unsigned int)(v5 - 1);
      if ( (_DWORD)v5 )
      {
        v5 = (unsigned int)(v5 - 1);
        if ( (_DWORD)v5 )
        {
          v5 = (unsigned int)(v5 - 1);
          if ( (_DWORD)v5 )
          {
            v5 = (unsigned int)(v5 - 1);
            if ( (_DWORD)v5 )
            {
              v5 = (unsigned int)(v5 - 1);
              if ( (_DWORD)v5 )
              {
                if ( (_DWORD)v5 != 1 )
                  goto LABEL_20;
                v7 = *v4++ + 37 * v7;
              }
              v7 = *v4++ + 37 * v7;
            }
            v7 = *v4++ + 37 * v7;
          }
          v7 = *v4++ + 37 * v7;
        }
        v7 = *v4++ + 37 * v7;
      }
      v7 = *v4++ + 37 * v7;
    }
    v7 = *v4 + 37 * v7;
  }
LABEL_20:
  RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 40), a2, (unsigned __int64)v4, v5);
  v10 = 0LL;
  while ( 1 )
  {
    v11 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
    v12 = v11 & v7;
    if ( v10 )
      goto LABEL_24;
    if ( *(_DWORD *)(a1 + 4) < 0x20u )
      break;
    v32 = v11 & v7;
    v10 = *(_QWORD *)(a1 + 8)
        + 8LL
        * ((37
          * (BYTE6(v32)
           + 37
           * (BYTE5(v32)
            + 37
            * (BYTE4(v32)
             + 37 * (BYTE3(v32) + 37 * (BYTE2(v32) + 37 * (BYTE1(v32) + 37 * ((unsigned __int8)v12 + 11623883)))))))
          + HIBYTE(v32)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1));
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
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 40));
  v10 = 0LL;
  while ( 1 )
  {
    v14 = v7 & (-1LL << (*(_BYTE *)(a1 + 4) & 0x1F));
    if ( v10 )
      goto LABEL_42;
    if ( *(_DWORD *)(a1 + 4) < 0x20u )
      break;
    v10 = *(_QWORD *)(a1 + 8)
        + 8LL
        * ((37
          * (BYTE6(v14)
           + 37
           * (BYTE5(v14)
            + 37
            * (BYTE4(v14)
             + 37 * (BYTE3(v14) + 37 * (BYTE2(v14) + 37 * (BYTE1(v14) + 37 * ((unsigned __int8)v14 + 11623883)))))))
          + HIBYTE(v14)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1));
LABEL_42:
    while ( 1 )
    {
      v10 = *(_QWORD *)v10;
      if ( (v10 & 1) != 0 )
        break;
      if ( v14 == ((-1LL << (*(_BYTE *)(a1 + 4) & 0x1F)) & *(_QWORD *)(v10 + 8)) )
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
    if ( !(unsigned int)RtlpStackDbRefCountIncrement((volatile signed __int32 *)(v10 + 16)) )
      v10 = 0LL;
    goto LABEL_76;
  }
LABEL_53:
  v15 = *(_DWORD *)(a1 + 4);
  v16 = *(void (__fastcall **)(_QWORD, _QWORD))(a1 + 56);
  v17 = *(_QWORD *)(a1 + 64);
  v18 = 2 * (v15 >> 5);
  v35 = v16;
  if ( *(_DWORD *)a1 < (unsigned int)v18 )
    goto LABEL_75;
  if ( (unsigned int)v18 < 4 )
    v18 = 4LL;
  v19 = (char *)(*(__int64 (__fastcall **)(__int64, __int64))(a1 + 48))(8LL * (unsigned int)v18, v17);
  v20 = v19;
  if ( v19 )
  {
    if ( (((_DWORD)v18 - 1) & (unsigned int)v18) != 0 )
    {
      v21 = -1;
      do
      {
        ++v21;
        LODWORD(v18) = (unsigned int)v18 >> 1;
      }
      while ( (_DWORD)v18 );
      v18 = (unsigned int)(1 << v21);
    }
    if ( (unsigned int)v18 > 0x4000000 )
      v18 = 0x4000000LL;
    v22 = (unsigned int)v18;
    if ( v19 > &v19[8 * v18] )
      v22 = 0LL;
    if ( v22 )
      memset64(v19, a1 | 1, v22);
    v23 = 0;
    v24 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
    if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v25 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v26 = *(_QWORD **)(v25 + 8LL * v23);
          if ( ((unsigned __int8)v26 & 1) != 0 )
            break;
          *(_QWORD *)(v25 + 8LL * v23) = *v26;
          v33 = v24 & v26[1];
          v27 = (37
               * (BYTE6(v33)
                + 37
                * (BYTE5(v33)
                 + 37
                 * (BYTE4(v33)
                  + 37 * (BYTE3(v33) + 37 * (BYTE2(v33) + 37 * (BYTE1(v33) + 37 * ((unsigned __int8)v33 + 11623883)))))))
               + HIBYTE(v33)) & (unsigned int)(v18 - 1);
          *v26 = *(_QWORD *)&v19[8 * v27];
          *(_QWORD *)&v19[8 * v27] = v26;
        }
        ++v23;
      }
      while ( v23 < *(_DWORD *)(a1 + 4) >> 5 );
      v16 = v35;
    }
    v28 = *(_QWORD *)(a1 + 8);
    v15 = (32 * v18) | *(_DWORD *)(a1 + 4) & 0x1F;
    *(_QWORD *)(a1 + 8) = v20;
    *(_DWORD *)(a1 + 4) = v15;
    if ( v28 )
    {
      v16(v28, v17);
      v15 = *(_DWORD *)(a1 + 4);
    }
    goto LABEL_75;
  }
  v15 = *(_DWORD *)(a1 + 4);
  if ( v15 >= 0x20 )
  {
LABEL_75:
    v10 = v13;
    v34 = *(_QWORD *)(v13 + 8) & (-1LL << (v15 & 0x1F));
    v29 = *(_QWORD *)(a1 + 8);
    v30 = (37
         * (BYTE6(v34)
          + 37
          * (BYTE5(v34)
           + 37
           * (BYTE4(v34)
            + 37 * (BYTE3(v34) + 37 * (BYTE2(v34) + 37 * (BYTE1(v34) + 37 * ((unsigned __int8)v34 + 11623883)))))))
         + HIBYTE(v34)) & ((v15 >> 5) - 1);
    *(_QWORD *)v13 = *(_QWORD *)(v29 + 8 * v30);
    *(_QWORD *)(v29 + 8 * v30) = v13;
    v13 = 0LL;
    ++*(_DWORD *)a1;
    goto LABEL_76;
  }
  v10 = 0LL;
LABEL_76:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 40));
  if ( v13 )
    (*(void (__fastcall **)(__int64, _QWORD))(a1 + 56))(v13, *(_QWORD *)(a1 + 64));
  return v10;
}
