/*
 * XREFs of PfpRpCHashDeleteEntries @ 0x14069F228
 * Callers:
 *     PfpRpControlRequestUpdate @ 0x14069F080 (PfpRpControlRequestUpdate.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14012F3D0 (ExfAcquireReleasePushLockExclusive.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpRpCHashDeleteEntries(__int64 a1, __int64 a2, signed __int64 *a3, unsigned int a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v8; // r12
  unsigned int v9; // edi
  unsigned int v10; // esi
  void *v11; // r15
  struct _KTHREAD *v12; // rax
  char v13; // dl
  unsigned int v14; // ebp
  int v15; // ecx
  unsigned int v16; // eax
  int v17; // r9d
  unsigned int v18; // esi
  char *v19; // r15
  char *v20; // rdx
  size_t v21; // r8
  int v22; // r12d
  char v23; // bp
  size_t v24; // rax
  unsigned __int64 v25; // r8
  struct _KTHREAD *v26; // rax
  unsigned int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // r9
  unsigned __int64 i; // rax
  __int64 v32; // r9
  char *v33; // rax
  signed __int32 v34[8]; // [rsp+0h] [rbp-98h] BYREF
  unsigned __int64 v35; // [rsp+20h] [rbp-78h]
  char *PoolWithTag; // [rsp+28h] [rbp-70h]
  unsigned __int64 v37; // [rsp+30h] [rbp-68h]
  char *v38; // [rsp+38h] [rbp-60h]
  volatile signed __int64 *v39; // [rsp+40h] [rbp-58h]
  PVOID P[2]; // [rsp+48h] [rbp-50h]
  int v41; // [rsp+A0h] [rbp+8h]
  char Size; // [rsp+A8h] [rbp+10h]
  size_t Sizea; // [rsp+A8h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (volatile signed __int64 *)(a1 + 128);
  v39 = (volatile signed __int64 *)(a1 + 128);
  ExAcquirePushLockExclusiveEx(a1 + 128, 0LL);
  v9 = 0;
  v10 = *(_DWORD *)(a2 + 12) << *(_DWORD *)(a2 + 8);
  if ( v10 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v10, 0x48436650u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      v12 = KeGetCurrentThread();
      --v12->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)a3, 0LL);
      v13 = -1;
      *(_OWORD *)P = *(_OWORD *)a2;
      Size = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)P, 8));
      v14 = 1 << Size;
      v15 = -1;
      v16 = 1 << Size;
      if ( 1 << Size )
      {
        do
        {
          ++v15;
          v16 >>= 1;
        }
        while ( v16 );
      }
      v17 = v15 + 1;
      if ( ((v14 - 1) & v14) == 0 )
        v17 = v15;
      LODWORD(v35) = v17;
      v18 = v10 >> v17;
      if ( ((v18 - 1) & v18) != 0 )
      {
        for ( ; v18; v18 >>= 1 )
          ++v13;
        v18 = 1 << v13;
      }
      v41 = 0;
      memset(v11, 0, (unsigned __int64)v18 << v17);
      v19 = (char *)P[0];
      v20 = (char *)P[0] + ((unsigned __int64)HIDWORD(P[1]) << Size);
      v38 = v20;
      if ( P[0] < v20 )
      {
        v21 = v14;
        v22 = 0;
        v23 = v35;
        v24 = (unsigned int)v21;
        Sizea = v21;
        do
        {
          v25 = *(_QWORD *)v19;
          if ( *(_QWORD *)v19 )
          {
            if ( !a5 )
              goto LABEL_26;
            v28 = 0;
            if ( !a4 )
              goto LABEL_26;
            do
            {
              if ( *(_QWORD *)(a5 + 8LL * v28) == v25 )
                break;
              ++v28;
            }
            while ( v28 < a4 );
            if ( v28 >= a4 )
            {
LABEL_26:
              v37 = HIDWORD(v25);
              v35 = v25 >> 24;
              if ( v18 )
              {
                v29 = 0LL;
                v30 = v18 - 1;
                for ( i = HIBYTE(v25)
                        + 37
                        * (BYTE6(v25)
                         + 37
                         * (BYTE5(v25)
                          + 37
                          * ((unsigned __int8)v37
                           + 37
                           * ((unsigned __int8)v35
                            + 37
                            * (BYTE2(v25) + 37 * (BYTE1(v25) + 37 * ((unsigned int)(unsigned __int8)v25 + 11623883)))))));
                      ;
                      i = v18 - 1 )
                {
                  v32 = i & v30;
                  v33 = &PoolWithTag[v32 << v23];
                  if ( !*(_QWORD *)v33 || *(_QWORD *)v33 == v25 )
                    break;
                  if ( !v29 )
                  {
                    v29 = 2654435761u * v25 + 1;
                    if ( ((-79 * (_BYTE)v25) & 1) != 0 )
                      v29 = 2654435761u * v25;
                  }
                  v30 = v29 + v32;
                }
              }
              else
              {
                v33 = 0LL;
              }
              memmove(v33, v19, Sizea);
              v20 = v38;
              ++v22;
            }
            v24 = Sizea;
          }
          v19 += v24;
        }
        while ( v19 < v20 );
        v41 = v22;
        v8 = v39;
      }
      *(_QWORD *)a2 = PoolWithTag;
      *(_DWORD *)(a2 + 16) = v41;
      if ( _InterlockedCompareExchange64(a3, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(a3);
      KeAbPostRelease((ULONG_PTR)a3);
      KeLeaveCriticalRegion();
      v26 = KeGetCurrentThread();
      --v26->KernelApcDisable;
      _InterlockedOr(v34, 0);
      if ( (*a3 & 1) != 0 )
        ExfAcquireReleasePushLockExclusive((unsigned __int64 *)a3);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      ExFreePoolWithTag(P[0], 0);
    }
    else
    {
      v9 = -1073741670;
    }
  }
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KeLeaveCriticalRegion();
  return v9;
}
