/*
 * XREFs of RtlStackDbStackAdd @ 0x1801158F0
 * Callers:
 *     RtlpHpStackTraceAddStack @ 0x18010449C (RtlpHpStackTraceAddStack.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     RtlpStackDbEntryCleanup @ 0x180116144 (RtlpStackDbEntryCleanup.c)
 *     RtlpStackDbEntryCreate @ 0x1801161C8 (RtlpStackDbEntryCreate.c)
 *     RtlpStackDbRefCountIncrement @ 0x180116384 (RtlpStackDbRefCountIncrement.c)
 *     RtlpStackDbStackComparitor @ 0x180116C68 (RtlpStackDbStackComparitor.c)
 */

__int64 __fastcall RtlStackDbStackAdd(__int64 a1, char *a2, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned __int8 *v4; // r9
  __int64 v6; // rdi
  __int64 v7; // r10
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 *v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // r8
  __int64 v17; // r12
  unsigned __int64 v18; // rsi
  unsigned int v19; // ebx
  void (__fastcall *v20)(_QWORD, _QWORD, _QWORD); // r13
  unsigned int v21; // ecx
  __int64 v22; // rbx
  char *v23; // r9
  char i; // cl
  unsigned __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r10
  __int64 v28; // r13
  _QWORD *v29; // r11
  unsigned __int64 v30; // rcx
  __int64 v31; // rcx
  char v32; // cl
  unsigned int v33; // edi
  unsigned __int64 v34; // r15
  __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  void (__fastcall *v38)(_QWORD, _QWORD, _QWORD); // [rsp+20h] [rbp-58h]
  unsigned int v39; // [rsp+30h] [rbp-48h] BYREF
  char *v40; // [rsp+38h] [rbp-40h]
  _QWORD *v41; // [rsp+80h] [rbp+8h]

  v3 = 0LL;
  v4 = (unsigned __int8 *)a2;
  if ( !a1 || !a3 || !a2 )
    return v3;
  v39 = a3;
  v6 = 314159LL;
  v7 = a3;
  v8 = 8LL * a3;
  v40 = a2;
  if ( (unsigned __int64)v8 >= 8 )
  {
    v8 -= 8LL * (unsigned int)v7;
    do
    {
      a2 = (char *)(v4[5] + 37 * (v4[4] + 37 * (v4[3] + 37 * (v4[2] + 37 * (v4[1] + 37 * (*v4 + 37 * v6))))));
      v9 = v4[6] + 37LL * (_QWORD)a2;
      v10 = v4[7];
      v4 += 8;
      v6 = v10 + 37 * v9;
      --v7;
    }
    while ( v7 );
  }
  if ( v8 >= 1 && v8 <= 7 )
  {
    v8 = (unsigned int)(v8 - 1);
    if ( !(_DWORD)v8 )
    {
LABEL_22:
      v6 = *v4 + 37 * v6;
      goto LABEL_23;
    }
    v8 = (unsigned int)(v8 - 1);
    if ( !(_DWORD)v8 )
    {
LABEL_21:
      v6 = *v4++ + 37 * v6;
      goto LABEL_22;
    }
    v8 = (unsigned int)(v8 - 1);
    if ( !(_DWORD)v8 )
    {
LABEL_20:
      v6 = *v4++ + 37 * v6;
      goto LABEL_21;
    }
    v8 = (unsigned int)(v8 - 1);
    if ( !(_DWORD)v8 )
    {
LABEL_19:
      v6 = *v4++ + 37 * v6;
      goto LABEL_20;
    }
    v8 = (unsigned int)(v8 - 1);
    if ( !(_DWORD)v8 )
    {
LABEL_18:
      v6 = *v4++ + 37 * v6;
      goto LABEL_19;
    }
    v8 = (unsigned int)(v8 - 1);
    if ( !(_DWORD)v8 )
    {
LABEL_17:
      v6 = *v4++ + 37 * v6;
      goto LABEL_18;
    }
    if ( (_DWORD)v8 == 1 )
    {
      v6 = *v4++ + 37 * v6;
      goto LABEL_17;
    }
  }
LABEL_23:
  RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 32), a2, v8, (__int64)v4);
  while ( 1 )
  {
    v11 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
    v12 = v11 & v6;
    if ( v3 )
      goto LABEL_27;
    if ( *(_DWORD *)(a1 + 20) < 0x20u )
      break;
    v3 = *(_QWORD *)(a1 + 24)
       + 8
       * ((((v11 & (unsigned __int64)v6) >> 56)
         + 37
         * ((unsigned __int8)((v11 & (unsigned __int64)v6) >> 48)
          + 37
          * ((unsigned __int8)((unsigned __int16)((v11 & (unsigned __int64)v6) >> 32) >> 8)
           + 37
           * ((unsigned __int8)((v11 & (unsigned __int64)v6) >> 32)
            + 37
            * ((((unsigned int)v11 & (unsigned int)v6) >> 24)
             + 37
             * ((unsigned __int8)(((unsigned int)v11 & (unsigned int)v6) >> 16)
              + 37 * ((unsigned __int8)((unsigned __int16)(v11 & v6) >> 8) + 37 * ((unsigned __int8)v12 + 11623883)))))))) & (unsigned int)((*(_DWORD *)(a1 + 20) >> 5) - 1));
LABEL_27:
    while ( 1 )
    {
      v3 = *(_QWORD *)v3;
      if ( (v3 & 1) != 0 )
        break;
      if ( v12 == (v11 & *(_QWORD *)(v3 + 8)) )
        goto LABEL_31;
    }
    v3 = 0LL;
LABEL_31:
    if ( !v3 )
      goto LABEL_39;
    if ( (unsigned int)RtlpStackDbStackComparitor(v3, &v39) )
      goto LABEL_35;
  }
  v3 = 0LL;
LABEL_35:
  if ( !v3 )
  {
LABEL_39:
    RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 32));
    v41 = (_QWORD *)RtlpStackDbEntryCreate(a1, &v39, v6);
    if ( !v41 )
      return 0LL;
    RtlAcquireSRWLockExclusive(a1 + 32, v13, v14, v15);
    v3 = 0LL;
    while ( 1 )
    {
      v16 = v6 & (-1LL << (*(_DWORD *)(a1 + 20) & 0x1F));
      if ( v3 )
        goto LABEL_45;
      if ( *(_DWORD *)(a1 + 20) < 0x20u )
        break;
      v3 = *(_QWORD *)(a1 + 24)
         + 8
         * ((HIBYTE(v16)
           + 37
           * (BYTE6(v16)
            + 37
            * (BYTE5(v16)
             + 37
             * (BYTE4(v16)
              + 37 * (BYTE3(v16) + 37 * (BYTE2(v16) + 37 * (BYTE1(v16) + 37 * ((unsigned __int8)v16 + 11623883)))))))) & (unsigned int)((*(_DWORD *)(a1 + 20) >> 5) - 1));
LABEL_45:
      while ( 1 )
      {
        v3 = *(_QWORD *)v3;
        if ( (v3 & 1) != 0 )
          break;
        if ( v16 == ((-1LL << (*(_DWORD *)(a1 + 20) & 0x1F)) & *(_QWORD *)(v3 + 8)) )
          goto LABEL_49;
      }
      v3 = 0LL;
LABEL_49:
      if ( !v3 )
        goto LABEL_55;
      if ( (unsigned int)RtlpStackDbStackComparitor(v3, &v39) )
        goto LABEL_51;
    }
    v3 = 0LL;
LABEL_51:
    if ( v3 )
    {
      if ( (unsigned int)RtlpStackDbRefCountIncrement(v3 + 16) )
      {
LABEL_81:
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
        RtlpStackDbEntryCleanup(a1, v41);
        return v3;
      }
LABEL_80:
      v3 = 0LL;
      goto LABEL_81;
    }
LABEL_55:
    v17 = *(_QWORD *)(a1 + 64);
    v18 = a1 + 16;
    v19 = *(_DWORD *)(a1 + 20);
    v20 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 56);
    v21 = 2 * (v19 >> 5);
    v38 = v20;
    if ( *(_DWORD *)(a1 + 16) >= v21 )
    {
      v22 = v21;
      if ( v21 < 4 )
        v22 = 4LL;
      v23 = (char *)(*(__int64 (__fastcall **)(__int64, __int64))(a1 + 48))(8LL * (unsigned int)v22, v17);
      if ( v23 )
      {
        if ( (((_DWORD)v22 - 1) & (unsigned int)v22) != 0 )
        {
          for ( i = -1; (_DWORD)v22; LODWORD(v22) = (unsigned int)v22 >> 1 )
            ++i;
          v22 = (unsigned int)(1 << i);
        }
        if ( (unsigned int)v22 > 0x4000000 )
          v22 = 0x4000000LL;
        v25 = (unsigned int)v22;
        if ( v23 > &v23[8 * v22] )
          v25 = 0LL;
        if ( v25 )
          memset64(v23, v18 | 1, v25);
        v26 = 0LL;
        v27 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
        if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v28 = *(_QWORD *)(a1 + 24);
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
                        * ((unsigned __int8)((unsigned __int16)(v27 & v29[1]) >> 8)
                         + 37 * ((unsigned __int8)(v27 & v29[1]) + 11623883)))))))) & (unsigned int)(v22 - 1);
              *v29 = *(_QWORD *)&v23[8 * v30];
              *(_QWORD *)&v23[8 * v30] = v29;
            }
            v26 = (unsigned int)(v26 + 1);
          }
          while ( (unsigned int)v26 < *(_DWORD *)(a1 + 20) >> 5 );
          v20 = v38;
        }
        v31 = *(_QWORD *)(a1 + 24);
        v19 = *(_DWORD *)(a1 + 20) & 0x1F | (32 * v22);
        *(_QWORD *)(a1 + 24) = v23;
        *(_DWORD *)(a1 + 20) = v19;
        if ( v31 )
        {
          v20(v31, v17, v26);
          v19 = *(_DWORD *)(a1 + 20);
        }
      }
      else
      {
        v19 = *(_DWORD *)(a1 + 20);
        if ( v19 < 0x20 )
          goto LABEL_80;
      }
    }
    v32 = v19 & 0x1F;
    v33 = v19 >> 5;
    v3 = (__int64)v41;
    v34 = v41[1] & (-1LL << v32);
    v35 = *(_QWORD *)(a1 + 24);
    v36 = (HIBYTE(v34)
         + 37
         * (BYTE6(v34)
          + 37
          * (BYTE5(v34)
           + 37
           * (BYTE4(v34)
            + 37 * (BYTE3(v34) + 37 * (BYTE2(v34) + 37 * (BYTE1(v34) + 37 * ((unsigned __int8)v34 + 11623883)))))))) & (v33 - 1);
    *v41 = *(_QWORD *)(v35 + 8 * v36);
    *(_QWORD *)(v35 + 8 * v36) = v41;
    ++*(_DWORD *)v18;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
    return v3;
  }
  if ( !(unsigned int)RtlpStackDbRefCountIncrement(v3 + 16) )
    v3 = 0LL;
  RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 32));
  return v3;
}
