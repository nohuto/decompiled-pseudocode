/*
 * XREFs of _TlgWriteEx @ 0x1401008B8
 * Callers:
 *     MiAllocatePagesForMdl @ 0x140011048 (MiAllocatePagesForMdl.c)
 *     MiLogProcessWorkingSetsStop @ 0x140012974 (MiLogProcessWorkingSetsStop.c)
 *     MiProcessWorkingSets @ 0x14006CED0 (MiProcessWorkingSets.c)
 *     MiAgeWorkingSet @ 0x14006DE50 (MiAgeWorkingSet.c)
 *     MiAllocateContiguousMemory @ 0x1400E651C (MiAllocateContiguousMemory.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x140100524 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     MmNotifyProcessInSwapTrigger @ 0x14010CC28 (MmNotifyProcessInSwapTrigger.c)
 *     MiLogTrimWs @ 0x140131048 (MiLogTrimWs.c)
 *     MiStoreLogNotCandidate @ 0x140158088 (MiStoreLogNotCandidate.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x1402A3F9C (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1402A4190 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1402A4280 (MiLogResetPagesCommitRelease.c)
 *     MiStoreLogFullPagefile @ 0x1402C3F40 (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteCompleteFailure @ 0x1402C3FAC (MiStoreLogWriteCompleteFailure.c)
 *     MiStoreLogWriteDisabled @ 0x1402C4040 (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x1402C40FC (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x1402C4244 (MiStoreLogWriteIssueRetry.c)
 *     MmStoreLogCorruptionFixed @ 0x1402C4418 (MmStoreLogCorruptionFixed.c)
 *     MiLogWsEmptyControl @ 0x1402CB9A0 (MiLogWsEmptyControl.c)
 *     MiLogReserveVaFailed @ 0x14084E0D4 (MiLogReserveVaFailed.c)
 *     MiLogCreateImageFileMapFailure @ 0x14084E624 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x14084EB8C (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogHotPatchManagement @ 0x140855FA4 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x140856398 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchPagesLocked @ 0x140856620 (MiLogHotPatchPagesLocked.c)
 *     MiLogCommitRequestFailed @ 0x14085B938 (MiLogCommitRequestFailed.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1409BCCD4 (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     EtwWriteEx @ 0x1400CAD60 (EtwWriteEx.c)
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
  ULONG v9; // ecx
  EVENT_DESCRIPTOR v11; // [rsp+40h] [rbp-18h] BYREF

  *(_DWORD *)&v11.Id = ((_DWORD)pEventMetadata - (unsigned int)&TraceLoggingMetadata) | (*(unsigned __int8 *)pEventMetadata << 24);
  *(_DWORD *)&v11.Level = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  v11.Keyword = *(_QWORD *)((char *)pEventMetadata + 3);
  pData->Ptr = (ULONGLONG)hProvider->ProviderMetadataPtr;
  v9 = *hProvider->ProviderMetadataPtr;
  pData[1].Ptr = (ULONGLONG)pEventMetadata + 11;
  pData->Size = v9;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return EtwWriteEx(hProvider->RegHandle, &v11, 0LL, 1u, 0LL, 0LL, cData, pData);
}
