/*
 * XREFs of DpiFdoInvalidateChildWorkItem @ 0x1C02660E0
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F734 (DpiEnableD3Requests.c)
 *     DpiDisableD3Requests @ 0x1C000F748 (DpiDisableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001DE80 (DpiCheckForOutstandingD3Requests.c)
 *     DxgkIgnoreCoreDripsBlockerTracking @ 0x1C013BB54 (DxgkIgnoreCoreDripsBlockerTracking.c)
 *     DxgkStartCoreDripsBlockerTracking @ 0x1C0141A18 (DxgkStartCoreDripsBlockerTracking.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C0144B80 (DpiFdoInvalidateChildRelations.c)
 */

void __fastcall DpiFdoInvalidateChildWorkItem(_QWORD *IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v3; // rbx
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // ecx

  v3 = IoObject[8];
  IoFreeWorkItem(IoWorkItem);
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v3 + 483) )
  {
    DxgkIgnoreCoreDripsBlockerTracking(*(_QWORD *)(v3 + 3816), v6);
    DpiDisableD3Requests(*(_QWORD *)(v3 + 24));
  }
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
  v7 = *(_DWORD *)(v3 + 236);
  if ( (v7 == 2 || *(_DWORD *)(v3 + 240) == 2 && ((v7 - 3) & 0xFFFFFFFC) == 0 && v7 != 4)
    && *(_DWORD *)(v3 + 3888) != 1
    && *(_DWORD *)(v3 + 284) == 1 )
  {
    if ( *(_BYTE *)(v3 + 483) )
    {
      DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(v3 + 3816), 4023LL);
      DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
    KeLeaveCriticalRegion();
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v3 + 483) )
    {
      DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(v3 + 3816), 4023LL);
      DpiCheckForOutstandingD3Requests(v3);
    }
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
    v8 = *(_DWORD *)(v3 + 236);
    if ( (v8 == 2 || *(_DWORD *)(v3 + 240) == 2 && ((v8 - 3) & 0xFFFFFFFC) == 0 && v8 != 4)
      && *(_DWORD *)(v3 + 3888) != 1
      && *(_DWORD *)(v3 + 284) == 1 )
    {
      DpiFdoInvalidateChildRelations((__int64)IoObject, 6u, (__int64)Context);
    }
  }
  if ( Context )
    ExFreePoolWithTag(Context, 0x6E6F6374u);
  if ( *(_BYTE *)(v3 + 483) )
  {
    DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(v3 + 3816), 4023LL);
    DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
  }
  ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
  KeLeaveCriticalRegion();
}
