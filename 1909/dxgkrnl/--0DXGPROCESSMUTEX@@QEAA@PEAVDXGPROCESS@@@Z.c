/*
 * XREFs of ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00244A8
 * Callers:
 *     DxgkGetPresentHistoryInternal @ 0x1C0103F20 (DxgkGetPresentHistoryInternal.c)
 *     DxgkGetCachedHybridQueryValue @ 0x1C0142B40 (DxgkGetCachedHybridQueryValue.c)
 *     DxgkCacheHybridQueryValue @ 0x1C01446B0 (DxgkCacheHybridQueryValue.c)
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C02186AC (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 *     NtDxgkRegisterVailProcess @ 0x1C0293F90 (NtDxgkRegisterVailProcess.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C0294980 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

DXGPROCESSMUTEX *__fastcall DXGPROCESSMUTEX::DXGPROCESSMUTEX(DXGPROCESSMUTEX *this, struct DXGFASTMUTEX *const *a2)
{
  DXGAUTOMUTEX::DXGAUTOMUTEX(this, a2[13], 0);
  return this;
}
