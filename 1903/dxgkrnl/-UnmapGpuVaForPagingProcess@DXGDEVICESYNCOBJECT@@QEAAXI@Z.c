/*
 * XREFs of ?UnmapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAXI@Z @ 0x1C026CF14
 * Callers:
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0120E0C (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C0007124 (-GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::UnmapGpuVaForPagingProcess(DXGDEVICESYNCOBJECT *this, unsigned int a2)
{
  __int64 v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rbx
  struct VIDMM_MONITORED_FENCE_STORAGE *MonitoredFenceStorage; // rax

  v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v4 = *(_QWORD *)(v3 + 552);
  v5 = *(_QWORD *)(v3 + 544);
  MonitoredFenceStorage = DXGSYNCOBJECT::GetMonitoredFenceStorage(*((DXGSYNCOBJECT **)this + 4));
  (*(void (__fastcall **)(__int64, struct VIDMM_MONITORED_FENCE_STORAGE *, _QWORD))(*(_QWORD *)(v5 + 8) + 968LL))(
    v4,
    MonitoredFenceStorage,
    a2);
}
