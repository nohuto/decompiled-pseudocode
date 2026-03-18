/*
 * XREFs of DpiPdoHandleQueryDeviceRelations @ 0x1C0276590
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F734 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001DE80 (DpiCheckForOutstandingD3Requests.c)
 *     DxgkStartCoreDripsBlockerTracking @ 0x1C0141A18 (DxgkStartCoreDripsBlockerTracking.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 */

__int64 __fastcall DpiPdoHandleQueryDeviceRelations(_QWORD *Object, __int64 a2)
{
  __int64 v4; // rbx
  int v5; // ecx
  unsigned int v6; // edi
  _QWORD *PoolWithTag; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  __int64 v10; // rax
  int v11; // ecx
  unsigned int v12; // eax
  _DWORD *v13; // r14
  unsigned int i; // ebp
  __int64 v15; // rdx

  v4 = *(_QWORD *)(*(_QWORD *)(Object[8] + 32LL) + 64LL);
  v5 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( v5 != 2 )
  {
    if ( v5 != 4 )
      return *(unsigned int *)(a2 + 48);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74727044u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_DWORD *)PoolWithTag = 1;
      PoolWithTag[1] = Object;
      ObfReferenceObject(Object);
      v6 = 0;
      *(_QWORD *)(a2 + 56) = v9;
      return v6;
    }
LABEL_5:
    v6 = -1073741801;
    v10 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v10 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v10);
    return v6;
  }
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v4 + 483) )
  {
    DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(v4 + 3816), 4023LL);
    DpiCheckForOutstandingD3Requests(v4);
  }
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
  v11 = *(_DWORD *)(v4 + 236);
  if ( v11 != 2 && (*(_DWORD *)(v4 + 240) != 2 || ((v11 - 3) & 0xFFFFFFFC) != 0 || v11 == 4)
    || (v12 = *(_DWORD *)(v4 + 2664), v12 < 2) )
  {
    v6 = *(_DWORD *)(a2 + 48);
  }
  else
  {
    v13 = ExAllocatePoolWithTag(PagedPool, 8LL * (v12 - 2) + 16, 0x74727044u);
    if ( !v13 )
      goto LABEL_5;
    for ( i = 1; i < *(_DWORD *)(v4 + 2664); ++i )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 2656) + 8LL * i) + 64LL);
      *(_QWORD *)&v13[2 * i] = *(_QWORD *)(v15 + 152);
      ObfReferenceObject(*(PVOID *)(v15 + 152));
    }
    v6 = 0;
    *v13 = i - 1;
    *(_QWORD *)(a2 + 56) = v13;
  }
  if ( *(_BYTE *)(v4 + 483) )
  {
    DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(v4 + 3816), 4023LL);
    DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
  }
  ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
  KeLeaveCriticalRegion();
  return v6;
}
