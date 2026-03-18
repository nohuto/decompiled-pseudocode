/*
 * XREFs of ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C025D01C
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1C00C48A0 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkQueryProcessOfferInfo @ 0x1C013BF60 (DxgkQueryProcessOfferInfo.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C014EA60 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkQueryStatisticsInternal @ 0x1C02045C8 (DxgkQueryStatisticsInternal.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C020805C (DxgkChangeVideoMemoryReservationInternal.c)
 *     DxgkGetProcessDeviceRemovalSupport @ 0x1C025F520 (DxgkGetProcessDeviceRemovalSupport.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C025F7A0 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C025FBB0 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C0260140 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkTrimProcessCommitment @ 0x1C0260D30 (DxgkTrimProcessCommitment.c)
 * Callees:
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C013C27C (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE(DXGPROCESSMUTEXBYHANDLE *this, __int64 a2)
{
  if ( *((_BYTE *)this + 28) )
    DXGPROCESSMUTEXBYHANDLE::Release(this, a2);
}
