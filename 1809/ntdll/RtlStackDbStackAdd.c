/*
 * XREFs of RtlStackDbStackAdd @ 0x18011588C
 * Callers:
 *     RtlpHpStackTraceAddStack @ 0x18010449C (RtlpHpStackTraceAddStack.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     RtlpStackDbEntryCleanup @ 0x1801160E0 (RtlpStackDbEntryCleanup.c)
 *     RtlpStackDbEntryCreate @ 0x180116164 (RtlpStackDbEntryCreate.c)
 *     RtlpStackDbRefCountIncrement @ 0x180116320 (RtlpStackDbRefCountIncrement.c)
 *     RtlpStackDbStackComparitor @ 0x180116C04 (RtlpStackDbStackComparitor.c)
 */

__int64 __fastcall RtlStackDbStackAdd(__int64 a1, unsigned __int8 *a2, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned __int8 *v4; // r9
  __int64 v6; // rdi
  __int64 v7; // r10
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  __int64 v17; // r10
  __int64 v18; // r8
  unsigned __int64 v19; // r8
  __int64 v20; // r12
  unsigned __int64 v21; // rsi
  unsigned int v22; // ebx
  void (__fastcall *v23)(_QWORD, _QWORD, _QWORD); // r13
  unsigned int v24; // ecx
  __int64 v25; // rbx
  char *v26; // r9
  char i; // cl
  unsigned __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r10
  __int64 v31; // r13
  _QWORD *v32; // r11
  unsigned __int64 v33; // rcx
  __int64 v34; // rcx
  char v35; // cl
  unsigned int v36; // edi
  unsigned __int64 v37; // r15
  __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  void (__fastcall *v41)(_QWORD, _QWORD, _QWORD); // [rsp+20h] [rbp-58h]
  unsigned int v42; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int8 *v43; // [rsp+38h] [rbp-40h]
  _QWORD *v44; // [rsp+80h] [rbp+8h]

  v3 = 0LL;
  v4 = a2;
  if ( !a1 || !a3 || !a2 )
    return v3;
  v42 = a3;
  v6 = 314159LL;
  v7 = a3;
  v8 = 8LL * a3;
  v43 = a2;
  if ( (unsigned __int64)v8 >= 8 )
  {
    v8 -= 8LL * (unsigned int)v7;
    do
    {
      v9 = v4[6] + 37 * (v4[5] + 37 * (v4[4] + 37 * (v4[3] + 37 * (v4[2] + 37 * (v4[1] + 37 * (*v4 + 37 * v6))))));
      v10 = v4[7];
      v4 += 8;
      v6 = v10 + 37 * v9;
      --v7;
    }
    while ( v7 );
  }
  if ( v8 >= 1 && v8 <= 7 )
  {
    v11 = v8 - 1;
    if ( !v11 )
    {
LABEL_22:
      v6 = *v4 + 37 * v6;
      goto LABEL_23;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
LABEL_21:
      v6 = *v4++ + 37 * v6;
      goto LABEL_22;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
LABEL_20:
      v6 = *v4++ + 37 * v6;
      goto LABEL_21;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
LABEL_19:
      v6 = *v4++ + 37 * v6;
      goto LABEL_20;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
LABEL_18:
      v6 = *v4++ + 37 * v6;
      goto LABEL_19;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
LABEL_17:
      v6 = *v4++ + 37 * v6;
      goto LABEL_18;
    }
    if ( v16 == 1 )
    {
      v6 = *v4++ + 37 * v6;
      goto LABEL_17;
    }
  }
LABEL_23:
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 32));
  while ( 1 )
  {
    v17 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
    v18 = v17 & v6;
    if ( v3 )
      goto LABEL_27;
    if ( *(_DWORD *)(a1 + 20) < 0x20u )
      break;
    v3 = *(_QWORD *)(a1 + 24)
       + 8
       * ((((v17 & (unsigned __int64)v6) >> 56)
         + 37
         * ((unsigned __int8)((v17 & (unsigned __int64)v6) >> 48)
          + 37
          * ((unsigned __int8)((unsigned __int16)((v17 & (unsigned __int64)v6) >> 32) >> 8)
           + 37
           * ((unsigned __int8)((v17 & (unsigned __int64)v6) >> 32)
            + 37
            * ((((unsigned int)v17 & (unsigned int)v6) >> 24)
             + 37
             * ((unsigned __int8)(((unsigned int)v17 & (unsigned int)v6) >> 16)
              + 37 * ((unsigned __int8)((unsigned __int16)(v17 & v6) >> 8) + 37 * ((unsigned __int8)v18 + 11623883)))))))) & (unsigned int)((*(_DWORD *)(a1 + 20) >> 5) - 1));
LABEL_27:
    while ( 1 )
    {
      v3 = *(_QWORD *)v3;
      if ( (v3 & 1) != 0 )
        break;
      if ( v18 == (v17 & *(_QWORD *)(v3 + 8)) )
        goto LABEL_31;
    }
    v3 = 0LL;
LABEL_31:
    if ( !v3 )
      goto LABEL_39;
    if ( (unsigned int)RtlpStackDbStackComparitor(v3, &v42) )
      goto LABEL_35;
  }
  v3 = 0LL;
LABEL_35:
  if ( !v3 )
  {
LABEL_39:
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 32));
    v44 = (_QWORD *)RtlpStackDbEntryCreate(a1, &v42, v6);
    if ( !v44 )
      return 0LL;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
    v3 = 0LL;
    while ( 1 )
    {
      v19 = v6 & (-1LL << (*(_DWORD *)(a1 + 20) & 0x1F));
      if ( v3 )
        goto LABEL_45;
      if ( *(_DWORD *)(a1 + 20) < 0x20u )
        break;
      v3 = *(_QWORD *)(a1 + 24)
         + 8
         * ((HIBYTE(v19)
           + 37
           * (BYTE6(v19)
            + 37
            * (BYTE5(v19)
             + 37
             * (BYTE4(v19)
              + 37 * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v19 + 11623883)))))))) & (unsigned int)((*(_DWORD *)(a1 + 20) >> 5) - 1));
LABEL_45:
      while ( 1 )
      {
        v3 = *(_QWORD *)v3;
        if ( (v3 & 1) != 0 )
          break;
        if ( v19 == ((-1LL << (*(_DWORD *)(a1 + 20) & 0x1F)) & *(_QWORD *)(v3 + 8)) )
          goto LABEL_49;
      }
      v3 = 0LL;
LABEL_49:
      if ( !v3 )
        goto LABEL_55;
      if ( (unsigned int)RtlpStackDbStackComparitor(v3, &v42) )
        goto LABEL_51;
    }
    v3 = 0LL;
LABEL_51:
    if ( v3 )
    {
      if ( (unsigned int)RtlpStackDbRefCountIncrement(v3 + 16) )
      {
LABEL_81:
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
        RtlpStackDbEntryCleanup(a1, v44);
        return v3;
      }
LABEL_80:
      v3 = 0LL;
      goto LABEL_81;
    }
LABEL_55:
    v20 = *(_QWORD *)(a1 + 64);
    v21 = a1 + 16;
    v22 = *(_DWORD *)(a1 + 20);
    v23 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 56);
    v24 = 2 * (v22 >> 5);
    v41 = v23;
    if ( *(_DWORD *)(a1 + 16) >= v24 )
    {
      v25 = v24;
      if ( v24 < 4 )
        v25 = 4LL;
      v26 = (char *)(*(__int64 (__fastcall **)(__int64, __int64))(a1 + 48))(8LL * (unsigned int)v25, v20);
      if ( v26 )
      {
        if ( (((_DWORD)v25 - 1) & (unsigned int)v25) != 0 )
        {
          for ( i = -1; (_DWORD)v25; LODWORD(v25) = (unsigned int)v25 >> 1 )
            ++i;
          v25 = (unsigned int)(1 << i);
        }
        if ( (unsigned int)v25 > 0x4000000 )
          v25 = 0x4000000LL;
        v28 = (unsigned int)v25;
        if ( v26 > &v26[8 * v25] )
          v28 = 0LL;
        if ( v28 )
          memset64(v26, v21 | 1, v28);
        v29 = 0LL;
        v30 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
        if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v31 = *(_QWORD *)(a1 + 24);
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
                        * ((unsigned __int8)((unsigned __int16)(v30 & v32[1]) >> 8)
                         + 37 * ((unsigned __int8)(v30 & v32[1]) + 11623883)))))))) & (unsigned int)(v25 - 1);
              *v32 = *(_QWORD *)&v26[8 * v33];
              *(_QWORD *)&v26[8 * v33] = v32;
            }
            v29 = (unsigned int)(v29 + 1);
          }
          while ( (unsigned int)v29 < *(_DWORD *)(a1 + 20) >> 5 );
          v23 = v41;
        }
        v34 = *(_QWORD *)(a1 + 24);
        v22 = *(_DWORD *)(a1 + 20) & 0x1F | (32 * v25);
        *(_QWORD *)(a1 + 24) = v26;
        *(_DWORD *)(a1 + 20) = v22;
        if ( v34 )
        {
          v23(v34, v20, v29);
          v22 = *(_DWORD *)(a1 + 20);
        }
      }
      else
      {
        v22 = *(_DWORD *)(a1 + 20);
        if ( v22 < 0x20 )
          goto LABEL_80;
      }
    }
    v35 = v22 & 0x1F;
    v36 = v22 >> 5;
    v3 = (__int64)v44;
    v37 = v44[1] & (-1LL << v35);
    v38 = *(_QWORD *)(a1 + 24);
    v39 = (HIBYTE(v37)
         + 37
         * (BYTE6(v37)
          + 37
          * (BYTE5(v37)
           + 37
           * (BYTE4(v37)
            + 37 * (BYTE3(v37) + 37 * (BYTE2(v37) + 37 * (BYTE1(v37) + 37 * ((unsigned __int8)v37 + 11623883)))))))) & (v36 - 1);
    *v44 = *(_QWORD *)(v38 + 8 * v39);
    *(_QWORD *)(v38 + 8 * v39) = v44;
    ++*(_DWORD *)v21;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
    return v3;
  }
  if ( !(unsigned int)RtlpStackDbRefCountIncrement(v3 + 16) )
    v3 = 0LL;
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 32));
  return v3;
}
