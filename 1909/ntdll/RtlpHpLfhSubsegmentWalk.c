/*
 * XREFs of RtlpHpLfhSubsegmentWalk @ 0x1800019C8
 * Callers:
 *     RtlpHpSegWalk @ 0x18005112C (RtlpHpSegWalk.c)
 * Callees:
 *     RtlpHpLfhSubsegmentSizeBlockInternal @ 0x180001C3C (RtlpHpLfhSubsegmentSizeBlockInternal.c)
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentWalk(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _DWORD *a5, __int64 a6)
{
  int v7; // r10d
  int v8; // eax
  unsigned int v9; // r9d
  int v10; // r8d
  __int64 v11; // rcx
  unsigned int v12; // r10d
  unsigned int v13; // eax
  char v14; // cl
  unsigned __int64 v15; // rdx
  int v16; // r10d
  unsigned int v17; // edx
  __int64 i; // r15
  unsigned __int64 v19; // r8
  unsigned __int64 j; // r9
  _QWORD *v21; // rbx
  __int64 k; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rbx
  char v25; // cl
  unsigned int v26; // ebx
  __int64 v27; // r13
  __int64 v28; // rbp
  unsigned int v29; // r12d
  __int64 v30; // rsi
  __int16 *v31; // rcx
  unsigned int v32; // eax
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // [rsp+20h] [rbp-48h]
  __int64 v36; // [rsp+28h] [rbp-40h]
  int v37; // [rsp+78h] [rbp+10h]

  v7 = a3;
  v8 = qword_180163548 ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v9 = *(unsigned __int16 *)(a2 + 34) + *(unsigned __int8 *)(a2 + 39);
  v37 = v8;
  if ( a3 == a2 )
  {
    v17 = 0;
  }
  else
  {
    v10 = (unsigned __int16)v8;
    v11 = *(_QWORD *)(a1
                    + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v8 + 15) >> 4]
                    + 128);
    v12 = v7 - HIWORD(v8) - a2;
    v13 = *(_DWORD *)(v11 + 72);
    v14 = *(_BYTE *)(v11 + 76);
    if ( v13 )
    {
      v15 = (v12 * (unsigned __int64)v13) >> v14;
      v16 = v12 - v15 * v10;
    }
    else
    {
      LODWORD(v15) = v12 >> v14;
      v16 = ((1 << v14) - 1) & v12;
    }
    if ( v16 )
      return 0LL;
    v17 = v15 + 1;
    if ( v17 >= v9 )
      return 0LL;
  }
  v35 = 2 * v9;
  v36 = a2 + 48;
  for ( i = 2 * v17; ; i = (unsigned int)(i + 2) )
  {
    v19 = v35 - 1;
    for ( j = (unsigned int)i & (unsigned __int64)-(__int64)((unsigned int)i < v35); ; j = 0LL )
    {
      if ( v19 - j == -1LL )
        goto LABEL_26;
      v21 = (_QWORD *)(v36 + 8 * (j >> 6));
      for ( k = ~*v21 | ((1LL << (j & 0x3F)) - 1); k == -1; k = ~*v21 )
      {
        if ( (unsigned __int64)++v21 > v36 + 8 * (v19 >> 6) )
          goto LABEL_26;
      }
      _BitScanForward64(&v23, ~k);
      v24 = v23 + (((__int64)v21 - v36) >> 3 << 6);
      if ( v24 > v19 )
      {
LABEL_26:
        LODWORD(v24) = -1;
      }
      else if ( v24 != -1LL )
      {
        break;
      }
      if ( !j )
        break;
      v34 = i + 1;
      if ( i + 1 > v35 )
        v34 = v35;
      v19 = v34 - 1;
    }
    if ( (unsigned int)v24 < (unsigned int)i || (_DWORD)v24 == -1 )
      break;
    v25 = *(_BYTE *)(a2 + 44);
    v26 = (unsigned int)v24 >> 1;
    v27 = a2 + *(unsigned __int16 *)(a2 + 46);
    v28 = (HIWORD(v37) + v26 * (unsigned __int16)v37) >> v25;
    v29 = ((HIWORD(v37) + v26 * (unsigned __int16)v37 + (unsigned __int16)v37 - 1) >> v25) + 1;
    v30 = a2 + HIWORD(v37) + v26 * (unsigned __int16)v37;
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a2 + 24));
    if ( (unsigned int)v28 < v29 )
    {
      v31 = (__int16 *)(v27 + 2 * v28);
      while ( *v31 >= 0 )
      {
        LODWORD(v28) = v28 + 1;
        ++v31;
        if ( (unsigned int)v28 >= v29 )
          goto LABEL_19;
      }
      LODWORD(v28) = -1;
    }
LABEL_19:
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a2 + 24));
    if ( (_DWORD)v28 != -1 )
    {
      v32 = RtlpHpLfhSubsegmentSizeBlockInternal(a2, v30, v26, a6);
      *a4 = v32;
      *a5 = (unsigned __int16)v37 - v32;
      return v30;
    }
  }
  return 0LL;
}
