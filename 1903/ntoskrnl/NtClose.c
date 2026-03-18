/*
 * XREFs of NtClose @ 0x1405FAB20
 * Callers:
 *     SepRmCallLsa @ 0x140132630 (SepRmCallLsa.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x14018DD94 (_RtlpRemovePendingDeleteLanguages.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x14018DE58 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     RtlQueryValidationRunlevel @ 0x140314200 (RtlQueryValidationRunlevel.c)
 *     ObDuplicateObject @ 0x1405E61D0 (ObDuplicateObject.c)
 *     NtQueryInformationToken @ 0x1405ECF30 (NtQueryInformationToken.c)
 *     CmOpenKey @ 0x1405FDBD0 (CmOpenKey.c)
 *     PfSnIsVolumeMounted @ 0x14062687C (PfSnIsVolumeMounted.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1406269A0 (PfSnOpenVolumesForPrefetch.c)
 *     PfpReadSupportCleanup @ 0x14062750C (PfpReadSupportCleanup.c)
 *     PfpFileBuildReadSupport @ 0x140627600 (PfpFileBuildReadSupport.c)
 *     PfSnPrefetchMetadata @ 0x140627954 (PfSnPrefetchMetadata.c)
 *     PfSnPopulateReadList @ 0x1406280F0 (PfSnPopulateReadList.c)
 *     PfSnGetSectionObject @ 0x140628628 (PfSnGetSectionObject.c)
 *     AlpcpConnectPort @ 0x140646324 (AlpcpConnectPort.c)
 *     AlpcpAcceptConnectPort @ 0x140648064 (AlpcpAcceptConnectPort.c)
 *     PfpVolumeOpenAndVerify @ 0x1406A9A58 (PfpVolumeOpenAndVerify.c)
 *     PfSnGetPrefetchInstructions @ 0x1406B4288 (PfSnGetPrefetchInstructions.c)
 *     NtSecureConnectPort @ 0x1406CC980 (NtSecureConnectPort.c)
 *     AlpcpCreateConnectionPort @ 0x1406D9518 (AlpcpCreateConnectionPort.c)
 *     NtCreateRegistryTransaction @ 0x1406E90C0 (NtCreateRegistryTransaction.c)
 *     PfpPrefetchPrivatePages @ 0x1406F707C (PfpPrefetchPrivatePages.c)
 *     PfpSourceGetPrefetchSupport @ 0x1406F72D4 (PfpSourceGetPrefetchSupport.c)
 *     RtlpLoadLanguageConfigList @ 0x140766194 (RtlpLoadLanguageConfigList.c)
 *     CmpInitializeLazyWriters @ 0x14076A9A4 (CmpInitializeLazyWriters.c)
 *     AdtpObjsInitialize @ 0x140775714 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x140775BF0 (AdtpInitializeDriveLetters.c)
 *     PopEtEnergyTrackerCreate @ 0x1407837D0 (PopEtEnergyTrackerCreate.c)
 *     NtOpenRegistryTransaction @ 0x1408240D0 (NtOpenRegistryTransaction.c)
 *     IopConnectLinkTrackingPort @ 0x140853C40 (IopConnectLinkTrackingPort.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1408D4410 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolTakeOwnership @ 0x1408D4B7C (RtlpSysVolTakeOwnership.c)
 *     EtwpSetCoverageSamplerInformation @ 0x140906780 (EtwpSetCoverageSamplerInformation.c)
 *     ExpWatchLicenseInfoWork @ 0x14090AB30 (ExpWatchLicenseInfoWork.c)
 *     sub_1409EC964 @ 0x1409EC964 (sub_1409EC964.c)
 *     ObInitSystem @ 0x140A04E20 (ObInitSystem.c)
 *     ExpWatchProductTypeInitialization @ 0x140A0A3AC (ExpWatchProductTypeInitialization.c)
 *     IopInitializeBuiltinDriver @ 0x140A111C8 (IopInitializeBuiltinDriver.c)
 *     IopInitCrashDumpRegCallback @ 0x140A16910 (IopInitCrashDumpRegCallback.c)
 *     SepAdtInitializeAuditingOptions @ 0x140A17C20 (SepAdtInitializeAuditingOptions.c)
 *     FsRtlInitializeSmssEvent @ 0x140A1A51C (FsRtlInitializeSmssEvent.c)
 *     ExpInitializeCallbacks @ 0x140A1C68C (ExpInitializeCallbacks.c)
 *     CreateSystemRootLink @ 0x140A1D990 (CreateSystemRootLink.c)
 *     IopProtectSystemPartition @ 0x140A21504 (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x140A38740 (InitSafeBoot.c)
 *     IopApplySystemPartitionProt @ 0x140A3A4B4 (IopApplySystemPartitionProt.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExLockHandleTableEntry @ 0x14003FD50 (ExLockHandleTableEntry.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ObpIsKernelHandle @ 0x1400828B0 (ObpIsKernelHandle.c)
 *     ExQueryHandleExceptionsPermanency @ 0x14015C388 (ExQueryHandleExceptionsPermanency.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x1402A70B0 (KeRaiseUserException.c)
 *     ExHandleLogBadReference @ 0x140338B98 (ExHandleLogBadReference.c)
 *     ObReferenceProcessHandleTable @ 0x1405E67C4 (ObReferenceProcessHandleTable.c)
 *     ObCloseHandleTableEntry @ 0x1405F5640 (ObCloseHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1405FAA80 (ExpLookupHandleTableEntry.c)
 *     VfCheckUserHandle @ 0x140977664 (VfCheckUserHandle.c)
 */

NTSTATUS __stdcall NtClose(HANDLE Handle)
{
  ULONG_PTR v1; // rbx
  char PreviousMode; // si
  struct _KTHREAD *CurrentThread; // rdi
  char v4; // r15
  _KPROCESS *Process; // r13
  PEPROCESS v6; // r12
  unsigned __int64 v7; // r14
  signed __int64 *v8; // rax
  volatile signed __int64 *v9; // rbp
  NTSTATUS v10; // edi
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
  if ( !PreviousMode && (v1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL && v1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v7 = ObpKernelHandleTable;
    v1 ^= 0xFFFFFFFF80000000uLL;
    v6 = PsInitialSystemProcess;
    goto LABEL_5;
  }
  v6 = CurrentThread->ApcState.Process;
  if ( KeGetCurrentThread()->ApcStateIndex != 1 )
  {
    v7 = Process[1].ActiveProcessors.Bitmap[4];
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
        v10 = ObCloseHandleTableEntry(v7, v9, v6, v1, PreviousMode, 0);
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
      && Process[1].ActiveProcessors.Bitmap[0]
      && (_BYTE)KdDebuggerEnabled )
    {
      KeBugCheckEx(0x93u, v1, 1uLL, 0LL, 0LL);
    }
    goto LABEL_16;
  }
  if ( (NtGlobalFlag & 0x400000) == 0 && !Process[1].ActiveProcessors.Bitmap[5] && !*(_QWORD *)(v7 + 96) )
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
