/*
 * XREFs of NtClose @ 0x1405FBB70
 * Callers:
 *     SepRmCallLsa @ 0x140133120 (SepRmCallLsa.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x14018E6A4 (_RtlpRemovePendingDeleteLanguages.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x14018E768 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     RtlQueryValidationRunlevel @ 0x140313C50 (RtlQueryValidationRunlevel.c)
 *     ObDuplicateObject @ 0x1405E69A0 (ObDuplicateObject.c)
 *     NtQueryInformationToken @ 0x1405ED700 (NtQueryInformationToken.c)
 *     CmOpenKey @ 0x1405FF600 (CmOpenKey.c)
 *     PfSnIsVolumeMounted @ 0x14062A72C (PfSnIsVolumeMounted.c)
 *     PfSnOpenVolumesForPrefetch @ 0x14062A850 (PfSnOpenVolumesForPrefetch.c)
 *     PfpFileBuildReadSupport @ 0x14062B454 (PfpFileBuildReadSupport.c)
 *     PfSnPrefetchMetadata @ 0x14062B7A8 (PfSnPrefetchMetadata.c)
 *     PfSnPopulateReadList @ 0x14062BF40 (PfSnPopulateReadList.c)
 *     PfSnGetSectionObject @ 0x14062C478 (PfSnGetSectionObject.c)
 *     PfpReadSupportCleanup @ 0x140646AAC (PfpReadSupportCleanup.c)
 *     AlpcpConnectPort @ 0x14065A080 (AlpcpConnectPort.c)
 *     AlpcpAcceptConnectPort @ 0x14065BBC8 (AlpcpAcceptConnectPort.c)
 *     PfSnGetPrefetchInstructions @ 0x1406715CC (PfSnGetPrefetchInstructions.c)
 *     PfpVolumeOpenAndVerify @ 0x1406AB7BC (PfpVolumeOpenAndVerify.c)
 *     NtSecureConnectPort @ 0x1406CB7B0 (NtSecureConnectPort.c)
 *     AlpcpCreateConnectionPort @ 0x1406D9188 (AlpcpCreateConnectionPort.c)
 *     NtCreateRegistryTransaction @ 0x1406EA4E0 (NtCreateRegistryTransaction.c)
 *     PfpPrefetchPrivatePages @ 0x1406F8E3C (PfpPrefetchPrivatePages.c)
 *     PfpSourceGetPrefetchSupport @ 0x1406F9094 (PfpSourceGetPrefetchSupport.c)
 *     CmpInitializeLazyWriters @ 0x1407591D4 (CmpInitializeLazyWriters.c)
 *     RtlpLoadLanguageConfigList @ 0x14076AC94 (RtlpLoadLanguageConfigList.c)
 *     AdtpObjsInitialize @ 0x140778CF4 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x1407791D0 (AdtpInitializeDriveLetters.c)
 *     PopEtEnergyTrackerCreate @ 0x140785B30 (PopEtEnergyTrackerCreate.c)
 *     NtOpenRegistryTransaction @ 0x1408237D0 (NtOpenRegistryTransaction.c)
 *     IopConnectLinkTrackingPort @ 0x140853340 (IopConnectLinkTrackingPort.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1408D3D10 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolTakeOwnership @ 0x1408D447C (RtlpSysVolTakeOwnership.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1409060E0 (EtwpSetCoverageSamplerInformation.c)
 *     ExpWatchLicenseInfoWork @ 0x14090A590 (ExpWatchLicenseInfoWork.c)
 *     sub_1409EC964 @ 0x1409EC964 (sub_1409EC964.c)
 *     ObInitSystem @ 0x140A0533C (ObInitSystem.c)
 *     ExpWatchProductTypeInitialization @ 0x140A0A8D8 (ExpWatchProductTypeInitialization.c)
 *     IopInitializeBuiltinDriver @ 0x140A11960 (IopInitializeBuiltinDriver.c)
 *     IopInitCrashDumpRegCallback @ 0x140A16DD0 (IopInitCrashDumpRegCallback.c)
 *     SepAdtInitializeAuditingOptions @ 0x140A180E0 (SepAdtInitializeAuditingOptions.c)
 *     FsRtlInitializeSmssEvent @ 0x140A1A794 (FsRtlInitializeSmssEvent.c)
 *     ExpInitializeCallbacks @ 0x140A1C868 (ExpInitializeCallbacks.c)
 *     CreateSystemRootLink @ 0x140A1DB6C (CreateSystemRootLink.c)
 *     IopProtectSystemPartition @ 0x140A215E8 (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x140A384C0 (InitSafeBoot.c)
 *     IopApplySystemPartitionProt @ 0x140A3A284 (IopApplySystemPartitionProt.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExLockHandleTableEntry @ 0x14003FA90 (ExLockHandleTableEntry.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ObpIsKernelHandle @ 0x140082CB0 (ObpIsKernelHandle.c)
 *     ExQueryHandleExceptionsPermanency @ 0x14015CA28 (ExQueryHandleExceptionsPermanency.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x1402A6E10 (KeRaiseUserException.c)
 *     ExHandleLogBadReference @ 0x1403385F8 (ExHandleLogBadReference.c)
 *     ObReferenceProcessHandleTable @ 0x1405E6F94 (ObReferenceProcessHandleTable.c)
 *     ObCloseHandleTableEntry @ 0x1405F65C0 (ObCloseHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1405FBAD0 (ExpLookupHandleTableEntry.c)
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
