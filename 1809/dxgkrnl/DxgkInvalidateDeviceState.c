/*
 * XREFs of DxgkInvalidateDeviceState @ 0x1C0045148
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0113370 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x1C01BEA70 (-PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z.c)
 *     ?InvalidateAdapterWorkItem@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C01E9BA0 (-InvalidateAdapterWorkItem@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?DxgkpEscapeStopAdapters@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C020D2A0 (-DxgkpEscapeStopAdapters@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C001DE80 (DpiCheckForOutstandingD3Requests.c)
 *     DxgkStartCoreDripsBlockerTracking @ 0x1C0141A18 (DxgkStartCoreDripsBlockerTracking.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 */

void __fastcall DxgkInvalidateDeviceState(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // ecx
  struct _DEVICE_OBJECT *v3; // rcx

  v1 = *(_QWORD *)(a1 + 64);
  if ( IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v1 + 64), (PVOID)v1, File, 1u, 0x20u) >= 0 )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v1 + 483) )
    {
      DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(v1 + 3816), 4023LL);
      DpiCheckForOutstandingD3Requests(v1);
    }
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v1 + 168), 1u);
    v2 = *(_DWORD *)(v1 + 236);
    if ( v2 == 2 || *(_DWORD *)(v1 + 240) == 2 && ((v2 - 3) & 0xFFFFFFFC) == 0 && v2 != 4 )
    {
      v3 = *(struct _DEVICE_OBJECT **)(v1 + 152);
      *(_BYTE *)(v1 + 232) = 1;
      IoInvalidateDeviceState(v3);
    }
    if ( *(_BYTE *)(v1 + 483) )
    {
      DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(v1 + 3816), 4023LL);
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v1 + 24) + 64LL) + 3992LL));
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v1 + 168));
    KeLeaveCriticalRegion();
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v1 + 64), (PVOID)v1, 0x20u);
  }
}
