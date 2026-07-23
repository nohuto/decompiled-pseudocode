/*
 * XREFs of RtlpHpLfhSubsegmentWalk @ 0x180002358
 * Callers:
 *     RtlpHpSegWalk @ 0x18005B85C (RtlpHpSegWalk.c)
 * Callees:
 *     RtlpHpLfhSubsegmentSizeBlockInternal @ 0x1800025C4 (RtlpHpLfhSubsegmentSizeBlockInternal.c)
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentWalk(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _DWORD *a5, __int64 a6)
{
  unsigned int v7; // r10d
  unsigned int v8; // r9d
  unsigned int v9; // edx
  __int64 i; // r15
  unsigned __int64 v11; // r8
  unsigned __int64 j; // r9
  _QWORD *v13; // rbx
  __int64 k; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rbx
  char v17; // cl
  unsigned int v18; // ebx
  __int64 v19; // r13
  __int64 v20; // rbp
  unsigned int v21; // r12d
  __int64 v22; // rsi
  __int16 *v23; // rcx
  unsigned int v24; // eax
  unsigned int v26; // r8d
  __int64 v27; // rcx
  __int64 v28; // rax
  char v29; // cl
  unsigned __int64 v30; // rdx
  int v31; // r8d
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // [rsp+20h] [rbp-48h]
  __int64 v34; // [rsp+28h] [rbp-40h]
  unsigned int v35; // [rsp+78h] [rbp+10h]

  v7 = qword_1801634A8 ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v8 = *(unsigned __int16 *)(a2 + 34) + *(unsigned __int8 *)(a2 + 39);
  v35 = v7;
  if ( a3 == a2 )
  {
    v9 = 0;
  }
  else
  {
    v26 = a3 - a2 - HIWORD(v7);
    v27 = *(_QWORD *)(a1
                    + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v7 + 15) >> 4]
                    + 128);
    v28 = *(unsigned int *)(v27 + 72);
    v29 = *(_BYTE *)(v27 + 76);
    if ( (_DWORD)v28 )
    {
      v30 = ((unsigned __int64)v26 * v28) >> v29;
      v31 = v26 - v30 * (unsigned __int16)v7;
    }
    else
    {
      LODWORD(v30) = v26 >> v29;
      v31 = ((1 << v29) - 1) & v26;
    }
    if ( v31 )
      return 0LL;
    v9 = v30 + 1;
    if ( v9 >= v8 )
      return 0LL;
  }
  v33 = 2 * v8;
  v34 = a2 + 48;
  for ( i = 2 * v9; ; i = (unsigned int)(i + 2) )
  {
    v11 = v33 - 1;
    for ( j = (unsigned int)i & (unsigned __int64)-(__int64)((unsigned int)i < v33); ; j = 0LL )
    {
      if ( v11 - j == -1LL )
        goto LABEL_24;
      v13 = (_QWORD *)(v34 + 8 * (j >> 6));
      for ( k = ~*v13 | ((1LL << (j & 0x3F)) - 1); k == -1; k = ~*v13 )
      {
        if ( (unsigned __int64)++v13 > v34 + 8 * (v11 >> 6) )
          goto LABEL_24;
      }
      _BitScanForward64(&v15, ~k);
      v16 = v15 + (((__int64)v13 - v34) >> 3 << 6);
      if ( v16 > v11 )
      {
LABEL_24:
        LODWORD(v16) = -1;
      }
      else if ( v16 != -1LL )
      {
        break;
      }
      if ( !j )
        break;
      v32 = i + 1;
      if ( i + 1 > v33 )
        v32 = v33;
      v11 = v32 - 1;
    }
    if ( (unsigned int)v16 < (unsigned int)i || (_DWORD)v16 == -1 )
      break;
    v17 = *(_BYTE *)(a2 + 44);
    v18 = (unsigned int)v16 >> 1;
    v19 = a2 + *(unsigned __int16 *)(a2 + 46);
    v20 = (HIWORD(v35) + v18 * (unsigned __int16)v35) >> v17;
    v21 = ((HIWORD(v35) + v18 * (unsigned __int16)v35 + (unsigned __int16)v35 - 1) >> v17) + 1;
    v22 = a2 + HIWORD(v35) + v18 * (unsigned __int16)v35;
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a2 + 24));
    if ( (unsigned int)v20 < v21 )
    {
      v23 = (__int16 *)(v19 + 2 * v20);
      while ( *v23 >= 0 )
      {
        LODWORD(v20) = v20 + 1;
        ++v23;
        if ( (unsigned int)v20 >= v21 )
          goto LABEL_16;
      }
      LODWORD(v20) = -1;
    }
LABEL_16:
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a2 + 24));
    if ( (_DWORD)v20 != -1 )
    {
      v24 = RtlpHpLfhSubsegmentSizeBlockInternal(a2, v22, v18, a6);
      *a4 = v24;
      *a5 = (unsigned __int16)v35 - v24;
      return v22;
    }
  }
  return 0LL;
}
