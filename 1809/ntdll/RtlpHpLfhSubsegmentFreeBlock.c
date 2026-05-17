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
 *     RtlpLogHeapFailure @ 0x18009F7AC (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentFreeBlock(__int64 a1, __int64 *a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // r14d
  __int64 *v6; // rsi
  char v7; // r12
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  signed __int64 v11; // r15
  unsigned int v12; // edx
  __int64 v13; // rcx
  unsigned int v14; // eax
  char v15; // cl
  unsigned __int64 v16; // r11
  int v17; // edx
  unsigned __int16 v18; // ax
  unsigned int v19; // ecx
  unsigned __int64 v20; // rax
  char v21; // cl
  char v22; // cl
  unsigned int v23; // r10d
  __int64 v24; // r8
  __int64 v25; // r11
  int v26; // edx
  unsigned __int64 v27; // rcx
  signed __int16 v28; // ax
  int v29; // ebp
  int v30; // edi
  signed __int64 v32; // rbx
  volatile signed __int64 *v33; // r12
  int v34; // kr00_4
  int v35; // ebx
  signed __int64 v36; // r8
  _QWORD *v37; // r9
  __int64 **v38; // rax
  _QWORD *v39; // rdx
  __int64 *v40; // r8
  __int64 **v41; // rcx
  __int64 **v42; // rcx
  __int64 *v43; // rcx
  bool v44; // zf
  signed __int64 v45; // rax
  unsigned int v46; // [rsp+78h] [rbp+10h]
  unsigned int v47; // [rsp+88h] [rbp+20h]

  v47 = a4;
  v4 = 0;
  v6 = a2;
  v7 = a4;
  v46 = qword_1801634A8 ^ *((_DWORD *)a2 + 10) ^ ((unsigned int)a2 >> 12);
  v9 = HIWORD(v46);
  v10 = (unsigned __int64)RtlpLfhBucketIndexMap;
  v11 = 0LL;
  if ( !a3 )
    goto LABEL_17;
  v12 = a3 - (_DWORD)v6 - v9;
  v13 = *(_QWORD *)(a1
                  + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v46 + 15) >> 4]
                  + 128);
  v14 = *(_DWORD *)(v13 + 72);
  v15 = *(_BYTE *)(v13 + 76);
  if ( v14 )
  {
    v16 = (v12 * (unsigned __int64)v14) >> v15;
    v17 = v12 - (unsigned __int16)v46 * (_DWORD)v16;
  }
  else
  {
    LODWORD(v16) = v12 >> v15;
    v17 = ((1 << v15) - 1) & v12;
  }
  if ( !v17 )
  {
    v18 = *((_WORD *)v6 + 18);
    v19 = 2 * v16;
    if ( v18 >= (unsigned __int16)v16 )
      v18 = v16;
    *((_WORD *)v6 + 18) = v18;
    v20 = v19;
    v21 = v19 & 0x3F;
    a4 = ~(3LL << v21);
    v9 = (__int64)&v6[v20 >> 6];
    _m_prefetchw((const void *)(v9 + 48));
    if ( (((unsigned __int64)_InterlockedAnd64((volatile signed __int64 *)(v9 + 48), a4) >> v21) & 1) == 0 )
    {
      RtlpLogHeapFailure(17, *(_QWORD *)a1, a3, (_DWORD)v6, (unsigned int)v16, 0LL);
      return v4;
    }
    if ( *((_BYTE *)v6 + 45) > 1u )
    {
      v22 = *((_BYTE *)v6 + 44);
      v23 = a3 - (_DWORD)v6;
      v24 = v23 >> v22;
      v25 = 2 * v24;
      a4 = (unsigned __int64)v6 + 2 * v24 + *((unsigned __int16 *)v6 + 23);
      _m_prefetchw((const void *)a4);
      v26 = ((v23 + (unsigned __int16)v46 - 1) >> v22) - v24;
      v9 = 0xFFFFFFFFLL;
      v27 = a4 + 2LL * (unsigned int)(v26 + 1);
      v10 = 0LL;
      if ( a4 < v27 )
      {
        do
        {
          v28 = _InterlockedDecrement16((volatile signed __int16 *)a4);
          if ( v28 )
          {
            if ( v28 == -1 )
              v10 = (unsigned int)(v10 - 1);
          }
          else
          {
            v10 = (unsigned int)(v10 + 1);
            if ( (_DWORD)v9 == -1 )
              v9 = v25 >> 1;
          }
          a4 += 2LL;
          v25 += 2LL;
        }
        while ( a4 < v27 );
        if ( (_DWORD)v10 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
        {
          v34 = (_DWORD)v10 << *((_BYTE *)v6 + 44);
          v10 = (v34 >> 31) & 0xFFF;
          _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24), v34 / 4096);
        }
        if ( (_DWORD)v9 != -1 )
          RtlpHpLfhSubsegmentDecommitPages(a1, (_DWORD)v6, v9, 2, v7);
      }
    }
LABEL_17:
    v29 = *((unsigned __int16 *)v6 + 17);
    v30 = *((unsigned __int16 *)v6 + 16);
    do
    {
      if ( !v11 && (!(_WORD)v30 || (unsigned __int16)v30 == v29 - 1) )
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
                v11 = 0LL;
                goto LABEL_24;
              }
            }
            if ( (v32 & 1) != 0 )
              break;
            v33 = (volatile signed __int64 *)(v32 + 16);
            v11 = v32;
            RtlAcquireSRWLockExclusive(v32 + 16, v10, (unsigned __int64 *)v9, a4);
            v32 = v6[2];
            if ( v11 == v32 )
              goto LABEL_32;
            RtlReleaseSRWLockExclusive(v33);
          }
          v45 = _InterlockedCompareExchange64(v6 + 2, v32 & 1 | (v32 + 2) & 0xFFFFFFFFFFFFFFFEuLL, v32);
          v44 = v32 == v45;
          v32 = v45;
        }
        while ( !v44 );
        v11 = 0LL;
LABEL_32:
        if ( !v11 )
          goto LABEL_24;
      }
      v10 = (unsigned int)(v30 + 1);
      v30 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)v6 + 16, v30 + 1, v30);
    }
    while ( (unsigned __int16)v10 != v30 + 1 );
    if ( (_WORD)v30 )
    {
      if ( (unsigned __int16)v30 != v29 - 1 )
      {
LABEL_24:
        v4 = 1;
        if ( v11 )
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v11 + 16));
        return v4;
      }
      v35 = 2;
    }
    else
    {
      v35 = 0;
    }
    if ( *((_BYTE *)v6 + 38) )
    {
      if ( *((_BYTE *)v6 + 38) == 1 )
      {
        v36 = v11 + 40;
        v37 = 0LL;
      }
      else
      {
        if ( *((_BYTE *)v6 + 38) != 2 )
        {
LABEL_57:
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v11 + 16));
          v11 = 0LL;
          if ( v6 )
            RtlpHpLfhBucketAddSubsegment(
              a1,
              *(_QWORD *)(a1
                        + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v46 + 15) >> 4]
                        + 128),
              v6,
              v47);
          goto LABEL_24;
        }
        v36 = 0LL;
        v37 = 0LL;
      }
    }
    else
    {
      v36 = v11 + 24;
      v37 = (_QWORD *)(v11 + 8);
    }
    if ( v35 )
    {
      v38 = 0LL;
      v39 = 0LL;
    }
    else
    {
      v38 = (__int64 **)(v11 + 24);
      v39 = (_QWORD *)(v11 + 8);
    }
    if ( v36 )
    {
      v40 = (__int64 *)*v6;
      if ( *(__int64 **)(*v6 + 8) != v6 )
        goto LABEL_67;
      v41 = (__int64 **)v6[1];
      if ( *v41 != v6 )
        goto LABEL_67;
      *v41 = v40;
      v40[1] = (__int64)v41;
      if ( v37 )
        --*v37;
    }
    *((_BYTE *)v6 + 38) = v35;
    if ( v38 )
    {
      v42 = (__int64 **)v38[1];
      if ( *v42 != (__int64 *)v38 )
        goto LABEL_67;
      *v6 = (__int64)v38;
      v6[1] = (__int64)v42;
      *v42 = v6;
      v38[1] = v6;
      if ( v39 )
        ++*v39;
      v6 = 0LL;
    }
    if ( (*(_BYTE *)v11 & 1) != 0 || *(_QWORD *)(v11 + 8) <= 8uLL )
    {
LABEL_56:
      if ( v6 && *((_BYTE *)v6 + 38) == 2 )
        v6[2] = 0LL;
      goto LABEL_57;
    }
    v6 = *v38;
    if ( (__int64 **)(*v38)[1] == v38 )
    {
      v43 = (__int64 *)*v6;
      if ( *(__int64 **)(*v6 + 8) == v6 )
      {
        *v38 = v43;
        v43[1] = (__int64)v38;
        --*v39;
        *((_BYTE *)v6 + 38) = 2;
        goto LABEL_56;
      }
    }
LABEL_67:
    __fastfail(3u);
  }
  return v4;
}
