/*
 * XREFs of DpiIndicateConnectorChangeWorkItem @ 0x1C02628B0
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F734 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001DE80 (DpiCheckForOutstandingD3Requests.c)
 *     DxgkQueryConnectionChanges @ 0x1C0044888 (DxgkQueryConnectionChanges.c)
 *     DxgkStartCoreDripsBlockerTracking @ 0x1C0141A18 (DxgkStartCoreDripsBlockerTracking.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 *     DxgkWaitForPnPTransitionDone @ 0x1C0242C00 (DxgkWaitForPnPTransitionDone.c)
 */

void __fastcall DpiIndicateConnectorChangeWorkItem(_QWORD *IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v3; // rdi
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax

  v3 = IoObject[8];
  v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), IoWorkItem, File, 1u, 0x20u);
  v8 = v6;
  if ( v6 >= 0 )
  {
    if ( *(_BYTE *)(v3 + 1151) )
      DxgkWaitForPnPTransitionDone(0LL, 0);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v3 + 483) )
    {
      DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(v3 + 3816), 4023LL);
      DpiCheckForOutstandingD3Requests(v3);
    }
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 3232), 1u);
    DxgkQueryConnectionChanges((__int64)IoObject, 0, 0, 0, 1);
    ExReleaseResourceLite((PERESOURCE)(v3 + 3232));
    KeLeaveCriticalRegion();
    if ( *(_BYTE *)(v3 + 483) )
    {
      DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(v3 + 3816), 4023LL);
      DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
    KeLeaveCriticalRegion();
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), IoWorkItem, 0x20u);
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = v8;
    WdLogEvent5_WdError(v9);
  }
  IoFreeWorkItem(IoWorkItem);
}
