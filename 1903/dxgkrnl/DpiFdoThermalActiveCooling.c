/*
 * XREFs of DpiFdoThermalActiveCooling @ 0x1C02AA420
 * Callers:
 *     DxgkHandleThermalCoolingDrtEscape @ 0x1C02AAC18 (DxgkHandleThermalCoolingDrtEscape.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0008924 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001D8BC (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pt @ 0x1C0035BE4 (McTemplateK0pt.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0127548 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0127A14 (DpiReleaseCoreSyncAccessSafe.c)
 */

void __fastcall DpiFdoThermalActiveCooling(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rbx
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  const GUID *v12; // r8
  __int64 v13; // [rsp+20h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 64);
  v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 64), DpiFdoThermalActiveCooling, File, 1u, 0x20u);
  v9 = v5;
  if ( v5 >= 0 )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v2 + 484) )
      DpiCheckForOutstandingD3Requests(v2);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v2 + 168), 1u);
    if ( (int)DpiAcquireCoreSyncAccessSafe(a1, 0) < 0 )
    {
      **(_BYTE **)(v2 + 4936) = 1;
    }
    else
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      {
        LODWORD(v13) = a2;
        McTemplateK0pt(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          &EventDpiFdoThermalActiveCooling,
          v12,
          a1,
          v13);
      }
      LOBYTE(v11) = a2;
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v2 + 4936) + 48LL))(
        *(_QWORD *)(*(_QWORD *)(v2 + 4936) + 16LL),
        v11);
      DpiReleaseCoreSyncAccessSafe(a1, 0);
    }
    *(_BYTE *)(*(_QWORD *)(v2 + 4936) + 2LL) = a2;
    if ( *(_BYTE *)(v2 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v2 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v2 + 168));
    KeLeaveCriticalRegion();
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 64), DpiFdoThermalActiveCooling, 0x20u);
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v10 + 24) = v9;
    WdLogEvent5_WdError(v10);
  }
}
