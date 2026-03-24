/*
 * XREFs of VslpEnterIumSecureMode @ 0x140129CB0
 * Callers:
 *     MiFlushEntireTbDueToAttributeChange @ 0x1400EF380 (MiFlushEntireTbDueToAttributeChange.c)
 *     KeRequestTerminationThread @ 0x1400F1348 (KeRequestTerminationThread.c)
 *     KeBalanceSetManager @ 0x140183AD0 (KeBalanceSetManager.c)
 *     VslGetNestedPageProtectionFlags @ 0x14018DD50 (VslGetNestedPageProtectionFlags.c)
 *     VslExchangeEntropy @ 0x140192300 (VslExchangeEntropy.c)
 *     VslpIumPhase4Initialize @ 0x140193010 (VslpIumPhase4Initialize.c)
 *     VslTerminateSecureServices @ 0x1401B3EF0 (VslTerminateSecureServices.c)
 *     VslUpdateImportRelocationsOnImage @ 0x1401B3F3C (VslUpdateImportRelocationsOnImage.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x140274AE0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlPrepareForRootCrashdump @ 0x140274CF0 (HvlPrepareForRootCrashdump.c)
 *     HvlPrepareForSecureHibernate @ 0x140276DF8 (HvlPrepareForSecureHibernate.c)
 *     HvlCollectLivedump @ 0x14027783C (HvlCollectLivedump.c)
 *     HvlpGetSecurePageList @ 0x14027A3A0 (HvlpGetSecurePageList.c)
 *     HvlpStartSecurePageListIteration @ 0x14027A600 (HvlpStartSecurePageListIteration.c)
 *     VslAbortLiveDump @ 0x14027AAE4 (VslAbortLiveDump.c)
 *     VslAccessPciDevice @ 0x14027AB40 (VslAccessPciDevice.c)
 *     VslApplyHotPatch @ 0x14027ACF8 (VslApplyHotPatch.c)
 *     VslConfigureDynamicMemory @ 0x14027AD64 (VslConfigureDynamicMemory.c)
 *     VslEndSecurePageIteration @ 0x14027ADD4 (VslEndSecurePageIteration.c)
 *     VslFastFlushSecureRangeList @ 0x14027AE38 (VslFastFlushSecureRangeList.c)
 *     VslFinalizeLiveDumpInSk @ 0x14027AF28 (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x14027B038 (VslFinishStartSecureProcessor.c)
 *     VslFlushSecureAddressSpace @ 0x14027B128 (VslFlushSecureAddressSpace.c)
 *     VslGetEtwDebugId @ 0x14027B1EC (VslGetEtwDebugId.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x14027B360 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslGetSecurePciEnabled @ 0x14027B3E0 (VslGetSecurePciEnabled.c)
 *     VslInitializeSecureKernelCfg @ 0x14027B508 (VslInitializeSecureKernelCfg.c)
 *     VslIsTrustletRunning @ 0x14027B5B8 (VslIsTrustletRunning.c)
 *     VslIumEfiRuntimeService @ 0x14027B640 (VslIumEfiRuntimeService.c)
 *     VslLiveDumpQuerySecondaryDataSize @ 0x14027B800 (VslLiveDumpQuerySecondaryDataSize.c)
 *     VslMakeProtectedPageWritable @ 0x14027B870 (VslMakeProtectedPageWritable.c)
 *     VslNotifyShutdown @ 0x14027B8DC (VslNotifyShutdown.c)
 *     VslProvisionDumpEncryption @ 0x14027B930 (VslProvisionDumpEncryption.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14027B97C (VslQuerySecureKernelProfileInformation.c)
 *     VslQueryVirtualMemory @ 0x14027BA70 (VslQueryVirtualMemory.c)
 *     VslRegisterLogPages @ 0x14027BAF0 (VslRegisterLogPages.c)
 *     VslRegisterSecureSystemProcess @ 0x14027BC34 (VslRegisterSecureSystemProcess.c)
 *     VslReportBugCheckProgress @ 0x14027BCC0 (VslReportBugCheckProgress.c)
 *     VslRetrieveMailbox @ 0x14027BE20 (VslRetrieveMailbox.c)
 *     VslRevertHotPatch @ 0x14027BF0C (VslRevertHotPatch.c)
 *     VslSetPlaceholderPages @ 0x14027BF6C (VslSetPlaceholderPages.c)
 *     VslSetupLiveDumpBufferInSk @ 0x14027BFD0 (VslSetupLiveDumpBufferInSk.c)
 *     VslSlowFlushSecureRangeList @ 0x14027C0C4 (VslSlowFlushSecureRangeList.c)
 *     VslSvcEnterIumSecureMode @ 0x14027C178 (VslSvcEnterIumSecureMode.c)
 *     VslTestRoutine @ 0x14027C240 (VslTestRoutine.c)
 *     VslVerifyPage @ 0x14027C290 (VslVerifyPage.c)
 *     VslpAddLiveDumpBufferChunk @ 0x14027C30C (VslpAddLiveDumpBufferChunk.c)
 *     VslpKsrEnterIumSecureMode @ 0x14027C3C0 (VslpKsrEnterIumSecureMode.c)
 *     VslpSetupLiveDumpBuffer @ 0x14027C668 (VslpSetupLiveDumpBuffer.c)
 *     VslCloseSecureHandle @ 0x14027C740 (VslCloseSecureHandle.c)
 *     VslCreateSecureAllocation @ 0x14027C790 (VslCreateSecureAllocation.c)
 *     VslCreateSecureImageSection @ 0x14027C800 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x14027C900 (VslFillSecureAllocation.c)
 *     VslFinalizeSecureImageHash @ 0x14027CA10 (VslFinalizeSecureImageHash.c)
 *     VslFinishSecureImageValidation @ 0x14027CB00 (VslFinishSecureImageValidation.c)
 *     VslMakeCodeCatalog @ 0x14027CBD0 (VslMakeCodeCatalog.c)
 *     VslPrepareSecureImageRelocations @ 0x14027CC40 (VslPrepareSecureImageRelocations.c)
 *     VslRelocateImage @ 0x14027CE50 (VslRelocateImage.c)
 *     VslTransferSecureImageVersionResource @ 0x14027CEB0 (VslTransferSecureImageVersionResource.c)
 *     VslValidateDynamicCodePages @ 0x14027CF90 (VslValidateDynamicCodePages.c)
 *     VslValidateSecureImagePages @ 0x14027D170 (VslValidateSecureImagePages.c)
 *     KeCopyPrivilegedPage @ 0x14028DB8C (KeCopyPrivilegedPage.c)
 *     KeSetPagePrivilege @ 0x14028DC20 (KeSetPagePrivilege.c)
 *     KeSecureProcess @ 0x14028E778 (KeSecureProcess.c)
 *     KeUnsecureProcess @ 0x14028E838 (KeUnsecureProcess.c)
 *     MiWaitForFreePage @ 0x1402CB4A4 (MiWaitForFreePage.c)
 *     PspIumWorker @ 0x1402EBC60 (PspIumWorker.c)
 *     PspUserThreadStartup @ 0x1405F6E40 (PspUserThreadStartup.c)
 *     DbgkCopyProcessDebugPort @ 0x140609650 (DbgkCopyProcessDebugPort.c)
 *     NtQueryInformationProcess @ 0x14066DB70 (NtQueryInformationProcess.c)
 *     MiMarkKernelImageCfgBits @ 0x14070F394 (MiMarkKernelImageCfgBits.c)
 *     VslQuerySecureDevice @ 0x140759B40 (VslQuerySecureDevice.c)
 *     NtDebugActiveProcess @ 0x14080FC40 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140810030 (NtRemoveProcessDebug.c)
 *     VslAllocateSecureHibernateResources @ 0x140817C78 (VslAllocateSecureHibernateResources.c)
 *     VslCallEnclave @ 0x140817CFC (VslCallEnclave.c)
 *     VslCompleteSecureDriverLoad @ 0x140817EE8 (VslCompleteSecureDriverLoad.c)
 *     VslCreateEnclave @ 0x140817F4C (VslCreateEnclave.c)
 *     VslCreateSecureProcess @ 0x140818080 (VslCreateSecureProcess.c)
 *     VslCreateSecureSection @ 0x1408180F0 (VslCreateSecureSection.c)
 *     VslCreateSecureThread @ 0x140818214 (VslCreateSecureThread.c)
 *     VslDebugProtectSecureProcessMemory @ 0x1408182B0 (VslDebugProtectSecureProcessMemory.c)
 *     VslDebugReadWriteSecureProcess @ 0x140818364 (VslDebugReadWriteSecureProcess.c)
 *     VslDeleteSecureSection @ 0x1408184B0 (VslDeleteSecureSection.c)
 *     VslDetermineHotPatchType @ 0x140818500 (VslDetermineHotPatchType.c)
 *     VslDetermineHotPatchUndoTableSize @ 0x14081856C (VslDetermineHotPatchUndoTableSize.c)
 *     VslEnableKernelCfgTarget @ 0x1408185CC (VslEnableKernelCfgTarget.c)
 *     VslEnableOnDemandDebugWithResponse @ 0x14081861C (VslEnableOnDemandDebugWithResponse.c)
 *     VslFreeSecureHibernateResources @ 0x140818694 (VslFreeSecureHibernateResources.c)
 *     VslGetOnDemandDebugChallenge @ 0x1408186E0 (VslGetOnDemandDebugChallenge.c)
 *     VslGetSecurePebAddress @ 0x1408187F0 (VslGetSecurePebAddress.c)
 *     VslGetSecureTebAddress @ 0x14081885C (VslGetSecureTebAddress.c)
 *     VslGetSetSecureContext @ 0x1408188CC (VslGetSetSecureContext.c)
 *     VslInitializeEnclave @ 0x14081897C (VslInitializeEnclave.c)
 *     VslIumEtwEnableCallback @ 0x1408189F0 (VslIumEtwEnableCallback.c)
 *     VslLoadEnclaveModule @ 0x140818A74 (VslLoadEnclaveModule.c)
 *     VslObtainHotPatchUndoTable @ 0x140818B74 (VslObtainHotPatchUndoTable.c)
 *     VslRelaxQuotas @ 0x140818CF0 (VslRelaxQuotas.c)
 *     VslReserveProtectedPages @ 0x140818D5C (VslReserveProtectedPages.c)
 *     VslRundownSecureProcess @ 0x140818DC0 (VslRundownSecureProcess.c)
 *     VslSendDebugAttachNotifications @ 0x140818E10 (VslSendDebugAttachNotifications.c)
 *     VslStartSecureProcessor @ 0x140818E74 (VslStartSecureProcessor.c)
 *     VslTerminateSecureThread @ 0x14081905C (VslTerminateSecureThread.c)
 *     VslUpdateFreezeTimeBias @ 0x1408190DC (VslUpdateFreezeTimeBias.c)
 *     VslpConnectedStandbyPoCallback @ 0x140819140 (VslpConnectedStandbyPoCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x1408191F0 (VslpConnectedStandbyWnfCallback.c)
 *     VslSetCodeIntegrityPolicy @ 0x140819290 (VslSetCodeIntegrityPolicy.c)
 *     PipUnprotectDevice @ 0x1408419AC (PipUnprotectDevice.c)
 *     PsRundownVsmEnclave @ 0x14088E3E8 (PsRundownVsmEnclave.c)
 *     PsTerminateVsmEnclave @ 0x14088E43C (PsTerminateVsmEnclave.c)
 *     MiRelocateBootImage @ 0x1409B82CC (MiRelocateBootImage.c)
 *     MiGetNewAddressForBootImage @ 0x1409B85F4 (MiGetNewAddressForBootImage.c)
 *     MiApplyRetpolineToBootDrivers @ 0x1409B88C4 (MiApplyRetpolineToBootDrivers.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x1409B9674 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     VslConnectSwInterrupt @ 0x1409CC3E8 (VslConnectSwInterrupt.c)
 *     MiApplyDynamicRelocations @ 0x1409D2650 (MiApplyDynamicRelocations.c)
 *     MiApplyRetpolineFixupsToKernelAndHal @ 0x1409D2744 (MiApplyRetpolineFixupsToKernelAndHal.c)
 *     PspInitPhase3 @ 0x1409DF584 (PspInitPhase3.c)
 *     VslBindNtIum @ 0x1409F44C4 (VslBindNtIum.c)
 *     VslpIumPhase0Initialize @ 0x1409F4600 (VslpIumPhase0Initialize.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeAreInterruptsEnabled @ 0x1400CAD04 (KeAreInterruptsEnabled.c)
 *     KeReleaseSemaphoreEx @ 0x1400D2970 (KeReleaseSemaphoreEx.c)
 *     HvlQueryVsmConnection @ 0x14012A014 (HvlQueryVsmConnection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlSwitchToVsmVtl1 @ 0x1401B7FE0 (HvlSwitchToVsmVtl1.c)
 *     VslpDispatchIumSyscall @ 0x1401B8140 (VslpDispatchIumSyscall.c)
 *     PsDispatchIumService @ 0x1402EAB94 (PsDispatchIumService.c)
 */

NTSTATUS __fastcall VslpEnterIumSecureMode(unsigned __int8 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  char v4; // r15
  char v8; // bl
  unsigned __int8 CurrentIrql; // r13
  __int16 v10; // dx
  __int64 v11; // rcx
  NTSTATUS result; // eax
  unsigned int v14; // r8d
  unsigned __int64 v15; // r9
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int8 v17; // r14
  unsigned int SecureThreadCookie; // eax
  __int64 v19; // r9
  char v20; // al
  unsigned int v21; // ecx
  struct _KTHREAD *v22; // rax
  unsigned int v23; // eax
  char PreviousMode; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v26; // rcx
  char v27; // [rsp+30h] [rbp-38h]

  v4 = 0;
  v27 = 0;
  v8 = 0;
  CurrentIrql = 15;
  if ( !(unsigned __int8)HvlQueryVsmConnection(0LL) )
    return -1073741667;
  if ( v10 == 249 && a1 == 2 ? _InterlockedExchange(&VslpVsmTerminated, 1) : VslpVsmTerminated )
    return -1073741667;
  *(_BYTE *)a4 = a1;
  *(_WORD *)(a4 + 2) = v10;
  if ( a1 > 2u )
  {
    HvlSwitchToVsmVtl1(v11, a4);
    if ( *(char *)(a4 + 1) < 0 )
    {
      __debugbreak();
      *(_BYTE *)(a4 + 1) &= ~0x80u;
    }
    return 0;
  }
  if ( !KeAreInterruptsEnabled() )
  {
    if ( VslVsmEnabled )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v15);
      if ( KiIrqlFlags )
      {
        if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v14) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  v17 = KeGetCurrentIrql();
  if ( a1 == (_BYTE)v14 )
  {
    *(_DWORD *)(a4 + 4) = a3;
  }
  else
  {
    if ( a3 )
    {
      *(_DWORD *)(a4 + 4) = a3;
    }
    else if ( v17 < 2u )
    {
      SecureThreadCookie = CurrentThread->SecureThreadCookie;
      if ( SecureThreadCookie )
      {
        a3 = CurrentThread->SecureThreadCookie;
        *(_DWORD *)(a4 + 4) = SecureThreadCookie;
      }
      else
      {
        *(_DWORD *)(a4 + 4) = 0;
        if ( VslVsmEnabled )
        {
          result = KeWaitForSingleObject(&VslpIumThreadSemaphore, Executive, 0, 0, 0LL);
          if ( result < 0 )
            return result;
          LOBYTE(v14) = 1;
          v27 = 1;
        }
      }
    }
    else
    {
      *(_DWORD *)(a4 + 4) = 0;
      a3 = v14;
    }
    v8 = 0;
    if ( !CurrentThread->SecureThreadCookie )
      v8 = v14;
  }
  if ( v17 == (_BYTE)v14 )
  {
    v4 = v14;
LABEL_35:
    --CurrentThread->KernelApcDisable;
    goto LABEL_36;
  }
  if ( !v17 )
    v4 = v8;
  if ( v4 )
    goto LABEL_35;
  while ( 1 )
  {
LABEL_36:
    HvlSwitchToVsmVtl1(0LL, a4);
    v20 = *(_BYTE *)(a4 + 1);
    if ( v20 < 0 )
    {
      __debugbreak();
      *(_BYTE *)(a4 + 1) &= ~0x80u;
      v20 = *(_BYTE *)(a4 + 1);
    }
    if ( v20 == 6 )
      break;
    if ( v20 == 1 )
      goto LABEL_67;
    if ( a1 == 1 )
    {
      v21 = *(_DWORD *)(a4 + 4);
      v22 = CurrentThread;
      if ( !v21 )
        v22 = CurrentThread;
      v22->SecureThreadCookie = v21;
    }
    else if ( !a3 )
    {
      CurrentThread->SecureThreadCookie = *(_DWORD *)(a4 + 4);
    }
    switch ( *(_BYTE *)(a4 + 1) )
    {
      case 0:
LABEL_50:
        PsDispatchIumService(a4);
        break;
      case 2:
        if ( !CurrentThread->PreviousMode )
        {
          *(_QWORD *)(a4 + 8) = -1073741776LL;
          break;
        }
LABEL_57:
        v23 = *(unsigned __int16 *)(a4 + 2);
        if ( v23 < (unsigned int)xmmword_140559890 )
        {
          PreviousMode = CurrentThread->PreviousMode;
          if ( *(_BYTE *)(a4 + 1) == 3 )
          {
            CurrentThread->PreviousMode = 0;
            LOWORD(v23) = *(_WORD *)(a4 + 2);
          }
          *(_QWORD *)(a4 + 8) = (int)VslpDispatchIumSyscall(
                                       KeServiceDescriptorTable
                                     + (*(int *)(KeServiceDescriptorTable + 4LL * (unsigned __int16)v23) >> 4),
                                       a4 + 8,
                                       *(_DWORD *)(KeServiceDescriptorTable + 4LL * (unsigned __int16)v23) & 0xF);
          CurrentThread->PreviousMode = PreviousMode;
        }
        else
        {
          *(_QWORD *)(a4 + 8) = -1073741796LL;
        }
        break;
      case 3:
        goto LABEL_57;
      case 5:
        goto LABEL_50;
    }
    if ( !a3 && a1 != 1 )
      CurrentThread->SecureThreadCookie = 0;
    *(_BYTE *)a4 = 0;
    *(_WORD *)(a4 + 2) = 0;
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(0LL);
LABEL_67:
  if ( v27 )
    KeReleaseSemaphoreEx((__int64)&VslpIumThreadSemaphore, 0LL, 1, v19, 0);
  if ( v4 )
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( CurrentIrql != 15 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v26 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v26->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v26);
    }
    __writecr8(CurrentIrql);
  }
  return *(_DWORD *)(a4 + 8);
}
