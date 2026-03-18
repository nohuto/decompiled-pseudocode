/*
 * XREFs of ExFreeHeapPool @ 0x140064DB0
 * Callers:
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1400B4B80 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     ExFreeCacheAwareRundownProtection @ 0x1400B5C70 (ExFreeCacheAwareRundownProtection.c)
 *     ExGetSessionPoolTagInfo @ 0x140116488 (ExGetSessionPoolTagInfo.c)
 *     ExFreePoolEx @ 0x14012F3D0 (ExFreePoolEx.c)
 *     AdtpCleanupParameterAllocations @ 0x1401329CC (AdtpCleanupParameterAllocations.c)
 *     AdtpPackageParameters @ 0x140132AB8 (AdtpPackageParameters.c)
 *     ExpFinalizeTimerDeletion @ 0x14013C660 (ExpFinalizeTimerDeletion.c)
 *     ExFreeAutoExpandPushLock @ 0x14016E2D0 (ExFreeAutoExpandPushLock.c)
 *     ExpSaPageGroupDescriptorFree @ 0x14016EB78 (ExpSaPageGroupDescriptorFree.c)
 *     BiWasFirmwareModified @ 0x1401779D4 (BiWasFirmwareModified.c)
 *     BgpFwAllocateMemory @ 0x140178CE0 (BgpFwAllocateMemory.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x14018DD04 (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegLoadLicInformation @ 0x14018E308 (RtlpMuiRegLoadLicInformation.c)
 *     ExFreeCacheAwarePushLock @ 0x140339A60 (ExFreeCacheAwarePushLock.c)
 *     ExGetWakeTimerList @ 0x14033B5D0 (ExGetWakeTimerList.c)
 *     ExpAllocateAsid @ 0x14033D9DC (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x14033DD5C (ExpPrepareNewSvmDevice.c)
 *     ExpResourceTimeoutCaptureLiveDump @ 0x14033ECB0 (ExpResourceTimeoutCaptureLiveDump.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14033F578 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x14033F788 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     WheapFreeErrorRecord @ 0x140340678 (WheapFreeErrorRecord.c)
 *     WheaReportHwErrorDeviceDriver @ 0x140340A70 (WheaReportHwErrorDeviceDriver.c)
 *     WheaTelemetryLogErrorRecord @ 0x140341D1C (WheaTelemetryLogErrorRecord.c)
 *     ApiSetReleaseSchema @ 0x140343440 (ApiSetReleaseSchema.c)
 *     ApiSetComposeSchema @ 0x140343458 (ApiSetComposeSchema.c)
 *     sub_140344B10 @ 0x140344B10 (sub_140344B10.c)
 *     sub_1403450CC @ 0x1403450CC (sub_1403450CC.c)
 *     AdtpBuildAccessReasonAuditString @ 0x140347490 (AdtpBuildAccessReasonAuditString.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14034793C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x1403483F4 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     BiLogFileOwnerProcess @ 0x140348C2C (BiLogFileOwnerProcess.c)
 *     _SafeReallocBlob @ 0x14034E890 (_SafeReallocBlob.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CcInitializeCacheManager @ 0x140A03BC8 (CcInitializeCacheManager.c)
 *     VhdiInitializeBootDisk @ 0x140A3F040 (VhdiInitializeBootDisk.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x140A3F880 (VhdiQueryVolumeVhdFilePath.c)
 * Callees:
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x14001D800 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpSegPageRangeShrink @ 0x14001E830 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpEnvGetHeapManager @ 0x14001FDB8 (RtlpHpEnvGetHeapManager.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     ExAcquireSpinLockShared @ 0x140061980 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiDeterminePoolType @ 0x140061A60 (MiDeterminePoolType.c)
 *     RtlpHpVsContextFree @ 0x140062F20 (RtlpHpVsContextFree.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140065650 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     RtlpHpLargeFree @ 0x14010DFD0 (RtlpHpLargeFree.c)
 *     RtlpHpQueryVA @ 0x1401108D8 (RtlpHpQueryVA.c)
 *     RtlpHpLfhBucketUpdateStats @ 0x1401110A8 (RtlpHpLfhBucketUpdateStats.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x1401158A0 (RtlCSparseBitmapBitmaskRead.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140126754 (ExpRemovePoolTrackerExpansion.c)
 *     PspReturnResourceQuota @ 0x14012C7C4 (PspReturnResourceQuota.c)
 *     ExpHpIsSpecialPoolHeap @ 0x14019CEDC (ExpHpIsSpecialPoolHeap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     KeCheckForTimer @ 0x1402A6D58 (KeCheckForTimer.c)
 *     RtlpLogHeapFailure @ 0x14031A17C (RtlpLogHeapFailure.c)
 *     RtlpHpExtrasGet @ 0x14031B598 (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeap @ 0x14031B6AC (RtlpHpSizeHeap.c)
 *     VerifierFreeTrackedPool @ 0x1403289B0 (VerifierFreeTrackedPool.c)
 *     EtwTracePool @ 0x14032DF54 (EtwTracePool.c)
 *     ExpCheckForResource @ 0x14033AB64 (ExpCheckForResource.c)
 *     ExpCheckForLookaside @ 0x14033BE78 (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x14033C354 (ExpCheckForWorker.c)
 *     ExpFreeHeapSpecialPool @ 0x14033F270 (ExpFreeHeapSpecialPool.c)
 *     VfFreePoolNotification @ 0x14097D3B0 (VfFreePoolNotification.c)
 */

__int64 __fastcall ExFreeHeapPool(ULONG_PTR BugCheckParameter2)
{
  char v2; // al
  int v3; // eax
  __int64 v4; // rcx
  ULONG_PTR v5; // rax
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned int v8; // r15d
  unsigned int v9; // ebp
  int v10; // r12d
  __int64 v11; // r14
  int v12; // r11d
  __int64 v13; // r9
  unsigned int v14; // edx
  __int64 v15; // r8
  int v16; // eax
  _DWORD *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  int v21; // ecx
  unsigned int v22; // esi
  int v23; // eax
  __int64 v24; // rbx
  unsigned __int64 v25; // r8
  char v26; // cl
  __int64 v27; // rdx
  char v28; // al
  char v29; // al
  __int64 v30; // rdx
  __int64 result; // rax
  struct _KPROCESS *v32; // r14
  ULONG_PTR v33; // r12
  __int64 v34; // r9
  volatile signed __int64 *v35; // r10
  unsigned __int64 v36; // r13
  unsigned __int64 v37; // rdx
  __int64 v38; // r11
  ULONG_PTR BugCheckParameter4; // rcx
  unsigned __int64 v40; // r8
  signed __int64 v41; // rdx
  bool v42; // zf
  signed __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rcx
  int v46; // edi
  KIRQL v47; // r12
  __int64 v48; // r9
  volatile signed __int32 *v49; // r10
  unsigned __int64 v50; // r11
  int v51; // r14d
  unsigned __int64 v52; // r8
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // r8
  unsigned __int64 v55; // r8
  __int64 v56; // r8
  _QWORD *v57; // rax
  __int64 v58; // rax
  _QWORD *HeapManager; // rax
  __int64 v60; // rax
  int v61; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v63; // rax
  __int64 v64; // r9
  char *v65; // [rsp+30h] [rbp-E8h]
  __int64 v66; // [rsp+40h] [rbp-D8h]
  unsigned __int64 *v67; // [rsp+50h] [rbp-C8h] BYREF
  unsigned __int64 *v68; // [rsp+58h] [rbp-C0h]
  volatile signed __int64 *v69; // [rsp+60h] [rbp-B8h]
  __int64 v70; // [rsp+68h] [rbp-B0h]
  __int128 v71; // [rsp+80h] [rbp-98h] BYREF
  __int128 v72; // [rsp+90h] [rbp-88h] BYREF
  _OWORD v73[2]; // [rsp+A0h] [rbp-78h] BYREF
  char v74; // [rsp+120h] [rbp+8h]
  unsigned int v75; // [rsp+128h] [rbp+10h] BYREF
  char v76; // [rsp+130h] [rbp+18h] BYREF
  int v77; // [rsp+138h] [rbp+20h]
  int v78; // [rsp+13Ch] [rbp+24h]

  if ( BugCheckParameter2 >= 0xFFFF800000000000uLL && byte_140467440[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
    v2 = 5;
  else
    v2 = 3;
  v66 = 256LL;
  LOBYTE(v66) = v2;
  v73[1] = (unsigned __int64)v66;
  if ( (_WORD)BugCheckParameter2 )
  {
    v3 = 0;
LABEL_6:
    v4 = v3;
    v77 = 0x100000;
    v78 = 0x1000000;
    v5 = BugCheckParameter2 & ~((unsigned int)*(&v77 + v3) - 1LL);
    v6 = (RtlpHpHeapGlobals ^ v5 ^ *(_QWORD *)(v5 + 16) ^ 0xA2E64EADA2E64EADuLL) - 192 * v4 - 256;
    goto LABEL_7;
  }
  v71 = (unsigned __int64)v66;
  HeapManager = RtlpHpEnvGetHeapManager(&v71);
  v60 = RtlCSparseBitmapBitmaskRead(HeapManager + 2, 2 * ((BugCheckParameter2 - HeapManager[1]) >> 20));
  if ( v60 )
  {
    v3 = v60 - 1;
    if ( v3 != 2 )
      goto LABEL_6;
  }
  v72 = (unsigned __int64)v66;
  RtlpHpQueryVA(BugCheckParameter2, &v72, &v67, &v76);
  v6 = *v67;
LABEL_7:
  if ( !v6 )
    KeBugCheckEx(0xC2u, 0LL, 0LL, BugCheckParameter2, 0LL);
  if ( ExpSpecialAllocations && (unsigned int)ExpHpIsSpecialPoolHeap(v6) )
  {
    if ( _InterlockedExchangeAdd(&ExpSpecialAllocations, 0xFFFFFFFF) == 1 )
      _InterlockedDecrement(&dword_140466950);
    return ExpFreeHeapSpecialPool(v6, BugCheckParameter2);
  }
  if ( (BugCheckParameter2 & 0xFFF) != 0 )
  {
    v7 = BugCheckParameter2 - 16;
    if ( (*(_BYTE *)(BugCheckParameter2 - 13) & 4) != 0 )
    {
      v7 -= 16LL * (unsigned __int8)*(_WORD *)v7;
      *(_BYTE *)(v7 + 3) |= 4u;
    }
    v8 = *(unsigned __int8 *)(v7 + 3);
    v9 = *(_DWORD *)(v7 + 4);
    if ( (v8 & 8) != 0 )
    {
      v32 = (struct _KPROCESS *)(v7 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v7 + 8));
      if ( v32 )
      {
        if ( (unsigned __int64)v32 < 0xFFFF800000000000uLL || (v32->Header.Type & 0x7F) != 3 )
          KeBugCheckEx(0xC2u, 0xDuLL, v7 + 16, *(unsigned int *)(v7 + 4), v7 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v7 + 8));
        v33 = 16LL * (unsigned __int8)*(_WORD *)(v7 + 2);
        if ( v32 != PsInitialSystemProcess )
        {
          v65 = *(char **)((v7 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v7 + 8)) + 0x410);
          v34 = v8 & 1;
          v74 = PspResourceFlags[8 * v34];
          v70 = v34 << 7;
          v35 = (volatile signed __int64 *)&v65[128 * v34];
          v69 = v35;
          _m_prefetchw((const void *)v35);
          v36 = *(_QWORD *)&v65[v70];
          v37 = *(_QWORD *)&v65[v70 + 64];
          if ( *(_QWORD *)&v65[v70 + 80] )
          {
            if ( v37 > v36 )
            {
              v68 = (unsigned __int64 *)(0x140000000LL + 56LL * (v8 & 1) + 4418344);
              v54 = *v68;
              if ( v37 - v36 > *v68 )
              {
                if ( v54 > v33 )
                  v54 = v33;
                if ( v37 == _InterlockedCompareExchange64(v35 + 8, v37 - v54, v37) )
                {
                  v55 = _InterlockedExchangeAdd64(v35 + 9, v54) + v54;
                  if ( v55 > *v68 )
                  {
                    v56 = _InterlockedExchange64(v35 + 9, 0LL);
                    if ( v56 )
                    {
                      PspReturnResourceQuota(v8 & 1, v35, v56, 0LL);
                      v35 = v69;
                      v34 = v8 & 1;
                    }
                  }
                }
              }
            }
          }
          v38 = v70;
          BugCheckParameter4 = v33;
          while ( 1 )
          {
            do
            {
              if ( BugCheckParameter4 >= v36 )
              {
                v40 = v36;
                v41 = 0LL;
              }
              else
              {
                v40 = BugCheckParameter4;
                v41 = v36 - BugCheckParameter4;
              }
              v43 = _InterlockedCompareExchange64(v35, v41, v36);
              v42 = v36 == v43;
              v36 = v43;
            }
            while ( !v42 );
            BugCheckParameter4 -= v40;
            if ( !BugCheckParameter4 )
              break;
            if ( v65 == (char *)&PspSystemQuotaBlock )
              KeBugCheckEx(0x21u, (ULONG_PTR)v32, v8 & 1, v33, BugCheckParameter4);
            v65 = (char *)&PspSystemQuotaBlock;
            v35 = (volatile signed __int64 *)((char *)&PspSystemQuotaBlock + v38);
            _m_prefetchw((char *)&PspSystemQuotaBlock + v38);
            v36 = *(_QWORD *)((char *)&PspSystemQuotaBlock + v38);
          }
          if ( (v74 & 4) != 0 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)&v32[1].ThreadListHead.Blink + v34, -(__int64)v33);
        }
        ObDereferenceObjectDeferDeleteWithTag(v32, *(_DWORD *)(v7 + 4));
      }
    }
    v10 = v7 + 16;
    v11 = 16LL * (unsigned __int8)*(_WORD *)(v7 + 2);
  }
  else
  {
    v46 = MiDeterminePoolType(BugCheckParameter2);
    if ( v46 == 32 )
      v46 = 0;
    v47 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
    if ( (v46 & 0x20) != 0 )
    {
      v48 = *(_QWORD *)(qword_1404659D8 + 1272);
      v49 = (volatile signed __int32 *)(qword_1404659D8 + 1144);
      v50 = *(_QWORD *)(qword_1404659D8 + 1280);
    }
    else
    {
      v48 = PoolBigPageTable;
      v49 = &ExpPoolBigEntriesInUse;
      v50 = PoolBigPageTableSize;
    }
LABEL_80:
    v51 = 1;
    v52 = (((40543 * (unsigned __int64)(unsigned int)(BugCheckParameter2 >> 12)) >> 32) ^ (40543
                                                                                         * (unsigned int)(BugCheckParameter2 >> 12))) & (unsigned int)(v50 - 1);
    while ( *(_QWORD *)(v48 + 24 * v52) != BugCheckParameter2 )
    {
      v52 = (unsigned int)(v52 + 1);
      if ( (unsigned int)v52 >= v50 )
      {
        if ( !v51 )
        {
LABEL_117:
          if ( (v46 & 0x21) != 0
            || v48 != PoolBigPageTable
            || (unsigned int)MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process) == -1
            || (v48 = *(_QWORD *)(qword_1404659D8 + 1272),
                v49 = (volatile signed __int32 *)(qword_1404659D8 + 1144),
                v50 = *(_QWORD *)(qword_1404659D8 + 1280),
                !v48)
            || !v50 )
          {
            KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter2, v46, 0LL);
          }
          goto LABEL_80;
        }
        v52 = 0LL;
        v51 = 0;
      }
    }
    v53 = v48 + 24 * v52;
    if ( !v53 )
      goto LABEL_117;
    v9 = *(_DWORD *)(v53 + 8);
    v11 = *(_QWORD *)(v53 + 16);
    v8 = (*(_DWORD *)(v53 + 12) >> 8) & 0xFFF;
    _InterlockedDecrement(v49);
    _InterlockedIncrement64((volatile signed __int64 *)v53);
    ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v47 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v47);
    v7 = BugCheckParameter2;
    v10 = BugCheckParameter2;
  }
  if ( (ExpPoolFlags & 0x207) != 0 )
  {
    if ( (ExpPoolFlags & 0x200) != 0 && !v8 )
      ExpCheckForLookaside(v7, v11);
    if ( (ExpPoolFlags & 1) != 0 )
      KeCheckForTimer(v7);
    if ( (ExpPoolFlags & 4) != 0 )
      ExpCheckForResource(v7, v11);
    if ( (ExpPoolFlags & 2) != 0 )
      ExpCheckForWorker(v7);
  }
  if ( (ExpPoolFlags & 0x10) != 0 )
    VfFreePoolNotification(v7, v11);
  if ( v9 == PoolHitTag )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(3618, v8, v9, v10, v11);
  if ( (v8 & 0x20) != 0 )
  {
    v13 = ExpSessionPoolTrackTable;
    v12 = ExpSessionPoolTrackTableMask;
  }
  else
  {
    v12 = PoolTrackTableMask;
    v13 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
  }
  v14 = v12 & ((40543 * v9) ^ ((40543 * (unsigned __int64)v9) >> 32));
  while ( 1 )
  {
    v15 = 56LL * v14;
    v16 = *(_DWORD *)(v15 + v13);
    v17 = (_DWORD *)(v15 + v13);
    if ( v16 == v9 )
      break;
    if ( v16 || (v8 & 0x20) != 0 || (v61 = *(_DWORD *)(v15 + PoolTrackTable)) == 0 )
    {
      v14 = v12 & (v14 + 1);
      if ( v14 == (v12 & ((40543 * v9) ^ ((40543 * (unsigned __int64)v9) >> 32))) )
      {
        ExpRemovePoolTrackerExpansion(v9, v11, v8);
        goto LABEL_28;
      }
    }
    else
    {
      *v17 = v61;
    }
  }
  if ( (v8 & 1) != 0 )
  {
    v18 = 8LL;
    v19 = 12LL;
  }
  else
  {
    v18 = 2LL;
    v19 = 6LL;
  }
  _InterlockedIncrement64((volatile signed __int64 *)&v17[v19]);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&v17[v18], -v11);
LABEL_28:
  if ( (v8 & 0x40) != 0 )
    VerifierFreeTrackedPool(BugCheckParameter2, v11);
  v20 = *(_QWORD *)(v6 + 40);
  if ( (unsigned __int64)(v11 - 513) <= 0xD7F && v20 )
  {
    v44 = v20 + (((unsigned int)RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v11 + 15) >> 4] - 33 + 1LL) << 6);
    ++*(_DWORD *)(v44 + 28);
    if ( *(_WORD *)v44 < *(_WORD *)(v44 + 16) )
      return (__int64)RtlpInterlockedPushEntrySList((PSLIST_HEADER)v44, (PSLIST_ENTRY)v7);
    ++*(_DWORD *)(v44 + 32);
  }
  v21 = *(_DWORD *)(v6 + 220);
  v22 = *(_DWORD *)(v6 + 20) & 0x11000001;
  if ( v21 && v21 == KeGetCurrentThread()[1].CurrentRunTime )
    v22 = *(_DWORD *)(v6 + 20) & 0x11000000 | 1;
  if ( (v22 & 0x1000000) != 0
    || !*(_DWORD *)(v6 + 24)
    || (v63 = RtlpHpExtrasGet(v6, v7, v22, 0LL), v64 = v63, (unsigned __int64)(v63 - 1) > 0xFFFFFFFFFFFFFFFDuLL)
    || (result = *(unsigned __int8 *)(v63 + 2), (result & 0xF) == 0)
    || (result & 0xF) == 1
    && (result = ((__int64 (__fastcall *)(unsigned __int64, unsigned __int64, __int64, __int64))CLFS_LSN_NULL_EXT)(
                   v6,
                   v7,
                   3LL,
                   v64 + 16),
        (int)result >= 0) )
  {
    if ( (*(_DWORD *)(v6 + 20) & 0x10000000) != 0 && RtlpHpSizeHeap(v6, v7, v22) == -1 )
      return RtlpLogHeapFailure(9, v6, v7, 0, 0LL, 0LL);
    if ( (_WORD)v7 )
    {
      v23 = 0;
    }
    else
    {
      v73[0] = *(_OWORD *)v6;
      v57 = RtlpHpEnvGetHeapManager(v73);
      v58 = RtlCSparseBitmapBitmaskRead(v57 + 2, 2 * ((v7 - v57[1]) >> 20));
      if ( !v58 )
        return RtlpHpLargeFree(v6, v7, v22);
      v23 = v58 - 1;
      if ( v23 == 2 )
        return RtlpHpLargeFree(v6, v7, v22);
    }
    v24 = 192LL * v23 + 256 + v6;
    v25 = v7 & *(_QWORD *)v24;
    if ( (RtlpHpHeapGlobals ^ v24 ^ v25 ^ *(_QWORD *)(v25 + 0x10)) == 0xA2E64EADA2E64EADuLL )
    {
      v26 = *(_BYTE *)(v24 + 8);
      v27 = v25 + 32 * ((unsigned __int64)(unsigned int)(v7 - v25) >> v26);
      if ( v27 )
      {
        v28 = *(_BYTE *)(v27 + 24);
        if ( (v28 & 1) != 0 )
        {
          if ( (v28 & 2) != 0 )
          {
            if ( (v28 & 0xCu) >= 8 || (((1 << v26) - 1) & v7) == 0 )
            {
LABEL_45:
              if ( v7 <= ((unsigned __int64)v27 & *(_QWORD *)v24) + ((v27 - (v27 & *(_QWORD *)v24)) >> 5 << v26) )
                return RtlpHpSegPageRangeShrink(v24, v27, v25, v22);
              v29 = *(_BYTE *)(v27 + 24) & 0xC;
              v30 = (v27 & *(_QWORD *)v24) + ((v27 - (v27 & *(_QWORD *)v24)) >> 5 << v26);
              if ( v29 == 8 )
                return RtlpHpLfhSubsegmentFreeBlock(*(_QWORD *)(v24 + 24), v30, v7, v22);
              result = RtlpHpVsContextFree(*(_QWORD *)(v24 + 32), v30, v7, v22, &v75);
              if ( (_DWORD)result )
              {
                v45 = *(_QWORD *)(v24 + 24);
                result = (unsigned int)*(unsigned __int16 *)(v45 + 60) - 16;
                if ( v75 <= (unsigned int)result )
                  return RtlpHpLfhBucketUpdateStats(v45, v75, 0LL);
              }
              return result;
            }
          }
          else
          {
            v27 -= 32LL * *(unsigned __int8 *)(v27 + 31);
            LODWORD(v25) = *(unsigned __int8 *)(v27 + 24);
            if ( (v25 & 3) == 3 )
            {
              LOBYTE(v25) = v25 & 0xC;
              if ( (unsigned __int8)v25 >= 8u )
                goto LABEL_45;
            }
          }
        }
      }
    }
    return RtlpLogHeapFailure(9, *(_QWORD *)(v24 + 56), v7, 0, 0LL, 0LL);
  }
  return result;
}
