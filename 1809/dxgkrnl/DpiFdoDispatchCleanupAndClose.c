/*
 * XREFs of DpiFdoDispatchCleanupAndClose @ 0x1C0263BD0
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F734 (DpiEnableD3Requests.c)
 *     DpiDisableD3Requests @ 0x1C000F748 (DpiDisableD3Requests.c)
 *     DxgkIgnoreCoreDripsBlockerTracking @ 0x1C013BB54 (DxgkIgnoreCoreDripsBlockerTracking.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 */

NTSTATUS __fastcall DpiFdoDispatchCleanupAndClose(__int64 a1, IRP *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rdx
  PIRP v6; // rax

  v2 = *(_QWORD *)(a1 + 64);
  if ( !*(_BYTE *)(v2 + 1152) )
  {
    if ( *(_BYTE *)(v2 + 1151) )
    {
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      return IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 160), a2);
    }
    if ( *(_BYTE *)(v2 + 57) && a2->Tail.Overlay.CurrentStackLocation->MajorFunction == 2 )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v2 + 483) )
      {
        DxgkIgnoreCoreDripsBlockerTracking(*(_QWORD *)(v2 + 3816), v5);
        DpiDisableD3Requests(*(_QWORD *)(v2 + 24));
      }
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v2 + 168), 1u);
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v2 + 5408)) )
      {
        while ( 1 )
        {
          v6 = IoCsqRemoveNextIrp((PIO_CSQ)(v2 + 5200), 0LL);
          if ( !v6 )
            break;
          v6->IoStatus.Information = 0LL;
          v6->IoStatus.Status = -1073741536;
          IofCompleteRequest(v6, 0);
        }
        *(_BYTE *)(v2 + 5316) = 0;
        *(_BYTE *)(v2 + 5348) = 0;
      }
      if ( *(_BYTE *)(v2 + 483) )
      {
        DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(v2 + 3816), 4023LL);
        DpiEnableD3Requests(*(_QWORD *)(v2 + 24));
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v2 + 168));
      KeLeaveCriticalRegion();
    }
  }
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0;
}
