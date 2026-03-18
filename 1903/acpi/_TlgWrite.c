/*
 * XREFs of _TlgWrite @ 0x1C001D690
 * Callers:
 *     RunContext @ 0x1C0003C90 (RunContext.c)
 *     AcpiDiagTraceTemperatureTelemetry @ 0x1C00080F0 (AcpiDiagTraceTemperatureTelemetry.c)
 *     AcpiDiagTraceAmliWatchdogTimeout @ 0x1C0049418 (AcpiDiagTraceAmliWatchdogTimeout.c)
 *     AcpiDiagTraceRecordAmlEvaluationStatistics @ 0x1C0049BF8 (AcpiDiagTraceRecordAmlEvaluationStatistics.c)
 *     IrqTraceAffinityPolicy @ 0x1C0097FC8 (IrqTraceAffinityPolicy.c)
 * Callees:
 *     <none>
 */

TLG_STATUS __stdcall TlgWrite(
        TraceLoggingHProvider hProvider,
        const void *pEventMetadata,
        LPCGUID pActivityId,
        LPCGUID pRelatedActivityId,
        UINT32 cData,
        EVENT_DATA_DESCRIPTOR *pData)
{
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = *(unsigned __int8 *)pEventMetadata << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  EventDescriptor.Keyword = *(_QWORD *)((char *)pEventMetadata + 3);
  pData->Ptr = *((_QWORD *)hProvider + 1);
  pData->Size = **((unsigned __int16 **)hProvider + 1);
  pData[1].Ptr = (unsigned __int64)pEventMetadata + 11;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return EtwWriteTransfer(*((_QWORD *)hProvider + 4), &EventDescriptor, 0LL, 0LL, cData, pData);
}
