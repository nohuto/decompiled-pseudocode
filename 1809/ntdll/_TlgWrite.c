/*
 * XREFs of _TlgWrite @ 0x18004D1E8
 * Callers:
 *     RtlpLogCapabilityCheckLatency @ 0x18004B4B8 (RtlpLogCapabilityCheckLatency.c)
 *     LdrpLogCFGModuleInfoTelemetry @ 0x18004CDD4 (LdrpLogCFGModuleInfoTelemetry.c)
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x18005479C (LdrpLogRelativePathWithAlteredSearchError.c)
 *     LdrpResReportResourceAccessInternal @ 0x18007DFE4 (LdrpResReportResourceAccessInternal.c)
 *     LdrpLogImportRedirectionTelemetry @ 0x1800D1664 (LdrpLogImportRedirectionTelemetry.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800D1770 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpLogMapAndVerifyResourceFileFailure @ 0x1800D1A74 (LdrpLogMapAndVerifyResourceFileFailure.c)
 *     LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure @ 0x1800D1CE8 (LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure.c)
 *     LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry @ 0x1800D1E18 (LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x1800D1F1C (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x1800D1FFC (LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x1800D20DC (LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry.c)
 *     RtlpHpTlLogGCScheduled @ 0x180109ECC (RtlpHpTlLogGCScheduled.c)
 *     RtlpHpTlLogGCTimerFinished @ 0x180109F28 (RtlpHpTlLogGCTimerFinished.c)
 *     RtlpHpTlLogMemStats @ 0x180109F84 (RtlpHpTlLogMemStats.c)
 *     RtlpHpTlLogVAChange @ 0x18010A060 (RtlpHpTlLogVAChange.c)
 * Callees:
 *     EtwEventWriteTransfer @ 0x18004DCB0 (EtwEventWriteTransfer.c)
 */

TLG_STATUS __stdcall TlgWrite(
        TraceLoggingHProvider hProvider,
        const void *pEventMetadata,
        LPCGUID pActivityId,
        LPCGUID pRelatedActivityId,
        UINT32 cData,
        EVENT_DATA_DESCRIPTOR *pData)
{
  unsigned int v7; // ecx
  _DWORD v9[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h]

  v9[0] = ((_DWORD)pEventMetadata - (unsigned int)&TraceLoggingMetadata) | (*(unsigned __int8 *)pEventMetadata << 24);
  v9[1] = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  v10 = *(_QWORD *)((char *)pEventMetadata + 3);
  pData->Ptr = *((_QWORD *)hProvider + 1);
  v7 = **((unsigned __int16 **)hProvider + 1);
  pData[1].Ptr = (unsigned __int64)pEventMetadata + 11;
  pData->Size = v7;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return EtwEventWriteTransfer(*((_QWORD *)hProvider + 4), (unsigned int)v9, 0, 0, cData, (__int64)pData);
}
