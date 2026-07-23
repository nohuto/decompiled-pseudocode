/*
 * XREFs of PsCreateVsmEnclave @ 0x14088EDFC
 * Callers:
 *     MiCreateVsmEnclave @ 0x14085B008 (MiCreateVsmEnclave.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406C3B20 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     VslCreateEnclave @ 0x14081914C (VslCreateEnclave.c)
 *     PspVsmEnclaveHashAllocator @ 0x14088FBCC (PspVsmEnclaveHashAllocator.c)
 */

__int64 __fastcall PsCreateVsmEnclave(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, ULONG a6, _QWORD *a7)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v12; // rsi
  char *PoolWithQuotaTag; // rdi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  char *v16; // rax
  char *v17; // r14
  int Enclave; // edi
  signed __int64 v20; // rax
  struct _KTHREAD *v21; // rax
  volatile signed __int64 *v22; // r12
  __int64 v23; // r15
  __int64 v24; // rsi
  char *v25; // r8
  char v26; // cl
  unsigned __int64 v27; // rcx
  unsigned int v28; // r9d
  __int64 v29; // r10
  __int64 v30; // r12
  _QWORD *v31; // r11
  unsigned __int64 v32; // rcx
  void *v33; // rcx
  int v34; // eax
  __int64 v35; // r9
  unsigned int v36; // r8d
  char v37; // al
  unsigned __int64 v38; // rdi
  __int64 v39; // rcx
  unsigned __int64 v40; // rdx

  if ( !*(_QWORD *)(a1 + 1816) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v12 = (volatile signed __int64 *)(a1 + 1832);
    ExAcquirePushLockExclusiveEx(a1 + 1832, 0LL);
    if ( !*(_QWORD *)(a1 + 1816) )
    {
      PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x20uLL, 0x48457350u);
      if ( PoolWithQuotaTag )
      {
        v14 = (unsigned __int64)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x10uLL, 0x48457350u);
        *(_QWORD *)(a1 + 1816) = v14;
        if ( v14 )
        {
          *(_DWORD *)v14 = 0;
          *(_QWORD *)(v14 + 8) = PoolWithQuotaTag;
          *(_DWORD *)(v14 + 4) = 128;
          v15 = v14 | 1;
          if ( (PoolWithQuotaTag + 32 >= PoolWithQuotaTag ? 4 : 0) != 0 )
            memset64(PoolWithQuotaTag, v15, PoolWithQuotaTag + 32 >= PoolWithQuotaTag ? 4 : 0);
        }
        else
        {
          ExFreePoolWithTag(PoolWithQuotaTag, 0);
        }
      }
    }
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v12);
    KeAbPostRelease((ULONG_PTR)v12);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( !*(_QWORD *)(a1 + 1816) )
      return 3221225626LL;
  }
  v16 = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x88uLL, 0x65567350u);
  v17 = v16;
  if ( !v16 )
    return 3221225626LL;
  memset(v16, 0, 0x88uLL);
  Enclave = VslCreateEnclave((__int64)v17, a1, a2, a3, a4, a5, a6, (_QWORD *)v17 + 3);
  if ( Enclave >= 0 )
  {
    *((_QWORD *)v17 + 2) = 1LL;
    *((_QWORD *)v17 + 4) = a3;
    *((_QWORD *)v17 + 14) = 0LL;
    *((_QWORD *)v17 + 13) = 0LL;
    if ( !*((_QWORD *)v17 + 1) )
    {
      do
      {
        v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1824), 1uLL);
        *((_QWORD *)v17 + 1) = v20 + 1;
      }
      while ( v20 == -1 );
    }
    *((_QWORD *)v17 + 6) = 0LL;
    KeInitializeEvent((PRKEVENT)(v17 + 80), NotificationEvent, 0);
    v21 = KeGetCurrentThread();
    --v21->KernelApcDisable;
    v22 = (volatile signed __int64 *)(a1 + 1832);
    ExAcquirePushLockExclusiveEx(a1 + 1832, 0LL);
    v23 = *(_QWORD *)(a1 + 1816);
    if ( *(_DWORD *)v23 >= (unsigned int)(4 * (*(_DWORD *)(v23 + 4) >> 5)) )
    {
      v24 = (unsigned int)(2 * (*(_DWORD *)(v23 + 4) >> 5));
      if ( (unsigned int)v24 < 4 )
        v24 = 4LL;
      v25 = (char *)PspVsmEnclaveHashAllocator(8LL * (unsigned int)v24);
      if ( v25 )
      {
        if ( (((_DWORD)v24 - 1) & (unsigned int)v24) != 0 )
        {
          v26 = -1;
          do
          {
            ++v26;
            LODWORD(v24) = (unsigned int)v24 >> 1;
          }
          while ( (_DWORD)v24 );
          v24 = (unsigned int)(1 << v26);
        }
        if ( (unsigned int)v24 > 0x4000000 )
          v24 = 0x4000000LL;
        v27 = (unsigned int)v24;
        if ( v25 > &v25[8 * v24] )
          v27 = 0LL;
        if ( v27 )
          memset64(v25, v23 | 1, v27);
        v28 = 0;
        v29 = -1LL << (*(_BYTE *)(v23 + 4) & 0x1F);
        if ( (*(_DWORD *)(v23 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v30 = *(_QWORD *)(v23 + 8);
            while ( 1 )
            {
              v31 = *(_QWORD **)(v30 + 8LL * v28);
              if ( ((unsigned __int8)v31 & 1) != 0 )
                break;
              *(_QWORD *)(v30 + 8LL * v28) = *v31;
              v32 = ((((unsigned __int64)v29 & v31[1]) >> 56)
                   + 37
                   * ((unsigned __int8)(((unsigned __int64)v29 & v31[1]) >> 48)
                    + 37
                    * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v29 & v31[1]) >> 32) >> 8)
                     + 37
                     * ((unsigned __int8)(((unsigned __int64)v29 & v31[1]) >> 32)
                      + 37
                      * ((((unsigned int)v29 & (_DWORD)v31[1]) >> 24)
                       + 37
                       * ((unsigned __int8)(((unsigned int)v29 & (_DWORD)v31[1]) >> 16)
                        + 37
                        * (37 * ((unsigned __int8)(v29 & v31[1]) + 11623883)
                         + (unsigned __int8)((unsigned __int16)(v29 & v31[1]) >> 8)))))))) & (unsigned int)(v24 - 1);
              *v31 = *(_QWORD *)&v25[8 * v32];
              *(_QWORD *)&v25[8 * v32] = v31;
            }
            ++v28;
          }
          while ( v28 < *(_DWORD *)(v23 + 4) >> 5 );
          v22 = (volatile signed __int64 *)(a1 + 1832);
        }
        v33 = *(void **)(v23 + 8);
        v34 = (32 * v24) | *(_DWORD *)(v23 + 4) & 0x1F;
        *(_QWORD *)(v23 + 8) = v25;
        *(_DWORD *)(v23 + 4) = v34;
        if ( v33 )
          SC_ENV::Free(v33);
      }
    }
    v35 = *(_QWORD *)(a1 + 1816);
    v36 = *(_DWORD *)(v35 + 4);
    v37 = v36 & 0x1F;
    v38 = *((_QWORD *)v17 + 1) & (-1LL << (v36 & 0x1F));
    v39 = *(_QWORD *)(v35 + 8);
    v40 = (HIBYTE(v38)
         + 37
         * ((unsigned __int8)((*((_QWORD *)v17 + 1) & (unsigned __int64)(-1LL << v37)) >> 48)
          + 37
          * ((unsigned __int8)((unsigned __int16)((*((_QWORD *)v17 + 1) & (unsigned __int64)(-1LL << v37)) >> 32) >> 8)
           + 37
           * ((unsigned __int8)((*((_QWORD *)v17 + 1) & (unsigned __int64)(-1LL << v37)) >> 32)
            + 37
            * (((*((_DWORD *)v17 + 2) & (unsigned int)(-1 << v37)) >> 24)
             + 37
             * ((unsigned __int8)((*((_DWORD *)v17 + 2) & (unsigned int)(-1 << v37)) >> 16)
              + 37
              * (37 * ((unsigned __int8)v38 + 11623883)
               + (unsigned __int8)((unsigned __int16)(*((_WORD *)v17 + 4) & (-1 << v37)) >> 8)))))))) & ((v36 >> 5) - 1);
    *(_QWORD *)v17 = *(_QWORD *)(v39 + 8 * v40);
    *(_QWORD *)(v39 + 8 * v40) = v17;
    ++*(_DWORD *)v35;
    if ( (_InterlockedExchangeAdd64(v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v22);
    KeAbPostRelease((ULONG_PTR)v22);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    *a7 = v17;
    return 0LL;
  }
  else
  {
    ExFreePoolWithTag(v17, 0);
    return (unsigned int)Enclave;
  }
}
