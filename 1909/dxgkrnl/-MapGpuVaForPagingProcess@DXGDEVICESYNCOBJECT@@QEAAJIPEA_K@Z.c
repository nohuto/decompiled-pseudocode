/*
 * XREFs of ?MapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAJIPEA_K@Z @ 0x1C0122BB8
 * Callers:
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C01228D4 (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 * Callees:
 *     ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C000757C (-GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGDEVICESYNCOBJECT::MapGpuVaForPagingProcess(
        DXGDEVICESYNCOBJECT *this,
        unsigned int a2,
        unsigned __int64 *a3)
{
  __int64 v5; // r9
  __int64 v6; // rdi
  __int64 v7; // rbx
  struct VIDMM_MONITORED_FENCE_STORAGE *MonitoredFenceStorage; // rax

  v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v6 = *(_QWORD *)(v5 + 552);
  v7 = *(_QWORD *)(v5 + 544);
  MonitoredFenceStorage = DXGSYNCOBJECT::GetMonitoredFenceStorage(*((DXGSYNCOBJECT **)this + 4));
  return (*(__int64 (__fastcall **)(__int64, struct VIDMM_MONITORED_FENCE_STORAGE *, _QWORD, unsigned __int64 *))(*(_QWORD *)(v7 + 8) + 944LL))(
           v6,
           MonitoredFenceStorage,
           a2,
           a3);
}
