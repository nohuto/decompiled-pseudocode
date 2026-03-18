/*
 * XREFs of _TlgWrite @ 0x1C00436AC
 * Callers:
 *     ?ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z @ 0x1C004284C (-ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z.c)
 *     imp_WdfDriverCreate @ 0x1C004D2A0 (imp_WdfDriverCreate.c)
 *     imp_WdfDriverErrorReportApiMissing @ 0x1C004D770 (imp_WdfDriverErrorReportApiMissing.c)
 *     LogDriverInfoStream @ 0x1C00627EC (LogDriverInfoStream.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C0092BF8 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall TlgWrite(
        const _TlgProvider_t *hProvider,
        char *pEventMetadata,
        const _GUID *cData,
        const _GUID *pData,
        ULONG hProvider_0,
        _EVENT_DATA_DESCRIPTOR *pEventMetadata_0)
{
  _EVENT_DESCRIPTOR desc; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&desc.Id = (unsigned __int8)*pEventMetadata << 24;
  *(_DWORD *)&desc.Level = *(unsigned __int16 *)(pEventMetadata + 1);
  desc.Keyword = *(_QWORD *)(pEventMetadata + 3);
  pEventMetadata_0->Ptr = (unsigned __int64)hProvider->ProviderMetadataPtr;
  pEventMetadata_0->Size = *hProvider->ProviderMetadataPtr;
  pEventMetadata_0[1].Ptr = (unsigned __int64)(pEventMetadata + 11);
  pEventMetadata_0->Reserved = 2;
  pEventMetadata_0[1].Size = *(unsigned __int16 *)(pEventMetadata + 11);
  pEventMetadata_0[1].Reserved = 1;
  return EtwWriteTransfer(hProvider->RegHandle, &desc, 0LL, 0LL, hProvider_0, pEventMetadata_0);
}
