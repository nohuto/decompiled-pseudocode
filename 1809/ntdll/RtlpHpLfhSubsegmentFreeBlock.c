/*
 * XREFs of RtlpHpLfhSubsegmentFreeBlock @ 0x180019B90
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x1800110C0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpSegFree @ 0x180014AE0 (RtlpHpSegFree.c)
 *     RtlpHpFreeHeap @ 0x180018FF0 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180019360 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18001CA30 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x18001D778 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentFreeBlock(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // r14d
  int v5; // r10d
  __int64 *v6; // rsi
  char v7; // r12
  signed __int64 v9; // r15
  unsigned int v10; // edx
  __int64 v11; // rcx
  unsigned int v12; // eax
  char v13; // cl
  unsigned __int64 v14; // r11
  int v15; // edx
  unsigned __int16 v16; // ax
  unsigned int v17; // ecx
  __int64 *v18; // r8
  char v19; // cl
  unsigned int v20; // r10d
  __int64 v21; // r11
  char *v22; // r9
  int v23; // edx
  __int64 v24; // r8
  char *v25; // rcx
  int v26; // edx
  signed __int16 v27; // ax
  int v28; // ebp
  int v29; // edi
  unsigned __int16 v30; // dx
  signed __int64 v32; // rbx
  _RTL_SRWLOCK *v33; // r12
  int v34; // ebx
  signed __int64 v35; // r8
  _QWORD *v36; // r9
  __int64 **v37; // rax
  _QWORD *v38; // rdx
  __int64 *v39; // r8
  __int64 **v40; // rcx
  __int64 **v41; // rcx
  __int64 *v42; // rcx
  bool v43; // zf
  signed __int64 v44; // rax
  unsigned int v45; // [rsp+78h] [rbp+10h]

  v4 = 0;
  v5 = a3;
  v6 = a2;
  v7 = a4;
  v45 = qword_1801634A8 ^ *((_DWORD *)a2 + 10) ^ ((unsigned int)a2 >> 12);
  v9 = 0LL;
  if ( !a3 )
    goto LABEL_17;
  v10 = a3 - (_DWORD)a2 - HIWORD(v45);
  v11 = *(_QWORD *)(a1
                  + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v45 + 15) >> 4]
                  + 128);
  v12 = *(_DWORD *)(v11 + 72);
  v13 = *(_BYTE *)(v11 + 76);
  if ( v12 )
  {
    v14 = (v10 * (unsigned __int64)v12) >> v13;
    v15 = v10 - (unsigned __int16)v45 * (_DWORD)v14;
  }
  else
  {
    LODWORD(v14) = v10 >> v13;
    v15 = ((1 << v13) - 1) & v10;
  }
  if ( !v15 )
  {
    v16 = *((_WORD *)v6 + 18);
    v17 = 2 * v14;
    if ( v16 >= (unsigned __int16)v14 )
      v16 = v14;
    *((_WORD *)v6 + 18) = v16;
    v18 = &v6[(unsigned __int64)v17 >> 6];
    _m_prefetchw(v18 + 6);
    if ( (((unsigned __int64)_InterlockedAnd64(v18 + 6, ~(3LL << (v17 & 0x3F))) >> (v17 & 0x3F)) & 1) == 0 )
    {
      RtlpLogHeapFailure(17, *(_QWORD *)a1, v5, (_DWORD)v6, (unsigned int)v14, 0LL);
      return v4;
    }
    if ( *((_BYTE *)v6 + 45) > 1u )
    {
      v19 = *((_BYTE *)v6 + 44);
      v20 = v5 - (_DWORD)v6;
      v24 = v20 >> v19;
      v21 = 2 * v24;
      v22 = (char *)v6 + 2 * v24 + *((unsigned __int16 *)v6 + 23);
      _m_prefetchw(v22);
      v23 = ((v20 + (unsigned __int16)v45 - 1) >> v19) - v24;
      LODWORD(v24) = -1;
      v25 = &v22[2 * (v23 + 1)];
      v26 = 0;
      if ( v22 < v25 )
      {
        do
        {
          v27 = _InterlockedDecrement16((volatile signed __int16 *)v22);
          if ( v27 )
          {
            if ( v27 == -1 )
              --v26;
          }
          else
          {
            ++v26;
            if ( (_DWORD)v24 == -1 )
              v24 = v21 >> 1;
          }
          v22 += 2;
          v21 += 2LL;
        }
        while ( v22 < v25 );
        if ( v26 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24),
            (v26 << *((_BYTE *)v6 + 44)) / 4096);
        if ( (_DWORD)v24 != -1 )
          RtlpHpLfhSubsegmentDecommitPages(a1, (_DWORD)v6, v24, 2, v7);
      }
    }
LABEL_17:
    v28 = *((unsigned __int16 *)v6 + 17);
    LOWORD(v29) = *((_WORD *)v6 + 16);
    do
    {
      if ( !v9 && (!(_WORD)v29 || (unsigned __int16)v29 == v28 - 1) )
      {
        v32 = v6[2];
        do
        {
          while ( 1 )
          {
            while ( !v32 )
            {
              v32 = _InterlockedCompareExchange64(v6 + 2, 3LL, 0LL);
              if ( !v32 )
              {
                v9 = 0LL;
                goto LABEL_24;
              }
            }
            if ( (v32 & 1) != 0 )
              break;
            v33 = (_RTL_SRWLOCK *)(v32 + 16);
            v9 = v32;
            RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v32 + 16));
            v32 = v6[2];
            if ( v9 == v32 )
              goto LABEL_32;
            RtlReleaseSRWLockExclusive(v33);
          }
          v44 = _InterlockedCompareExchange64(v6 + 2, v32 & 1 | (v32 + 2) & 0xFFFFFFFFFFFFFFFEuLL, v32);
          v43 = v32 == v44;
          v32 = v44;
        }
        while ( !v43 );
        v9 = 0LL;
LABEL_32:
        if ( !v9 )
          goto LABEL_24;
      }
      v30 = v29 + 1;
      v29 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)v6 + 16, v29 + 1, v29);
    }
    while ( v30 != v29 + 1 );
    if ( (_WORD)v29 )
    {
      if ( (unsigned __int16)v29 != v28 - 1 )
      {
LABEL_24:
        v4 = 1;
        if ( v9 )
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v9 + 16));
        return v4;
      }
      v34 = 2;
    }
    else
    {
      v34 = 0;
    }
    if ( *((_BYTE *)v6 + 38) )
    {
      if ( *((_BYTE *)v6 + 38) == 1 )
      {
        v35 = v9 + 40;
        v36 = 0LL;
      }
      else
      {
        if ( *((_BYTE *)v6 + 38) != 2 )
        {
LABEL_57:
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v9 + 16));
          v9 = 0LL;
          if ( v6 )
            RtlpHpLfhBucketAddSubsegment(
              a1,
              *(_QWORD *)(a1
                        + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v45 + 15) >> 4]
                        + 128),
              v6,
              a4);
          goto LABEL_24;
        }
        v35 = 0LL;
        v36 = 0LL;
      }
    }
    else
    {
      v35 = v9 + 24;
      v36 = (_QWORD *)(v9 + 8);
    }
    if ( v34 )
    {
      v37 = 0LL;
      v38 = 0LL;
    }
    else
    {
      v37 = (__int64 **)(v9 + 24);
      v38 = (_QWORD *)(v9 + 8);
    }
    if ( v35 )
    {
      v39 = (__int64 *)*v6;
      if ( *(__int64 **)(*v6 + 8) != v6 )
        goto LABEL_67;
      v40 = (__int64 **)v6[1];
      if ( *v40 != v6 )
        goto LABEL_67;
      *v40 = v39;
      v39[1] = (__int64)v40;
      if ( v36 )
        --*v36;
    }
    *((_BYTE *)v6 + 38) = v34;
    if ( v37 )
    {
      v41 = (__int64 **)v37[1];
      if ( *v41 != (__int64 *)v37 )
        goto LABEL_67;
      *v6 = (__int64)v37;
      v6[1] = (__int64)v41;
      *v41 = v6;
      v37[1] = v6;
      if ( v38 )
        ++*v38;
      v6 = 0LL;
    }
    if ( (*(_BYTE *)v9 & 1) != 0 || *(_QWORD *)(v9 + 8) <= 8uLL )
    {
LABEL_56:
      if ( v6 && *((_BYTE *)v6 + 38) == 2 )
        v6[2] = 0LL;
      goto LABEL_57;
    }
    v6 = *v37;
    if ( (__int64 **)(*v37)[1] == v37 )
    {
      v42 = (__int64 *)*v6;
      if ( *(__int64 **)(*v6 + 8) == v6 )
      {
        *v37 = v42;
        v42[1] = (__int64)v37;
        --*v38;
        *((_BYTE *)v6 + 38) = 2;
        goto LABEL_56;
      }
    }
LABEL_67:
    __fastfail(3u);
  }
  return v4;
}
