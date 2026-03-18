/*
 * XREFs of DpiIndicateConnectorChangeWorkItem @ 0x1C029C350
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0008924 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001D8BC (DpiCheckForOutstandingD3Requests.c)
 *     DxgkQueryConnectionChanges @ 0x1C001E418 (DxgkQueryConnectionChanges.c)
 *     DxgkWaitForPnPTransitionDone @ 0x1C00CE7A0 (DxgkWaitForPnPTransitionDone.c)
 */

void __fastcall DpiIndicateConnectorChangeWorkItem(_QWORD *IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v3; // rdi
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rax

  v3 = IoObject[8];
  v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), IoWorkItem, File, 1u, 0x20u);
  v10 = v6;
  if ( v6 >= 0 )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v3 + 484) )
      DpiCheckForOutstandingD3Requests(v3);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
    if ( *(_BYTE *)(v3 + 1159) && !*(_BYTE *)(v3 + 2743) )
    {
      if ( *(_BYTE *)(v3 + 484) )
        DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
      KeLeaveCriticalRegion();
      DxgkWaitForPnPTransitionDone(0LL, 0LL, 1u);
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v3 + 484) )
        DpiCheckForOutstandingD3Requests(v3);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 3304), 1u);
    DxgkQueryConnectionChanges((__int64)IoObject, 0LL, 0LL, 0, 1);
    ExReleaseResourceLite((PERESOURCE)(v3 + 3304));
    KeLeaveCriticalRegion();
    if ( *(_BYTE *)(v3 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
    KeLeaveCriticalRegion();
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), IoWorkItem, 0x20u);
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v11 + 24) = v10;
    WdLogEvent5_WdError(v11);
  }
  IoFreeWorkItem(IoWorkItem);
}
