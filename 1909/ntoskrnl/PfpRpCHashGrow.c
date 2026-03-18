/*
 * XREFs of PfpRpCHashGrow @ 0x14076D9F4
 * Callers:
 *     PfpRpCHashAddEntries @ 0x1406A812C (PfpRpCHashAddEntries.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfpRpCHashGrow(__int64 a1, __m128i *a2, ULONG_PTR a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v7; // r12
  unsigned int v8; // esi
  unsigned int v9; // esi
  unsigned int v10; // esi
  unsigned int v11; // edi
  char v12; // dl
  __m128i v13; // xmm1
  unsigned int v14; // r15d
  int v15; // ecx
  unsigned int v16; // eax
  int v17; // r9d
  unsigned int v18; // esi
  __int64 *v19; // r14
  unsigned __int64 v20; // rax
  int v21; // r12d
  __int64 v22; // r8
  char *v23; // rax
  struct _KTHREAD *v24; // rax
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 j; // rax
  __int64 v29; // r9
  struct _KTHREAD *v30; // rax
  char *PoolWithTag; // [rsp+20h] [rbp-58h]
  unsigned __int64 v32; // [rsp+28h] [rbp-50h]
  volatile signed __int64 *v33; // [rsp+30h] [rbp-48h]
  __m128i v34; // [rsp+38h] [rbp-40h]
  __int64 v35; // [rsp+48h] [rbp-30h]
  __m128i Src; // [rsp+50h] [rbp-28h]
  char i; // [rsp+C0h] [rbp+48h]
  __int64 v38; // [rsp+C0h] [rbp+48h]
  char v39; // [rsp+C8h] [rbp+50h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (volatile signed __int64 *)(a1 + 128);
  v33 = (volatile signed __int64 *)(a1 + 128);
  ExAcquirePushLockExclusiveEx(a1 + 128, 0LL);
  v8 = a2->m128i_u32[3];
  if ( 2 * a2[1].m128i_i32[0] < v8 )
  {
    v30 = KeGetCurrentThread();
    v11 = 0;
    --v30->KernelApcDisable;
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
      v13 = _mm_srli_si128(*a2, 8);
      HIDWORD(v35) = 0;
      v14 = 1 << _mm_cvtsi128_si32(v13);
      v15 = -1;
      v16 = v14;
      for ( i = _mm_cvtsi128_si32(v13); v16; v16 >>= 1 )
        ++v15;
      v17 = v15 + 1;
      if ( ((v14 - 1) & v14) == 0 )
        v17 = v15;
      v39 = v17;
      v18 = v10 >> v17;
      if ( ((v18 - 1) & v18) != 0 )
      {
        for ( ; v18; v18 >>= 1 )
          ++v12;
        v18 = 1 << v12;
      }
      LODWORD(v35) = 0;
      v34.m128i_i64[1] = __PAIR64__(v18, v17);
      v34.m128i_i64[0] = (__int64)PoolWithTag;
      memset(PoolWithTag, 0, (unsigned __int64)v18 << v17);
      v19 = (__int64 *)Src.m128i_i64[0];
      v20 = Src.m128i_i64[0] + ((unsigned __int64)Src.m128i_u32[3] << i);
      v32 = v20;
      if ( Src.m128i_i64[0] < v20 )
      {
        v21 = 0;
        do
        {
          v22 = *v19;
          if ( *v19 )
          {
            if ( v18 )
            {
              v26 = v18 - 1;
              v27 = 0LL;
              v38 = *v19;
              for ( j = 37
                      * (BYTE6(v38)
                       + 37
                       * (BYTE5(v38)
                        + 37
                        * (BYTE4(v38)
                         + 37
                         * (BYTE3(v38) + 37 * (BYTE2(v38) + 37 * (BYTE1(v38) + 37 * ((unsigned __int8)v22 + 11623883)))))))
                      + (unsigned int)HIBYTE(v38); ; j = v18 - 1 )
              {
                v29 = j & v26;
                v23 = &PoolWithTag[v29 << v39];
                if ( !*(_QWORD *)v23 || *(_QWORD *)v23 == v22 )
                  break;
                if ( !v27 )
                {
                  v27 = 2654435761LL * v22 + 1;
                  if ( ((-79 * (_BYTE)v22) & 1) != 0 )
                    v27 = 2654435761LL * v22;
                }
                v26 = v27 + v29;
              }
            }
            else
            {
              v23 = 0LL;
            }
            memmove(v23, v19, v14);
            v20 = v32;
            LODWORD(v35) = ++v21;
          }
          v19 = (__int64 *)((char *)v19 + v14);
        }
        while ( (unsigned __int64)v19 < v20 );
        v7 = v33;
      }
      v24 = KeGetCurrentThread();
      --v24->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(a3, 0LL);
      *a2 = v34;
      a2[1].m128i_i64[0] = v35;
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
