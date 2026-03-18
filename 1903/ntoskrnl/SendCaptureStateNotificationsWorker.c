/*
 * XREFs of SendCaptureStateNotificationsWorker @ 0x1408FD480
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     ExSetTimer @ 0x1401147D0 (ExSetTimer.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpReleaseLoggerContext @ 0x1405C4F00 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C4F48 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1405C5338 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405D408C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405D4180 (EtwpFindGuidEntryByGuid.c)
 *     EtwpBuildNotificationPacket @ 0x140663208 (EtwpBuildNotificationPacket.c)
 *     EtwpSendDataBlock @ 0x140666224 (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x140666F2C (EtwpUnreferenceDataBlock.c)
 */

void __fastcall SendCaptureStateNotificationsWorker(_QWORD *P)
{
  char v2; // r13
  unsigned int *v3; // rax
  unsigned int *v4; // rdi
  volatile signed __int64 *v5; // rsi
  unsigned __int16 v6; // r15
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rsi
  __int64 *GuidEntryByGuid; // rax
  __int64 *v10; // r13
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v12; // r15
  int v13; // edi
  _WORD *v14; // r12
  bool v15; // zf
  unsigned __int8 v16; // [rsp+28h] [rbp-89h]
  __int16 v17; // [rsp+2Ah] [rbp-87h]
  volatile signed __int32 *v18; // [rsp+30h] [rbp-81h] BYREF
  _DWORD *v19; // [rsp+38h] [rbp-79h]
  __int64 v20; // [rsp+40h] [rbp-71h]
  unsigned int *v21; // [rsp+48h] [rbp-69h]
  _DWORD v22[30]; // [rsp+50h] [rbp-61h] BYREF
  __int64 v23; // [rsp+C8h] [rbp+17h] BYREF
  __int64 v24; // [rsp+D0h] [rbp+1Fh]

  v23 = 0LL;
  v24 = 0LL;
  v18 = 0LL;
  memset(&v22[2], 0, 0x70uLL);
  v2 = 0;
  if ( P )
  {
    v3 = EtwpAcquireLoggerContextByLoggerId(P[4], *((unsigned __int16 *)P + 20), 0);
    v21 = v3;
    v4 = v3;
    if ( v3 )
    {
      v5 = (volatile signed __int64 *)(v3 + 176);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v3 + 176), 0LL);
      v4[274] = 0;
      if ( v4[84] )
      {
        v6 = *((_WORD *)v4 + 536);
        if ( v6 )
        {
          v20 = v6;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * v6, 0x74777445u);
          v19 = PoolWithTag;
          if ( PoolWithTag )
          {
            memmove(PoolWithTag, *((const void **)v4 + 135), 16LL * v6);
            if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v5);
            KeAbPostRelease((ULONG_PTR)v5);
            v22[0] = 3;
            v22[1] = 120;
            v8 = v19;
            do
            {
              GuidEntryByGuid = EtwpFindGuidEntryByGuid(P[4], v8, 0);
              v10 = GuidEntryByGuid;
              if ( GuidEntryByGuid )
              {
                CurrentThread = KeGetCurrentThread();
                --CurrentThread->KernelApcDisable;
                ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
                v12 = v10[7];
                v10[52] = (__int64)KeGetCurrentThread();
                *(_OWORD *)&v22[10] = *(_OWORD *)v8;
                if ( (__int64 *)v12 != v10 + 7 )
                {
                  do
                  {
                    if ( (*(_BYTE *)(v12 + 98) & 1) == 0 )
                    {
                      v13 = 0;
                      v14 = (_WORD *)v10 + 67;
                      do
                      {
                        v16 = *(_BYTE *)(v12 + 100);
                        if ( ((unsigned __int8)(1 << v13) & v16) != 0 )
                        {
                          if ( *(_DWORD *)(v14 - 3) )
                          {
                            v17 = *((_WORD *)P + 20);
                            if ( *v14 == v17 )
                            {
                              EtwpComputeRegEntryEnableInfo(v12, (__int64)&v22[18]);
                              HIWORD(v22[19]) = v17;
                              v22[18] = 2;
                              if ( (int)EtwpBuildNotificationPacket((__int64)v10, v22, v16, &v18) >= 0 )
                              {
                                EtwpSendDataBlock(v12, (__int64)v18);
                                EtwpUnreferenceDataBlock(v18);
                              }
                            }
                          }
                        }
                        ++v13;
                        v14 += 16;
                      }
                      while ( v13 < 8 );
                    }
                    v12 = *(_QWORD *)v12;
                  }
                  while ( (__int64 *)v12 != v10 + 7 );
                  v8 = v19;
                }
                v10[52] = 0LL;
                ExReleasePushLockEx((ULONG_PTR)(v10 + 51), 0LL);
                KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                EtwpUnreferenceGuidEntry(v10);
              }
              v8 += 4;
              v15 = v20-- == 1;
              v19 = v8;
            }
            while ( !v15 );
            v4 = v21;
            v2 = 0;
            v5 = (volatile signed __int64 *)(v21 + 176);
            if ( !v21[84] )
            {
LABEL_30:
              EtwpReleaseLoggerContext(v4, 0);
              if ( v2 )
                return;
              goto LABEL_31;
            }
            v24 = -1LL;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
            if ( *((_WORD *)v4 + 536) && !v4[274] )
            {
              ExSetTimer(*((_QWORD *)v4 + 136), *((_QWORD *)v4 + 133), 0LL, (__int64)&v23);
              v4[274] = 1;
              v2 = 1;
            }
          }
        }
      }
      if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v5);
      KeAbPostRelease((ULONG_PTR)v5);
      goto LABEL_30;
    }
  }
LABEL_31:
  ExFreePoolWithTag(P, 0);
}
