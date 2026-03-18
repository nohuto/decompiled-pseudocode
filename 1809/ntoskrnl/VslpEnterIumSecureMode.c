/*
 * XREFs of VslpEnterIumSecureMode @ 0x140129C90
 * Callers:
 *     MiFlushEntireTbDueToAttributeChange @ 0x1400EF360 (MiFlushEntireTbDueToAttributeChange.c)
 *     KeRequestTerminationThread @ 0x1400F1328 (KeRequestTerminationThread.c)
 *     KeBalanceSetManager @ 0x140183AB0 (KeBalanceSetManager.c)
 *     VslGetNestedPageProtectionFlags @ 0x14018DD30 (VslGetNestedPageProtectionFlags.c)
 *     VslExchangeEntropy @ 0x1401922E0 (VslExchangeEntropy.c)
 *     VslpIumPhase4Initialize @ 0x140192FF0 (VslpIumPhase4Initialize.c)
 *     VslTerminateSecureServices @ 0x1401B3ED0 (VslTerminateSecureServices.c)
 *     VslUpdateImportRelocationsOnImage @ 0x1401B3F1C (VslUpdateImportRelocationsOnImage.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1402749E0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlPrepareForRootCrashdump @ 0x140274BF0 (HvlPrepareForRootCrashdump.c)
 *     HvlPrepareForSecureHibernate @ 0x140276CF8 (HvlPrepareForSecureHibernate.c)
 *     HvlCollectLivedump @ 0x14027773C (HvlCollectLivedump.c)
 *     HvlpGetSecurePageList @ 0x14027A2A0 (HvlpGetSecurePageList.c)
 *     HvlpStartSecurePageListIteration @ 0x14027A500 (HvlpStartSecurePageListIteration.c)
 *     VslAbortLiveDump @ 0x14027A9E4 (VslAbortLiveDump.c)
 *     VslAccessPciDevice @ 0x14027AA40 (VslAccessPciDevice.c)
 *     VslApplyHotPatch @ 0x14027ABF8 (VslApplyHotPatch.c)
 *     VslConfigureDynamicMemory @ 0x14027AC64 (VslConfigureDynamicMemory.c)
 *     VslEndSecurePageIteration @ 0x14027ACD4 (VslEndSecurePageIteration.c)
 *     VslFastFlushSecureRangeList @ 0x14027AD38 (VslFastFlushSecureRangeList.c)
 *     VslFinalizeLiveDumpInSk @ 0x14027AE28 (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x14027AF38 (VslFinishStartSecureProcessor.c)
 *     VslFlushSecureAddressSpace @ 0x14027B028 (VslFlushSecureAddressSpace.c)
 *     VslGetEtwDebugId @ 0x14027B0EC (VslGetEtwDebugId.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x14027B260 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslGetSecurePciEnabled @ 0x14027B2E0 (VslGetSecurePciEnabled.c)
 *     VslInitializeSecureKernelCfg @ 0x14027B408 (VslInitializeSecureKernelCfg.c)
 *     VslIsTrustletRunning @ 0x14027B4B8 (VslIsTrustletRunning.c)
 *     VslIumEfiRuntimeService @ 0x14027B540 (VslIumEfiRuntimeService.c)
 *     VslLiveDumpQuerySecondaryDataSize @ 0x14027B700 (VslLiveDumpQuerySecondaryDataSize.c)
 *     VslMakeProtectedPageWritable @ 0x14027B770 (VslMakeProtectedPageWritable.c)
 *     VslNotifyShutdown @ 0x14027B7DC (VslNotifyShutdown.c)
 *     VslProvisionDumpEncryption @ 0x14027B830 (VslProvisionDumpEncryption.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14027B87C (VslQuerySecureKernelProfileInformation.c)
 *     VslQueryVirtualMemory @ 0x14027B970 (VslQueryVirtualMemory.c)
 *     VslRegisterLogPages @ 0x14027B9F0 (VslRegisterLogPages.c)
 *     VslRegisterSecureSystemProcess @ 0x14027BB34 (VslRegisterSecureSystemProcess.c)
 *     VslReportBugCheckProgress @ 0x14027BBC0 (VslReportBugCheckProgress.c)
 *     VslRetrieveMailbox @ 0x14027BD20 (VslRetrieveMailbox.c)
 *     VslRevertHotPatch @ 0x14027BE0C (VslRevertHotPatch.c)
 *     VslSetPlaceholderPages @ 0x14027BE6C (VslSetPlaceholderPages.c)
 *     VslSetupLiveDumpBufferInSk @ 0x14027BED0 (VslSetupLiveDumpBufferInSk.c)
 *     VslSlowFlushSecureRangeList @ 0x14027BFC4 (VslSlowFlushSecureRangeList.c)
 *     VslSvcEnterIumSecureMode @ 0x14027C078 (VslSvcEnterIumSecureMode.c)
 *     VslTestRoutine @ 0x14027C140 (VslTestRoutine.c)
 *     VslVerifyPage @ 0x14027C190 (VslVerifyPage.c)
 *     VslpAddLiveDumpBufferChunk @ 0x14027C20C (VslpAddLiveDumpBufferChunk.c)
 *     VslpKsrEnterIumSecureMode @ 0x14027C2C0 (VslpKsrEnterIumSecureMode.c)
 *     VslpSetupLiveDumpBuffer @ 0x14027C568 (VslpSetupLiveDumpBuffer.c)
 *     VslCloseSecureHandle @ 0x14027C640 (VslCloseSecureHandle.c)
 *     VslCreateSecureAllocation @ 0x14027C690 (VslCreateSecureAllocation.c)
 *     VslCreateSecureImageSection @ 0x14027C700 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x14027C800 (VslFillSecureAllocation.c)
 *     VslFinalizeSecureImageHash @ 0x14027C910 (VslFinalizeSecureImageHash.c)
 *     VslFinishSecureImageValidation @ 0x14027CA00 (VslFinishSecureImageValidation.c)
 *     VslMakeCodeCatalog @ 0x14027CAD0 (VslMakeCodeCatalog.c)
 *     VslPrepareSecureImageRelocations @ 0x14027CB40 (VslPrepareSecureImageRelocations.c)
 *     VslRelocateImage @ 0x14027CD50 (VslRelocateImage.c)
 *     VslTransferSecureImageVersionResource @ 0x14027CDB0 (VslTransferSecureImageVersionResource.c)
 *     VslValidateDynamicCodePages @ 0x14027CE90 (VslValidateDynamicCodePages.c)
 *     VslValidateSecureImagePages @ 0x14027D070 (VslValidateSecureImagePages.c)
 *     KeCopyPrivilegedPage @ 0x14028DA8C (KeCopyPrivilegedPage.c)
 *     KeSetPagePrivilege @ 0x14028DB20 (KeSetPagePrivilege.c)
 *     KeSecureProcess @ 0x14028E678 (KeSecureProcess.c)
 *     KeUnsecureProcess @ 0x14028E738 (KeUnsecureProcess.c)
 *     MiWaitForFreePage @ 0x1402CB3A4 (MiWaitForFreePage.c)
 *     PspIumWorker @ 0x1402EBB60 (PspIumWorker.c)
 *     PspUserThreadStartup @ 0x1405F6E40 (PspUserThreadStartup.c)
 *     DbgkCopyProcessDebugPort @ 0x140609650 (DbgkCopyProcessDebugPort.c)
 *     NtQueryInformationProcess @ 0x14066DB90 (NtQueryInformationProcess.c)
 *     MiMarkKernelImageCfgBits @ 0x14070F3B4 (MiMarkKernelImageCfgBits.c)
 *     VslQuerySecureDevice @ 0x140759B60 (VslQuerySecureDevice.c)
 *     NtDebugActiveProcess @ 0x14080FC60 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140810050 (NtRemoveProcessDebug.c)
 *     VslAllocateSecureHibernateResources @ 0x140817C98 (VslAllocateSecureHibernateResources.c)
 *     VslCallEnclave @ 0x140817D1C (VslCallEnclave.c)
 *     VslCompleteSecureDriverLoad @ 0x140817F08 (VslCompleteSecureDriverLoad.c)
 *     VslCreateEnclave @ 0x140817F6C (VslCreateEnclave.c)
 *     VslCreateSecureProcess @ 0x1408180A0 (VslCreateSecureProcess.c)
 *     VslCreateSecureSection @ 0x140818110 (VslCreateSecureSection.c)
 *     VslCreateSecureThread @ 0x140818234 (VslCreateSecureThread.c)
 *     VslDebugProtectSecureProcessMemory @ 0x1408182D0 (VslDebugProtectSecureProcessMemory.c)
 *     VslDebugReadWriteSecureProcess @ 0x140818384 (VslDebugReadWriteSecureProcess.c)
 *     VslDeleteSecureSection @ 0x1408184D0 (VslDeleteSecureSection.c)
 *     VslDetermineHotPatchType @ 0x140818520 (VslDetermineHotPatchType.c)
 *     VslDetermineHotPatchUndoTableSize @ 0x14081858C (VslDetermineHotPatchUndoTableSize.c)
 *     VslEnableKernelCfgTarget @ 0x1408185EC (VslEnableKernelCfgTarget.c)
 *     VslEnableOnDemandDebugWithResponse @ 0x14081863C (VslEnableOnDemandDebugWithResponse.c)
 *     VslFreeSecureHibernateResources @ 0x1408186B4 (VslFreeSecureHibernateResources.c)
 *     VslGetOnDemandDebugChallenge @ 0x140818700 (VslGetOnDemandDebugChallenge.c)
 *     VslGetSecurePebAddress @ 0x140818810 (VslGetSecurePebAddress.c)
 *     VslGetSecureTebAddress @ 0x14081887C (VslGetSecureTebAddress.c)
 *     VslGetSetSecureContext @ 0x1408188EC (VslGetSetSecureContext.c)
 *     VslInitializeEnclave @ 0x14081899C (VslInitializeEnclave.c)
 *     VslIumEtwEnableCallback @ 0x140818A10 (VslIumEtwEnableCallback.c)
 *     VslLoadEnclaveModule @ 0x140818A94 (VslLoadEnclaveModule.c)
 *     VslObtainHotPatchUndoTable @ 0x140818B94 (VslObtainHotPatchUndoTable.c)
 *     VslRelaxQuotas @ 0x140818D10 (VslRelaxQuotas.c)
 *     VslReserveProtectedPages @ 0x140818D7C (VslReserveProtectedPages.c)
 *     VslRundownSecureProcess @ 0x140818DE0 (VslRundownSecureProcess.c)
 *     VslSendDebugAttachNotifications @ 0x140818E30 (VslSendDebugAttachNotifications.c)
 *     VslStartSecureProcessor @ 0x140818E94 (VslStartSecureProcessor.c)
 *     VslTerminateSecureThread @ 0x14081907C (VslTerminateSecureThread.c)
 *     VslUpdateFreezeTimeBias @ 0x1408190FC (VslUpdateFreezeTimeBias.c)
 *     VslpConnectedStandbyPoCallback @ 0x140819160 (VslpConnectedStandbyPoCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140819210 (VslpConnectedStandbyWnfCallback.c)
 *     VslSetCodeIntegrityPolicy @ 0x1408192B0 (VslSetCodeIntegrityPolicy.c)
 *     PipUnprotectDevice @ 0x1408419CC (PipUnprotectDevice.c)
 *     PsRundownVsmEnclave @ 0x14088E408 (PsRundownVsmEnclave.c)
 *     PsTerminateVsmEnclave @ 0x14088E45C (PsTerminateVsmEnclave.c)
 *     MiRelocateBootImage @ 0x1409B82CC (MiRelocateBootImage.c)
 *     MiGetNewAddressForBootImage @ 0x1409B85F4 (MiGetNewAddressForBootImage.c)
 *     MiApplyRetpolineToBootDrivers @ 0x1409B88C4 (MiApplyRetpolineToBootDrivers.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x1409B9674 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     VslConnectSwInterrupt @ 0x1409CC3E8 (VslConnectSwInterrupt.c)
 *     MiApplyDynamicRelocations @ 0x1409D2650 (MiApplyDynamicRelocations.c)
 *     MiApplyRetpolineFixupsToKernelAndHal @ 0x1409D2744 (MiApplyRetpolineFixupsToKernelAndHal.c)
 *     PspInitPhase3 @ 0x1409DF584 (PspInitPhase3.c)
 *     VslBindNtIum @ 0x1409F44BC (VslBindNtIum.c)
 *     VslpIumPhase0Initialize @ 0x1409F45F8 (VslpIumPhase0Initialize.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeAreInterruptsEnabled @ 0x1400CACE4 (KeAreInterruptsEnabled.c)
 *     KeReleaseSemaphoreEx @ 0x1400D2950 (KeReleaseSemaphoreEx.c)
 *     HvlQueryVsmConnection @ 0x140129FF4 (HvlQueryVsmConnection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlSwitchToVsmVtl1 @ 0x1401B7FC0 (HvlSwitchToVsmVtl1.c)
 *     VslpDispatchIumSyscall @ 0x1401B8120 (VslpDispatchIumSyscall.c)
 *     PsDispatchIumService @ 0x1402EAA94 (PsDispatchIumService.c)
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
