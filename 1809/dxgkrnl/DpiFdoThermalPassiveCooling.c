/*
 * XREFs of DpiFdoThermalPassiveCooling @ 0x1C026DA40
 * Callers:
 *     DxgkHandleThermalCoolingDrtEscape @ 0x1C026E068 (DxgkHandleThermalCoolingDrtEscape.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F734 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001DE80 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xq @ 0x1C002FE6C (McTemplateK0xq.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00BCC88 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00BCE94 (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkStartCoreDripsBlockerTracking @ 0x1C0141A18 (DxgkStartCoreDripsBlockerTracking.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 */

void __fastcall DpiFdoThermalPassiveCooling(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  const GUID *v10; // r8
  __int64 v11; // [rsp+20h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 64);
  v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 64), DpiFdoThermalPassiveCooling, File, 1u, 0x20u);
  v7 = v5;
  if ( v5 >= 0 )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v2 + 483) )
    {
      DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(v2 + 3816), 4023LL);
      DpiCheckForOutstandingD3Requests(v2);
    }
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v2 + 168), 1u);
    if ( (int)DpiAcquireCoreSyncAccessSafe(a1, 0) < 0 )
    {
      *(_BYTE *)(*(_QWORD *)(v2 + 4808) + 1LL) = 1;
    }
    else
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      {
        LODWORD(v11) = a2;
        McTemplateK0xq(v9, &EventDpiFdoThermalPassiveCooling, v10, a1, v11);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v2 + 4808) + 56LL))(
        *(_QWORD *)(*(_QWORD *)(v2 + 4808) + 16LL),
        a2);
      DpiReleaseCoreSyncAccessSafe(a1, 0);
    }
    *(_DWORD *)(*(_QWORD *)(v2 + 4808) + 4LL) = a2;
    if ( *(_BYTE *)(v2 + 483) )
    {
      DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(v2 + 3816), 4023LL);
      DpiEnableD3Requests(*(_QWORD *)(v2 + 24));
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v2 + 168));
    KeLeaveCriticalRegion();
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 64), DpiFdoThermalPassiveCooling, 0x20u);
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = v7;
    WdLogEvent5_WdError(v8);
  }
}
