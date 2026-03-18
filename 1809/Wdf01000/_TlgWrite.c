/*
 * XREFs of _TlgWrite @ 0x1C0044534
 * Callers:
 *     ?ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z @ 0x1C004367C (-ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z.c)
 *     imp_WdfDriverCreate @ 0x1C004D9C0 (imp_WdfDriverCreate.c)
 *     imp_WdfDriverErrorReportApiMissing @ 0x1C004DE80 (imp_WdfDriverErrorReportApiMissing.c)
 *     LogDriverInfoStream @ 0x1C006255C (LogDriverInfoStream.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall TlgWrite(
        const _TlgProvider_t *pEventMetadata,
        char *cData,
        const _GUID *pData,
        const _GUID *hProvider,
        ULONG pEventMetadata_0,
        _EVENT_DATA_DESCRIPTOR *pActivityId)
{
  unsigned int v6; // ecx
  _EVENT_DESCRIPTOR desc; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&desc.Id = ((_DWORD)cData - (unsigned int)&TraceLoggingMetadata) | ((unsigned __int8)*cData << 24);
  *(_DWORD *)&desc.Level = *(unsigned __int16 *)(cData + 1);
  desc.Keyword = *(_QWORD *)(cData + 3);
  pActivityId->Ptr = (unsigned __int64)Tlgg_TelemetryProviderProv.ProviderMetadataPtr;
  v6 = *Tlgg_TelemetryProviderProv.ProviderMetadataPtr;
  pActivityId[1].Ptr = (unsigned __int64)(cData + 11);
  pActivityId->Size = v6;
  pActivityId->Reserved = 2;
  pActivityId[1].Size = *(unsigned __int16 *)(cData + 11);
  pActivityId[1].Reserved = 1;
  return EtwWriteTransfer(Tlgg_TelemetryProviderProv.RegHandle, &desc, 0LL, 0LL, pEventMetadata_0, pActivityId);
}
