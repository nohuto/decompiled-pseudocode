/*
 * XREFs of NtClose @ 0x1405E99E0
 * Callers:
 *     SepRmCallLsa @ 0x14012FC10 (SepRmCallLsa.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x140182840 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x1401829A0 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     RtlQueryValidationRunlevel @ 0x1402F57D0 (RtlQueryValidationRunlevel.c)
 *     ObDuplicateObject @ 0x1405D1B70 (ObDuplicateObject.c)
 *     CmOpenKey @ 0x1405E1EA0 (CmOpenKey.c)
 *     AlpcpConnectPort @ 0x1406154A4 (AlpcpConnectPort.c)
 *     AlpcpAcceptConnectPort @ 0x14061ACD8 (AlpcpAcceptConnectPort.c)
 *     NtQueryInformationToken @ 0x14062B780 (NtQueryInformationToken.c)
 *     PfpVolumeOpenAndVerify @ 0x14065D5D4 (PfpVolumeOpenAndVerify.c)
 *     PfSnOpenVolumesForPrefetch @ 0x14065EE0C (PfSnOpenVolumesForPrefetch.c)
 *     PfSnIsVolumeMounted @ 0x14065F3D4 (PfSnIsVolumeMounted.c)
 *     PfSnPrefetchMetadata @ 0x14065FE9C (PfSnPrefetchMetadata.c)
 *     PfpFileBuildReadSupport @ 0x140660480 (PfpFileBuildReadSupport.c)
 *     PfSnPopulateReadList @ 0x140660900 (PfSnPopulateReadList.c)
 *     PfSnGetSectionObject @ 0x140660E58 (PfSnGetSectionObject.c)
 *     PfpReadSupportCleanup @ 0x140663BCC (PfpReadSupportCleanup.c)
 *     PfSnGetPrefetchInstructions @ 0x1406699D8 (PfSnGetPrefetchInstructions.c)
 *     NtSecureConnectPort @ 0x1406A6DC0 (NtSecureConnectPort.c)
 *     AlpcpCreateConnectionPort @ 0x1406B7948 (AlpcpCreateConnectionPort.c)
 *     NtCreateRegistryTransaction @ 0x1406C8F80 (NtCreateRegistryTransaction.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1406D7560 (RtlCreateSystemVolumeInformationFolder.c)
 *     AdtpObjsInitialize @ 0x140738418 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x140738924 (AdtpInitializeDriveLetters.c)
 *     RtlpLoadLanguageConfigList @ 0x14073EBD4 (RtlpLoadLanguageConfigList.c)
 *     _RtlpMuiRegLoadInstalled @ 0x14073F178 (_RtlpMuiRegLoadInstalled.c)
 *     CmpInitializeLazyWriters @ 0x1407497A4 (CmpInitializeLazyWriters.c)
 *     PopEtEnergyTrackerCreate @ 0x14075D570 (PopEtEnergyTrackerCreate.c)
 *     NtOpenRegistryTransaction @ 0x1407EA650 (NtOpenRegistryTransaction.c)
 *     IopConnectLinkTrackingPort @ 0x14081ABD0 (IopConnectLinkTrackingPort.c)
 *     PfpPrefetchPrivatePages @ 0x1408655EC (PfpPrefetchPrivatePages.c)
 *     PfpSourceGetPrefetchSupport @ 0x1408660C0 (PfpSourceGetPrefetchSupport.c)
 *     RtlpSysVolTakeOwnership @ 0x1408976E0 (RtlpSysVolTakeOwnership.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1408CA57C (EtwpSetCoverageSamplerInformation.c)
 *     ExpWatchLicenseInfoWork @ 0x1408CE820 (ExpWatchLicenseInfoWork.c)
 *     sub_1409AB2A4 @ 0x1409AB2A4 (sub_1409AB2A4.c)
 *     ObInitSystem @ 0x1409B2964 (ObInitSystem.c)
 *     SepAdtInitializeAuditingOptions @ 0x1409C7290 (SepAdtInitializeAuditingOptions.c)
 *     IopInitializeBuiltinDriver @ 0x1409CCA80 (IopInitializeBuiltinDriver.c)
 *     IopInitCrashDumpRegCallback @ 0x1409D3F70 (IopInitCrashDumpRegCallback.c)
 *     ExpWatchProductTypeInitialization @ 0x1409D6738 (ExpWatchProductTypeInitialization.c)
 *     FsRtlInitializeSmssEvent @ 0x1409D889C (FsRtlInitializeSmssEvent.c)
 *     ExpInitializeCallbacks @ 0x1409DA2E4 (ExpInitializeCallbacks.c)
 *     CreateSystemRootLink @ 0x1409DB774 (CreateSystemRootLink.c)
 *     IopProtectSystemPartition @ 0x1409DF514 (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x1409F4348 (InitSafeBoot.c)
 *     IopApplySystemPartitionProt @ 0x1409F5F40 (IopApplySystemPartitionProt.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ExLockHandleTableEntry @ 0x140053220 (ExLockHandleTableEntry.c)
 *     ObpIsKernelHandle @ 0x140088EC8 (ObpIsKernelHandle.c)
 *     ExQueryHandleExceptionsPermanency @ 0x140160874 (ExQueryHandleExceptionsPermanency.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x140290890 (KeRaiseUserException.c)
 *     ExHandleLogBadReference @ 0x14031A004 (ExHandleLogBadReference.c)
 *     ObReferenceProcessHandleTable @ 0x1405D2160 (ObReferenceProcessHandleTable.c)
 *     ObCloseHandleTableEntry @ 0x1405E7360 (ObCloseHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1405E9990 (ExpLookupHandleTableEntry.c)
 *     VfCheckUserHandle @ 0x14093A01C (VfCheckUserHandle.c)
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
