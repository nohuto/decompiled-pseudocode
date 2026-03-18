/*
 * XREFs of ?Clear@CFrameInfo@@QEAAXXZ @ 0x18008115C
 * Callers:
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180080EDC (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x18001EA08 (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ResetTokens@CScheduleFrameInfoVolatileData@@AEAAXXZ @ 0x1800811BC (-ResetTokens@CScheduleFrameInfoVolatileData@@AEAAXXZ.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

void __fastcall CFrameInfo::Clear(CFrameInfo *this)
{
  __int64 i; // rdi
  CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v3; // rcx

  memset_0(this, 0, 0x438uLL);
  CScheduleFrameInfoVolatileData::ResetTokens(this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 284); i = (unsigned int)(i + 1) )
  {
    v3 = *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*((_QWORD *)this + 139) + 8 * i);
    if ( v3 )
      CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(v3);
  }
  *((_DWORD *)this + 284) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 1112, 8u);
  CFrameInfo::ReleaseResponses(this);
}
