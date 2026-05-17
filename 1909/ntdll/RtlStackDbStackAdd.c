/*
 * XREFs of RtlStackDbStackAdd @ 0x180114C98
 * Callers:
 *     RtlpHpStackTraceAddStack @ 0x180101C3C (RtlpHpStackTraceAddStack.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     RtlpStackDbEntryCleanup @ 0x1801153F8 (RtlpStackDbEntryCleanup.c)
 *     RtlpStackDbEntryCreate @ 0x18011547C (RtlpStackDbEntryCreate.c)
 *     RtlpStackDbRefCountIncrement @ 0x180115638 (RtlpStackDbRefCountIncrement.c)
 *     RtlpStackDbStackComparitor @ 0x180115E58 (RtlpStackDbStackComparitor.c)
 */

_QWORD *__fastcall RtlStackDbStackAdd(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int8 *v3; // r9
  __int64 v5; // rdi
  __int64 v6; // r10
  signed __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r9
  __int64 v12; // r8
  _QWORD *v13; // r12
  __int64 v14; // r8
  unsigned __int64 v15; // rsi
  unsigned int v16; // eax
  __int64 v17; // rbx
  char *v18; // rax
  _QWORD *v19; // r9
  char *v20; // r8
  char v21; // cl
  unsigned __int64 v22; // rcx
  unsigned int v23; // edi
  __int64 v24; // r10
  __int64 v25; // r12
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v31; // [rsp+20h] [rbp-20h]
  void (__fastcall *v32)(__int64, __int64, char *, _QWORD *); // [rsp+28h] [rbp-18h]
  unsigned int v33; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v34; // [rsp+38h] [rbp-8h]
  __int64 v35; // [rsp+80h] [rbp+40h]
  __int64 v36; // [rsp+80h] [rbp+40h]
  __int64 v37; // [rsp+80h] [rbp+40h]
  __int64 v38; // [rsp+98h] [rbp+58h]

  v3 = (unsigned __int8 *)a2;
  if ( !a1 || !a3 || !a2 )
    return 0LL;
  v33 = a3;
  v5 = 314159LL;
  v6 = a3;
  v7 = 8LL * a3;
  v34 = a2;
  if ( (unsigned __int64)v7 >= 8 )
  {
    v7 -= 8LL * (unsigned int)v6;
    do
    {
      a2 = v3[5] + 37 * (v3[4] + 37 * (v3[3] + 37 * (v3[2] + 37 * (v3[1] + 37 * (*v3 + 37 * v5)))));
      v8 = v3[6] + 37 * a2;
      v9 = v3[7];
      v3 += 8;
      v5 = v9 + 37 * v8;
      --v6;
    }
    while ( v6 );
  }
  if ( v7 < 1 || v7 > 7 )
    goto LABEL_23;
  v7 = (unsigned int)(v7 - 1);
  if ( !(_DWORD)v7 )
    goto LABEL_22;
  v7 = (unsigned int)(v7 - 1);
  if ( !(_DWORD)v7 )
  {
LABEL_21:
    v5 = *v3++ + 37 * v5;
LABEL_22:
    v5 = *v3 + 37 * v5;
    goto LABEL_23;
  }
  v7 = (unsigned int)(v7 - 1);
  if ( !(_DWORD)v7 )
  {
LABEL_20:
    v5 = *v3++ + 37 * v5;
    goto LABEL_21;
  }
  v7 = (unsigned int)(v7 - 1);
  if ( !(_DWORD)v7 )
  {
LABEL_19:
    v5 = *v3++ + 37 * v5;
    goto LABEL_20;
  }
  v7 = (unsigned int)(v7 - 1);
  if ( !(_DWORD)v7 )
  {
LABEL_18:
    v5 = *v3++ + 37 * v5;
    goto LABEL_19;
  }
  v7 = (unsigned int)(v7 - 1);
  if ( !(_DWORD)v7 )
  {
LABEL_17:
    v5 = *v3++ + 37 * v5;
    goto LABEL_18;
  }
  if ( (_DWORD)v7 == 1 )
  {
    v5 = *v3++ + 37 * v5;
    goto LABEL_17;
  }
LABEL_23:
  RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 32), a2, v7, (unsigned __int64)v3);
  v10 = 0LL;
  while ( 1 )
  {
    v11 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
    v12 = v11 & v5;
    if ( v10 )
      goto LABEL_27;
    if ( *(_DWORD *)(a1 + 20) < 0x20u )
      break;
    v35 = v11 & v5;
    v10 = *(_QWORD *)(a1 + 24)
        + 8LL
        * ((37
          * (BYTE6(v35)
           + 37
           * (BYTE5(v35)
            + 37
            * (BYTE4(v35)
             + 37 * (BYTE3(v35) + 37 * (BYTE2(v35) + 37 * (BYTE1(v35) + 37 * ((unsigned __int8)v12 + 11623883)))))))
          + HIBYTE(v35)) & (unsigned int)((*(_DWORD *)(a1 + 20) >> 5) - 1));
LABEL_27:
    while ( 1 )
    {
      v10 = *(_QWORD *)v10;
      if ( (v10 & 1) != 0 )
        break;
      if ( v12 == (v11 & *(_QWORD *)(v10 + 8)) )
        goto LABEL_31;
    }
    v10 = 0LL;
LABEL_31:
    if ( !v10 )
      goto LABEL_39;
    if ( (unsigned int)RtlpStackDbStackComparitor(v10, &v33) )
      goto LABEL_35;
  }
  v10 = 0LL;
LABEL_35:
  if ( !v10 )
  {
LABEL_39:
    RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 32));
    v38 = RtlpStackDbEntryCreate(a1, &v33, v5);
    v13 = (_QWORD *)v38;
    if ( v38 )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
      v10 = 0LL;
      while ( 1 )
      {
        v14 = v5 & (-1LL << (*(_BYTE *)(a1 + 20) & 0x1F));
        if ( v10 )
          goto LABEL_44;
        if ( *(_DWORD *)(a1 + 20) < 0x20u )
          break;
        v10 = *(_QWORD *)(a1 + 24)
            + 8LL
            * ((37
              * (BYTE6(v14)
               + 37
               * (BYTE5(v14)
                + 37
                * (BYTE4(v14)
                 + 37 * (BYTE3(v14) + 37 * (BYTE2(v14) + 37 * (BYTE1(v14) + 37 * ((unsigned __int8)v14 + 11623883)))))))
              + HIBYTE(v14)) & (unsigned int)((*(_DWORD *)(a1 + 20) >> 5) - 1));
LABEL_44:
        while ( 1 )
        {
          v10 = *(_QWORD *)v10;
          if ( (v10 & 1) != 0 )
            break;
          if ( v14 == ((-1LL << (*(_BYTE *)(a1 + 20) & 0x1F)) & *(_QWORD *)(v10 + 8)) )
            goto LABEL_48;
        }
        v10 = 0LL;
LABEL_48:
        if ( !v10 )
          goto LABEL_55;
        if ( (unsigned int)RtlpStackDbStackComparitor(v10, &v33) )
          goto LABEL_52;
      }
      v10 = 0LL;
LABEL_52:
      if ( v10 )
      {
        if ( !(unsigned int)RtlpStackDbRefCountIncrement(v10 + 16) )
          v10 = 0LL;
        goto LABEL_80;
      }
LABEL_55:
      v15 = a1 + 16;
      v32 = *(void (__fastcall **)(__int64, __int64, char *, _QWORD *))(a1 + 56);
      v16 = *(_DWORD *)(a1 + 20);
      v17 = 2 * (v16 >> 5);
      v31 = *(_QWORD *)(a1 + 64);
      if ( *(_DWORD *)(a1 + 16) >= (unsigned int)v17 )
      {
        if ( (unsigned int)v17 < 4 )
          v17 = 4LL;
        v18 = (char *)(*(__int64 (__fastcall **)(__int64))(a1 + 48))(8LL * (unsigned int)v17);
        v19 = 0LL;
        v20 = v18;
        if ( v18 )
        {
          if ( (((_DWORD)v17 - 1) & (unsigned int)v17) != 0 )
          {
            v21 = -1;
            do
            {
              ++v21;
              LODWORD(v17) = (unsigned int)v17 >> 1;
            }
            while ( (_DWORD)v17 );
            v17 = (unsigned int)(1 << v21);
          }
          if ( (unsigned int)v17 > 0x4000000 )
            v17 = 0x4000000LL;
          v22 = (unsigned int)v17;
          if ( v18 > &v18[8 * v17] )
            v22 = 0LL;
          if ( v22 )
            memset64(v18, v15 | 1, v22);
          v23 = 0;
          v24 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
          if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFE0) != 0 )
          {
            do
            {
              v25 = *(_QWORD *)(a1 + 24);
              while ( 1 )
              {
                v19 = *(_QWORD **)(v25 + 8LL * v23);
                if ( ((unsigned __int8)v19 & 1) != 0 )
                  break;
                *(_QWORD *)(v25 + 8LL * v23) = *v19;
                v36 = v24 & v19[1];
                v26 = (37
                     * (BYTE6(v36)
                      + 37
                      * (BYTE5(v36)
                       + 37
                       * (BYTE4(v36)
                        + 37
                        * (BYTE3(v36) + 37 * (BYTE2(v36) + 37 * (BYTE1(v36) + 37 * ((unsigned __int8)v36 + 11623883)))))))
                     + HIBYTE(v36)) & (unsigned int)(v17 - 1);
                *v19 = *(_QWORD *)&v18[8 * v26];
                *(_QWORD *)&v18[8 * v26] = v19;
              }
              ++v23;
            }
            while ( v23 < *(_DWORD *)(a1 + 20) >> 5 );
            v13 = (_QWORD *)v38;
          }
          v27 = *(_QWORD *)(a1 + 24);
          v16 = (32 * v17) | *(_DWORD *)(a1 + 20) & 0x1F;
          *(_QWORD *)(a1 + 24) = v20;
          *(_DWORD *)(a1 + 20) = v16;
          if ( v27 )
          {
            v32(v27, v31, v20, v19);
            v16 = *(_DWORD *)(a1 + 20);
          }
        }
        else
        {
          v16 = *(_DWORD *)(a1 + 20);
          if ( v16 < 0x20 )
          {
            v10 = 0LL;
LABEL_80:
            RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
            RtlpStackDbEntryCleanup(a1, v38);
            return (_QWORD *)v10;
          }
        }
      }
      v37 = v13[1] & (-1LL << (v16 & 0x1F));
      v28 = *(_QWORD *)(a1 + 24);
      v29 = (37
           * (BYTE6(v37)
            + 37
            * (BYTE5(v37)
             + 37
             * (BYTE4(v37)
              + 37 * (BYTE3(v37) + 37 * (BYTE2(v37) + 37 * (BYTE1(v37) + 37 * ((unsigned __int8)v37 + 11623883)))))))
           + HIBYTE(v37)) & ((v16 >> 5) - 1);
      *v13 = *(_QWORD *)(v28 + 8 * v29);
      *(_QWORD *)(v28 + 8 * v29) = v13;
      ++*(_DWORD *)v15;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
      return v13;
    }
    return 0LL;
  }
  if ( !(unsigned int)RtlpStackDbRefCountIncrement(v10 + 16) )
    v10 = 0LL;
  RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 32));
  return (_QWORD *)v10;
}
