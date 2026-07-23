/*
 * XREFs of FsRtlAddToTunnelCacheEx @ 0x1405829D0
 * Callers:
 *     FsRtlAddToTunnelCache @ 0x1405C0EB0 (FsRtlAddToTunnelCache.c)
 * Callees:
 *     FsRtlCompareNodeAndKey @ 0x140014750 (FsRtlCompareNodeAndKey.c)
 *     FsRtlEmptyFreePoolList @ 0x1400147C8 (FsRtlEmptyFreePoolList.c)
 *     FsRtlFreeTunnelNode @ 0x140014A04 (FsRtlFreeTunnelNode.c)
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAllocateFromNPagedLookasideList @ 0x140018B38 (ExAllocateFromNPagedLookasideList.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     FsRtlPruneTunnelCache @ 0x1405C107C (FsRtlPruneTunnelCache.c)
 */

char *__fastcall FsRtlAddToTunnelCacheEx(
        PKGUARDED_MUTEX Mutex,
        unsigned __int64 a2,
        const UNICODE_STRING *a3,
        const UNICODE_STRING *a4,
        char a5,
        size_t Size,
        void *Src)
{
  __int64 v7; // rbp
  int v9; // r14d
  const UNICODE_STRING *v10; // r15
  const UNICODE_STRING *v11; // r12
  PKGUARDED_MUTEX v12; // rsi
  char *result; // rax
  int v14; // edi
  int v15; // ecx
  unsigned int v16; // edi
  char *v17; // rbx
  PKGUARDED_MUTEX v18; // r13
  __int64 v19; // r14
  struct _FAST_MUTEX *v20; // rdi
  LONG v21; // eax
  __int64 v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rcx
  _QWORD *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  _QWORD *v28; // r8
  struct _FAST_MUTEX *v29; // rdx
  PKGUARDED_MUTEX *v30; // rcx
  unsigned __int16 Length; // ax
  unsigned __int16 v32; // ax
  unsigned __int16 v33; // cx
  char *v34; // rcx
  char v35; // [rsp+20h] [rbp-68h]
  char v36; // [rsp+24h] [rbp-64h]
  __int64 v37[12]; // [rsp+28h] [rbp-60h] BYREF
  int v42; // [rsp+B0h] [rbp+28h]

  v7 = 0LL;
  v35 = 0;
  v9 = a5 & 2;
  v10 = a4;
  v11 = a3;
  v42 = v9;
  v12 = Mutex;
  result = (char *)(a5 & 1);
  v36 = (char)result;
  if ( TunnelMaxEntries )
  {
    v14 = Size + a3->Length;
    v15 = a4->Length + 112;
    v37[1] = (__int64)v37;
    v16 = v15 + v14;
    v37[0] = (__int64)v37;
    if ( v16 > 0xB0 || (v17 = (char *)ExAllocateFromNPagedLookasideList(&TunnelLookasideList)) == 0LL )
    {
      result = (char *)ExAllocatePoolWithTag(PagedPool, v16, 0x506E7554u);
      v17 = result;
      if ( !result )
        return result;
      v35 = 1;
    }
    if ( !v9 )
      v11 = v10;
    ExAcquireFastMutex(v12);
    v18 = v12 + 1;
    v19 = *(_QWORD *)&v12[1].Count;
    v20 = v12 + 1;
    if ( v19 )
    {
      do
      {
        v7 = v19;
        v21 = FsRtlCompareNodeAndKey(v19, a2, v11, v36);
        if ( v21 <= 0 )
        {
          if ( v21 >= 0 )
            break;
          v22 = 16LL;
        }
        else
        {
          v22 = 8LL;
        }
        v20 = (struct _FAST_MUTEX *)(v19 + v22);
        v19 = *(_QWORD *)(v19 + v22);
      }
      while ( v19 );
      v12 = Mutex;
      v10 = a4;
      v18 = Mutex + 1;
    }
    *(_QWORD *)v17 = v17;
    *((_QWORD *)v17 + 1) = 0LL;
    *((_QWORD *)v17 + 2) = 0LL;
    if ( v7 )
    {
      if ( *(_QWORD *)&v20->Count )
      {
        *((_QWORD *)v17 + 2) = *(_QWORD *)(*(_QWORD *)&v20->Count + 16LL);
        *((_QWORD *)v17 + 1) = *(_QWORD *)(*(_QWORD *)&v20->Count + 8LL);
        v23 = *(_QWORD **)&v20->Count;
        v24 = *(_QWORD **)(*(_QWORD *)&v20->Count + 16LL);
        if ( v24 )
        {
          *v24 = v17;
          v23 = *(_QWORD **)&v20->Count;
        }
        v25 = (_QWORD *)v23[1];
        if ( v25 )
        {
          *v25 = v17;
          v23 = *(_QWORD **)&v20->Count;
        }
        if ( (_QWORD *)*v23 == v23 )
        {
          *(_QWORD *)&v18->Count = v17;
        }
        else
        {
          *(_QWORD *)v17 = *v23;
          v26 = **(_QWORD **)&v20->Count;
          if ( *(_QWORD *)(v26 + 8) == *(_QWORD *)&v20->Count )
            *(_QWORD *)(v26 + 8) = v17;
          else
            *(_QWORD *)(v26 + 16) = v17;
        }
        v27 = *(_QWORD *)(v7 + 24);
        if ( *(_QWORD *)(v27 + 8) != v7 + 24 || (v28 = *(_QWORD **)(v7 + 32), *v28 != v7 + 24) )
LABEL_32:
          __fastfail(3u);
        *v28 = v27;
        *(_QWORD *)(v27 + 8) = v28;
        FsRtlFreeTunnelNode((char *)v7, v37);
        --LOWORD(v12[1].Event.Header.Lock);
      }
      else
      {
        *(_QWORD *)v17 = v7;
        *(_QWORD *)&v20->Count = v17;
      }
    }
    else
    {
      *(_QWORD *)&v18->Count = v17;
    }
    v29 = (struct _FAST_MUTEX *)(v17 + 24);
    *((_QWORD *)v17 + 5) = MEMORY[0xFFFFF78000000014];
    v30 = *(PKGUARDED_MUTEX **)&v12[1].Contention;
    if ( *v30 != (PKGUARDED_MUTEX)&v12[1].Owner )
      goto LABEL_32;
    *(_QWORD *)&v29->Count = (char *)v12 + 64;
    *((_QWORD *)v17 + 4) = v30;
    *v30 = v29;
    *(_QWORD *)&v12[1].Contention = v29;
    ++LOWORD(v12[1].Event.Header.Lock);
    *((_QWORD *)v17 + 6) = a2;
    *((_DWORD *)v17 + 14) = v42 != 0 ? 2 : 0;
    *((_QWORD *)v17 + 11) = v17 + 112;
    *((_QWORD *)v17 + 9) = &v17[a3->Length + 112];
    Length = a3->Length;
    *((_WORD *)v17 + 41) = a3->Length;
    *((_WORD *)v17 + 40) = Length;
    v32 = v10->Length;
    *((_WORD *)v17 + 33) = v10->Length;
    *((_WORD *)v17 + 32) = v32;
    if ( a3->Length )
      memmove(v17 + 112, a3->Buffer, a3->Length);
    v33 = v10->Length;
    if ( v10->Length )
    {
      memmove(*((void **)v17 + 9), v10->Buffer, v33);
      v33 = v10->Length;
    }
    v34 = &v17[a3->Length + 112 + v33];
    *((_QWORD *)v17 + 12) = v34;
    *((_DWORD *)v17 + 26) = Size;
    memmove(v34, Src, (unsigned int)Size);
    if ( v35 )
      *((_DWORD *)v17 + 14) |= 1u;
    FsRtlPruneTunnelCache(v12, v37);
    KeReleaseGuardedMutex(v12);
    return (char *)FsRtlEmptyFreePoolList((_QWORD **)v37);
  }
  return result;
}
