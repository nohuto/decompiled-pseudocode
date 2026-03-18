/*
 * XREFs of KeInitSystem @ 0x1409FD23C
 * Callers:
 *     Phase1InitializationIoReady @ 0x1409FE82C (Phase1InitializationIoReady.c)
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140A0816C (InitBootProcessor.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400052B0 (KeQueryActiveProcessorCountEx.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400888B0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140088A40 (ExReleaseFastMutexUnsafe.c)
 *     KeExpandKernelStackAndCalloutEx @ 0x1400C1850 (KeExpandKernelStackAndCalloutEx.c)
 *     KeQueryCycleCounterFrequency @ 0x14013D720 (KeQueryCycleCounterFrequency.c)
 *     HviIsAnyHypervisorPresent @ 0x1401806F0 (HviIsAnyHypervisorPresent.c)
 *     KeInitializeCatRegisters @ 0x140181FC8 (KeInitializeCatRegisters.c)
 *     KiRegisterForDisableFgBoostDecayRegistryNotification @ 0x14018A6C0 (KiRegisterForDisableFgBoostDecayRegistryNotification.c)
 *     KdEncodeDataBlock @ 0x14018AB58 (KdEncodeDataBlock.c)
 *     KiInitMachineDependent @ 0x14018ACAC (KiInitMachineDependent.c)
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1401BA32C (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     KiDetectTsx @ 0x1401BE2F8 (KiDetectTsx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x14028563C (HvlSetupPhysicalFaultNotificationQueue.c)
 *     KeRelaxTimingConstraints @ 0x1402A3174 (KeRelaxTimingConstraints.c)
 *     KiEpfDrainCompletionQueue @ 0x1402B3384 (KiEpfDrainCompletionQueue.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     KiInitializeProcessor @ 0x14059FC60 (KiInitializeProcessor.c)
 *     KeInitializeTimerTable @ 0x14074DAF0 (KeInitializeTimerTable.c)
 *     KiStartDpcThread @ 0x140757B74 (KiStartDpcThread.c)
 *     ExRegisterHost @ 0x140758824 (ExRegisterHost.c)
 *     KeFreeInitializationCode @ 0x1409D0B2C (KeFreeInitializationCode.c)
 *     KiInitializeVelocity @ 0x1409FD810 (KiInitializeVelocity.c)
 *     MmFreeLoaderBlock @ 0x1409FD9F8 (MmFreeLoaderBlock.c)
 *     KiIntSteerInit @ 0x1409FE344 (KiIntSteerInit.c)
 *     KiComputeNumaCosts @ 0x1409FE4E0 (KiComputeNumaCosts.c)
 *     KiInitDynamicTraceSupport @ 0x1409FE570 (KiInitDynamicTraceSupport.c)
 *     KeInitializeSchedulerAssist @ 0x140A22AE4 (KeInitializeSchedulerAssist.c)
 */

char __fastcall KeInitSystem(int a1)
{
  struct _KPRCB *v1; // r10
  unsigned __int64 v2; // rdx
  __int64 v3; // r10
  __int64 v4; // r10
  int v5; // eax
  ULONG ActiveProcessorCount; // r14d
  int v7; // ecx
  unsigned __int64 v8; // rcx
  unsigned int v9; // r8d
  unsigned int v10; // eax
  unsigned int v11; // r9d
  int v12; // eax
  unsigned __int64 v13; // rax
  ULONG v14; // edi
  __int64 *v15; // rsi
  __int64 v16; // r15
  __int64 v17; // rdx
  unsigned __int64 v18; // kr00_8
  unsigned __int64 v19; // rax
  NTSTATUS v20; // eax
  _QWORD *PoolWithTag; // rax
  __int64 v23; // rcx
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD v26[6]; // [rsp+30h] [rbp-30h] BYREF
  int v27; // [rsp+90h] [rbp+30h] BYREF
  __int64 v28; // [rsp+98h] [rbp+38h] BYREF

  if ( a1 )
  {
    if ( a1 != 1 )
    {
      ExAcquireFastMutexUnsafe(&KiDynamicProcessorLock);
      MmFreeLoaderBlock();
      KeLoaderBlock_0 = 0LL;
      ExReleaseFastMutexUnsafe(&KiDynamicProcessorLock);
      KiInitializeVelocity();
      KiRegisterForDisableFgBoostDecayRegistryNotification();
      if ( !HviIsAnyHypervisorPresent() )
        KeEnableWatchdogTimeout = 1;
      if ( (HvlpFlags & 0x100000) != 0 )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x4A0uLL, 0x4850654Bu);
        KiEpfHashTable = (__int64)PoolWithTag;
        if ( PoolWithTag )
        {
          v23 = 37LL;
          do
          {
            PoolWithTag[1] = PoolWithTag;
            *PoolWithTag = PoolWithTag;
            PoolWithTag[2] = 0LL;
            *((_DWORD *)PoolWithTag + 6) = 0;
            PoolWithTag += 4;
            --v23;
          }
          while ( v23 );
          LODWORD(KiEpfCompletionDpc) = 275;
          qword_140446DF8 = (__int64)KiEpfCompletionDpcRoutine;
          qword_140446E00 = 0LL;
          qword_140446E18 = 0LL;
          qword_140446DF0 = 0LL;
          if ( (int)HvlSetupPhysicalFaultNotificationQueue(&v28, &v27) >= 0 )
          {
            KiEpfCompletionQueueSize = (unsigned int)(v27 - 16) >> 3;
            KiEpfCompletionQueue = v28;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
            KiEpfDrainCompletionQueue();
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
            __writecr8(CurrentIrql);
          }
        }
      }
      KeFreeInitializationCode();
      return 1;
    }
    _InterlockedOr(dword_14058CCC8, 0x8000u);
    _InterlockedOr(dword_14058D0BC, 0x400000u);
    KiInitDynamicTraceSupport();
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    KiClockKeepAliveCycle = (ActiveProcessorCount + (KeMaximumIncrement + 29999999) / KeMaximumIncrement - 1)
                          / ActiveProcessorCount;
    if ( HviIsAnyHypervisorPresent() )
    {
      if ( !HvlHypervisorConnected || (HvlEnlightenments & 0x20) != 0 )
      {
        KeDpcWatchdogPeriod = 0;
        v7 = 1;
        KiDPCTimeout = 0;
      }
      else
      {
        v7 = 0;
      }
      KeRelaxTimingConstraints(v7);
    }
    v8 = (unsigned int)KeDpcWatchdogPeriod;
    if ( KeDpcWatchdogPeriod )
    {
      if ( (unsigned int)KeDpcWatchdogPeriod < 0x7D0 )
      {
        v8 = 2000LL;
        KeDpcWatchdogPeriod = 2000;
      }
      if ( (unsigned int)v8 > 0x3A980 )
      {
        v8 = 240000LL;
        KeDpcWatchdogPeriod = 240000;
      }
    }
    v9 = KiDPCTimeout;
    if ( KiDPCTimeout )
    {
      if ( (unsigned int)KiDPCTimeout < 0x14 )
      {
        v9 = 20;
        KiDPCTimeout = 20;
      }
      if ( v9 > 0x4E20 )
      {
        v9 = 20000;
        KiDPCTimeout = 20000;
      }
    }
    if ( ViVerifierEnabled )
    {
      v10 = KeVerifierDpcScalingFactor;
      if ( !KeVerifierDpcScalingFactor )
      {
        v10 = 1;
        KeVerifierDpcScalingFactor = 1;
      }
      if ( v10 > 0x64 )
      {
        v10 = 100;
        KeVerifierDpcScalingFactor = 100;
      }
      v8 = v10 * (unsigned int)v8;
      v9 *= v10;
      KeDpcWatchdogPeriod = v8;
      KiDPCTimeout = v9;
    }
    if ( (_DWORD)v8 )
    {
      if ( v9 )
      {
        if ( v9 < (unsigned int)v8 )
        {
          v11 = KeDpcWatchdogProfileOffset;
          if ( KeDpcWatchdogProfileOffset )
          {
            if ( (unsigned int)KeDpcWatchdogProfileOffset <= 0x3E8 )
            {
              v11 = 1000;
              KeDpcWatchdogProfileOffset = 1000;
            }
            if ( v11 > (unsigned int)v8 )
            {
              v11 = 10000;
              if ( (unsigned int)v8 <= 0x2710 )
                v11 = 1000;
              KeDpcWatchdogProfileOffset = v11;
            }
            v12 = v8 - v11;
            KiDpcWatchdogProfileCumulativeDpcThreshold = v8 - v11;
            if ( (unsigned int)v8 - v11 < 0x3E8 )
            {
              KiDpcWatchdogProfileCumulativeDpcThreshold = 1000;
              v12 = 1000;
            }
            v13 = v9 * v12 / v8;
            if ( v13 > 0xFFFFFFFF )
              LODWORD(v13) = -1;
            KiDpcWatchdogProfileSingleDpcThreshold = v13;
            if ( v9 - (unsigned int)v13 > v11 )
              KiDpcWatchdogProfileSingleDpcThreshold = 0;
            KiDpcWatchdogProfileArrayLength = 3328 * (v11 / 0x3E8);
            dword_140571364 = 3328 * (v11 / 0x3E8);
          }
        }
      }
    }
    v14 = 0;
    if ( ActiveProcessorCount )
    {
      v15 = KiProcessorBlock;
      while ( 1 )
      {
        v16 = *v15;
        KiInitializeProcessor(*v15);
        if ( KeThreadDpcEnable )
        {
          if ( (int)KiStartDpcThread(v16) < 0 )
            break;
        }
        ++v14;
        ++v15;
        if ( v14 >= ActiveProcessorCount )
          goto LABEL_55;
      }
    }
    else
    {
LABEL_55:
      KiComputeNumaCosts();
      SymCryptInitEnvWindowsKernelmodeWin8_1nLater();
      KiIntSteerInit();
      if ( (KeFeatureBits & 0x800000) != 0 && MEMORY[0xFFFFF780000005F0] || (_DWORD)KiIptMsrMask )
      {
        v26[0] = 65548LL;
        v26[2] = off_140375B00;
        v26[1] = 512LL;
        v26[3] = 0LL;
        v26[4] = 0LL;
        if ( (int)ExRegisterHost(&KiSupervisorStateExtensionHost, v17, (unsigned __int16 *)v26) < 0 )
          KiSupervisorStateExtensionHost = 0LL;
      }
      if ( KiInitMachineDependent() )
      {
        v18 = KeMaximumIncrement * KeQueryCycleCounterFrequency(KiProcessorBlock[0], 1);
        KiShortExecutionCycles = v18 / 0xA / 0xF0;
        KiCyclesPerClockQuantum = v18 / 0xA / 3;
        KiDirectQuantumTarget = v18 / 0xA / 3;
        KiLockQuantumTarget = 3 * KiCyclesPerClockQuantum;
        _BitScanReverse64(&v19, 6 * KeQueryCycleCounterFrequency(KiProcessorBlock[0], 0));
        KiFavoredCoreCycleTimeBits = v19;
        KdEncodeDataBlock();
        v20 = KeExpandKernelStackAndCalloutEx(KiVerifyScopesExecute, 0LL, 0xC000uLL, 1u, 0LL);
        if ( v20 < 0 )
          KeBugCheckEx(0x32u, v20, 0x5356694BuLL, 0LL, 0LL);
        return 1;
      }
    }
    return 0;
  }
  v1 = KeGetCurrentPrcb();
  if ( (KeFeatureBits2 & 0x8000) != 0 && KiDisableTsx && (v1->MsrIa32TsxCtrl & 3) != 3 )
  {
    v2 = v1->MsrIa32TsxCtrl | 3;
    v1->MsrIa32TsxCtrl = v2;
    __writemsr(0x122u, v2);
  }
  KiTsxSupported = KiDetectTsx();
  KeInitializeSchedulerAssist(v3);
  KeInitializeCatRegisters();
  v5 = KeInitializeTimerTable(v4);
  if ( v5 < 0 )
    KeBugCheckEx(0x31u, v5, 1uLL, 0LL, 0LL);
  if ( KiHrIncrement < (unsigned int)KeMinimumIncrement || KiHrIncrement > KeMaximumIncrement )
    KiHrIncrement = KeMinimumIncrement;
  return 1;
}
