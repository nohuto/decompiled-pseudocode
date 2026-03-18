/*
 * XREFs of NtClose @ 0x1405E89E0
 * Callers:
 *     SepRmCallLsa @ 0x14012FB20 (SepRmCallLsa.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1401826E0 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x140182840 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     RtlQueryValidationRunlevel @ 0x1402F54E0 (RtlQueryValidationRunlevel.c)
 *     ObDuplicateObject @ 0x1405D0B70 (ObDuplicateObject.c)
 *     CmOpenKey @ 0x1405E0EA0 (CmOpenKey.c)
 *     AlpcpConnectPort @ 0x1406144A4 (AlpcpConnectPort.c)
 *     AlpcpAcceptConnectPort @ 0x140619CD8 (AlpcpAcceptConnectPort.c)
 *     NtQueryInformationToken @ 0x14062A760 (NtQueryInformationToken.c)
 *     PfpVolumeOpenAndVerify @ 0x14065C434 (PfpVolumeOpenAndVerify.c)
 *     PfSnOpenVolumesForPrefetch @ 0x14065DC6C (PfSnOpenVolumesForPrefetch.c)
 *     PfSnIsVolumeMounted @ 0x14065E234 (PfSnIsVolumeMounted.c)
 *     PfSnPrefetchMetadata @ 0x14065ECFC (PfSnPrefetchMetadata.c)
 *     PfpFileBuildReadSupport @ 0x14065F2E0 (PfpFileBuildReadSupport.c)
 *     PfSnPopulateReadList @ 0x14065F760 (PfSnPopulateReadList.c)
 *     PfSnGetSectionObject @ 0x14065FCB8 (PfSnGetSectionObject.c)
 *     PfpReadSupportCleanup @ 0x140662A2C (PfpReadSupportCleanup.c)
 *     PfSnGetPrefetchInstructions @ 0x140668838 (PfSnGetPrefetchInstructions.c)
 *     NtSecureConnectPort @ 0x1406A5B40 (NtSecureConnectPort.c)
 *     AlpcpCreateConnectionPort @ 0x1406B66C8 (AlpcpCreateConnectionPort.c)
 *     NtCreateRegistryTransaction @ 0x1406C7D00 (NtCreateRegistryTransaction.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1406D62E0 (RtlCreateSystemVolumeInformationFolder.c)
 *     AdtpObjsInitialize @ 0x140737248 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x140737754 (AdtpInitializeDriveLetters.c)
 *     RtlpLoadLanguageConfigList @ 0x14073DA04 (RtlpLoadLanguageConfigList.c)
 *     _RtlpMuiRegLoadInstalled @ 0x14073DFA8 (_RtlpMuiRegLoadInstalled.c)
 *     CmpInitializeLazyWriters @ 0x1407485D4 (CmpInitializeLazyWriters.c)
 *     PopEtEnergyTrackerCreate @ 0x14075C3A0 (PopEtEnergyTrackerCreate.c)
 *     NtOpenRegistryTransaction @ 0x1407E9470 (NtOpenRegistryTransaction.c)
 *     IopConnectLinkTrackingPort @ 0x1408199F0 (IopConnectLinkTrackingPort.c)
 *     PfpPrefetchPrivatePages @ 0x1408643AC (PfpPrefetchPrivatePages.c)
 *     PfpSourceGetPrefetchSupport @ 0x140864E80 (PfpSourceGetPrefetchSupport.c)
 *     RtlpSysVolTakeOwnership @ 0x1408964A0 (RtlpSysVolTakeOwnership.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1408C92DC (EtwpSetCoverageSamplerInformation.c)
 *     ExpWatchLicenseInfoWork @ 0x1408CD580 (ExpWatchLicenseInfoWork.c)
 *     sub_1409AA2A4 @ 0x1409AA2A4 (sub_1409AA2A4.c)
 *     ObInitSystem @ 0x1409B1964 (ObInitSystem.c)
 *     SepAdtInitializeAuditingOptions @ 0x1409C6290 (SepAdtInitializeAuditingOptions.c)
 *     IopInitializeBuiltinDriver @ 0x1409CBA80 (IopInitializeBuiltinDriver.c)
 *     IopInitCrashDumpRegCallback @ 0x1409D2F70 (IopInitCrashDumpRegCallback.c)
 *     ExpWatchProductTypeInitialization @ 0x1409D5738 (ExpWatchProductTypeInitialization.c)
 *     FsRtlInitializeSmssEvent @ 0x1409D789C (FsRtlInitializeSmssEvent.c)
 *     ExpInitializeCallbacks @ 0x1409D92E4 (ExpInitializeCallbacks.c)
 *     CreateSystemRootLink @ 0x1409DA774 (CreateSystemRootLink.c)
 *     IopProtectSystemPartition @ 0x1409DE514 (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x1409F3340 (InitSafeBoot.c)
 *     IopApplySystemPartitionProt @ 0x1409F4F30 (IopApplySystemPartitionProt.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ExLockHandleTableEntry @ 0x140053220 (ExLockHandleTableEntry.c)
 *     ObpIsKernelHandle @ 0x140088ED8 (ObpIsKernelHandle.c)
 *     ExQueryHandleExceptionsPermanency @ 0x140160754 (ExQueryHandleExceptionsPermanency.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x1402905A0 (KeRaiseUserException.c)
 *     ExHandleLogBadReference @ 0x140319D14 (ExHandleLogBadReference.c)
 *     ObReferenceProcessHandleTable @ 0x1405D1160 (ObReferenceProcessHandleTable.c)
 *     ObCloseHandleTableEntry @ 0x1405E6360 (ObCloseHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1405E8990 (ExpLookupHandleTableEntry.c)
 *     VfCheckUserHandle @ 0x14093901C (VfCheckUserHandle.c)
 */

NTSTATUS __stdcall NtClose(HANDLE Handle)
{
  ULONG_PTR v1; // rdi
  char PreviousMode; // si
  struct _KTHREAD *CurrentThread; // rbx
  char v4; // r14
  _KPROCESS *Process; // r13
  PEPROCESS v6; // r12
  unsigned __int64 v7; // r15
  signed __int64 *v8; // rax
  volatile signed __int64 *v9; // rbp
  NTSTATUS v10; // ebx
  ULONG_PTR v12; // rcx
  bool v13; // [rsp+70h] [rbp+8h] BYREF
  char v14; // [rsp+78h] [rbp+10h] BYREF

  v1 = (ULONG_PTR)Handle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (MmVerifierData & 0x100) != 0 && !PreviousMode && !ObpIsKernelHandle((unsigned __int64)Handle, 0) )
    VfCheckUserHandle(v12);
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  Process = CurrentThread->ApcState.Process;
  if ( !PreviousMode && v1 <= 0xFFFFFFFFFFFFFFFDuLL && (v1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL )
  {
    v7 = ObpKernelHandleTable;
    v1 ^= 0xFFFFFFFF80000000uLL;
    v6 = PsInitialSystemProcess;
    goto LABEL_5;
  }
  v6 = CurrentThread->ApcState.Process;
  if ( KeGetCurrentThread()->ApcStateIndex != 1 )
  {
    v7 = Process[1].ActiveProcessors.Bitmap[5];
    if ( v7 != ObpKernelHandleTable )
      goto LABEL_5;
    return -1073741816;
  }
  v7 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process);
  if ( !v7 )
    return -1073741816;
  v4 = 1;
LABEL_5:
  --CurrentThread->KernelApcDisable;
  if ( (v1 & 0x3FC) != 0 )
  {
    v8 = (signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)v7, v1);
    v9 = v8;
    if ( v8 )
    {
      if ( ExLockHandleTableEntry(v7, v8) )
      {
        v10 = ObCloseHandleTableEntry(v7, v9, (ULONG_PTR)v6, v1, PreviousMode, 0);
        goto LABEL_9;
      }
    }
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v1 >= 0xFFFFFFFFFFFFFFFAuLL || v1 == 0 )
    goto LABEL_16;
  ExQueryHandleExceptionsPermanency(v7, &v14, &v13);
  if ( (*(_BYTE *)(v7 + 44) & 0x10) != 0 && v13 )
    ExHandleLogBadReference(v7, v1, PreviousMode);
  if ( !PreviousMode )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0
      && Process[1].ActiveProcessors.Bitmap[1]
      && (_BYTE)KdDebuggerEnabled )
    {
      KeBugCheckEx(0x93u, v1, 1uLL, 0LL, 0LL);
    }
    goto LABEL_16;
  }
  if ( (NtGlobalFlag & 0x400000) == 0 && !Process[1].ActiveProcessors.Bitmap[6] && !*(_QWORD *)(v7 + 96) )
  {
LABEL_16:
    v10 = -1073741816;
    if ( v1 + 6 <= 5 )
      v10 = 0;
    goto LABEL_9;
  }
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
    v10 = -1073741816;
  else
    v10 = KeRaiseUserException(0xC0000008);
LABEL_9:
  if ( v4 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v6[1].ProfileListHead.Blink);
  return v10;
}
