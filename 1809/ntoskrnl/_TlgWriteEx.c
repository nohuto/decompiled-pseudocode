/*
 * XREFs of _TlgWriteEx @ 0x140100938
 * Callers:
 *     MiAllocatePagesForMdl @ 0x140011048 (MiAllocatePagesForMdl.c)
 *     MiLogProcessWorkingSetsStop @ 0x140012974 (MiLogProcessWorkingSetsStop.c)
 *     MiProcessWorkingSets @ 0x14006CEC0 (MiProcessWorkingSets.c)
 *     MiAgeWorkingSet @ 0x14006DE40 (MiAgeWorkingSet.c)
 *     MiAllocateContiguousMemory @ 0x1400E659C (MiAllocateContiguousMemory.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x1401005A4 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     MmNotifyProcessInSwapTrigger @ 0x14010CCA8 (MmNotifyProcessInSwapTrigger.c)
 *     MiLogTrimWs @ 0x140131118 (MiLogTrimWs.c)
 *     MiStoreLogNotCandidate @ 0x140158188 (MiStoreLogNotCandidate.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x1402A418C (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1402A4380 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1402A4470 (MiLogResetPagesCommitRelease.c)
 *     MiStoreLogFullPagefile @ 0x1402C4130 (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteCompleteFailure @ 0x1402C419C (MiStoreLogWriteCompleteFailure.c)
 *     MiStoreLogWriteDisabled @ 0x1402C4230 (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x1402C42EC (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x1402C4434 (MiStoreLogWriteIssueRetry.c)
 *     MmStoreLogCorruptionFixed @ 0x1402C4608 (MmStoreLogCorruptionFixed.c)
 *     MiLogWsEmptyControl @ 0x1402CBB90 (MiLogWsEmptyControl.c)
 *     MiLogReserveVaFailed @ 0x14084F334 (MiLogReserveVaFailed.c)
 *     MiLogCreateImageFileMapFailure @ 0x14084F884 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x14084FDEC (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogHotPatchManagement @ 0x140857204 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x1408575F8 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchPagesLocked @ 0x140857880 (MiLogHotPatchPagesLocked.c)
 *     MiLogCommitRequestFailed @ 0x14085CB98 (MiLogCommitRequestFailed.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1409BDCD4 (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
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
