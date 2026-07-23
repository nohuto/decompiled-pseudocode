/*
 * XREFs of PfpRpCHashGrow @ 0x1406B7094
 * Callers:
 *     PfpRpCHashAddEntries @ 0x140667A68 (PfpRpCHashAddEntries.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfpRpCHashGrow(__int64 a1, __m128i *a2, ULONG_PTR a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v7; // r12
  unsigned int v8; // edi
  unsigned int v9; // edi
  unsigned int v10; // edi
  unsigned int v11; // esi
  char v12; // dl
  unsigned int v13; // r14d
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // r9d
  unsigned int v17; // edi
  unsigned __int64 *v18; // r15
  unsigned __int64 v19; // rax
  int v20; // r12d
  unsigned __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r9
  unsigned __int64 i; // rax
  __int64 v25; // r9
  char *v26; // rax
  struct _KTHREAD *v27; // rax
  struct _KTHREAD *v29; // rax
  char *PoolWithTag; // [rsp+28h] [rbp-50h]
  unsigned __int64 v31; // [rsp+30h] [rbp-48h]
  volatile signed __int64 *v32; // [rsp+38h] [rbp-40h]
  __m128i v33; // [rsp+40h] [rbp-38h]
  __int64 v34; // [rsp+50h] [rbp-28h]
  __m128i Src; // [rsp+58h] [rbp-20h]
  char v36; // [rsp+C0h] [rbp+48h]
  char v37; // [rsp+C8h] [rbp+50h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (volatile signed __int64 *)(a1 + 128);
  v32 = (volatile signed __int64 *)(a1 + 128);
  ExAcquirePushLockExclusiveEx(a1 + 128, 0LL);
  v8 = a2->m128i_u32[3];
  if ( 2 * a2[1].m128i_i32[0] < v8 )
  {
    v29 = KeGetCurrentThread();
    v11 = 0;
    --v29->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a3, 0LL);
  }
  else
  {
    v9 = 2 * v8;
    if ( v9 < 8 )
      v9 = 8;
    v10 = v9 << a2->m128i_i32[2];
    v11 = 0;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v10, 0x48436650u);
    if ( PoolWithTag )
    {
      v12 = -1;
      Src = *a2;
      v36 = _mm_cvtsi128_si32(_mm_srli_si128(*a2, 8));
      v13 = 1 << v36;
      v14 = -1;
      v15 = 1 << v36;
      if ( 1 << v36 )
      {
        do
        {
          ++v14;
          v15 >>= 1;
        }
        while ( v15 );
      }
      v16 = v14 + 1;
      if ( ((v13 - 1) & v13) == 0 )
        v16 = v14;
      v37 = v16;
      v17 = v10 >> v16;
      if ( ((v17 - 1) & v17) != 0 )
      {
        for ( ; v17; v17 >>= 1 )
          ++v12;
        v17 = 1 << v12;
      }
      LODWORD(v34) = 0;
      v33.m128i_i64[1] = __PAIR64__(v17, v16);
      v33.m128i_i64[0] = (__int64)PoolWithTag;
      memset(PoolWithTag, 0, (unsigned __int64)v17 << v16);
      v18 = (unsigned __int64 *)Src.m128i_i64[0];
      v19 = Src.m128i_i64[0] + ((unsigned __int64)Src.m128i_u32[3] << v36);
      v31 = v19;
      if ( Src.m128i_i64[0] < v19 )
      {
        v20 = 0;
        do
        {
          v21 = *v18;
          if ( *v18 )
          {
            if ( v17 )
            {
              v22 = 0LL;
              v23 = v17 - 1;
              for ( i = HIBYTE(v21)
                      + 37
                      * (BYTE6(v21)
                       + 37
                       * (BYTE5(v21)
                        + 37
                        * (BYTE4(v21)
                         + 37
                         * (BYTE3(v21)
                          + 37 * (BYTE2(v21) + 37 * (BYTE1(v21) + 37 * ((unsigned int)(unsigned __int8)v21 + 11623883)))))));
                    ;
                    i = v17 - 1 )
              {
                v25 = i & v23;
                v26 = &PoolWithTag[v25 << v37];
                if ( !*(_QWORD *)v26 || *(_QWORD *)v26 == v21 )
                  break;
                if ( !v22 )
                {
                  v22 = 2654435761u * v21 + 1;
                  if ( ((-79 * (_BYTE)v21) & 1) != 0 )
                    v22 = 2654435761u * v21;
                }
                v23 = v22 + v25;
              }
            }
            else
            {
              v26 = 0LL;
            }
            memmove(v26, v18, v13);
            v19 = v31;
            LODWORD(v34) = ++v20;
          }
          v18 = (unsigned __int64 *)((char *)v18 + v13);
        }
        while ( (unsigned __int64)v18 < v19 );
        v7 = v32;
      }
      v27 = KeGetCurrentThread();
      --v27->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(a3, 0LL);
      *a2 = v33;
      a2[1].m128i_i64[0] = v34;
      if ( Src.m128i_i64[0] )
      {
        *(_QWORD *)Src.m128i_i64[0] = *a4;
        *a4 = Src.m128i_i64[0];
      }
    }
    else
    {
      v11 = -1073741670;
    }
  }
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KeLeaveCriticalRegion();
  return v11;
}
