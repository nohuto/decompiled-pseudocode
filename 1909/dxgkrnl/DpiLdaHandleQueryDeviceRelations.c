/*
 * XREFs of DpiLdaHandleQueryDeviceRelations @ 0x1C02AE440
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0008B54 (DpiEnableD3Requests.c)
 *     DpiDisableD3Requests @ 0x1C0008B68 (DpiDisableD3Requests.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

__int64 __fastcall DpiLdaHandleQueryDeviceRelations(__int64 a1, IRP *a2)
{
  unsigned int v2; // ebp
  __int64 v3; // rsi
  int v5; // ebx
  __int64 v6; // rax
  unsigned int *Information; // rbx
  __int64 v8; // r15
  _DWORD *PoolWithTag; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _DWORD *v14; // r14
  __int64 v15; // rax

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 64);
  v5 = -1073741637;
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length != 3 )
    goto LABEL_20;
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v3 + 484) )
    DpiDisableD3Requests(*(_QWORD *)(v3 + 24));
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
  v6 = *(_QWORD *)(v3 + 2728);
  if ( v6 )
  {
    Information = (unsigned int *)a2->IoStatus.Information;
    v8 = *(_QWORD *)(v6 + 64);
    if ( Information )
      v2 = *Information;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v2 + 16, 0x74727044u);
    v14 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8 * v2 + 16);
      *v14 = v2 + 1;
      if ( v2 )
        memmove(v14 + 2, Information + 2, 8LL * v2);
      *(_QWORD *)&v14[2 * v2 + 2] = *(_QWORD *)(v8 + 152);
      ObfReferenceObject(*(PVOID *)(v8 + 152));
      if ( Information )
        ExFreePoolWithTag(Information, 0);
      a2->IoStatus.Information = (ULONG_PTR)v14;
      v5 = 0;
    }
    else
    {
      v5 = -1073741801;
      v15 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
      *(_QWORD *)(v15 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v15);
    }
  }
  if ( *(_BYTE *)(v3 + 484) )
    DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
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
