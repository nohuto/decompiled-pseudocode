/*
 * XREFs of sub_1801155A4 @ 0x1801155A4
 * Callers:
 *     sub_18011534C @ 0x18011534C (sub_18011534C.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     sub_180115508 @ 0x180115508 (sub_180115508.c)
 *     sub_18011556C @ 0x18011556C (sub_18011556C.c)
 */

__int64 __fastcall sub_1801155A4(__int64 a1, unsigned int *a2)
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
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r14
  __int64 v20; // r8
  unsigned int v21; // eax
  void (__fastcall *v22)(_QWORD, _QWORD); // r15
  __int64 v23; // r13
  __int64 v24; // rbx
  char *v25; // rax
  char *v26; // r8
  char v27; // cl
  unsigned __int64 v28; // rcx
  unsigned int v29; // edi
  __int64 v30; // r10
  __int64 v31; // r15
  _QWORD *v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v38; // [rsp+60h] [rbp+40h]
  __int64 v39; // [rsp+60h] [rbp+40h]
  __int64 v40; // [rsp+60h] [rbp+40h]
  void (__fastcall *v41)(_QWORD, _QWORD); // [rsp+68h] [rbp+48h]

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
  if ( v5 >= 1 && v5 <= 7 )
  {
    v10 = v5 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              v15 = v14 - 1;
              if ( v15 )
              {
                if ( v15 != 1 )
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
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 40));
  v16 = 0LL;
  while ( 1 )
  {
    v17 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
    v18 = v17 & v7;
    if ( v16 )
      goto LABEL_24;
    if ( *(_DWORD *)(a1 + 4) < 0x20u )
      break;
    v38 = v17 & v7;
    v16 = *(_QWORD *)(a1 + 8)
        + 8LL
        * ((37
          * (BYTE6(v38)
           + 37
           * (BYTE5(v38)
            + 37
            * (BYTE4(v38)
             + 37 * (BYTE3(v38) + 37 * (BYTE2(v38) + 37 * (BYTE1(v38) + 37 * ((unsigned __int8)v18 + 11623883)))))))
          + HIBYTE(v38)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1));
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
    if ( sub_18011556C(v16, a2) )
      goto LABEL_32;
  }
  v16 = 0LL;
LABEL_32:
  if ( v16 )
  {
    if ( !(unsigned int)sub_180115508((volatile signed __int32 *)(v16 + 16)) )
      v16 = 0LL;
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 40));
    return v16;
  }
LABEL_36:
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 40));
  v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 48))(8 * *a2 + 24, *(_QWORD *)(a1 + 64));
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
    v20 = v7 & (-1LL << (*(_BYTE *)(a1 + 4) & 0x1F));
    if ( v16 )
      goto LABEL_42;
    if ( *(_DWORD *)(a1 + 4) < 0x20u )
      break;
    v16 = *(_QWORD *)(a1 + 8)
        + 8LL
        * ((37
          * (BYTE6(v20)
           + 37
           * (BYTE5(v20)
            + 37
            * (BYTE4(v20)
             + 37 * (BYTE3(v20) + 37 * (BYTE2(v20) + 37 * (BYTE1(v20) + 37 * ((unsigned __int8)v20 + 11623883)))))))
          + HIBYTE(v20)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1));
LABEL_42:
    while ( 1 )
    {
      v16 = *(_QWORD *)v16;
      if ( (v16 & 1) != 0 )
        break;
      if ( v20 == ((-1LL << (*(_BYTE *)(a1 + 4) & 0x1F)) & *(_QWORD *)(v16 + 8)) )
        goto LABEL_46;
    }
    v16 = 0LL;
LABEL_46:
    if ( !v16 )
      goto LABEL_53;
    if ( sub_18011556C(v16, a2) )
      goto LABEL_50;
  }
  v16 = 0LL;
LABEL_50:
  if ( v16 )
  {
    if ( !(unsigned int)sub_180115508((volatile signed __int32 *)(v16 + 16)) )
      v16 = 0LL;
    goto LABEL_76;
  }
LABEL_53:
  v21 = *(_DWORD *)(a1 + 4);
  v22 = *(void (__fastcall **)(_QWORD, _QWORD))(a1 + 56);
  v23 = *(_QWORD *)(a1 + 64);
  v24 = 2 * (v21 >> 5);
  v41 = v22;
  if ( *(_DWORD *)a1 < (unsigned int)v24 )
    goto LABEL_75;
  if ( (unsigned int)v24 < 4 )
    v24 = 4LL;
  v25 = (char *)(*(__int64 (__fastcall **)(__int64, __int64))(a1 + 48))(8LL * (unsigned int)v24, v23);
  v26 = v25;
  if ( v25 )
  {
    if ( (((_DWORD)v24 - 1) & (unsigned int)v24) != 0 )
    {
      v27 = -1;
      do
      {
        ++v27;
        LODWORD(v24) = (unsigned int)v24 >> 1;
      }
      while ( (_DWORD)v24 );
      v24 = (unsigned int)(1 << v27);
    }
    if ( (unsigned int)v24 > 0x4000000 )
      v24 = 0x4000000LL;
    v28 = (unsigned int)v24;
    if ( v25 > &v25[8 * v24] )
      v28 = 0LL;
    if ( v28 )
      memset64(v25, a1 | 1, v28);
    v29 = 0;
    v30 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
    if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v31 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v32 = *(_QWORD **)(v31 + 8LL * v29);
          if ( ((unsigned __int8)v32 & 1) != 0 )
            break;
          *(_QWORD *)(v31 + 8LL * v29) = *v32;
          v39 = v30 & v32[1];
          v33 = (37
               * (BYTE6(v39)
                + 37
                * (BYTE5(v39)
                 + 37
                 * (BYTE4(v39)
                  + 37 * (BYTE3(v39) + 37 * (BYTE2(v39) + 37 * (BYTE1(v39) + 37 * ((unsigned __int8)v39 + 11623883)))))))
               + HIBYTE(v39)) & (unsigned int)(v24 - 1);
          *v32 = *(_QWORD *)&v25[8 * v33];
          *(_QWORD *)&v25[8 * v33] = v32;
        }
        ++v29;
      }
      while ( v29 < *(_DWORD *)(a1 + 4) >> 5 );
      v22 = v41;
    }
    v34 = *(_QWORD *)(a1 + 8);
    v21 = (32 * v24) | *(_DWORD *)(a1 + 4) & 0x1F;
    *(_QWORD *)(a1 + 8) = v26;
    *(_DWORD *)(a1 + 4) = v21;
    if ( v34 )
    {
      v22(v34, v23);
      v21 = *(_DWORD *)(a1 + 4);
    }
    goto LABEL_75;
  }
  v21 = *(_DWORD *)(a1 + 4);
  if ( v21 >= 0x20 )
  {
LABEL_75:
    v16 = v19;
    v40 = *(_QWORD *)(v19 + 8) & (-1LL << (v21 & 0x1F));
    v35 = *(_QWORD *)(a1 + 8);
    v36 = (37
         * (BYTE6(v40)
          + 37
          * (BYTE5(v40)
           + 37
           * (BYTE4(v40)
            + 37 * (BYTE3(v40) + 37 * (BYTE2(v40) + 37 * (BYTE1(v40) + 37 * ((unsigned __int8)v40 + 11623883)))))))
         + HIBYTE(v40)) & ((v21 >> 5) - 1);
    *(_QWORD *)v19 = *(_QWORD *)(v35 + 8 * v36);
    *(_QWORD *)(v35 + 8 * v36) = v19;
    v19 = 0LL;
    ++*(_DWORD *)a1;
    goto LABEL_76;
  }
  v16 = 0LL;
LABEL_76:
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  if ( v19 )
    (*(void (__fastcall **)(__int64, _QWORD))(a1 + 56))(v19, *(_QWORD *)(a1 + 64));
  return v16;
}
