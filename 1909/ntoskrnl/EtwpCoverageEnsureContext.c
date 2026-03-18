/*
 * XREFs of EtwpCoverageEnsureContext @ 0x1407844F8
 * Callers:
 *     EtwTelemetryCoverageReport @ 0x14015CE30 (EtwTelemetryCoverageReport.c)
 *     EtwSetProcessTelemetryCoverage @ 0x1406D5F10 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeSetTimer2 @ 0x14009C070 (KeSetTimer2.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KeInitializeTimer2 @ 0x1400E8C90 (KeInitializeTimer2.c)
 *     TelemetryCoverageStringHashInternal @ 0x14012BBE4 (TelemetryCoverageStringHashInternal.c)
 *     EtwTelemetryCoverageReport @ 0x14015CE30 (EtwTelemetryCoverageReport.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MmUnmapViewInSystemSpace @ 0x140648600 (MmUnmapViewInSystemSpace.c)
 *     MmCreateSection @ 0x140650DB0 (MmCreateSection.c)
 *     MmMapViewInSystemSpace @ 0x1406A3A80 (MmMapViewInSystemSpace.c)
 *     EtwpCoverageEnsureStringBuffer @ 0x1407848E8 (EtwpCoverageEnsureStringBuffer.c)
 *     EtwpCoverageFreeStringBuffers @ 0x1408F2C34 (EtwpCoverageFreeStringBuffers.c)
 */

__int64 EtwpCoverageEnsureContext()
{
  unsigned int v0; // edx
  PVOID *PoolWithTag; // rax
  PVOID *v2; // rdi
  PVOID v3; // rax
  _QWORD *v4; // rcx
  unsigned __int64 v5; // rbp
  PVOID v6; // r8
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  int v9; // esi
  int v10; // ebx
  PVOID v11; // rcx
  PVOID *v12; // r14
  __int64 v13; // rdx
  _DWORD *v14; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  char v19; // cl
  PVOID v20; // rcx
  PVOID v21; // rcx
  _QWORD v22[11]; // [rsp+40h] [rbp-58h] BYREF
  int v23; // [rsp+A0h] [rbp+8h] BYREF
  int v24; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v25; // [rsp+B0h] [rbp+18h] BYREF
  ULONG_PTR ViewSize; // [rsp+B8h] [rbp+20h] BYREF

  if ( EtwpInitialized && (v0 = EtwpCoverageEntryCount) != 0 )
  {
    if ( (unsigned int)EtwpCoverageEntryCount >= 0x80000 )
      v0 = 0x80000;
    if ( v0 <= 0x40 )
      v0 = 64;
    if ( ((v0 - 1) & v0) != 0 )
    {
      v19 = -1;
      do
      {
        ++v19;
        v0 >>= 1;
      }
      while ( v0 );
      v0 = 1 << v19;
    }
    EtwpCoverageEntryCount = v0;
    if ( (unsigned int)EtwpCoverageFlushPeriod <= 0x3E8 )
      EtwpCoverageFlushPeriod = 1000;
    if ( (unsigned int)EtwpCoverageResetPeriod <= 0x36EE80 )
      EtwpCoverageResetPeriod = 3600000;
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x56777445u);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x48uLL);
      v3 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1B8uLL, 0x56777445u);
      *v2 = v3;
      if ( v3 )
      {
        memset(v3, 0, 0x1B8uLL);
        v4 = *v2;
        v4[3] = 0LL;
        v4[6] = v4 + 5;
        v4[5] = v4 + 5;
        v4[9] = EtwpCoverageHighIrqlCPWorkItemCallback;
        v4[10] = v2;
        v4[7] = 0LL;
        v2[7] = v2 + 6;
        v2[6] = v2 + 6;
        *((_DWORD *)v2 + 7) = EtwpCoverageFlushPeriod;
        v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *((_DWORD *)*v2 + 4) = v5;
        v6 = *v2;
        *((_DWORD *)v2 + 6) = v5;
        KeInitializeTimer2((__int64)v6 + 104);
        KeInitializeTimer2((__int64)*v2 + 240);
        v7 = *v2;
        v7[53] = EtwpCoverageResetWorkItemCallback;
        v7[54] = v2;
        v7[51] = 0LL;
        v8 = *v2;
        v8[49] = EtwpCoverageFlushWorkItemCallback;
        v8[50] = v2;
        v8[47] = 0LL;
        v9 = EtwpCoverageEnsureStringBuffer(v2);
        if ( v9 >= 0 )
        {
          v10 = 4 * EtwpCoverageEntryCount;
          v25 = 4LL * (unsigned int)EtwpCoverageEntryCount;
          v9 = MmCreateSection((int)v2 + 8, 983071LL, 0, &v25, 4, 0x8000000, 0LL, 0LL);
          if ( v9 >= 0 )
          {
            v11 = v2[1];
            v12 = v2 + 2;
            ViewSize = 0LL;
            v9 = MmMapViewInSystemSpace(v11, v2 + 2, &ViewSize);
            if ( v9 >= 0 )
            {
              v13 = 2LL;
              *(_BYTE *)*v12 = 2;
              *((_BYTE *)*v12 + 1) = 1;
              *((_DWORD *)*v12 + 6) = 1;
              *(_DWORD *)*v2 = *((_DWORD *)*v12 + 6);
              MEMORY[0xFFFFF7800000037C] = *((_DWORD *)*v12 + 6);
              *((_DWORD *)*v12 + 5) = v5;
              *((_DWORD *)*v2 + 5) = *((_DWORD *)*v12 + 5);
              *((_DWORD *)*v12 + 2) = EtwpCoverageEntryCount - 1;
              do
              {
                *((_DWORD *)*v12 + 1) = (unsigned int)(v10 - 52) >> 2;
                --v13;
              }
              while ( v13 );
              v14 = *v12;
              *((_DWORD *)v2 + 8) = 3 * ((unsigned int)(v10 - 52) >> 4);
              v14[4] = 4 * v14[1] + 52;
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
              EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
              if ( !EtwpCoverageContext )
              {
                v16 = (__int64)v2;
                v17 = (__int64)*v2;
                v2 = 0LL;
                EtwpCoverageContext = v16;
                EtwpCoverageNonPagedContext = v17;
                if ( EtwpCoverageCoreTracingEnabled )
                {
                  *(_WORD *)(*(_QWORD *)(v16 + 16) + 2LL) |= 1u;
                  MEMORY[0xFFFFF7800000037C] = -256;
                }
                v22[0] = 0LL;
                v22[1] = -1LL;
                KeSetTimer2(
                  *(_QWORD *)EtwpCoverageContext + 104LL,
                  -10000LL * (unsigned int)EtwpCoverageResetPeriod,
                  10000LL * (unsigned int)EtwpCoverageResetPeriod,
                  (__int64)v22);
              }
              EtwpCoverageLockOwner = 0LL;
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
              KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
              KeLeaveCriticalRegion();
              if ( (unsigned int)dword_140426FAC < MEMORY[0xFFFFF7800000037C] )
              {
                if ( !dword_140426FA8 )
                  dword_140426FA8 = TelemetryCoverageStringHashInternal(off_140426FA0, &v23);
                EtwTelemetryCoverageReport((__int64)&off_140426FA0);
              }
              if ( EtwpCoverageCoreTracingEnabled && (unsigned int)dword_140427FC4 < MEMORY[0xFFFFF7800000037C] )
              {
                if ( !dword_140427FC0 )
                  dword_140427FC0 = TelemetryCoverageStringHashInternal(off_140427FB8, &v24);
                EtwTelemetryCoverageReport((__int64)&off_140427FB8);
              }
              v9 = 0;
            }
          }
        }
      }
      else
      {
        v9 = -1073741670;
      }
      if ( v2 )
      {
        v20 = v2[2];
        if ( v20 )
        {
          MmUnmapViewInSystemSpace(v20);
          v2[2] = 0LL;
        }
        v21 = v2[1];
        if ( v21 )
        {
          ObfDereferenceObject(v21);
          v2[1] = 0LL;
        }
        if ( *v2 )
          ExFreePoolWithTag(*v2, 0x56777445u);
        EtwpCoverageFreeStringBuffers(v2, 0LL);
        ExFreePoolWithTag(v2, 0x56777445u);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v9;
}
