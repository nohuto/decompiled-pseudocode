/*
 * XREFs of VslpEnterIumSecureMode @ 0x14012B19C
 * Callers:
 *     MiFlushEntireTbDueToAttributeChange @ 0x140098A00 (MiFlushEntireTbDueToAttributeChange.c)
 *     KeRequestTerminationThread @ 0x1400E4DEC (KeRequestTerminationThread.c)
 *     VslGetNestedPageProtectionFlags @ 0x14018C9D0 (VslGetNestedPageProtectionFlags.c)
 *     KeBalanceSetManager @ 0x14018DE80 (KeBalanceSetManager.c)
 *     VslExchangeEntropy @ 0x14019CA90 (VslExchangeEntropy.c)
 *     VslpIumPhase4Initialize @ 0x14019DB2C (VslpIumPhase4Initialize.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1402888E0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlPrepareForRootCrashdump @ 0x140288B20 (HvlPrepareForRootCrashdump.c)
 *     HvlPrepareForSecureHibernate @ 0x14028ADD0 (HvlPrepareForSecureHibernate.c)
 *     HvlCollectLivedump @ 0x14028B84C (HvlCollectLivedump.c)
 *     HvlpStartSecurePageListIteration @ 0x14028E6F8 (HvlpStartSecurePageListIteration.c)
 *     VslAbortLiveDump @ 0x14028EBEC (VslAbortLiveDump.c)
 *     VslAccessPciDevice @ 0x14028EC50 (VslAccessPciDevice.c)
 *     VslApplyHotPatch @ 0x14028EE20 (VslApplyHotPatch.c)
 *     VslApplySecureImageFixups @ 0x14028EEDC (VslApplySecureImageFixups.c)
 *     VslConfigureDynamicMemory @ 0x14028EF68 (VslConfigureDynamicMemory.c)
 *     VslEndSecurePageIteration @ 0x14028F004 (VslEndSecurePageIteration.c)
 *     VslFastFlushSecureRangeList @ 0x14028F084 (VslFastFlushSecureRangeList.c)
 *     VslFinalizeLiveDumpInSk @ 0x14028F174 (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x14028F284 (VslFinishStartSecureProcessor.c)
 *     VslFlushSecureAddressSpace @ 0x14028F398 (VslFlushSecureAddressSpace.c)
 *     VslGetEtwDebugId @ 0x14028F46C (VslGetEtwDebugId.c)
 *     VslGetSecurePageList @ 0x14028F5E0 (VslGetSecurePageList.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x14028F6A0 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslGetSecurePciEnabled @ 0x14028F740 (VslGetSecurePciEnabled.c)
 *     VslInitializeSecureKernelCfg @ 0x14028F878 (VslInitializeSecureKernelCfg.c)
 *     VslInitializeSecureProcess @ 0x14028F94C (VslInitializeSecureProcess.c)
 *     VslIsTrustletRunning @ 0x14028FA10 (VslIsTrustletRunning.c)
 *     VslIumEfiRuntimeService @ 0x14028FA90 (VslIumEfiRuntimeService.c)
 *     VslLiveDumpQuerySecondaryDataSize @ 0x14028FC60 (VslLiveDumpQuerySecondaryDataSize.c)
 *     VslMakeProtectedPageWritable @ 0x14028FCD0 (VslMakeProtectedPageWritable.c)
 *     VslNotifyShutdown @ 0x14028FD60 (VslNotifyShutdown.c)
 *     VslProvisionDumpEncryption @ 0x14028FDC8 (VslProvisionDumpEncryption.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14028FE24 (VslQuerySecureKernelProfileInformation.c)
 *     VslQueryVirtualMemory @ 0x14028FF34 (VslQueryVirtualMemory.c)
 *     VslRegisterLogPages @ 0x14028FFD0 (VslRegisterLogPages.c)
 *     VslRegisterSecureSystemProcess @ 0x140290138 (VslRegisterSecureSystemProcess.c)
 *     VslReportBugCheckProgress @ 0x1402901D0 (VslReportBugCheckProgress.c)
 *     VslRetrieveMailbox @ 0x140290330 (VslRetrieveMailbox.c)
 *     VslRevertHotPatch @ 0x14029041C (VslRevertHotPatch.c)
 *     VslSetPlaceholderPages @ 0x1402904A8 (VslSetPlaceholderPages.c)
 *     VslSetupLiveDumpBufferInSk @ 0x140290544 (VslSetupLiveDumpBufferInSk.c)
 *     VslSlowFlushSecureRangeList @ 0x140290638 (VslSlowFlushSecureRangeList.c)
 *     VslSvcEnterIumSecureMode @ 0x140290724 (VslSvcEnterIumSecureMode.c)
 *     VslTestRoutine @ 0x1402907F0 (VslTestRoutine.c)
 *     VslVerifyPage @ 0x140290850 (VslVerifyPage.c)
 *     VslpAddLiveDumpBufferChunk @ 0x1402908EC (VslpAddLiveDumpBufferChunk.c)
 *     VslpKsrEnterIumSecureMode @ 0x1402909A0 (VslpKsrEnterIumSecureMode.c)
 *     VslpSetupLiveDumpBuffer @ 0x140290C40 (VslpSetupLiveDumpBuffer.c)
 *     VslCloseSecureHandle @ 0x140290D10 (VslCloseSecureHandle.c)
 *     VslCreateSecureAllocation @ 0x140290D80 (VslCreateSecureAllocation.c)
 *     VslCreateSecureImageSection @ 0x140290E10 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x140290F10 (VslFillSecureAllocation.c)
 *     VslFinalizeSecureImageHash @ 0x140291040 (VslFinalizeSecureImageHash.c)
 *     VslFinishSecureImageValidation @ 0x140291140 (VslFinishSecureImageValidation.c)
 *     VslFreeSecureImageIat @ 0x140291238 (VslFreeSecureImageIat.c)
 *     VslMakeCodeCatalog @ 0x1402912A0 (VslMakeCodeCatalog.c)
 *     VslPrepareSecureImageRelocations @ 0x140291330 (VslPrepareSecureImageRelocations.c)
 *     VslRelocateImage @ 0x140291560 (VslRelocateImage.c)
 *     VslTransferSecureImageVersionResource @ 0x1402915E0 (VslTransferSecureImageVersionResource.c)
 *     VslValidateDynamicCodePages @ 0x1402916F0 (VslValidateDynamicCodePages.c)
 *     VslValidateSecureImagePages @ 0x140291930 (VslValidateSecureImagePages.c)
 *     KeCopyPrivilegedPage @ 0x1402A441C (KeCopyPrivilegedPage.c)
 *     KeSetPagePrivilege @ 0x1402A44D8 (KeSetPagePrivilege.c)
 *     KeUnsecureProcess @ 0x1402A5064 (KeUnsecureProcess.c)
 *     KiTpWriteSecureBreakpoint @ 0x1402AD8C4 (KiTpWriteSecureBreakpoint.c)
 *     MiWaitForFreePage @ 0x1402E5760 (MiWaitForFreePage.c)
 *     PspIumWorker @ 0x140309290 (PspIumWorker.c)
 *     PspUserThreadStartup @ 0x1405E7470 (PspUserThreadStartup.c)
 *     MiMarkKernelImageCfgBits @ 0x140748A78 (MiMarkKernelImageCfgBits.c)
 *     VslQuerySecureDevice @ 0x140782790 (VslQuerySecureDevice.c)
 *     NtDebugActiveProcess @ 0x140848C20 (NtDebugActiveProcess.c)
 *     VslAllocateSecureHibernateResources @ 0x140850DB8 (VslAllocateSecureHibernateResources.c)
 *     VslCallEnclave @ 0x140850E4C (VslCallEnclave.c)
 *     VslCapturePgoData @ 0x140851060 (VslCapturePgoData.c)
 *     VslCompleteSecureDriverLoad @ 0x1408511A0 (VslCompleteSecureDriverLoad.c)
 *     VslCreateEnclave @ 0x140851234 (VslCreateEnclave.c)
 *     VslCreateSecureProcess @ 0x140851390 (VslCreateSecureProcess.c)
 *     VslCreateSecureSection @ 0x140851430 (VslCreateSecureSection.c)
 *     VslCreateSecureThread @ 0x14085154C (VslCreateSecureThread.c)
 *     VslDebugProtectSecureProcessMemory @ 0x140851614 (VslDebugProtectSecureProcessMemory.c)
 *     VslDebugReadWriteSecureProcess @ 0x1408516EC (VslDebugReadWriteSecureProcess.c)
 *     VslDeleteSecureSection @ 0x140851850 (VslDeleteSecureSection.c)
 *     VslDetermineHotPatchType @ 0x1408518B8 (VslDetermineHotPatchType.c)
 *     VslDetermineHotPatchUndoTableSize @ 0x140851948 (VslDetermineHotPatchUndoTableSize.c)
 *     VslEnableKernelCfgTarget @ 0x1408519C8 (VslEnableKernelCfgTarget.c)
 *     VslEnableOnDemandDebugWithResponse @ 0x140851A30 (VslEnableOnDemandDebugWithResponse.c)
 *     VslFreeSecureHibernateResources @ 0x140851ADC (VslFreeSecureHibernateResources.c)
 *     VslGetOnDemandDebugChallenge @ 0x140851B38 (VslGetOnDemandDebugChallenge.c)
 *     VslGetSecurePebAddress @ 0x140851C6C (VslGetSecurePebAddress.c)
 *     VslGetSecureTebAddress @ 0x140851CF4 (VslGetSecureTebAddress.c)
 *     VslGetSetSecureContext @ 0x140851D80 (VslGetSetSecureContext.c)
 *     VslInitializeEnclave @ 0x140851E20 (VslInitializeEnclave.c)
 *     VslIumEtwEnableCallback @ 0x140851F10 (VslIumEtwEnableCallback.c)
 *     VslLiveDumpCaptureProcess @ 0x140851FCC (VslLiveDumpCaptureProcess.c)
 *     VslLoadEnclaveData @ 0x14085203C (VslLoadEnclaveData.c)
 *     VslLoadEnclaveModule @ 0x140852138 (VslLoadEnclaveModule.c)
 *     VslObtainHotPatchUndoTable @ 0x140852258 (VslObtainHotPatchUndoTable.c)
 *     VslRelaxQuotas @ 0x1408523F8 (VslRelaxQuotas.c)
 *     VslReserveProtectedPages @ 0x140852474 (VslReserveProtectedPages.c)
 *     VslRundownSecureProcess @ 0x140852510 (VslRundownSecureProcess.c)
 *     VslSendDebugAttachNotifications @ 0x140852578 (VslSendDebugAttachNotifications.c)
 *     VslStartSecureProcessor @ 0x14085260C (VslStartSecureProcessor.c)
 *     VslTerminateSecureThread @ 0x140852810 (VslTerminateSecureThread.c)
 *     VslUpdateFreezeTimeBias @ 0x1408528A0 (VslUpdateFreezeTimeBias.c)
 *     VslpConnectedStandbyPoCallback @ 0x140852930 (VslpConnectedStandbyPoCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140852A10 (VslpConnectedStandbyWnfCallback.c)
 *     VslCaptureSecureImageIat @ 0x140852AD8 (VslCaptureSecureImageIat.c)
 *     VslSetCodeIntegrityPolicy @ 0x140852BE0 (VslSetCodeIntegrityPolicy.c)
 *     PipUnprotectDevice @ 0x14087CADC (PipUnprotectDevice.c)
 *     PsRequestDebugSecureProcess @ 0x1408CAC94 (PsRequestDebugSecureProcess.c)
 *     PsRundownVsmEnclave @ 0x1408CC3D0 (PsRundownVsmEnclave.c)
 *     PsTerminateVsmEnclave @ 0x1408CC43C (PsTerminateVsmEnclave.c)
 *     MiApplyRetpolineFixupsToKernelAndHal @ 0x1409F00AC (MiApplyRetpolineFixupsToKernelAndHal.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x1409F0318 (MiApplyImportOptimizationToBootDrivers.c)
 *     MiApplyRetpolineToBootDrivers @ 0x1409F0AC8 (MiApplyRetpolineToBootDrivers.c)
 *     PspInitPhase3 @ 0x1409FEAD8 (PspInitPhase3.c)
 *     VslConnectSwInterrupt @ 0x140A12074 (VslConnectSwInterrupt.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140A22C18 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     VslApplyDynamicRelocations @ 0x140A39718 (VslApplyDynamicRelocations.c)
 *     VslBindNtIum @ 0x140A397A4 (VslBindNtIum.c)
 *     VslpIumPhase0Initialize @ 0x140A398F0 (VslpIumPhase0Initialize.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x140014320 (KeReleaseSemaphoreEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeAreInterruptsEnabled @ 0x1400A3040 (KeAreInterruptsEnabled.c)
 *     EtwTraceKernelEvent @ 0x140121B90 (EtwTraceKernelEvent.c)
 *     HvlQueryVsmConnection @ 0x14012B22C (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlSwitchToVsmVtl1 @ 0x1401C0AA0 (HvlSwitchToVsmVtl1.c)
 *     VslpDispatchIumSyscall @ 0x1401C0C00 (VslpDispatchIumSyscall.c)
 *     PsDispatchIumService @ 0x140308164 (PsDispatchIumService.c)
 */

NTSTATUS __fastcall VslpEnterIumSecureMode(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  int v5; // r12d
  bool v6; // bl
  __int16 v7; // dx
  unsigned __int8 v8; // r9
  __int64 v9; // r10
  NTSTATUS result; // eax
  char v11; // bl
  char v12; // r9
  LARGE_INTEGER *Timeout; // r10
  unsigned __int64 v14; // r11
  unsigned __int8 CurrentIrql; // r8
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int8 v17; // r15
  unsigned int SecureThreadCookie; // eax
  char v19; // cl
  char v20; // bl
  _DISPATCHER_HEADER *v21; // r9
  char v22; // al
  char v23; // r9
  unsigned int v24; // ecx
  struct _KTHREAD *v25; // rax
  unsigned int v26; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v28; // rcx
  char v30; // [rsp+31h] [rbp-28h]
  char PreviousMode; // [rsp+32h] [rbp-27h]
  char v32; // [rsp+34h] [rbp-25h]
  unsigned __int8 v33; // [rsp+38h] [rbp-21h]
  _QWORD v34[2]; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v35[2]; // [rsp+50h] [rbp-9h] BYREF
  _QWORD v36[2]; // [rsp+60h] [rbp+7h] BYREF
  _QWORD v37[2]; // [rsp+70h] [rbp+17h] BYREF

  v4 = a4;
  v30 = 0;
  v5 = a3;
  LOBYTE(a4) = a1;
  v6 = 0;
  LOBYTE(a3) = 15;
  v33 = 15;
  if ( !(unsigned __int8)HvlQueryVsmConnection(0LL, a2, a3, a4) )
    return -1073741667;
  *(_BYTE *)v4 = v8;
  *(_WORD *)(v4 + 2) = v7;
  if ( v8 > 2u )
  {
    if ( (BYTE4(xmmword_140572410) & 8) != 0 )
    {
      v34[0] = v9;
      v34[1] = v9;
      v11 = 1;
      EtwTraceKernelEvent((__int64)v34, 1u, 0xA0000008, 0x549u, 0x10401902u);
    }
    else
    {
      v11 = v9;
    }
    HvlSwitchToVsmVtl1(0LL, v4);
    if ( v11 )
    {
      v35[0] = 0LL;
      v35[1] = 0LL;
      EtwTraceKernelEvent((__int64)v35, 1u, 0xA0000008, 0x54Au, 0x10401902u);
    }
    if ( *(char *)(v4 + 1) < 0 )
    {
      __debugbreak();
      *(_BYTE *)(v4 + 1) &= ~0x80u;
    }
    return 0;
  }
  if ( !KeAreInterruptsEnabled() && VslVsmEnabled != (_BYTE)Timeout )
  {
    CurrentIrql = KeGetCurrentIrql();
    v33 = CurrentIrql;
    __writecr8(v14);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    }
  }
  CurrentThread = KeGetCurrentThread();
  v17 = KeGetCurrentIrql();
  if ( v12 == 1 )
  {
    *(_DWORD *)(v4 + 4) = v5;
  }
  else
  {
    if ( v5 )
    {
      *(_DWORD *)(v4 + 4) = v5;
    }
    else if ( v17 < 2u )
    {
      SecureThreadCookie = CurrentThread->SecureThreadCookie;
      if ( SecureThreadCookie )
      {
        v5 = CurrentThread->SecureThreadCookie;
        *(_DWORD *)(v4 + 4) = SecureThreadCookie;
      }
      else
      {
        *(_DWORD *)(v4 + 4) = (_DWORD)Timeout;
        if ( VslVsmEnabled != (_BYTE)Timeout )
        {
          result = KeWaitForSingleObject(&VslpIumThreadSemaphore, Executive, 0, 0, Timeout);
          Timeout = 0LL;
          if ( result < 0 )
            return result;
          v30 = 1;
        }
      }
    }
    else
    {
      *(_DWORD *)(v4 + 4) = (_DWORD)Timeout;
      v5 = 1;
    }
    v6 = CurrentThread->SecureThreadCookie == (_DWORD)Timeout;
  }
  if ( v17 == 1 )
  {
    v32 = 1;
LABEL_36:
    --CurrentThread->KernelApcDisable;
    goto LABEL_37;
  }
  v19 = (char)Timeout;
  if ( !v17 )
    v19 = v6;
  v32 = v19;
  if ( v19 )
    goto LABEL_36;
  while ( 1 )
  {
LABEL_37:
    if ( (BYTE4(xmmword_140572410) & 8) != 0 )
    {
      v36[1] = 0LL;
      v36[0] = Timeout;
      v20 = 1;
      EtwTraceKernelEvent((__int64)v36, 1u, 0xA0000008, 0x549u, 0x10401902u);
    }
    else
    {
      v20 = (char)Timeout;
    }
    HvlSwitchToVsmVtl1(0LL, v4);
    Timeout = 0LL;
    if ( v20 )
    {
      v37[0] = 0LL;
      v37[1] = 0LL;
      EtwTraceKernelEvent((__int64)v37, 1u, 0xA0000008, 0x54Au, 0x10401902u);
      Timeout = 0LL;
    }
    v22 = *(_BYTE *)(v4 + 1);
    if ( v22 < 0 )
    {
      __debugbreak();
      *(_BYTE *)(v4 + 1) &= ~0x80u;
      v22 = *(_BYTE *)(v4 + 1);
    }
    if ( v22 == 6 )
      break;
    if ( v22 == 1 )
      goto LABEL_74;
    v23 = a1;
    if ( a1 == 1 )
    {
      v24 = *(_DWORD *)(v4 + 4);
      v25 = CurrentThread;
      if ( !v24 )
        v25 = CurrentThread;
      v25->SecureThreadCookie = v24;
    }
    else if ( !v5 )
    {
      CurrentThread->SecureThreadCookie = *(_DWORD *)(v4 + 4);
    }
    switch ( *(_BYTE *)(v4 + 1) )
    {
      case 0:
        goto LABEL_56;
      case 2:
        if ( !CurrentThread->PreviousMode )
        {
          *(_QWORD *)(v4 + 8) = -1073741776LL;
          break;
        }
LABEL_64:
        v26 = *(unsigned __int16 *)(v4 + 2);
        if ( v26 >= (unsigned int)xmmword_14058A890 )
        {
          *(_QWORD *)(v4 + 8) = -1073741796LL;
          break;
        }
        PreviousMode = CurrentThread->PreviousMode;
        if ( *(_BYTE *)(v4 + 1) == 3 )
        {
          CurrentThread->PreviousMode = 0;
          LOWORD(v26) = *(_WORD *)(v4 + 2);
        }
        *(_QWORD *)(v4 + 8) = (int)VslpDispatchIumSyscall(
                                     KeServiceDescriptorTable
                                   + (*(int *)(KeServiceDescriptorTable + 4LL * (unsigned __int16)v26) >> 4),
                                     v4 + 8,
                                     *(_DWORD *)(KeServiceDescriptorTable + 4LL * (unsigned __int16)v26) & 0xF);
        CurrentThread->PreviousMode = PreviousMode;
LABEL_57:
        v23 = a1;
        Timeout = 0LL;
        break;
      case 3:
        goto LABEL_64;
      case 5:
LABEL_56:
        PsDispatchIumService(v4);
        goto LABEL_57;
    }
    if ( !v5 && v23 != 1 )
      CurrentThread->SecureThreadCookie = 0;
    *(_BYTE *)v4 = 0;
    *(_WORD *)(v4 + 2) = 0;
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(0LL);
LABEL_74:
  if ( v30 )
    KeReleaseSemaphoreEx((__int64)&VslpIumThreadSemaphore, 0, 1, v21, 0);
  if ( v32 )
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v33 != 15 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v33 < 2u )
    {
      v28 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v28->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v28);
    }
    __writecr8(v33);
  }
  return *(_DWORD *)(v4 + 8);
}
