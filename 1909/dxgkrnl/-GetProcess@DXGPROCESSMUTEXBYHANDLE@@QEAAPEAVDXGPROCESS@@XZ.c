/*
 * XREFs of ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0018DF4
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1C00C5650 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C013F130 (DxgkSetProcessSchedulingPriorityClass.c)
 *     DxgkQueryProcessOfferInfo @ 0x1C013F370 (DxgkQueryProcessOfferInfo.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C0152920 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkQueryStatisticsInternal @ 0x1C0204C38 (DxgkQueryStatisticsInternal.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C02086CC (DxgkChangeVideoMemoryReservationInternal.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C023F2F4 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C0240028 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z.c)
 *     DxgkGetProcessDeviceRemovalSupport @ 0x1C025FBB0 (DxgkGetProcessDeviceRemovalSupport.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C025FE30 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C0260240 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C02603B0 (DxgkReleaseProcessVidPnSourceOwners.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C02607D0 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkTrimProcessCommitment @ 0x1C02613C0 (DxgkTrimProcessCommitment.c)
 * Callees:
 *     <none>
 */

struct DXGPROCESS *__fastcall DXGPROCESSMUTEXBYHANDLE::GetProcess(DXGPROCESSMUTEXBYHANDLE *this, __int64 a2)
{
  struct DXGPROCESS *result; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  if ( !*((_BYTE *)this + 28) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 1479LL;
    WdLogEvent5_WdAssertion(v4);
  }
  result = (struct DXGPROCESS *)*((_QWORD *)this + 2);
  if ( !result )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v5 + 24) = 1480LL;
    WdLogEvent5_WdAssertion(v5);
    return (struct DXGPROCESS *)*((_QWORD *)this + 2);
  }
  return result;
}
