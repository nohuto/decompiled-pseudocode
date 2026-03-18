/*
 * XREFs of SendCaptureStateNotificationsWorker @ 0x1408FCE40
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ExSetTimer @ 0x140114060 (ExSetTimer.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     EtwpReleaseLoggerContext @ 0x1405C5400 (EtwpReleaseLoggerContext.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1405C5838 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405D458C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405D4680 (EtwpFindGuidEntryByGuid.c)
 *     EtwpSendDataBlock @ 0x140693638 (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x14069434C (EtwpUnreferenceDataBlock.c)
 *     EtwpBuildNotificationPacket @ 0x1406AAA68 (EtwpBuildNotificationPacket.c)
 */

void __fastcall SendCaptureStateNotificationsWorker(__int64 a1)
{
  __int64 v2; // rsi
  volatile signed __int64 *v3; // rdi
  unsigned __int16 v4; // r15
  _DWORD *PoolWithTag; // rax
  _DWORD *v6; // rdi
  __int64 *GuidEntryByGuid; // rax
  __int64 *v8; // r13
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v10; // r15
  int v11; // esi
  unsigned __int16 *v12; // r12
  __int64 v13; // rsi
  unsigned __int8 v14; // [rsp+28h] [rbp-89h]
  volatile signed __int32 *v15; // [rsp+30h] [rbp-81h] BYREF
  __int64 v16; // [rsp+38h] [rbp-79h]
  _DWORD *v17; // [rsp+40h] [rbp-71h]
  __int64 v18; // [rsp+48h] [rbp-69h]
  _DWORD v19[30]; // [rsp+50h] [rbp-61h] BYREF
  __int64 v20; // [rsp+C8h] [rbp+17h] BYREF
  __int64 v21; // [rsp+D0h] [rbp+1Fh]

  v20 = 0LL;
  v21 = 0LL;
  v15 = 0LL;
  memset(&v19[2], 0, 0x70uLL);
  v3 = (volatile signed __int64 *)(a1 + 704);
  v18 = *(_QWORD *)(a1 + 1064);
  v2 = v18;
  ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
  *(_DWORD *)(v18 + 64) = 0;
  if ( !*(_DWORD *)(a1 + 336)
    || (v4 = *(_WORD *)(v2 + 16)) == 0
    || (v16 = v4, PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * v4, 0x74777445u), (v17 = PoolWithTag) == 0LL) )
  {
LABEL_24:
    if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    KeAbPostRelease((ULONG_PTR)v3);
    goto LABEL_27;
  }
  memmove(PoolWithTag, *(const void **)(v2 + 24), 16LL * v4);
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704));
  KeAbPostRelease(a1 + 704);
  v19[0] = 3;
  v19[1] = 120;
  v6 = v17;
  do
  {
    GuidEntryByGuid = EtwpFindGuidEntryByGuid(*(_QWORD *)(a1 + 1080), v6, 0);
    v8 = GuidEntryByGuid;
    if ( GuidEntryByGuid )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
      v10 = v8[7];
      v8[52] = (__int64)KeGetCurrentThread();
      for ( *(_OWORD *)&v19[10] = *(_OWORD *)v6; (__int64 *)v10 != v8 + 7; v10 = *(_QWORD *)v10 )
      {
        if ( (*(_BYTE *)(v10 + 98) & 1) == 0 )
        {
          v11 = 0;
          v12 = (unsigned __int16 *)v8 + 67;
          do
          {
            v14 = *(_BYTE *)(v10 + 100);
            if ( ((unsigned __int8)(1 << v11) & v14) != 0 )
            {
              if ( *(_DWORD *)(v12 - 3) )
              {
                if ( *v12 == *(_DWORD *)a1 )
                {
                  EtwpComputeRegEntryEnableInfo(v10, (__int64)&v19[18]);
                  HIWORD(v19[19]) = *(_WORD *)a1;
                  v19[18] = 2;
                  if ( (int)EtwpBuildNotificationPacket((__int64)v8, v19, v14, &v15) >= 0 )
                  {
                    EtwpSendDataBlock(v10, (__int64)v15);
                    EtwpUnreferenceDataBlock(v15);
                  }
                }
              }
            }
            ++v11;
            v12 += 16;
          }
          while ( v11 < 8 );
        }
      }
      v8[52] = 0LL;
      ExReleasePushLockEx((ULONG_PTR)(v8 + 51), 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      EtwpUnreferenceGuidEntry(v8);
    }
    v6 += 4;
    --v16;
  }
  while ( v16 );
  v13 = v18;
  v3 = (volatile signed __int64 *)(a1 + 704);
  if ( *(_DWORD *)(a1 + 336) )
  {
    v21 = -1LL;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v3, 0LL);
    if ( *(_WORD *)(v13 + 16) && !*(_DWORD *)(v13 + 64) )
    {
      ExSetTimer(*(_QWORD *)(v13 + 8), *(_QWORD *)v13, 0LL, (__int64)&v20);
      *(_DWORD *)(v13 + 64) = 1;
    }
    goto LABEL_24;
  }
LABEL_27:
  EtwpReleaseLoggerContext((unsigned int *)a1, 0);
}
