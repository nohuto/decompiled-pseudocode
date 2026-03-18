/*
 * XREFs of ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0024458
 * Callers:
 *     DxgkGetPresentHistoryInternal @ 0x1C00FEDD0 (DxgkGetPresentHistoryInternal.c)
 *     DxgkGetCachedHybridQueryValue @ 0x1C013EF90 (DxgkGetCachedHybridQueryValue.c)
 *     DxgkCacheHybridQueryValue @ 0x1C0140C60 (DxgkCacheHybridQueryValue.c)
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C021803C (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 *     NtDxgkRegisterVailProcess @ 0x1C0293B80 (NtDxgkRegisterVailProcess.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C0294570 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

DXGPROCESSMUTEX *__fastcall DXGPROCESSMUTEX::DXGPROCESSMUTEX(DXGPROCESSMUTEX *this, struct DXGFASTMUTEX *const *a2)
{
  DXGAUTOMUTEX::DXGAUTOMUTEX(this, a2[13], 0);
  return this;
}
