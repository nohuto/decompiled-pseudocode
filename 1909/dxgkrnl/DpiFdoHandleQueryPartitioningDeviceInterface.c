/*
 * XREFs of DpiFdoHandleQueryPartitioningDeviceInterface @ 0x1C02AA1C0
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0008B54 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001D90C (DpiCheckForOutstandingD3Requests.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C003C540 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C005141C (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiGetPartitionedInterfaceContextPointer @ 0x1C02AAB54 (DpiGetPartitionedInterfaceContextPointer.c)
 */

__int64 __fastcall DpiFdoHandleQueryPartitioningDeviceInterface(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        PVOID Object)
{
  __int64 v6; // rbx
  __int16 v7; // si
  unsigned __int16 v8; // bp
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _DWORD *PartitionedInterfaceContextPointer; // rax

  v6 = *(_QWORD *)(a1 + 64);
  v7 = a3;
  v8 = a2;
  if ( bTracingEnabled )
    VgpuTrace(1, 0, (void *)v6, L"DpiFdoHandleQueryPartitioningDeviceInterface", 0LL);
  if ( Object )
  {
    if ( v7 == 1 )
    {
      if ( v8 >= 0x20u )
      {
        KeEnterCriticalRegion();
        if ( *(_BYTE *)(v6 + 484) )
          DpiCheckForOutstandingD3Requests(v6);
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 168), 1u);
        memmove(a4, &unk_1C00A1B30, 0x20uLL);
        PartitionedInterfaceContextPointer = (_DWORD *)DpiGetPartitionedInterfaceContextPointer(v6, Object);
        a4[1] = PartitionedInterfaceContextPointer;
        DpiGetVirtualGpuType(PartitionedInterfaceContextPointer, &Object);
        ObfReferenceObject(Object);
        if ( *(_BYTE *)(v6 + 484) )
          DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
        ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
        KeLeaveCriticalRegion();
        return 0LL;
      }
      else
      {
        v12 = WdLogNewEntry5_WdError(a1, a2, a3);
        *(_QWORD *)(v12 + 24) = 0LL;
        WdLogEvent5_WdError(v12);
        return 3221225507LL;
      }
    }
    else
    {
      v11 = WdLogNewEntry5_WdWarning(a1, a2, a3);
      *(_QWORD *)(v11 + 24) = 0LL;
      WdLogEvent5_WdWarning(v11);
      return 3221225659LL;
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v9 + 24) = 0LL;
    WdLogEvent5_WdWarning(v9);
    return 3221225485LL;
  }
}
