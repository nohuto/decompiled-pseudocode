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

_QWORD *__fastcall RtlStackDbStackAdd(__int64 a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned __int8 *v3; // r9
  __int64 v5; // rdi
  __int64 v6; // r10
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  __int64 v16; // rbx
  __int64 v17; // r9
  __int64 v18; // r8
  _QWORD *v19; // r12
  __int64 v20; // r8
  unsigned __int64 v21; // rsi
  unsigned int v22; // eax
  __int64 v23; // rbx
  char *v24; // rax
  _QWORD *v25; // r9
  char *v26; // r8
  char v27; // cl
  unsigned __int64 v28; // rcx
  unsigned int v29; // edi
  __int64 v30; // r10
  __int64 v31; // r12
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v37; // [rsp+20h] [rbp-20h]
  void (__fastcall *v38)(__int64, __int64, char *, _QWORD *); // [rsp+28h] [rbp-18h]
  unsigned int v39; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int8 *v40; // [rsp+38h] [rbp-8h]
  __int64 v41; // [rsp+80h] [rbp+40h]
  __int64 v42; // [rsp+80h] [rbp+40h]
  __int64 v43; // [rsp+80h] [rbp+40h]
  __int64 v44; // [rsp+98h] [rbp+58h]

  v3 = a2;
  if ( !a1 || !a3 || !a2 )
    return 0LL;
  v39 = a3;
  v5 = 314159LL;
  v6 = a3;
  v7 = 8LL * a3;
  v40 = a2;
  if ( (unsigned __int64)v7 >= 8 )
  {
    v7 -= 8LL * (unsigned int)v6;
    do
    {
      v8 = v3[6] + 37 * (v3[5] + 37 * (v3[4] + 37 * (v3[3] + 37 * (v3[2] + 37 * (v3[1] + 37 * (*v3 + 37 * v5))))));
      v9 = v3[7];
      v3 += 8;
      v5 = v9 + 37 * v8;
      --v6;
    }
    while ( v6 );
  }
  if ( v7 < 1 || v7 > 7 )
    goto LABEL_23;
  v10 = v7 - 1;
  if ( !v10 )
    goto LABEL_22;
  v11 = v10 - 1;
  if ( !v11 )
  {
LABEL_21:
    v5 = *v3++ + 37 * v5;
LABEL_22:
    v5 = *v3 + 37 * v5;
    goto LABEL_23;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
LABEL_20:
    v5 = *v3++ + 37 * v5;
    goto LABEL_21;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
LABEL_19:
    v5 = *v3++ + 37 * v5;
    goto LABEL_20;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
LABEL_18:
    v5 = *v3++ + 37 * v5;
    goto LABEL_19;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
LABEL_17:
    v5 = *v3++ + 37 * v5;
    goto LABEL_18;
  }
  if ( v15 == 1 )
  {
    v5 = *v3++ + 37 * v5;
    goto LABEL_17;
  }
LABEL_23:
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 32));
  v16 = 0LL;
  while ( 1 )
  {
    v17 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
    v18 = v17 & v5;
    if ( v16 )
      goto LABEL_27;
    if ( *(_DWORD *)(a1 + 20) < 0x20u )
      break;
    v41 = v17 & v5;
    v16 = *(_QWORD *)(a1 + 24)
        + 8LL
        * ((37
          * (BYTE6(v41)
           + 37
           * (BYTE5(v41)
            + 37
            * (BYTE4(v41)
             + 37 * (BYTE3(v41) + 37 * (BYTE2(v41) + 37 * (BYTE1(v41) + 37 * ((unsigned __int8)v18 + 11623883)))))))
          + HIBYTE(v41)) & (unsigned int)((*(_DWORD *)(a1 + 20) >> 5) - 1));
LABEL_27:
    while ( 1 )
    {
      v16 = *(_QWORD *)v16;
      if ( (v16 & 1) != 0 )
        break;
      if ( v18 == (v17 & *(_QWORD *)(v16 + 8)) )
        goto LABEL_31;
    }
    v16 = 0LL;
LABEL_31:
    if ( !v16 )
      goto LABEL_39;
    if ( (unsigned int)RtlpStackDbStackComparitor(v16, &v39) )
      goto LABEL_35;
  }
  v16 = 0LL;
LABEL_35:
  if ( !v16 )
  {
LABEL_39:
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 32));
    v44 = RtlpStackDbEntryCreate(a1, &v39, v5);
    v19 = (_QWORD *)v44;
    if ( v44 )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
      v16 = 0LL;
      while ( 1 )
      {
        v20 = v5 & (-1LL << (*(_BYTE *)(a1 + 20) & 0x1F));
        if ( v16 )
          goto LABEL_44;
        if ( *(_DWORD *)(a1 + 20) < 0x20u )
          break;
        v16 = *(_QWORD *)(a1 + 24)
            + 8LL
            * ((37
              * (BYTE6(v20)
               + 37
               * (BYTE5(v20)
                + 37
                * (BYTE4(v20)
                 + 37 * (BYTE3(v20) + 37 * (BYTE2(v20) + 37 * (BYTE1(v20) + 37 * ((unsigned __int8)v20 + 11623883)))))))
              + HIBYTE(v20)) & (unsigned int)((*(_DWORD *)(a1 + 20) >> 5) - 1));
LABEL_44:
        while ( 1 )
        {
          v16 = *(_QWORD *)v16;
          if ( (v16 & 1) != 0 )
            break;
          if ( v20 == ((-1LL << (*(_BYTE *)(a1 + 20) & 0x1F)) & *(_QWORD *)(v16 + 8)) )
            goto LABEL_48;
        }
        v16 = 0LL;
LABEL_48:
        if ( !v16 )
          goto LABEL_55;
        if ( (unsigned int)RtlpStackDbStackComparitor(v16, &v39) )
          goto LABEL_52;
      }
      v16 = 0LL;
LABEL_52:
      if ( v16 )
      {
        if ( !(unsigned int)RtlpStackDbRefCountIncrement(v16 + 16) )
          v16 = 0LL;
        goto LABEL_80;
      }
LABEL_55:
      v21 = a1 + 16;
      v38 = *(void (__fastcall **)(__int64, __int64, char *, _QWORD *))(a1 + 56);
      v22 = *(_DWORD *)(a1 + 20);
      v23 = 2 * (v22 >> 5);
      v37 = *(_QWORD *)(a1 + 64);
      if ( *(_DWORD *)(a1 + 16) >= (unsigned int)v23 )
      {
        if ( (unsigned int)v23 < 4 )
          v23 = 4LL;
        v24 = (char *)(*(__int64 (__fastcall **)(__int64))(a1 + 48))(8LL * (unsigned int)v23);
        v25 = 0LL;
        v26 = v24;
        if ( v24 )
        {
          if ( (((_DWORD)v23 - 1) & (unsigned int)v23) != 0 )
          {
            v27 = -1;
            do
            {
              ++v27;
              LODWORD(v23) = (unsigned int)v23 >> 1;
            }
            while ( (_DWORD)v23 );
            v23 = (unsigned int)(1 << v27);
          }
          if ( (unsigned int)v23 > 0x4000000 )
            v23 = 0x4000000LL;
          v28 = (unsigned int)v23;
          if ( v24 > &v24[8 * v23] )
            v28 = 0LL;
          if ( v28 )
            memset64(v24, v21 | 1, v28);
          v29 = 0;
          v30 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
          if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFE0) != 0 )
          {
            do
            {
              v31 = *(_QWORD *)(a1 + 24);
              while ( 1 )
              {
                v25 = *(_QWORD **)(v31 + 8LL * v29);
                if ( ((unsigned __int8)v25 & 1) != 0 )
                  break;
                *(_QWORD *)(v31 + 8LL * v29) = *v25;
                v42 = v30 & v25[1];
                v32 = (37
                     * (BYTE6(v42)
                      + 37
                      * (BYTE5(v42)
                       + 37
                       * (BYTE4(v42)
                        + 37
                        * (BYTE3(v42) + 37 * (BYTE2(v42) + 37 * (BYTE1(v42) + 37 * ((unsigned __int8)v42 + 11623883)))))))
                     + HIBYTE(v42)) & (unsigned int)(v23 - 1);
                *v25 = *(_QWORD *)&v24[8 * v32];
                *(_QWORD *)&v24[8 * v32] = v25;
              }
              ++v29;
            }
            while ( v29 < *(_DWORD *)(a1 + 20) >> 5 );
            v19 = (_QWORD *)v44;
          }
          v33 = *(_QWORD *)(a1 + 24);
          v22 = (32 * v23) | *(_DWORD *)(a1 + 20) & 0x1F;
          *(_QWORD *)(a1 + 24) = v26;
          *(_DWORD *)(a1 + 20) = v22;
          if ( v33 )
          {
            v38(v33, v37, v26, v25);
            v22 = *(_DWORD *)(a1 + 20);
          }
        }
        else
        {
          v22 = *(_DWORD *)(a1 + 20);
          if ( v22 < 0x20 )
          {
            v16 = 0LL;
LABEL_80:
            RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
            RtlpStackDbEntryCleanup(a1, v44);
            return (_QWORD *)v16;
          }
        }
      }
      v43 = v19[1] & (-1LL << (v22 & 0x1F));
      v34 = *(_QWORD *)(a1 + 24);
      v35 = (37
           * (BYTE6(v43)
            + 37
            * (BYTE5(v43)
             + 37
             * (BYTE4(v43)
              + 37 * (BYTE3(v43) + 37 * (BYTE2(v43) + 37 * (BYTE1(v43) + 37 * ((unsigned __int8)v43 + 11623883)))))))
           + HIBYTE(v43)) & ((v22 >> 5) - 1);
      *v19 = *(_QWORD *)(v34 + 8 * v35);
      *(_QWORD *)(v34 + 8 * v35) = v19;
      ++*(_DWORD *)v21;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
      return v19;
    }
    return 0LL;
  }
  if ( !(unsigned int)RtlpStackDbRefCountIncrement(v16 + 16) )
    v16 = 0LL;
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 32));
  return (_QWORD *)v16;
}
