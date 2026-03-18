/*
 * XREFs of _TlgWriteEx @ 0x140100898
 * Callers:
 *     MiAllocatePagesForMdl @ 0x140011048 (MiAllocatePagesForMdl.c)
 *     MiLogProcessWorkingSetsStop @ 0x140012974 (MiLogProcessWorkingSetsStop.c)
 *     MiProcessWorkingSets @ 0x14006CED0 (MiProcessWorkingSets.c)
 *     MiAgeWorkingSet @ 0x14006DE50 (MiAgeWorkingSet.c)
 *     MiAllocateContiguousMemory @ 0x1400E64FC (MiAllocateContiguousMemory.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x140100504 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     MmNotifyProcessInSwapTrigger @ 0x14010CC08 (MmNotifyProcessInSwapTrigger.c)
 *     MiLogTrimWs @ 0x140131028 (MiLogTrimWs.c)
 *     MiStoreLogNotCandidate @ 0x140158068 (MiStoreLogNotCandidate.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x1402A3E9C (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1402A4090 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1402A4180 (MiLogResetPagesCommitRelease.c)
 *     MiStoreLogFullPagefile @ 0x1402C3E40 (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteCompleteFailure @ 0x1402C3EAC (MiStoreLogWriteCompleteFailure.c)
 *     MiStoreLogWriteDisabled @ 0x1402C3F40 (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x1402C3FFC (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x1402C4144 (MiStoreLogWriteIssueRetry.c)
 *     MmStoreLogCorruptionFixed @ 0x1402C4318 (MmStoreLogCorruptionFixed.c)
 *     MiLogWsEmptyControl @ 0x1402CB8A0 (MiLogWsEmptyControl.c)
 *     MiLogReserveVaFailed @ 0x14084E0F4 (MiLogReserveVaFailed.c)
 *     MiLogCreateImageFileMapFailure @ 0x14084E644 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x14084EBAC (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogHotPatchManagement @ 0x140855FC4 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x1408563B8 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchPagesLocked @ 0x140856640 (MiLogHotPatchPagesLocked.c)
 *     MiLogCommitRequestFailed @ 0x14085B958 (MiLogCommitRequestFailed.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1409BCCD4 (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     EtwWriteEx @ 0x1400CAD40 (EtwWriteEx.c)
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
