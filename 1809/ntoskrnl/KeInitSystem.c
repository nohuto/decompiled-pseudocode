/*
 * XREFs of KeInitSystem @ 0x1409C5988
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x1409B5EDC (InitBootProcessor.c)
 *     Phase1InitializationIoReady @ 0x1409C5788 (Phase1InitializationIoReady.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140018980 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400189C0 (ExAcquireFastMutexUnsafe.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400A7860 (KeQueryActiveProcessorCountEx.c)
 *     KeExpandKernelStackAndCalloutEx @ 0x1400C9AB0 (KeExpandKernelStackAndCalloutEx.c)
 *     KeInitializeCatRegisters @ 0x1401439E0 (KeInitializeCatRegisters.c)
 *     HviIsAnyHypervisorPresent @ 0x140176CB0 (HviIsAnyHypervisorPresent.c)
 *     KdEncodeDataBlock @ 0x1401815D0 (KdEncodeDataBlock.c)
 *     KiInitMachineDependent @ 0x1401816E0 (KiInitMachineDependent.c)
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1401AF348 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     KiDetectTsx @ 0x1401B43D4 (KiDetectTsx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x140271924 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     KeRelaxTimingConstraints @ 0x14028D2C4 (KeRelaxTimingConstraints.c)
 *     KiEpfDrainCompletionQueue @ 0x14029C044 (KiEpfDrainCompletionQueue.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     KiInitializeProcessor @ 0x14057402C (KiInitializeProcessor.c)
 *     ExRegisterHost @ 0x14072885C (ExRegisterHost.c)
 *     KeInitializeTimerTable @ 0x14072ADB8 (KeInitializeTimerTable.c)
 *     KiStartDpcThread @ 0x1407376D8 (KiStartDpcThread.c)
 *     KeFreeInitializationCode @ 0x14098FB24 (KeFreeInitializationCode.c)
 *     KeInitializeSchedulerAssist @ 0x1409AC188 (KeInitializeSchedulerAssist.c)
 *     KiInitializeVelocity @ 0x1409C5FA8 (KiInitializeVelocity.c)
 *     MmFreeLoaderBlock @ 0x1409C6164 (MmFreeLoaderBlock.c)
 *     KiIntSteerInit @ 0x1409C6AB0 (KiIntSteerInit.c)
 *     KiComputeNumaCosts @ 0x1409C6C3C (KiComputeNumaCosts.c)
 */

char __fastcall KeInitSystem(int a1)
{
  struct _KPRCB *v1; // r10
  unsigned __int64 v2; // rdx
  __int64 v3; // r10
  __int64 v4; // r10
  int v5; // eax
  ULONG ActiveProcessorCount; // r15d
  int v7; // ecx
  unsigned __int64 v8; // rcx
  unsigned int v9; // r8d
  unsigned int v10; // eax
  unsigned int v11; // r9d
  int v12; // eax
  unsigned __int64 v13; // rax
  ULONG v14; // edi
  __int64 *v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  NTSTATUS v19; // eax
  _QWORD *PoolWithTag; // rax
  __int64 v22; // rcx
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD v25[5]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v26[5]; // [rsp+58h] [rbp-28h] BYREF
  int v27; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+38h] BYREF

  if ( a1 )
  {
    if ( a1 != 1 )
    {
      ExAcquireFastMutexUnsafe(&KiDynamicProcessorLock);
      MmFreeLoaderBlock();
      KeLoaderBlock_0 = 0LL;
      ExReleaseFastMutexUnsafe(&KiDynamicProcessorLock);
      KiInitializeVelocity();
      if ( !HviIsAnyHypervisorPresent() )
        KeEnableWatchdogTimeout = 1;
      if ( (HvlpFlags & 0x100000) != 0 )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x4A0uLL, 0x4850654Bu);
        KiEpfHashTable = (__int64)PoolWithTag;
        if ( PoolWithTag )
        {
          v22 = 37LL;
          do
          {
            PoolWithTag[1] = PoolWithTag;
            *PoolWithTag = PoolWithTag;
            PoolWithTag[2] = 0LL;
            *((_DWORD *)PoolWithTag + 6) = 0;
            PoolWithTag += 4;
            --v22;
          }
          while ( v22 );
          LODWORD(KiEpfCompletionDpc) = 275;
          qword_14041C258 = (__int64)KiEpfCompletionDpcRoutine;
          qword_14041C260 = 0LL;
          qword_14041C278 = 0LL;
          qword_14041C250 = 0LL;
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
    _InterlockedOr(dword_14055CD40, 0x8000u);
    _InterlockedOr(dword_14055D10C, 0x400000u);
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      memset(v26, 0, sizeof(v26));
      LODWORD(v26[0]) = 40;
      v26[2] = KeSetSystemServiceCallback;
      v26[3] = KeSetTracepoint;
      v26[4] = EtwRegisterEventCallback;
      v26[1] = MmDbgCopyMemory;
      if ( (int)TraceInitSystem(v26) >= 0 )
        KiDynamicTraceEnabled = 1;
    }
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
            dword_14054138C = 3328 * (v11 / 0x3E8);
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
          goto LABEL_58;
      }
    }
    else
    {
LABEL_58:
      KiComputeNumaCosts();
      SymCryptInitEnvWindowsKernelmodeWin8_1nLater();
      KiIntSteerInit();
      if ( (KeFeatureBits & 0x800000) != 0 && MEMORY[0xFFFFF780000005F0] || (_DWORD)KiIptMsrMask )
      {
        memset(v25, 0, sizeof(v25));
        LODWORD(v25[0]) = 65548;
        v25[2] = off_140356B40;
        WORD2(v25[0]) = 0;
        LODWORD(v25[1]) = 512;
        v25[3] = 0LL;
        v25[4] = 0LL;
        if ( (int)ExRegisterHost(&KiSupervisorStateExtensionHost, v17, (unsigned __int16 *)v25) < 0 )
          KiSupervisorStateExtensionHost = 0LL;
      }
      if ( KiInitMachineDependent() )
      {
        v18 = *(unsigned int *)(KiProcessorBlock[0] + 68) * (unsigned __int64)KeMaximumIncrement / 0xA;
        KiShortExecutionCycles = v18 / 0xF0;
        KiCyclesPerClockQuantum = v18 / 3;
        KiDirectQuantumTarget = v18 / 3;
        KiLockQuantumTarget = 3 * (v18 / 3);
        KdEncodeDataBlock();
        v19 = KeExpandKernelStackAndCalloutEx(KiVerifyScopesExecute, 0LL, 0xC000uLL, 1u, 0LL);
        if ( v19 < 0 )
          KeBugCheckEx(0x32u, v19, 0x5356694BuLL, 0LL, 0LL);
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
