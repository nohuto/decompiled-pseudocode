/*
 * XREFs of DpiFdoHandleQuerySrIovInterface @ 0x1C02A9F60
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0008924 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001D8BC (DpiCheckForOutstandingD3Requests.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C003C3E0 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C00513DC (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiGetPartitionedInterfaceContextPointer @ 0x1C02AA744 (DpiGetPartitionedInterfaceContextPointer.c)
 */

__int64 __fastcall DpiFdoHandleQuerySrIovInterface(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, PVOID Object)
{
  __int64 v5; // rdi
  unsigned int v6; // ebx
  __int16 v8; // si
  unsigned __int16 v9; // bp
  __int64 v10; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  _DWORD *PartitionedInterfaceContextPointer; // rax

  v5 = *(_QWORD *)(a1 + 64);
  v6 = 0;
  v8 = a3;
  v9 = a2;
  if ( bTracingEnabled )
    VgpuTrace(1, 0, (void *)v5, L"DpiFdoHandleQuerySrIovInterface", 0LL);
  if ( Object )
  {
    if ( v8 == 2 )
    {
      if ( v9 >= 0x90u )
      {
        KeEnterCriticalRegion();
        if ( *(_BYTE *)(v5 + 484) )
          DpiCheckForOutstandingD3Requests(v5);
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v5 + 168), 1u);
        if ( *(_BYTE *)(v5 + 4944) )
        {
          memmove(a4, &unk_1C00A1AA0, 0x90uLL);
          PartitionedInterfaceContextPointer = (_DWORD *)DpiGetPartitionedInterfaceContextPointer(v5, Object);
          a4[1] = PartitionedInterfaceContextPointer;
          DpiGetVirtualGpuType(PartitionedInterfaceContextPointer, &Object);
          ObfReferenceObject(Object);
          if ( *(_BYTE *)(v5 + 484) )
            DpiEnableD3Requests(*(_QWORD *)(v5 + 24));
        }
        else
        {
          v17 = WdLogNewEntry5_WdWarning(v15, v14, v16);
          *(_QWORD *)(v17 + 24) = 0LL;
          WdLogEvent5_WdWarning(v17);
          if ( *(_BYTE *)(v5 + 484) )
            DpiEnableD3Requests(*(_QWORD *)(v5 + 24));
          v6 = -1073741637;
        }
        ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
        KeLeaveCriticalRegion();
      }
      else
      {
        v13 = WdLogNewEntry5_WdError(a1, a2, a3);
        v6 = -1073741789;
        *(_QWORD *)(v13 + 24) = -1073741789LL;
        WdLogEvent5_WdError(v13);
      }
      return v6;
    }
    else
    {
      v12 = WdLogNewEntry5_WdWarning(a1, a2, a3);
      *(_QWORD *)(v12 + 24) = 0LL;
      WdLogEvent5_WdWarning(v12);
      return 3221225659LL;
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v10 + 24) = 0LL;
    WdLogEvent5_WdWarning(v10);
    return 3221225485LL;
  }
}
