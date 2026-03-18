/*
 * XREFs of ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x1C0023B70
 * Callers:
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006810 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     DxgkQueryResourceInfo @ 0x1C00EF550 (DxgkQueryResourceInfo.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C011A5A0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?ReleasePowerTransitionLockShared@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0023850 (-ReleasePowerTransitionLockShared@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@ADAPTER_RENDER@@QEAAEW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00239B0 (-TryWakeUpFromD3State@ADAPTER_RENDER@@QEAAEW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01EC944 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICEACCESSLOCKSHARED::Acquire(DXGDEVICEACCESSLOCKSHARED *this)
{
  struct _KEVENT *v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rcx
  char v5; // si
  const GUID *v6; // r8

  if ( *(_QWORD *)this )
  {
    v2 = *(struct _KEVENT **)(*(_QWORD *)this + 16LL);
    if ( !KeReadStateEvent(v2 + 3) )
      KeWaitForSingleObject(&v2[3], Executive, 0, 0, 0LL);
    v3 = *(_QWORD *)this;
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 104), 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL) + 96LL));
      v5 = ADAPTER_RENDER::TryWakeUpFromD3State(*(_QWORD *)(v3 + 16));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v4, &EventBlockThread, v6, 40);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 104), 1u);
      if ( v5 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v3 + 16) + 16LL));
      ADAPTER_RENDER::ReleasePowerTransitionLockShared(*(ADAPTER_RENDER **)(v3 + 16));
    }
    *((_BYTE *)this + 8) = 1;
  }
}
