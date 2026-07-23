/*
 * XREFs of EtwpTrackBinaryForSession @ 0x1408C3CE4
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x14070B344 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     RtlCompareMemory @ 0x1401C5D30 (RtlCompareMemory.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpTrackBinaryForSession(__int64 a1, const void **a2, __int64 a3)
{
  volatile signed __int64 *v3; // r15
  SIZE_T v6; // rdi
  void ***v7; // rsi
  void ***v8; // rbx
  SIZE_T v9; // r14
  char *PoolWithTag; // rax
  char *v11; // rdi
  __int64 v12; // rbx
  char *v13; // rbx
  void **v14; // rax
  unsigned int v15; // r8d
  unsigned int v16; // edx
  __int64 v17; // r9
  __int64 v18; // rcx
  char *v19; // rax
  __int64 v20; // rcx
  void **v21; // rcx
  void **v22; // rax

  v3 = (volatile signed __int64 *)(a1 + 704);
  ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
  LOWORD(v6) = *(_WORD *)a2;
  if ( *(_DWORD *)(a1 + 340) + (unsigned int)*(unsigned __int16 *)a2 > *(_DWORD *)(a1 + 4) )
    goto LABEL_22;
  v7 = (void ***)(a1 + 1024);
  v8 = *(void ****)(a1 + 1024);
  if ( v8 == (void ***)(a1 + 1024) )
  {
LABEL_7:
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v6 + 50LL, 0x62777445u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_22;
    *((_DWORD *)PoolWithTag + 5) = 1;
    *((_DWORD *)PoolWithTag + 6) = 1;
    *(_OWORD *)(PoolWithTag + 28) = *(_OWORD *)a3;
    v12 = *((unsigned int *)PoolWithTag + 5);
    *((_DWORD *)PoolWithTag + 4) = *(unsigned __int16 *)a2 + 2;
    v13 = &PoolWithTag[16 * v12];
    memmove(v13 + 28, a2[1], *(unsigned __int16 *)a2);
    *(_WORD *)&v13[2 * ((unsigned __int64)*(unsigned __int16 *)a2 >> 1) + 28] = 0;
    *(_DWORD *)(a1 + 340) += *((_DWORD *)v11 + 4) + 16;
    goto LABEL_9;
  }
  v9 = *(unsigned __int16 *)a2;
  while ( 1 )
  {
    if ( *((_DWORD *)v8 + 4) == v9 + 2 )
    {
      v6 = *(unsigned __int16 *)a2;
      v9 = v6;
      if ( RtlCompareMemory((char *)&v8[2 * *((unsigned int *)v8 + 5) + 3] + 4, a2[1], v6) == v6 )
        break;
    }
    v8 = (void ***)*v8;
    if ( v8 == v7 )
      goto LABEL_7;
  }
  v15 = *((_DWORD *)v8 + 5);
  v16 = 0;
  if ( !v15 )
  {
LABEL_16:
    if ( v15 >= 0x10 )
      goto LABEL_22;
    v19 = (char *)ExAllocatePoolWithTag(PagedPool, *((_DWORD *)v8 + 4) + 16 * (v15 + 3), 0x62777445u);
    v11 = v19;
    if ( !v19 )
      goto LABEL_22;
    memmove(v19 + 28, (char *)v8 + 28, 16LL * *((unsigned int *)v8 + 5));
    *(_OWORD *)&v11[16 * *((unsigned int *)v8 + 5) + 28] = *(_OWORD *)a3;
    v20 = (unsigned int)(*((_DWORD *)v8 + 5) + 1);
    *((_DWORD *)v11 + 5) = v20;
    *((_DWORD *)v11 + 6) = *((_DWORD *)v8 + 6) + 1;
    *((_DWORD *)v11 + 4) = *((_DWORD *)v8 + 4);
    memmove(&v11[16 * v20 + 28], (char *)&v8[2 * *((unsigned int *)v8 + 5) + 3] + 4, *((unsigned int *)v8 + 4));
    v21 = *v8;
    if ( (*v8)[1] != v8 || (v22 = v8[1], *v22 != v8) )
LABEL_10:
      __fastfail(3u);
    *v22 = v21;
    v21[1] = v22;
    ExFreePoolWithTag(v8, 0);
LABEL_9:
    v14 = *v7;
    if ( (*v7)[1] == v7 )
    {
      *(_QWORD *)v11 = v14;
      *((_QWORD *)v11 + 1) = v7;
      v14[1] = v11;
      *v7 = (void **)v11;
      _InterlockedOr((volatile signed __int32 *)(a1 + 836), 0xC0u);
      goto LABEL_22;
    }
    goto LABEL_10;
  }
  while ( 1 )
  {
    v17 = 2LL * v16;
    v18 = *(_QWORD *)a3 - *(_QWORD *)((char *)&v8[v17 + 3] + 4);
    if ( *(void ***)a3 == *(void ***)((char *)&v8[v17 + 3] + 4) )
      v18 = *(_QWORD *)(a3 + 8) - *(_QWORD *)((char *)&v8[v17 + 4] + 4);
    if ( !v18 )
      break;
    if ( ++v16 >= v15 )
      goto LABEL_16;
  }
LABEL_22:
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  return KeAbPostRelease((ULONG_PTR)v3);
}
