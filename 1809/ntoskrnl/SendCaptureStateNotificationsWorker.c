/*
 * XREFs of SendCaptureStateNotificationsWorker @ 0x1408C18E0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExSetTimer @ 0x1400FD0B0 (ExSetTimer.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     EtwpSendDataBlock @ 0x1405C139C (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x1405C1D74 (EtwpUnreferenceDataBlock.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405C5098 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405C5190 (EtwpFindGuidEntryByGuid.c)
 *     EtwpReleaseLoggerContext @ 0x1405C6160 (EtwpReleaseLoggerContext.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1405C639C (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpBuildNotificationPacket @ 0x140659E08 (EtwpBuildNotificationPacket.c)
 */

void __fastcall SendCaptureStateNotificationsWorker(__int64 a1)
{
  __int64 v2; // rsi
  volatile signed __int64 *v3; // rdi
  unsigned __int16 v4; // r14
  _DWORD *PoolWithTag; // rax
  _DWORD *v6; // r12
  _QWORD *GuidEntryByGuid; // rax
  __int64 v8; // r13
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v10; // r14
  unsigned __int16 *v11; // r8
  int v12; // edi
  __int64 v13; // r8
  __int64 v14; // rsi
  unsigned __int8 v15; // [rsp+28h] [rbp-89h]
  unsigned int v16; // [rsp+2Ch] [rbp-85h]
  volatile signed __int32 *v17; // [rsp+30h] [rbp-81h] BYREF
  unsigned __int16 *v18; // [rsp+38h] [rbp-79h]
  __int64 v19; // [rsp+40h] [rbp-71h]
  __int64 v20; // [rsp+48h] [rbp-69h]
  _BYTE v21[120]; // [rsp+50h] [rbp-61h] BYREF
  _QWORD v22[2]; // [rsp+C8h] [rbp+17h] BYREF

  v17 = 0LL;
  memset(v21, 0, sizeof(v21));
  v3 = (volatile signed __int64 *)(a1 + 704);
  v20 = *(_QWORD *)(a1 + 1064);
  v2 = v20;
  ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
  *(_DWORD *)(v20 + 64) = 0;
  if ( !*(_DWORD *)(a1 + 336)
    || (v4 = *(_WORD *)(v2 + 16)) == 0
    || (v19 = v4, PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * v4, 0x74777445u), (v6 = PoolWithTag) == 0LL) )
  {
LABEL_25:
    if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    KeAbPostRelease((ULONG_PTR)v3);
    goto LABEL_28;
  }
  memmove(PoolWithTag, *(const void **)(v2 + 24), 16LL * v4);
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704));
  KeAbPostRelease(a1 + 704);
  *(_DWORD *)v21 = 3;
  *(_DWORD *)&v21[4] = 120;
  do
  {
    GuidEntryByGuid = EtwpFindGuidEntryByGuid(*(_QWORD *)(a1 + 1080), v6, 0);
    v8 = (__int64)GuidEntryByGuid;
    if ( GuidEntryByGuid )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
      v10 = *(_QWORD *)(v8 + 56);
      *(_QWORD *)(v8 + 416) = KeGetCurrentThread();
      for ( *(_OWORD *)&v21[40] = *(_OWORD *)v6; v10 != v8 + 56; v10 = *(_QWORD *)v10 )
      {
        if ( (*(_BYTE *)(v10 + 98) & 1) == 0 )
        {
          v11 = (unsigned __int16 *)(v8 + 134);
          v12 = 0;
          v18 = (unsigned __int16 *)(v8 + 134);
          do
          {
            v15 = *(_BYTE *)(v10 + 100);
            if ( ((unsigned __int8)(1 << v12) & v15) != 0 )
            {
              if ( *(_DWORD *)(v11 - 3) )
              {
                v16 = *(_DWORD *)a1;
                if ( *v11 == *(_DWORD *)a1 )
                {
                  EtwpComputeRegEntryEnableInfo(v10, &v21[72]);
                  *(_WORD *)&v21[78] = v16;
                  *(_DWORD *)&v21[72] = 2;
                  if ( (int)EtwpBuildNotificationPacket(v8, v21, v15, &v17) >= 0 )
                  {
                    EtwpSendDataBlock(v10, (__int64)v17, v13);
                    EtwpUnreferenceDataBlock(v17);
                  }
                  v11 = v18;
                }
              }
            }
            v11 += 16;
            ++v12;
            v18 = v11;
          }
          while ( v12 < 8 );
        }
      }
      *(_QWORD *)(v8 + 416) = 0LL;
      ExReleasePushLockEx(v8 + 408, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      EtwpUnreferenceGuidEntry((volatile signed __int64 *)v8);
    }
    v6 += 4;
    --v19;
  }
  while ( v19 );
  v14 = v20;
  v3 = (volatile signed __int64 *)(a1 + 704);
  if ( *(_DWORD *)(a1 + 336) )
  {
    v22[1] = -1LL;
    v22[0] = 0LL;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v3, 0LL);
    if ( *(_WORD *)(v14 + 16) && !*(_DWORD *)(v14 + 64) )
    {
      ExSetTimer(*(_QWORD *)(v14 + 8), *(_QWORD *)v14, 0LL, (__int64)v22);
      *(_DWORD *)(v14 + 64) = 1;
    }
    goto LABEL_25;
  }
LABEL_28:
  EtwpReleaseLoggerContext((unsigned int *)a1, 0);
}
