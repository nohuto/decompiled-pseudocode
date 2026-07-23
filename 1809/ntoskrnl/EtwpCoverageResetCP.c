/*
 * XREFs of EtwpCoverageResetCP @ 0x1408B7EC8
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x1406B5220 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwTelemetryCoverageReport @ 0x14012A650 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageTableLocateInternal @ 0x14012A728 (TelemetryCoverageTableLocateInternal.c)
 *     EtwpCoverageValidateCP @ 0x14012A77C (EtwpCoverageValidateCP.c)
 *     TelemetryCoverageStringHashInternal @ 0x14012A838 (TelemetryCoverageStringHashInternal.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpCoverageFlushPending @ 0x1406859D0 (EtwpCoverageFlushPending.c)
 */

__int64 __fastcall EtwpCoverageResetCP(__int64 a1, __int64 a2)
{
  _DWORD *PoolWithTag; // r14
  unsigned int v3; // r12d
  struct _KTHREAD *CurrentThread; // rax
  int v7; // r11d
  _QWORD *v8; // rsi
  unsigned int v9; // r13d
  unsigned __int64 v10; // rbp
  _BYTE *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // r8
  _DWORD *v16; // rcx
  _DWORD *v17; // rdx
  int v18; // ecx
  __int64 v19; // rax
  __int64 i; // rsi
  unsigned int *v21; // rax
  unsigned int v22; // r11d
  unsigned int v24; // [rsp+68h] [rbp+10h] BYREF
  int v25; // [rsp+70h] [rbp+18h] BYREF
  unsigned int *Internal; // [rsp+78h] [rbp+20h]

  PoolWithTag = 0LL;
  v3 = 0;
  *(_DWORD *)(a2 + 12) = 0;
  if ( (unsigned int)dword_140402CBC < MEMORY[0xFFFFF7800000037C] )
  {
    if ( !dword_140402CB8 )
      dword_140402CB8 = TelemetryCoverageStringHashInternal(off_140402CB0, &v25);
    EtwTelemetryCoverageReport(&off_140402CB0);
  }
  if ( (unsigned int)EtwpCoverageValidateCP((_QWORD *)a2, &v24) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
    EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
    *(_DWORD *)(a1 + 24) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    Internal = TelemetryCoverageTableLocateInternal(*(unsigned int **)(a1 + 16), *(_DWORD *)(a2 + 8));
    if ( *Internal == v7 )
    {
      EtwpCoverageFlushPending((int **)a1);
      PoolWithTag = ExAllocatePoolWithTag(
                      PagedPool,
                      (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL)),
                      0x56777445u);
      if ( PoolWithTag )
      {
        v8 = *(_QWORD **)(a1 + 48);
        if ( v8 != (_QWORD *)(a1 + 48) )
        {
          v9 = v24;
          while ( 1 )
          {
            v10 = v8[3];
            v11 = v8 + 5;
            if ( (unsigned __int64)(v8 + 5) < v10 )
              break;
LABEL_18:
            v8 = (_QWORD *)*v8;
            if ( v8 == (_QWORD *)(a1 + 48) )
              goto LABEL_28;
          }
          v12 = v24;
          while ( 1 )
          {
            v13 = -1LL;
            do
              ++v13;
            while ( v11[v13] );
            if ( v13 == v12 )
            {
              if ( !strcmp(v11, *(const char **)a2) )
              {
                memmove(v11, &v11[v24 + 1], v10 - (_QWORD)&v11[v24 + 1]);
                v14 = 0LL;
                v8[3] -= v9 + 1;
                v15 = 0LL;
                v8[4] = v8[3];
                ++*(_DWORD *)(*(_QWORD *)(a1 + 16) + 12LL);
                *Internal = 0;
                --*(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
                v16 = *(_DWORD **)(a1 + 16);
                if ( v16[1] )
                {
                  v17 = *(_DWORD **)(a1 + 16);
                  do
                  {
                    v18 = v17[v15 + 13];
                    if ( v18 )
                    {
                      PoolWithTag[v14] = v18;
                      v14 = (unsigned int)(v14 + 1);
                      v16 = *(_DWORD **)(a1 + 16);
                      v17 = v16;
                      if ( (unsigned int)v14 >= v16[8] )
                        break;
                    }
                    v15 = (unsigned int)(v15 + 1);
                    v16 = v17;
                  }
                  while ( (unsigned int)v15 < v17[1] );
                }
                memset(v16 + 13, 0, 4LL * (unsigned int)v16[1]);
                v19 = *(_QWORD *)(a1 + 16);
                for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v19 + 32); v19 = *(_QWORD *)(a1 + 16) )
                {
                  v21 = TelemetryCoverageTableLocateInternal(*(unsigned int **)(a1 + 16), PoolWithTag[i]);
                  i = (unsigned int)(i + 1);
                  *v21 = v22;
                }
                v3 = 1;
                *(_DWORD *)(a2 + 12) = *(_DWORD *)(v19 + 24);
                break;
              }
              v12 = v24;
            }
            v11 += v13 + 1;
            if ( (unsigned __int64)v11 >= v10 )
              goto LABEL_18;
          }
        }
      }
    }
  }
LABEL_28:
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x56777445u);
  return v3;
}
