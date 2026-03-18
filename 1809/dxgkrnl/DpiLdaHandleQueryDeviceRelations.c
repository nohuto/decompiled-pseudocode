/*
 * XREFs of DpiLdaHandleQueryDeviceRelations @ 0x1C0272C00
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F734 (DpiEnableD3Requests.c)
 *     DpiDisableD3Requests @ 0x1C000F748 (DpiDisableD3Requests.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkIgnoreCoreDripsBlockerTracking @ 0x1C013BB54 (DxgkIgnoreCoreDripsBlockerTracking.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 */

__int64 __fastcall DpiLdaHandleQueryDeviceRelations(__int64 a1, IRP *a2)
{
  unsigned int v2; // ebp
  __int64 v3; // rsi
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned int *Information; // rbx
  __int64 v9; // r15
  _DWORD *PoolWithTag; // rax
  __int64 v11; // rcx
  _DWORD *v12; // r14
  __int64 v13; // rax

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 64);
  v5 = -1073741637;
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length != 3 )
    goto LABEL_20;
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v3 + 483) )
  {
    DxgkIgnoreCoreDripsBlockerTracking(*(_QWORD *)(v3 + 3816), v6);
    DpiDisableD3Requests(*(_QWORD *)(v3 + 24));
  }
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
  v7 = *(_QWORD *)(v3 + 2656);
  if ( v7 )
  {
    Information = (unsigned int *)a2->IoStatus.Information;
    v9 = *(_QWORD *)(v7 + 64);
    if ( Information )
      v2 = *Information;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v2 + 16, 0x74727044u);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8 * v2 + 16);
      *v12 = v2 + 1;
      if ( v2 )
        memmove(v12 + 2, Information + 2, 8LL * v2);
      *(_QWORD *)&v12[2 * v2 + 2] = *(_QWORD *)(v9 + 152);
      ObfReferenceObject(*(PVOID *)(v9 + 152));
      if ( Information )
        ExFreePoolWithTag(Information, 0);
      a2->IoStatus.Information = (ULONG_PTR)v12;
      v5 = 0;
    }
    else
    {
      v5 = -1073741801;
      v13 = WdLogNewEntry5_WdLowResource(v11);
      *(_QWORD *)(v13 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v13);
    }
  }
  if ( *(_BYTE *)(v3 + 483) )
  {
    DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(v3 + 3816), 4023LL);
    DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
  }
  ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
  KeLeaveCriticalRegion();
  if ( v5 >= 0 )
  {
    a2->IoStatus.Status = v5;
    goto LABEL_20;
  }
  if ( v5 == -1073741637 )
  {
LABEL_20:
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v3 + 160), a2);
  }
  a2->IoStatus.Status = v5;
  IofCompleteRequest(a2, 1);
  return (unsigned int)v5;
}
