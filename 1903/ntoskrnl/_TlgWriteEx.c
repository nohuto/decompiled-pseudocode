/*
 * XREFs of _TlgWriteEx @ 0x14013C9DC
 * Callers:
 *     MiProcessWorkingSets @ 0x140047BB0 (MiProcessWorkingSets.c)
 *     MiAgeWorkingSet @ 0x1400489B0 (MiAgeWorkingSet.c)
 *     MiLogProcessWorkingSetsStop @ 0x14008A670 (MiLogProcessWorkingSetsStop.c)
 *     MmNotifyProcessInSwapTrigger @ 0x140091EA4 (MmNotifyProcessInSwapTrigger.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x1400B2D88 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     MiLogTrimWs @ 0x140129EAC (MiLogTrimWs.c)
 *     MiLogWsEmptyControl @ 0x140143164 (MiLogWsEmptyControl.c)
 *     MiStoreLogNotCandidate @ 0x140168968 (MiStoreLogNotCandidate.c)
 *     PopPlNotifyDeviceDState @ 0x14017B4F0 (PopPlNotifyDeviceDState.c)
 *     PopPlNotifyDeviceFState @ 0x14017ECF4 (PopPlNotifyDeviceFState.c)
 *     PopPlRegisterComponent @ 0x140191878 (PopPlRegisterComponent.c)
 *     PopPlRegisterDevice @ 0x140191988 (PopPlRegisterDevice.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x1402BB37C (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1402BB570 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1402BB660 (MiLogResetPagesCommitRelease.c)
 *     MiStoreLogFullPagefile @ 0x1402DE23C (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteCompleteFailure @ 0x1402DE2A8 (MiStoreLogWriteCompleteFailure.c)
 *     MiStoreLogWriteDisabled @ 0x1402DE33C (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x1402DE3F8 (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x1402DE540 (MiStoreLogWriteIssueRetry.c)
 *     MmStoreLogCorruptionFixed @ 0x1402DE660 (MmStoreLogCorruptionFixed.c)
 *     PopPlPublishInitialPowerDraw @ 0x1403051A0 (PopPlPublishInitialPowerDraw.c)
 *     PopPlPublishSystemPowerChange @ 0x140305358 (PopPlPublishSystemPowerChange.c)
 *     PopPlRegisterDeviceIterator @ 0x140305460 (PopPlRegisterDeviceIterator.c)
 *     PopPlRegisterPowerPlane @ 0x1403055EC (PopPlRegisterPowerPlane.c)
 *     PopPlTraceLogPowerPlane @ 0x140305794 (PopPlTraceLogPowerPlane.c)
 *     MiLogHotPatchRundown @ 0x1405B1004 (MiLogHotPatchRundown.c)
 *     MiLogReserveVaFailed @ 0x140889D54 (MiLogReserveVaFailed.c)
 *     MiLogCreateImageFileMapFailure @ 0x14088A6FC (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x14088AC84 (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogHotPatchManagement @ 0x14088F548 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x14088F93C (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x14088FBF8 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x14088FF44 (MiLogHotPatchPagesLocked.c)
 *     MiLogCommitRequestFailed @ 0x1408984C8 (MiLogCommitRequestFailed.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1409F1470 (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     EtwWriteEx @ 0x140036300 (EtwWriteEx.c)
 */

TLG_STATUS __stdcall TlgWriteEx(
        TraceLoggingHProvider hProvider,
        const void *pEventMetadata,
        ULONG64 filter,
        ULONG flags,
        LPCGUID pActivityId,
        LPCGUID pRelatedActivityId,
        UINT32 cData,
        EVENT_DATA_DESCRIPTOR *pData)
{
  EVENT_DESCRIPTOR v9; // [rsp+40h] [rbp-18h] BYREF

  *(_DWORD *)&v9.Id = *(unsigned __int8 *)pEventMetadata << 24;
  *(_DWORD *)&v9.Level = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  v9.Keyword = *(_QWORD *)((char *)pEventMetadata + 3);
  pData->Ptr = (ULONGLONG)hProvider->ProviderMetadataPtr;
  pData->Size = *hProvider->ProviderMetadataPtr;
  pData[1].Ptr = (ULONGLONG)pEventMetadata + 11;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return EtwWriteEx(hProvider->RegHandle, &v9, 0LL, 1u, 0LL, 0LL, cData, pData);
}
