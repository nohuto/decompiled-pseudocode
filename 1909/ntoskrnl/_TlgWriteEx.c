/*
 * XREFs of _TlgWriteEx @ 0x14013CFBC
 * Callers:
 *     MiProcessWorkingSets @ 0x140047C50 (MiProcessWorkingSets.c)
 *     MiAgeWorkingSet @ 0x140048A50 (MiAgeWorkingSet.c)
 *     MiLogProcessWorkingSetsStop @ 0x14008B970 (MiLogProcessWorkingSetsStop.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x1400E2E78 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     MmNotifyProcessInSwapTrigger @ 0x140109484 (MmNotifyProcessInSwapTrigger.c)
 *     MiLogTrimWs @ 0x14012A8CC (MiLogTrimWs.c)
 *     MiLogWsEmptyControl @ 0x1401436A4 (MiLogWsEmptyControl.c)
 *     MiStoreLogNotCandidate @ 0x1401683B8 (MiStoreLogNotCandidate.c)
 *     PopPlNotifyDeviceDState @ 0x14017BBE0 (PopPlNotifyDeviceDState.c)
 *     PopPlNotifyDeviceFState @ 0x14017F3E4 (PopPlNotifyDeviceFState.c)
 *     PopPlRegisterComponent @ 0x140191EE8 (PopPlRegisterComponent.c)
 *     PopPlRegisterDevice @ 0x140191FF8 (PopPlRegisterDevice.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x1402BB0DC (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1402BB2D0 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1402BB3C0 (MiLogResetPagesCommitRelease.c)
 *     MiStoreLogFullPagefile @ 0x1402DDF9C (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteCompleteFailure @ 0x1402DE008 (MiStoreLogWriteCompleteFailure.c)
 *     MiStoreLogWriteDisabled @ 0x1402DE09C (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x1402DE158 (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x1402DE2A0 (MiStoreLogWriteIssueRetry.c)
 *     MmStoreLogCorruptionFixed @ 0x1402DE3C0 (MmStoreLogCorruptionFixed.c)
 *     PopPlPublishInitialPowerDraw @ 0x140304C50 (PopPlPublishInitialPowerDraw.c)
 *     PopPlPublishSystemPowerChange @ 0x140304E08 (PopPlPublishSystemPowerChange.c)
 *     PopPlRegisterDeviceIterator @ 0x140304F10 (PopPlRegisterDeviceIterator.c)
 *     PopPlRegisterPowerPlane @ 0x14030509C (PopPlRegisterPowerPlane.c)
 *     PopPlTraceLogPowerPlane @ 0x140305244 (PopPlTraceLogPowerPlane.c)
 *     MiLogHotPatchRundown @ 0x1405B0E40 (MiLogHotPatchRundown.c)
 *     MiLogReserveVaFailed @ 0x140889574 (MiLogReserveVaFailed.c)
 *     MiLogCreateImageFileMapFailure @ 0x140889F1C (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x14088A4A4 (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogHotPatchManagement @ 0x14088ED68 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x14088F15C (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x14088F418 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x14088F764 (MiLogHotPatchPagesLocked.c)
 *     MiLogCommitRequestFailed @ 0x140897CE8 (MiLogCommitRequestFailed.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1409F1380 (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     EtwWriteEx @ 0x1400366F0 (EtwWriteEx.c)
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
